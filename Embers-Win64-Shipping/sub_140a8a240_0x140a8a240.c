// 函数: sub_140a8a240
// 地址: 0x140a8a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2[2]
void* rbx = nullptr
arg2[2] = 0
*arg2 = &data_142e5bfb0
j_sub_140a74f90(arg2)
(*(*rdi + 0x18))(rdi)
int32_t rax_2 = sub_140a20af0()

if (rax_2 != 0)
    rbx = *(&data_143cf0bf8 + (zx.q(rax_2) u>> 0xe << 3)) + (zx.q(rax_2) & 0x3fff) * 0x18

*(rbx + 8) = rdi
return sub_1405a42f0(arg1, rax_2) __tailcall
