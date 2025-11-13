// 函数: sub_14279c450
// 地址: 0x14279c450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
sub_140596d10(&arg1[2], &arg2[2])
arg1[4] = arg2[4]
void* rax_3 = arg2[5]
arg1[5] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[6].d = arg2[6].d
arg1[7] = arg2[7]
void* rax_6 = arg2[8]
arg1[8] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[9].d = arg2[9].d
arg1[0xa].b = arg2[0xa].b
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
void* rax_11 = arg2[0xd]
arg1[0xd] = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

arg1[0xe] = arg2[0xe]
arg1[0x10] = 0

if (arg1[0xe] != 0)
    void* rax_13 = arg2[0x10]
    void* rcx_1 = &arg2[0x12]
    
    if (rax_13 != 0)
        rcx_1 = rax_13
    
    (**rcx_1)(rcx_1)

return arg1
