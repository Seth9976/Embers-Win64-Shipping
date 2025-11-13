// 函数: sub_141a33110
// 地址: 0x141a33110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14302df58
arg1[0x6f] = &data_14302dca0
sub_141a32290(&arg1[0x72])
int64_t* rcx_1 = arg1[0x71]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

sub_140d94f50(&arg1[0x65])
char rax_2 = arg1[0x64].b

if ((rax_2 & 1) != 0)
    void* rcx_3 = &arg1[0x5c]
    
    if ((rax_2 & 2) == 0)
        rcx_3 = arg1[0x5c]
    
    arg1[0x64].b = rax_2 & 0xfe
    (**rcx_3)(rcx_3, 0)
    
    if ((arg1[0x64].b & 2) == 0)
        sub_140a74f90(arg1[0x5c])

sub_141a32ee0(&arg1[0x1f])
return sub_141a32ce0(&arg1[1]) __tailcall
