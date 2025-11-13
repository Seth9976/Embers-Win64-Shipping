// 函数: sub_140f8c1f0
// 地址: 0x140f8c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f7ac20(&arg1[0xbd], arg2)

if (result != 0)
    return result

int64_t rbp

if (arg1[0xbf].d == 0)
    rbp.b = 0
else
    int64_t* rcx_1 = arg1[0xbe]
    
    if (rcx_1 == 0)
        rbp.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        rbp.b = 0
    else
        rbp.b = 1

int64_t rbx

if (arg2[4] == 0)
    rbx.b = 0
else
    int64_t* rcx_2 = *(arg2 + 8)
    
    if (rcx_2 == 0)
        rbx.b = 0
    else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        rbx.b = 0
    else
        rbx.b = 1

arg1[0xbd].d = *arg2
*(arg1 + 0x5ec) = arg2[1].b
sub_140692f90(&arg1[0xbe], &arg2[2])
rbx.b ^= rbp.b
rbx.b <<= 2
return sub_140e19ef0(arg1, (rbx + 1).b)
