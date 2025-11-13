// 函数: sub_140f5dc80
// 地址: 0x140f5dc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f499c0(&arg1[0x8f], arg2)

if (result != 0)
    return result

int64_t r15

if (arg1[0x92].d == 0)
    r15.b = 0
else
    int64_t* rcx_1 = arg1[0x91]
    
    if (rcx_1 == 0)
        r15.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        r15.b = 0
    else
        r15.b = 1

int64_t rbx

if (arg2[6] == 0)
    rbx.b = 0
else
    int64_t* rcx_2 = *(arg2 + 0x10)
    
    if (rcx_2 == 0)
        rbx.b = 0
    else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        rbx.b = 0
    else
        rbx.b = 1

arg1[0x8f] = *arg2
arg1[0x90].b = arg2[2].b
sub_140692f90(&arg1[0x91], &arg2[4])
rbx.b ^= r15.b
rbx.b <<= 2
return sub_140e19ef0(arg1, (rbx + 1).b)
