// 函数: sub_1427e0940
// 地址: 0x1427e0940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427d4e00(arg2, arg1 + 0xf0)
sub_1427e5da0(arg2, "Shapes")
sub_1427d9a00(arg2, arg1 + 0x110)
void* rdx_2 = *arg2

if (*(rdx_2 + 0x10) != 0)
    if (*(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_6 = arg2[1]
        (*(*rcx_6 + 0x20))(rcx_6, rdx_2)
    
    void* rax_3 = *arg2
    *(rax_3 + 0x10) -= 1

return zx.q(arg3 + 3)
