// 函数: sub_1406a4f10
// 地址: 0x1406a4f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_14069a820(&arg1[0x32], arg2)

if (result != 0)
    return result

int64_t rbp

if (arg1[0x34].d == 0)
    rbp.b = 0
else
    int64_t* rcx_1 = arg1[0x33]
    
    if (rcx_1 == 0)
        rbp.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        rbp.b = 0
    else
        rbp.b = 1

int64_t rbx

if (*(arg2 + 0x10) == 0)
    rbx.b = 0
else
    int64_t* rcx_2 = *(arg2 + 8)
    
    if (rcx_2 == 0)
        rbx.b = 0
    else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        rbx.b = 0
    else
        rbx.b = 1

arg1[0x32].b = *arg2
*(arg1 + 0x191) = arg2[1]
sub_140692f90(&arg1[0x33], &arg2[8])
rbx.b ^= rbp.b
rbx.b <<= 2
return sub_140e19ef0(arg1, (rbx + 2).b)
