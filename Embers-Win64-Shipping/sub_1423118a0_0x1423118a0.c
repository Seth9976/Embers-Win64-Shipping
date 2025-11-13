// 函数: sub_1423118a0
// 地址: 0x1423118a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t rdi = sx.q(*(arg1 + 0x358))
int64_t rsi = *(arg1 + 0x350)
arg2[1].d = rdi.d

if (rdi.d != 0)
    sub_1405c4a00(arg2, rdi.d, 0)
    memcpy(*arg2, rsi, (rdi << 3).d)
else
    *(arg2 + 0xc) = rdi.d

void* r14 = *(arg1 + 0x60)

if (r14 == 0)
    return arg2

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(r14 + 0x198))
        break
    
    int64_t rdx_2 = 0
    void* rbp_1 = *(*(r14 + 0x190) + (sx.q(i) << 3))
    int64_t rax_2 = sx.q(*(arg1 + 0x358))
    
    if (rax_2.d s<= 0)
    label_142311960:
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax_4 = (rdi_1 + 1).d
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rdi_1 << 3)) = rbp_1
    else
        int64_t* rax_3 = *(arg1 + 0x350)
        
        while (true)
            void* r8_3 = *rax_3
            
            if (r8_3 != 0 && *(r8_3 + 0x28) == *(rbp_1 + 0x28))
                break
            
            rdx_2 += 1
            rax_3 = &rax_3[1]
            
            if (rdx_2 s>= rax_2)
                goto label_142311960

return arg2
