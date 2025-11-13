// 函数: sub_140add570
// 地址: 0x140add570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ad6e40(arg1)
int64_t* rcx = arg1[2]
int64_t rax = *rcx

if (arg3 == 0)
    int32_t result = (*(rax + 0x30))(rcx, zx.q(arg2))
    
    if (result s<= 0)
        return result
    
    rcx = arg1[2]
    rax = *rcx

return (*(rax + 0x28))(rcx)
