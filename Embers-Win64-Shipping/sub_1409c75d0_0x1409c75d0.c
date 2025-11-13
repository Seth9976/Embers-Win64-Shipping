// 函数: sub_1409c75d0
// 地址: 0x1409c75d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = arg2
uint64_t* i = *(arg1 + 0x18)

for (void* r14_2 = &i[sx.q(*(arg1 + 0x20)) * 2]; i != r14_2; i = &i[2])
    i[1].d = 0
    int32_t rdi_1 = 0
    
    if (arg2 s> *(i + 0xc))
        sub_1405a5410(i, arg2)
        rdi_1 = i[1].d
    
    if (arg2 s> rdi_1)
        i[1].d = arg2
        
        if (arg2 s> *(i + 0xc))
            sub_1405a4f90(i)
        
        int64_t rax = (sx.q(rdi_1) << 4) + *i
        
        if (rdi_1 s<= arg2 - 1)
            uint64_t j_1 = zx.q(arg2 - 1 - rdi_1 + 1)
            uint64_t j
            
            do
                *rax = *(arg1 + 0x30)
                rax += 0x10
                j = j_1
                j_1 -= 1
            while (j != 1)
