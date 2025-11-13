// 函数: sub_141cf8450
// 地址: 0x141cf8450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = j_sub_141cf98c0
void* rax = sub_140a756e0(&var_18, &data_143a21154)

if (*(rax + 0x30) == arg1)
    *(rax + 0x38) = 0xffffffff
    *(rax + 0x30) = 0

if (*(arg1 + 0x60) != 0)
    void* rax_1 = *(arg1 + 0x70)
    void* rcx_1 = arg1 + 0x80
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    (*(*rcx_1 + 0x10))(rcx_1)

return sub_140a1d5c0(arg1 + 0x38) __tailcall
