#pragma once

struct setting {
    using i_setting = AutoTOML::ISetting;
    using bool_setting = AutoTOML::bSetting;
    using str_setting = AutoTOML::sSetting;
    using int_setting = AutoTOML::iSetting;

    static void load() {
        try {
            const auto table = toml::parse_file("Data/SKSE/Plugins/DialogueMoreNPCInfo.toml"s);
            for (const auto& setting : i_setting::get_settings()) { setting->load(table); }
        } catch (const toml::parse_error& ex) {
            std::ostringstream ss;
            ss << "Error parsing file \'" << *ex.source().path << "\':\n"
                << '\t' << ex.description() << '\n'
                << "\t\t(" << ex.source().begin << ')';
            logger::error(ss.str());
            throw std::runtime_error("failed to load settings"s);
        }
    }

    //static inline const char* _constUndefined = "<undef>";

    static inline int_setting log_level{ "General"s, "logLevel"s, 0 };
    static inline int_setting avatar_set{ "General"s, "avatarSet"s, 0 };
    static inline bool_setting hide_faction{"General"s, "hideFaction"s, true};

    static inline int_setting x_pos{"Window"s, "xPos"s, 0};
    static inline int_setting y_pos{"Window"s, "yPos"s, 0};
    
    static inline bool_setting hand_to_hand{ "Mods"s, "handToHand"s, true };
};
