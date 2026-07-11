        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace sst_effects_presets {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/libs/sst/sst-effects/presets/voice-effects/3op-pm/Hit Me with an EG.vcfx
extern const char* const f_5606_presets_voice_effects_3op_pm_Hit_Me_with_an_EG_vcfx_begin;
extern const char* const f_5606_presets_voice_effects_3op_pm_Hit_Me_with_an_EG_vcfx_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/libs/sst/sst-effects/presets/voice-effects/README.md
extern const char* const f_56ca_presets_voice_effects_README_md_begin;
extern const char* const f_56ca_presets_voice_effects_README_md_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/libs/sst/sst-effects/presets/voice-effects/osc-ebwf/SuperSaw.vcfx
extern const char* const f_cdc4_presets_voice_effects_osc_ebwf_SuperSaw_vcfx_begin;
extern const char* const f_cdc4_presets_voice_effects_osc_ebwf_SuperSaw_vcfx_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/libs/sst/sst-effects/presets/voice-effects/osc-ebwf/SuperTri.vcfx
extern const char* const f_3a07_presets_voice_effects_osc_ebwf_SuperTri_vcfx_begin;
extern const char* const f_3a07_presets_voice_effects_osc_ebwf_SuperTri_vcfx_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/libs/sst/sst-effects/presets/voice-effects/osc-ebwf/SyncSine.vcfx
extern const char* const f_edb8_presets_voice_effects_osc_ebwf_SyncSine_vcfx_begin;
extern const char* const f_edb8_presets_voice_effects_osc_ebwf_SyncSine_vcfx_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;
    static auto f_f27e_presets_dir = root_directory_dir.directory.add_subdir("presets");
    root_index.emplace("presets", &f_f27e_presets_dir.index_entry);
    static auto f_63b4_presets_voice_effects_dir = f_f27e_presets_dir.directory.add_subdir("voice-effects");
    root_index.emplace("presets/voice-effects", &f_63b4_presets_voice_effects_dir.index_entry);
    static auto f_b06d_presets_voice_effects_3op_pm_dir = f_63b4_presets_voice_effects_dir.directory.add_subdir("3op-pm");
    root_index.emplace("presets/voice-effects/3op-pm", &f_b06d_presets_voice_effects_3op_pm_dir.index_entry);
    static auto f_e3e5_presets_voice_effects_osc_ebwf_dir = f_63b4_presets_voice_effects_dir.directory.add_subdir("osc-ebwf");
    root_index.emplace("presets/voice-effects/osc-ebwf", &f_e3e5_presets_voice_effects_osc_ebwf_dir.index_entry);
    root_index.emplace(
        "presets/voice-effects/3op-pm/Hit Me with an EG.vcfx",
        f_b06d_presets_voice_effects_3op_pm_dir.directory.add_file(
            "Hit Me with an EG.vcfx",
            res_chars::f_5606_presets_voice_effects_3op_pm_Hit_Me_with_an_EG_vcfx_begin,
            res_chars::f_5606_presets_voice_effects_3op_pm_Hit_Me_with_an_EG_vcfx_end
        )
    );
    root_index.emplace(
        "presets/voice-effects/README.md",
        f_63b4_presets_voice_effects_dir.directory.add_file(
            "README.md",
            res_chars::f_56ca_presets_voice_effects_README_md_begin,
            res_chars::f_56ca_presets_voice_effects_README_md_end
        )
    );
    root_index.emplace(
        "presets/voice-effects/osc-ebwf/SuperSaw.vcfx",
        f_e3e5_presets_voice_effects_osc_ebwf_dir.directory.add_file(
            "SuperSaw.vcfx",
            res_chars::f_cdc4_presets_voice_effects_osc_ebwf_SuperSaw_vcfx_begin,
            res_chars::f_cdc4_presets_voice_effects_osc_ebwf_SuperSaw_vcfx_end
        )
    );
    root_index.emplace(
        "presets/voice-effects/osc-ebwf/SuperTri.vcfx",
        f_e3e5_presets_voice_effects_osc_ebwf_dir.directory.add_file(
            "SuperTri.vcfx",
            res_chars::f_3a07_presets_voice_effects_osc_ebwf_SuperTri_vcfx_begin,
            res_chars::f_3a07_presets_voice_effects_osc_ebwf_SuperTri_vcfx_end
        )
    );
    root_index.emplace(
        "presets/voice-effects/osc-ebwf/SyncSine.vcfx",
        f_e3e5_presets_voice_effects_osc_ebwf_dir.directory.add_file(
            "SyncSine.vcfx",
            res_chars::f_edb8_presets_voice_effects_osc_ebwf_SyncSine_vcfx_begin,
            res_chars::f_edb8_presets_voice_effects_osc_ebwf_SyncSine_vcfx_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // sst_effects_presets
} // cmrc
    