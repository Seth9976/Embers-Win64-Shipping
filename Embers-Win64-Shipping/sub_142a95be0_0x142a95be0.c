// 函数: sub_142a95be0
// 地址: 0x142a95be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg5 s<= 0)
    if (arg3 s<= 0 || (arg2.b & 3) != 0 || arg1 u> 1)
        *arg5 = 1
        return nullptr
    
    if (arg3 s>= 0x10 && *arg2 == 0x54726932 && arg1 == (zx.d(arg2[1].w) & 0xf))
        int128_t var_68
        memset(&var_68, 0, 0x50)
        uint64_t rdx = zx.q(*(arg2 + 6))
        int32_t var_50_1 = rdx.d
        uint64_t rcx_1 = zx.q(zx.d(arg2[2].w) << 2)
        int16_t rax_4 = *(arg2 + 0xa)
        int16_t var_46_1 = arg2[3].w
        uint32_t var_3c_1 = zx.d(*(arg2 + 0xe)) << 0xb
        int32_t rax_8 = (rcx_1 - 4).d
        int32_t var_38_1 = rax_8
        int32_t var_4c_1 = rcx_1.d
        
        if (arg1 == 0)
            var_38_1 = rax_8 + rdx.d
        
        uint32_t rcx_2
        
        if (arg1 != 0)
            rcx_2 = (rcx_1 << 2).d
        else
            rcx_2 = rcx_1.d * 2
        
        int32_t r14_1 = ((rdx << 1) + 0x10).d + rcx_2
        
        if (arg3 s< r14_1)
            *arg5 = 3
        else
            int128_t* result = sub_142a7dd00(0x50)
            
            if (result != 0)
                *result = var_68
                int128_t var_58
                result[1] = var_58
                result[2] = rax_4.o
                result[3] = var_38_1.o
                int128_t var_28
                result[4] = var_28
                *(result + 0x38) = arg2
                *result = &arg2[4]
                result[4].d = r14_1
                *(result + 0x44) = 0
                void* r8 = &arg2[4] + (sx.q(*(result + 0x18)) << 1)
                uint32_t rax_13
                
                if (arg1 == 0)
                    uint64_t rax_14 = zx.q(*(result + 0x22))
                    *(result + 8) = r8
                    result[1].q = 0
                    *(result + 0x24) = zx.d(*(&arg2[4] + (rax_14 << 1)))
                    rax_13 = zx.d(*(r8 + 0x100))
                label_142a95d9a:
                    *(result + 0x28) = rax_13
                    
                    if (arg4 != 0)
                        *arg4 = r14_1
                    
                    return result
                
                if (arg1 == 1)
                    uint64_t rax_12 = zx.q(*(result + 0x22))
                    *(result + 8) = 0
                    result[1].q = r8
                    *(result + 0x24) = *(r8 + (rax_12 << 2))
                    rax_13 = *(r8 + 0x200)
                    goto label_142a95d9a
                
                *arg5 = 3
            else
                *arg5 = 7
        
        return nullptr
    
    *arg5 = 3

return nullptr
