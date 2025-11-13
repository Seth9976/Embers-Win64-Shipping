// 函数: sub_142272220
// 地址: 0x142272220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        char arg_11
        
        if ((*(arg2 + 0x719) & 0x20) == 0)
            int64_t rsi_3 = sx.q(*(arg1 + 0x1d0))
            arg_11 = arg4
            int32_t rax_12 = (rsi_3 + 1).d
            *(arg1 + 0x1d0) = rax_12
            
            if (rax_12 s> *(arg1 + 0x1d4))
                sub_1405a4f90(arg1 + 0x1c8)
            
            int64_t rcx_8 = (rsi_3 << 4) + *(arg1 + 0x1c8)
            *rcx_8 = arg2
            *(rcx_8 + 8) = arg3.w
            *(arg2 + 0x719) |= 0x20
        else
            rax = *(arg1 + 0x1c8)
            int64_t rdx_3 = sx.q(*(arg1 + 0x1d0))
            int64_t rsi_2 = rdx_3 * 2
            int64_t rcx_2 = rax + (rsi_2 << 3)
            
            if (rax == rcx_2)
            label_1422722c1:
                int32_t rax_10 = (rdx_3 + 1).d
                arg_11 = arg4
                *(arg1 + 0x1d0) = rax_10
                
                if (rax_10 s> *(arg1 + 0x1d4))
                    sub_1405a4f90(arg1 + 0x1c8)
                
                uint64_t rcx_4 = *(arg1 + 0x1c8)
                *(rcx_4 + (rsi_2 << 3) + 8) = arg3.w
                int16_t rax_11
                rax_11.b = 1
                *(rcx_4 + (rsi_2 << 3)) = arg2
                return rax_11
            
            while (true)
                if (arg2 == *rax)
                    if (*(rax + 8) == 0 && arg3 == 1)
                        *(rax + 8) = arg3
                    
                    if (arg4 == 0)
                        break
                    
                    *(rax + 9) = 1
                    rax.b = 1
                    return rax
                
                rax += 0x10
                
                if (rax == rcx_2)
                    goto label_1422722c1

rax.b = 1
return rax
