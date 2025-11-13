// 函数: sub_1425eec50
// 地址: 0x1425eec50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x68)
arg2[1] = *(arg1 + 0x6c)
arg2[2] = *(arg1 + 0x70)
*(arg2 + 0x10) = 0
int32_t i_1 = *(arg1 + 0x80)
int64_t* rdi = *(arg1 + 0x78)
arg2[6] = i_1

if (i_1 != 0)
    sub_14083a1f0(&arg2[4], i_1, 0)
    void* rbx_1 = *(arg2 + 0x10)
    int32_t i
    
    do
        sub_140596d10(rbx_1, rdi)
        sub_140596d10(rbx_1 + 0x10, &rdi[2])
        rbx_1 += 0x20
        rdi = &rdi[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    arg2[7] = 0

return arg2
