// 函数: sub_142a24d30
// 地址: 0x142a24d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg4 * 2

if (rax s>= arg2)
    rax = arg5 * 2
    
    if (rax s>= arg3)
        rax = arg2 << 4
        
        if (arg4 s<= rax)
            rax = arg3 << 4
            
            if (arg5 s<= rax)
                int64_t r9 = sx.q(divs.dp.d(sx.q(arg2 << 0xe), arg4))
                *arg1 = r9.d
                int32_t temp0_1 = divs.dp.d(sx.q(arg3 << 0xe), arg5)
                int32_t r8_3 = (r9 << 4 s>> 0xe).d
                int32_t rdx_5 = (sx.q(temp0_1) << 4 s>> 0xe).d
                arg1[1] = temp0_1
                arg1[2] = r8_3
                arg1[3] = rdx_5
                int64_t (* rax_9)(int32_t arg1, void* arg2)
                
                if (r9.d == 0xffffffff || temp0_1 == 0xffffffff
                        || (r9.d == 0x4000 && temp0_1 == r9.d))
                    rax_9 = sub_1428a1f20
                    *(arg1 + 0x10) = sub_1428a1f20
                else
                    *(arg1 + 0x10) = sub_142a24ca0
                    rax_9 = sub_142a24cb0
                
                *(arg1 + 0x18) = rax_9
                
                if (r8_3 != 0x10)
                    if (rdx_5 != 0x10)
                        *(arg1 + 0x20) = data_144021020
                        *(arg1 + 0x28) = j_sub_142a1c9e0
                        *(arg1 + 0x30) = data_144021020
                        *(arg1 + 0x38) = j_sub_142a1c9e0
                        *(arg1 + 0x40) = data_144021020
                        *(arg1 + 0x48) = j_sub_142a1c9e0
                    else
                        *(arg1 + 0x20) = sub_142a1cc70
                        *(arg1 + 0x28) = sub_142a1cbb0
                        *(arg1 + 0x30) = data_144021020
                        *(arg1 + 0x38) = j_sub_142a1c9e0
                        *(arg1 + 0x40) = sub_142a1cc70
                        *(arg1 + 0x48) = sub_142a1cbb0
                else if (rdx_5 != r8_3)
                    *(arg1 + 0x20) = sub_142a1ccd0
                    *(arg1 + 0x28) = sub_142a1cc10
                    *(arg1 + 0x30) = sub_142a1ccd0
                    *(arg1 + 0x38) = sub_142a1cc10
                    *(arg1 + 0x40) = data_144021020
                    *(arg1 + 0x48) = j_sub_142a1c9e0
                else
                    *(arg1 + 0x20) = sub_1403bd400
                    *(arg1 + 0x28) = sub_1403bd580
                    *(arg1 + 0x30) = data_144020ff0
                    *(arg1 + 0x38) = data_144020d98
                    *(arg1 + 0x40) = data_144021030
                    *(arg1 + 0x48) = data_144020dc8
                
                if (arg1[2] == 0x10 && arg1[3] == 0x10)
                    *(arg1 + 0x50) = data_144020e48
                    int64_t rax_19 = data_144020e08
                    *(arg1 + 0x58) = rax_19
                    return rax_19
                
                int64_t rax_20 = data_144021020
                *(arg1 + 0x50) = rax_20
                *(arg1 + 0x58) = j_sub_142a1c9e0
                return rax_20

*arg1 = -1
return rax
