// 函数: sub_141e4f110
// 地址: 0x141e4f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].q = arg2[1].q
*(arg1 + 0x18) = 0
int32_t i_1 = arg2[2].d
int64_t* rdi = *(arg2 + 0x18)
arg1[2].d = i_1

if (i_1 != 0)
    sub_140808f70(arg1 + 0x18, i_1, 0)
    int64_t* rbx_1 = *(arg1 + 0x18)
    int32_t i
    
    do
        *rbx_1 = *rdi
        sub_140596d10(&rbx_1[1], &rdi[1])
        rbx_1 = &rbx_1[3]
        rdi = &rdi[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x24) = 0

return arg1
