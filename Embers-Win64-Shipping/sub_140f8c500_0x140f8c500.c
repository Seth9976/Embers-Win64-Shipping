// 函数: sub_140f8c500
// 地址: 0x140f8c500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f498c0(&arg1[0xb8], arg2)

if (result != 0)
    return result

int64_t r15

if (arg1[0xbc].d == 0)
    r15.b = 0
else
    int64_t* rcx_1 = arg1[0xbb]
    
    if (rcx_1 == 0)
        r15.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        r15.b = 0
    else
        r15.b = 1

int64_t rbx

if (arg2[8] == 0)
    rbx.b = 0
else
    int64_t* rcx_2 = *(arg2 + 0x18)
    
    if (rcx_2 == 0)
        rbx.b = 0
    else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        rbx.b = 0
    else
        rbx.b = 1

*(arg1 + 0x5c0) = *arg2
arg1[0xba].b = arg2[4].b
sub_140692f90(&arg1[0xbb], &arg2[6])
rbx.b ^= r15.b
rbx.b <<= 2
return sub_140e19ef0(arg1, (rbx + 1).b)
