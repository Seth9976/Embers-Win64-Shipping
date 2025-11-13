// 函数: sub_1409c9020
// 地址: 0x1409c9020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x18)

for (void* r14_2 = &i[sx.q(*(arg1 + 0x20)) * 2]; i != r14_2; i = &i[2])
    int64_t rdi_1 = sx.q(i[1].d)
    
    if (arg2 s>= rdi_1.d)
        i[1].d = arg2 + 1
        
        if (arg2 + 1 s> *(i + 0xc))
            sub_140638a00(i)
        
        int64_t* rax = *i + rdi_1 * 0xc
        
        if (rdi_1.d s<= arg2)
            uint64_t j_1 = zx.q(arg2 - rdi_1.d + 1)
            uint64_t j
            
            do
                *rax = *(arg1 + 0x28)
                rax += 0xc
                *(rax - 4) = *(arg1 + 0x30)
                j = j_1
                j_1 -= 1
            while (j != 1)

int32_t rcx_3 = arg2 + 1

if (*(arg1 + 0xc) s>= rcx_3)
    rcx_3 = *(arg1 + 0xc)

*(arg1 + 0xc) = rcx_3
