// 函数: sub_1417042c0
// 地址: 0x1417042c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rbx = arg1 + 0xf8
void* rdi = arg2 + 0xf8
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xdc) = *(arg2 + 0xdc)
arg1[0xe].q = arg2[0xe].q
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xec) = *(arg2 + 0xec)
*(arg1 + 0xf4) = *(arg2 + 0xf4)
*(rbx + 0x30) = 0
int32_t i_1 = *(rdi + 0x38)
void* r14 = *(rdi + 0x30)
*(rbx + 0x38) = i_1

if (i_1 != 0)
    sub_14174ff90(rbx, i_1, 0)
    void* rax_5 = *(rbx + 0x30)
    
    if (r14 != 0)
        rdi = r14
    
    if (rax_5 != 0)
        rbx = rax_5
    
    int32_t i
    
    do
        int64_t zmm0_1 = *rdi
        rdi += 0xc
        *rbx = zmm0_1
        rbx += 0xc
        *(rbx - 4) = *(rdi - 4)
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(rbx + 0x3c) = 4

return arg1
