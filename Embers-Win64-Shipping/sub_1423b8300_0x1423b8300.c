// 函数: sub_1423b8300
// 地址: 0x1423b8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx == 0)
    *(arg1 + 0xb4) &= 0xffffffdb
    return 

char rax_1 = (*(*rcx + 0x2d8))(rcx)
int64_t* rcx_1 = *arg1
int32_t rdx_4 = ((zx.d(rax_1) << 5 ^ *(arg1 + 0xb4)) & 0x20) ^ *(arg1 + 0xb4)
*(arg1 + 0xb4) = rdx_4
*(arg1 + 0x5c) = zx.d(*(rcx_1 + 0x3c))

if ((rdx_4.b & 4) == 0)
    *(arg1 + 0xb4) = ((zx.d(*(rcx_1 + 0x3d)) << 2 ^ rdx_4) & 4) ^ rdx_4

arg1[0xc].d = (*(*rcx_1 + 0x2a8))()
