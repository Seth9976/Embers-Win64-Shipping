// 函数: sub_141eaa570
// 地址: 0x141eaa570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x48)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x50)) * 2]; i != rdi_2; i = &i[2])
    int64_t* rcx = *i
    (*(*rcx + 0x280))(rcx, zx.q(arg2))

if (arg2 == 0)
    return 

void** i_1 = *(arg1 + 0x48)

for (void* rdi_5 = &i_1[sx.q(*(arg1 + 0x50)) * 2]; i_1 != rdi_5; i_1 = &i_1[2])
    sub_141eac150(arg1, *i_1)

bool cond:0_1 = *(arg1 + 0x54) == 0
*(arg1 + 0x50) = 0

if (not(cond:0_1))
    sub_1405a5410(arg1 + 0x48, 0)
