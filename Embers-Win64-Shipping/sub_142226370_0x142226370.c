// 函数: sub_142226370
// 地址: 0x142226370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 0xf0) != 0)
    uint32_t zmm0[0x4] = *(arg1 + 0x10)
    zmm0[0] = zmm0[0] f- *arg2
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_1422263f0:
        char arg_8 = 0
        int32_t arg_20
        int32_t* var_40 = &arg_20
        arg_20 = 0
        char* var_30 = &arg_8
        void* var_48 = arg1
        int64_t var_68
        int64_t* var_28 = &var_68
        void** var_50 = &var_48
        int64_t (* var_58)(void** arg1) = j_sub_14220f150
        int32_t* var_38 = arg2
        sub_14226a4e0(arg1 + 0xf0, &var_58)
        char rcx_2 = arg_8
        
        if (rcx_2 != 0)
            bool cond:0_1 = (*(arg1 + 0xd) & 4) == 0
            *(arg1 + 0x10) = var_68
            int32_t var_60
            *(arg1 + 0x18) = var_60
            
            if (not(cond:0_1))
                sub_1422273b0(arg1)
                rcx_2 = arg_8
        
        return zx.q(rcx_2)
    
    zmm0 = *(arg1 + 0x14)
    zmm0[0] = zmm0[0] f- arg2[1]
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_1422263f0
    
    zmm0 = *(arg1 + 0x18)
    zmm0[0] = zmm0[0] f- arg2[2]
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f || arg3 != 0)
        goto label_1422263f0

return 0
