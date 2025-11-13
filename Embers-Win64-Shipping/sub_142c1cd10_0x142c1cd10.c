// 函数: sub_142c1cd10
// 地址: 0x142c1cd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x90)
int64_t rbp
rbp.b = 0
int32_t temp0_1

do
    uint64_t r8_1 = zx.q(*(rdi + 0x5c)) * 5
    int64_t rax_2 = *(rdi + 0x70)
    int32_t rdx = *(rax_2 + (r8_1 << 2))
    int32_t* r9_1 = rax_2 + (r8_1 << 2)
    
    if (test_bit(*arg2, rdx u>> 4 & 0x1f) && test_bit(arg2[1], rdx & 0x1f)
            && test_bit(arg2[2], rdx u>> 9 & 0x1f) && (*(arg1 + 0xb4) & r9_1[1]) != 0)
        uint32_t rdx_3 = zx.d(r9_1[3].w)
        int32_t rax_7 = *(arg1 + 0xc0)
        
        if ((rdx_3.b & rax_7.b & 0xe) == 0)
            if ((rdx_3.b & 8) == 0)
                rbp.b |= sub_142c1cc50(arg2, arg1)
            else
                int32_t rax_9
                
                if ((rax_7.b & 0x10) == 0)
                    rax_9 = rax_7 & 0xff00
                    
                    if (rax_9 != 0)
                        rax_9.b = rax_9 == (rdx_3 & 0xff00)
                        goto label_142c1cdce
                    
                    rbp.b |= sub_142c1cc50(arg2, arg1)
                else
                    rax_9 = sub_142c21fd0(*(arg1 + 0xa0), rax_7 u>> 0x10, *r9_1)
                label_142c1cdce:
                    
                    if (rax_9.b != 0)
                        rbp.b |= sub_142c1cc50(arg2, arg1)
    
    temp0_1 = *(rdi + 0x5c)
    *(rdi + 0x5c) -= 1
while (temp0_1 - 1 s>= 0)
return zx.q(rbp.b)
