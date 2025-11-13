// 函数: sub_14183cfe0
// 地址: 0x14183cfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0xf8)
int64_t result = sx.q(*(arg1 + 0x100))

for (void* rbp_2 = &i[result * 0xc]; i != rbp_2; i = &i[0xc])
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rax = (rdi_1 + 1).d
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    result = sub_140596d10((rdi_1 << 4) + *arg2, i)

return result
