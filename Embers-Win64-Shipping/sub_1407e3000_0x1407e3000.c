// 函数: sub_1407e3000
// 地址: 0x1407e3000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
sub_1406f3c20(arg1, *arg2, arg2[1].d, 0, 0)
arg1[2] = 0
int32_t i_1 = arg2[3].d
void* rbx = arg2[2]
arg1[3].d = i_1

if (i_1 != 0)
    sub_140809010(&arg1[2], i_1, 0)
    int32_t* rdi_1 = arg1[2]
    void* rbx_1 = rbx + 8
    int32_t i
    
    do
        *rdi_1 = *(rbx_1 - 8)
        rdi_1[1] = *(rbx_1 - 4)
        sub_1407e35b0(&rdi_1[2], rbx_1)
        rbx_1 += 0x48
        rdi_1 = &rdi_1[0x12]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x1c) = 0

arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5].d ^= (arg2[5].d ^ arg1[5].d) & 1
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[7].b = arg2[7].b
return arg1
