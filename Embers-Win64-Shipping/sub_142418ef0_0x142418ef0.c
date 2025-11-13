// 函数: sub_142418ef0
// 地址: 0x142418ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
char result = sub_140d23dc0(arg1, 0x30)

if (result != 0)
    return result

sub_142424460(arg1, 0)
void*** rax = j_sub_140a82f30(0x50)
void*** rbx_1 = rax

if (rax == 0)
    rbx_1 = rax
else
    rax[1].d = 0xffffffff
    *(rax + 0xc) = 4
    *rbx_1 = &data_1433460e0
    rbx_1[2] = 0
    *(rbx_1 + 0x44) = 0
    *rbx_1 = &data_143347110
    rbx_1[9] = 0
    rbx_1[3].d = arg1[9].d
    *(rbx_1 + 0x1c) = *(arg1 + 0x4c)
    rbx_1[4].d = arg1[0xa].d
    *(rbx_1 + 0x24) = *(arg1 + 0x44)
    *(rbx_1 + 0x28) = *(arg1 + 0x28)
    rbx_1[7] = arg1[7]
    rbx_1[8].d = arg1[8].d
    sub_140bc7fd0(&arg1[0xc], &rbx_1[9], 1)

arg1[0xb] = rbx_1
*(rbx_1 + 0x44) += 1
return sub_141997e80(arg1[0xb])
