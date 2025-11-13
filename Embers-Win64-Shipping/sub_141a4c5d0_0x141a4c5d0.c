// 函数: sub_141a4c5d0
// 地址: 0x141a4c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a2e830(&arg1[0x36], &arg1[0x1a])
arg1[0x38] = 0

if (arg1[0x39] s<= 0xffffffff)
    sub_1405dadb0(&arg1[0x36], 0)

int32_t rax = arg1[0x3d]
arg1[0x3c] = 0

if (rax s< 0 && rax != 0)
    sub_1405a5410(&arg1[0x3a], 0)

sub_141a3bb00(arg1, arg2)
sub_1408d84f0(&arg1[6])
char result = arg2[0x64].b

if ((result & 1) != 0)
    void* rcx_5 = &arg2[0x5c]
    
    if ((result & 2) == 0)
        rcx_5 = arg2[0x5c]
    
    arg2[0x64].b = result & 0xfe
    result = (**rcx_5)(rcx_5, 0)
    
    if ((arg2[0x64].b & 2) == 0)
        return sub_140a74f90(arg2[0x5c])

return result
