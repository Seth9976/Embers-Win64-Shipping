// 函数: sub_141f89030
// 地址: 0x141f89030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t result = arg4

if (*(arg1 + 0x288) != 0xffffffff)
    int32_t i = 0
    
    if (*(arg2 + 8) s> 0)
        do
            if (test_bit(result, i))
                int32_t* r14_1 = *(arg1 + 0x490)
                void* r15_1 = &r14_1[sx.q(*(arg1 + 0x498)) * 6]
                
                if (r14_1 != r15_1)
                    int64_t* rdi_1 = arg5
                    
                    do
                        int32_t rax_1 = sub_14081f8e0(rdi_1, 1)
                        int64_t* rsi_3 =
                            zx.q(rax_1 s% 0x66) * 0xa0 + *(*rdi_1 + (sx.q(rax_1 s/ 0x66) << 3))
                        int64_t* r8_2 = rsi_3
                        int64_t* rax_3 = rsi_3[0xd]
                        
                        if (rax_3 != 0)
                            r8_2 = rax_3
                        
                        r8_2[2] = arg1 + 0x258
                        rsi_3[0xf] = arg1 + 0x280
                        r8_2[8].d = *r14_1
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = muls.dp.d(0x55555556, r14_1[1])
                        *(r8_2 + 0x44) = temp2_1 + (temp2_1 u>> 0x1f)
                        r8_2[0xa].d = r14_1[2]
                        *(r8_2 + 0x54) = r14_1[2] + r14_1[3] - 1
                        *(rsi_3 + 0x9c) =
                            (zx.d(*(arg1 + 0x35)) & 1) | (*(rsi_3 + 0x9c) & 0xffff007c)
                        int64_t* rcx_11 = *(r14_1 + 0x10)
                        rsi_3[0x10] = (*(*rcx_11 + 0x280))(rcx_11)
                        int32_t rdi_2 = 0
                        bool cond:1_1 = *(arg1 + 0x4fa) == 0
                        *(rsi_3 + 0x9a) = 0
                        
                        if (cond:1_1)
                            rdi_2 = 0x10000
                        
                        int32_t rdi_3 = rdi_2 | (*(rsi_3 + 0x9c) & 0xfffeffff)
                        *(rsi_3 + 0x9c) = rdi_3
                        rdi_1 = arg5
                        *(rsi_3 + 0x9c) = zx.d(sub_14076deb0(arg1)) << 0x11 | (rdi_3 & 0xfffdffff)
                        sub_1422dd2a0(rdi_1, i, rsi_3)
                        r14_1 = &r14_1[6]
                    while (r14_1 != r15_1)
                    
                    arg2 = arg_10
                
                result = arg4
            
            i += 1
        while (i s< *(arg2 + 8))

return result
