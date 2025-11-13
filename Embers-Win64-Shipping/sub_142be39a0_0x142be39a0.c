// 函数: sub_142be39a0
// 地址: 0x142be39a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x480)
int32_t rdi = 0
int32_t r11 = arg3
int32_t r14 = *(arg1 + 0x48c)
void* i = zx.q(*(arg1 + 0x488)) + r9
void* i_3 = r9 + 4
int32_t r10 = arg2
int32_t rbp = 1

if (r14 == 0)
    return 0

while (i_3 + 6 u<= i)
    void* i_1 = i
    uint32_t rsi_3 = zx.d(*(i_3 + 4)) << 8 | zx.d(*(i_3 + 5))
    void* i_2 = (zx.q(*(i_3 + 2)) << 8 | zx.q(*(i_3 + 3))) + i_3
    
    if (i_2 u<= i)
        i_1 = i_2
    
    if ((*(arg1 + 0x490) & rbp) != 0)
        void* r9_1 = i_3 + 0xe
        int64_t rcx_2 = i_1 - r9_1
        uint64_t rdx_5 = zx.q(zx.d(*(i_3 + 6)) << 8) | zx.q(*(i_3 + 7))
        
        if (rcx_2 s< zx.q((rdx_5 * 3).d * 2))
            rdx_5 = rcx_2 s/ 6
        
        if (rsi_3 u< 0x100)
            int32_t j = r10 << 0x10 | r11
            uint32_t rax_14
            int32_t rcx_10
            
            if ((*(arg1 + 0x494) & rbp) != 0)
                int32_t r11_1 = 0
                
                if (rdx_5.d != 0)
                    while (true)
                        uint64_t r8_1 = zx.q((rdx_5.d + r11_1) u>> 1)
                        void* rbx_2 = zx.q((r8_1 * 3).d * 2) + r9_1
                        uint32_t rcx_9 = ((zx.d(*rbx_2) << 8 | zx.d(*(rbx_2 + 1))) << 8
                            | zx.d(*(rbx_2 + 2))) << 8 | zx.d(*(rbx_2 + 3))
                        
                        if (rcx_9 == j)
                            rcx_10 = sx.d(zx.w(*(rbx_2 + 4)) << 8)
                            rax_14 = zx.d(*(rbx_2 + 5))
                            break
                        
                        if (rcx_9 u>= j)
                            rdx_5 = zx.q(r8_1.d)
                        else
                            r11_1 = (r8_1 + 1).d
                        
                        if (r11_1 u>= rdx_5.d)
                            goto label_142be3b4e
                    
                label_142be3b43:
                    int32_t rcx_18 = rcx_10 | rax_14
                    rdi += rcx_18
                    
                    if ((rsi_3.b & 8) != 0)
                        rdi = rcx_18
            else if (rdx_5.d != 0)
                while ((((zx.d(*r9_1) << 8 | zx.d(*(r9_1 + 1))) << 8 | zx.d(*(r9_1 + 2))) << 8
                        | zx.d(*(r9_1 + 3))) != j)
                    r9_1 += 6
                    int32_t temp1_1 = rdx_5.d
                    rdx_5 = zx.q(rdx_5.d - 1)
                    
                    if (temp1_1 == 1)
                        goto label_142be3b4e
                
                rcx_10 = sx.d(zx.w(*(r9_1 + 4)) << 8)
                rax_14 = zx.d(*(r9_1 + 5))
                goto label_142be3b43
        label_142be3b4e:
            r10 = arg2
    
    r11 = arg3
    rbp *= 2
    i_3 = i_1
    int32_t temp0_1 = r14
    r14 -= 1
    
    if (temp0_1 == 1)
        break

return zx.q(rdi)
