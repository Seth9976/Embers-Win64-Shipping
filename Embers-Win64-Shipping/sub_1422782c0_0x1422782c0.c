// 函数: sub_1422782c0
// 地址: 0x1422782c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_2 = (zx.d(arg2) * 2) | (arg1[0x7a].d & 0xfffffffd)
int32_t rax_2

if ((r10_2.b & 2) == 0 || arg3 == 0)
    rax_2 = 0
else
    rax_2 = 4

int32_t r10_4 = (r10_2 & 0xfffffffb) | rax_2
arg1[0x7a].d = r10_4
int64_t* rcx = arg1[0x4a]

if (rcx != 0 && ((r10_4.b & 6) == 6 || (r10_4.b & 2) == 0))
    (*(*rcx + 0x2f8))()

(*(*arg1 + 0xab0))(arg1, (arg1[0x7a].d u>> 1).b & 1, zx.q(arg4), zx.q(arg5))
char r8_1 = arg4
char r9
arg4 = r9
return sub_1425698e0(arg1, (arg1[0x7a].d u>> 1).b & 1, r8_1) __tailcall
