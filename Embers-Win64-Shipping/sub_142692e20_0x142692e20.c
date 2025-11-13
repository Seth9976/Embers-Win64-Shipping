// 函数: sub_142692e20
// 地址: 0x142692e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(arg2)
int32_t rcx = *(arg1 + 0x28c)
uint64_t result = zx.q(rcx u>> 1) & 1

if (result.d != r8)
    result = zx.q(r8 * 2) | (zx.q(rcx) & 0xfffffffd)
    *(arg1 + 0x28c) = result.d
    
    if (arg2 != 0)
        result = *(arg1 + 0xe8)
        void* rsi_1 = *(*(result + 0x4a8) + 8)
        
        if (rsi_1 != 0 && not(0f f>= *(rsi_1 + 0x28)) && not(0f f>= *(rsi_1 + 0x2c)))
            int32_t rdi_1 = 0
            *(arg1 + 0x118) = 0
            
            if (*(arg1 + 0x11c) s<= 0xffffffff)
                sub_1405c5570(arg1 + 0x110, 0)
            
            result = sub_1405f8990(rsi_1)
            int32_t r14_1 = result.d
            
            if (result.d s> 0)
                do
                    result = sub_142610d00(rsi_1, rdi_1)
                    
                    if (result != 0)
                        void* rcx_6 = *(result + 8)
                        
                        if (rcx_6 != 0 && *(rcx_6 + 0x18) s> 0)
                            int32_t* r10_1 = *(arg1 + 0x110)
                            int64_t r9_1 = sx.q(*(arg1 + 0x118))
                            int32_t* rax_3 = r10_1
                            int32_t rdx_1 = *(rcx_6 + 8)
                            int32_t r8_1 = *(rcx_6 + 0xc)
                            void* rcx_7 = &r10_1[r9_1 * 2]
                            int32_t arg_c = r8_1
                            
                            if (r10_1 != rcx_7)
                                while (*rax_3 != rdx_1 || rax_3[1] != r8_1)
                                    rax_3 = &rax_3[2]
                                    
                                    if (rax_3 == rcx_7)
                                        goto label_142692f35
                                
                                result = (rax_3 - r10_1) s>> 3
                            
                            if (r10_1 == rcx_7 || result.d == 0xffffffff)
                            label_142692f35:
                                int32_t rax_5 = (r9_1 + 1).d
                                *(arg1 + 0x118) = rax_5
                                
                                if (rax_5 s> *(arg1 + 0x11c))
                                    sub_1405a4d70(arg1 + 0x110)
                                
                                result = rdx_1.q
                                *(*(arg1 + 0x110) + (r9_1 << 3)) = result
                    
                    rdi_1 += 1
                while (rdi_1 s< r14_1)

return result
