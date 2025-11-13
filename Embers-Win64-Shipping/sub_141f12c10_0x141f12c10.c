// 函数: sub_141f12c10
// 地址: 0x141f12c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1

if (*(arg1 + 0x430) != 0)
    rax_1 = sub_140d3e110(arg1 + 0x678)

if (*(arg1 + 0x430) == 0 || rax_1 == 0 || *(arg1 + 0x690) == 0 || *(arg1 + 0x650) s<= 0)
    float zmm1[0x4] = data_143f3ada0
    zmm1[0].q = zx.o(0) u>> 0x40
    *arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    arg2[1] = zx.o(0)
    arg2[2] = __andps_xmmxud_memxud(data_143f3ada0, data_143f3adb0)
else
    int64_t* rax_2 = sub_140d3c6e0(arg1 + 0x438)
    
    if (rax_2 == 0)
        sub_141f012a0(arg2, arg3, arg4, arg1 + 0x648, arg1)
    else
        void* rax_3
        int64_t r8
        rax_3, r8 = sub_142591550()
        void* rcx_2 = rax_2[2]
        int64_t rdx = sx.q(*(rax_3 + 0x38))
        int64_t arg_8
        int16_t* rcx_9
        
        if (rdx.d s> *(rcx_2 + 0x38) || *(*(rcx_2 + 0x30) + (rdx << 3)) != rax_3 + 0x30)
            int16_t* var_28
            sub_140a2e390(&var_28, 
                Cannot return valid bone transform. Master Pose Component is not of type "
            "USkeletalMeshComponent", r8)
            int16_t* rcx_11 = &data_142d40450
            arg_8 = 0
            int32_t var_20
            
            if (var_20 != 0)
                rcx_11 = var_28
            
            sub_140d23f50(rcx_11, 3)
            rcx_9 = var_28
        label_141f12d6c:
            float zmm1_1[0x4] = data_143f3ada0
            zmm1_1[0].q = zx.o(0) u>> 0x40
            *arg2 = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
            arg2[1] = zx.o(0)
            arg2[2] = __andps_xmmxud_memxud(data_143f3ada0, data_143f3adb0)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        else
            int64_t* rax_5 = sub_141f3b9f0(rax_2)
            
            if (rax_5 == 0)
                int16_t* var_38
                sub_140a2e390(&var_38, 
                    Cannot return valid bone transform. Master Pose Component has no anim instance", r8)
                int16_t* const rcx_8 = &data_142d40450
                arg_8 = 0
                int32_t var_30
                
                if (var_30 != 0)
                    rcx_8 = var_38
                
                sub_140d23f50(rcx_8, 3)
                rcx_9 = var_38
                goto label_141f12d6c
            
            sub_141f019a0(arg2, arg3, arg4, sub_141e048f0(rax_5), rax_2)

return arg2
