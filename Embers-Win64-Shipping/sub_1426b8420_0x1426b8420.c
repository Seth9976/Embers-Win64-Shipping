// 函数: sub_1426b8420
// 地址: 0x1426b8420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2e0) == 0)
    return 

int64_t* rax_1 = sub_142729da0()
void* rdx = rax_1[0x23]

if (rdx == 0)
    int64_t rdx_1 = *rax_1
    (*(rdx_1 + 0x390))(rax_1, rdx_1)
    rdx = rax_1[0x23]

char rcx_1

if ((*(rdx + 0x30) & 1) != 0 || *(rdx + 0x28) != 0xffffffff)
    rcx_1 = *(rdx + 0x28)
else
    rcx_1 = *(rdx + 0x2c)

int32_t r8 = 1 << rcx_1

if ((r8 & zx.d(arg2)) != 0)
    jump(*(*(*(arg1 + 0x2e0) + 0xb0) + 0x10))

if ((r8 & zx.d(arg3)) != 0)
    int64_t* rcx_5 = *(arg1 + 0x2e0) + 0xb0
    (*(*rcx_5 + 0x18))(rcx_5, 1, r8)
