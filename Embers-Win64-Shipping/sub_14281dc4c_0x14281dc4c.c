// 函数: sub_14281dc4c
// 地址: 0x14281dc4c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
struct YAML::SettingChangeBase::YAML::SettingChange<enum YAML::EMITTER_MANIP>::VTable** result_1

if (arg4 == 0)
    result = j_sub_140a82f30(0x18)
    void* const* result_2 = result
    
    if (result != 0)
        *result =
            &YAML::SettingChange<enum YAML::EMITTER_MANIP>::`vftable'{for `YAML::SettingChangeBase'}
        result[1] = arg2
        result[2].d = *arg2
    
    *arg2 = arg3
    int64_t var_18_2 = 0
    result_1 = result
    struct YAML::SettingChangeBase::YAML::SettingChange<enum YAML::EMITTER_MANIP>::VTable*** 
        var_20_2 = &result_1
    int64_t* rdx_1 = *(arg1 + 0x88)
    
    if (rdx_1 == *(arg1 + 0x90))
        result = sub_14281daec(arg1 + 0x80, rdx_1, &result_1)
    else
        result_1 = nullptr
        *rdx_1 = result
        *(arg1 + 0x88) += 8
    
label_14281dd88:
    struct YAML::SettingChangeBase::YAML::SettingChange<enum YAML::EMITTER_MANIP>::VTable** 
        result_4 = result_1
    
    if (result_4 != 0)
        return (*result_4)->`scalar deleting destructor'(result_4, 1)
else if (arg4 == 1)
    struct YAML::SettingChangeBase::YAML::SettingChange<enum YAML::EMITTER_MANIP>::VTable** 
        result_3 = j_sub_140a82f30(zx.q(arg4 + 0x17))
    result_1 = result_3
    
    if (result_3 == 0)
        *arg2 = arg3
    else
        *result_3 =
            &YAML::SettingChange<enum YAML::EMITTER_MANIP>::`vftable'{for `YAML::SettingChangeBase'}
        result_3[1] = arg2
        result_3[2].d = *arg2
        *arg2 = arg3
        
        if (result_3 != 0)
            (*result_3)->`scalar deleting destructor'(result_3, 1, result_3)
    
    result = j_sub_140a82f30(0x18)
    result_1 = result
    
    if (result != 0)
        *result =
            &YAML::SettingChange<enum YAML::EMITTER_MANIP>::`vftable'{for `YAML::SettingChangeBase'}
        result[1] = arg2
        result[2].d = *arg2
    
    *arg2 = arg3
    int64_t var_20_1 = 0
    result_1 = result
    struct YAML::SettingChangeBase::YAML::SettingChange<enum YAML::EMITTER_MANIP>::VTable*** 
        var_18_1 = &result_1
    void*** rdx = *(arg1 + 0xa0)
    
    if (rdx == *(arg1 + 0xa8))
        result = sub_14281daec(arg1 + 0x98, rdx, &result_1)
    else
        result_1 = nullptr
        *rdx = result
        *(arg1 + 0xa0) += 8
    
    goto label_14281dd88
return result
