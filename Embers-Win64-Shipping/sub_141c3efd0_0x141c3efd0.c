// 函数: sub_141c3efd0
// 地址: 0x141c3efd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)
EnterCriticalSection(&arg1[0x10])
sub_141c35490(arg1)
sub_141c35bb0(arg1)
memset(arg2, 0, rbp << 2)
int64_t* i = arg1[0xe]
int32_t rdi = 0

for (void* rsi_3 = &i[sx.q(arg1[0xf].d) * 2]; i != rsi_3; i = &i[2])
    int32_t rax_1 = sub_141c3d1f0(*i, arg2, rbp.d, arg4)
    
    if (rax_1 s>= rdi)
        rdi = rax_1

if (arg1 != -0x80)
    LeaveCriticalSection(&arg1[0x10])

return zx.q(rdi)
