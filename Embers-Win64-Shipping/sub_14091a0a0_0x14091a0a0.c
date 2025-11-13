// 函数: sub_14091a0a0
// 地址: 0x14091a0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e20658
sub_140596d10(&arg1[1], arg2 + 8)
sub_140596d10(&arg1[3], arg2 + 0x18)
arg1[5].d = *(arg2 + 0x28)
arg1[6] = 0
int32_t i_1 = *(arg2 + 0x38)
void* rbp = *(arg2 + 0x30)
arg1[7].d = i_1

if (i_1 != 0)
    sub_140874c00(&arg1[6], i_1, 0)
    void*** rbx_1 = arg1[6]
    int64_t* rdi_1 = rbp + 0x18
    int32_t i
    
    do
        *rbx_1 = &data_142e20618
        sub_140596d10(&rbx_1[1], &rdi_1[-2])
        sub_140596d10(&rbx_1[3], rdi_1)
        sub_140596d10(&rbx_1[5], &rdi_1[2])
        rdi_1 = &rdi_1[7]
        rbx_1 = &rbx_1[7]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x3c) = 0

return arg1
