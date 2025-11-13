// 函数: sub_142673ae0
// 地址: 0x142673ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x330)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x338)) * 2]; i != rdi_2; i = &i[2])
    int64_t rax = sub_140d3c6e0(*i + 0xc0)
    int64_t arg_8 = rax
    
    if (rax != 0)
        (*(*arg2 + 0x38))(arg2, &arg_8, 0, 0)
