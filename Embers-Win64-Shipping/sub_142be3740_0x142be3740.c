// 函数: sub_142be3740
// 地址: 0x142be3740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t r12 = 0
void* rsi = arg1
int32_t arg_18
int32_t result = (*(arg1 + 0x2a0))(arg1, 0x6b65726e, arg2, &arg_18)

if (result == 0)
    int32_t rdx = arg_18
    
    if (rdx u< 4)
        return 0x8e
    
    result = sub_142b96670(arg2, rdx, rsi + 0x480)
    int32_t result_1 = result
    
    if (result == 0)
        uint64_t rdx_1 = zx.q(arg_18)
        void* rcx_1 = *(rsi + 0x480)
        int32_t rbp_1 = 0
        *(rsi + 0x488) = rdx_1.d
        void* i = rcx_1 + rdx_1
        void* i_2 = rcx_1 + 4
        uint32_t r13_3 = zx.d(*(rcx_1 + 2)) << 8 | zx.d(*(rcx_1 + 3))
        
        if (r13_3 u> 0x20)
            r13_3 = 0x20
        
        if (r13_3 != 0)
            int32_t rdi_1 = 1
            
            while (i_2 + 6 u<= i)
                uint64_t rdx_5 = zx.q(zx.d(*(i_2 + 2)) << 8) | zx.q(*(i_2 + 3))
                uint32_t r8_4 = zx.d(*(i_2 + 4)) << 8 | zx.d(*(i_2 + 5))
                
                if (rdx_5.d u<= 0xe)
                    break
                
                void* i_3 = rdx_5 + i_2
                void* i_1 = i
                
                if (i_3 u<= i)
                    i_1 = i_3
                
                if (r8_4 u< 0x100)
                    r8_4.b &= 3
                    
                    if (r8_4.b == 1 && i_2 + 0xe u<= i_1)
                        void* r8_6 = i_1 - (i_2 + 0xe)
                        uint64_t rdx_8 = zx.q(zx.d(*(i_2 + 6)) << 8) | zx.q(*(i_2 + 7))
                        
                        if (r8_6 s< zx.q((rdx_8 * 3).d * 2))
                            rdx_8 = r8_6 s/ 6
                        
                        r15 |= rdi_1
                        
                        if (rdx_8.d != 0)
                            int32_t j_1 = (rdx_8 - 1).d
                            uint32_t r11_7 = ((zx.d(*(i_2 + 0xe)) << 8 | zx.d(*(i_2 + 0xf))) << 8
                                | zx.d(*(i_2 + 0x10))) << 8 | zx.d(*(i_2 + 0x11))
                            
                            if (j_1 == 0)
                                r12 |= rdi_1
                            else
                                void* rdx_10 = i_2 + 0x13
                                void* r8_7 = i_2 + 0x12
                                void* r9_1 = i_2 + 0x11
                                void* r10_1 = i_2 + 0x10
                                int32_t j
                                
                                do
                                    uint32_t rcx_9 = (
                                        (zx.d(*(r10_1 + 4)) << 8 | zx.d(*(r9_1 + 4))) << 8
                                        | zx.d(*(r8_7 + 4))) << 8 | zx.d(*(rdx_10 + 4))
                                    
                                    if (rcx_9 u<= r11_7)
                                        break
                                    
                                    r10_1 += 6
                                    r9_1 += 6
                                    r8_7 += 6
                                    rdx_10 += 6
                                    r11_7 = rcx_9
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                                
                                if (j_1 == 0)
                                    r12 |= rdi_1
                
                rbp_1 += 1
                rdi_1 = rol.d(rdi_1, 1)
                i_2 = i_1
                
                if (rbp_1 u>= r13_3)
                    break
            
            rsi = arg1
            result_1 = result
        
        result = result_1
        *(rsi + 0x48c) = rbp_1
        *(rsi + 0x490) = r15
        *(rsi + 0x494) = r12

return result
