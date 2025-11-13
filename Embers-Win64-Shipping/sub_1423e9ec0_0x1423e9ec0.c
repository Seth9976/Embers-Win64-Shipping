// 函数: sub_1423e9ec0
// 地址: 0x1423e9ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f435c0(arg1)
int64_t* rdi = &arg1[0x3e]

if (arg1 == 0)
    rdi = nullptr

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

return sub_14243aa70(rax, rdi) __tailcall
