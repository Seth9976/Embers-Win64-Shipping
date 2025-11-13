// 函数: sub_141e42ae0
// 地址: 0x141e42ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg3
int32_t r8 = *(arg3 + 0x7c)
int32_t rdx = 0
*(rbx + 0x78) = 0

if (r8 s< 0 && r8 != 0)
    sub_141e47d90(rbx, 0)
    rdx = *(rbx + 0x78)
    r8 = *(rbx + 0x7c)

*(rbx + 0x78) = rdx + 4

if (rdx + 4 s> r8)
    sub_141e47cf0(rbx, rdx)

int128_t* rax_1 = rbx[7].q

if (rax_1 != 0)
    rbx = rax_1

return sub_141e41070(arg1, arg2, rbx, rbx + 0x1c, rbx + 0x38, rbx + 0x54)
