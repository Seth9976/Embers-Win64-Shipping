// 函数: sub_141cbfce0
// 地址: 0x141cbfce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = arg1[1].d + arg2[1].d

if (rdx_1 s> *(arg1 + 0xc))
    sub_1405c5570(arg1, rdx_1)

int32_t rdx_3 = arg1[3].d + arg2[3].d

if (rdx_3 s> *(arg1 + 0x1c))
    sub_1405c5570(&arg1[2], rdx_3)

int64_t* i = *arg2

for (void* rbp = &i[sx.q(arg2[1].d)]; i != rbp; i = &i[1])
    sub_1405a7050(arg1, i)

int64_t* i_1 = arg2[2]
int64_t result = sx.q(arg2[3].d)

for (void* rdi_1 = &i_1[result]; i_1 != rdi_1; i_1 = &i_1[1])
    result = sub_1405a7050(&arg1[2], i_1)

return result
