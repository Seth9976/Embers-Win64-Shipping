// 函数: sub_1420a6e00
// 地址: 0x1420a6e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0)
    return 

char r14_1 = *(arg2 + 0x90)
int64_t rbx_1 = sx.q(arg3)

if (rbx_1.d s>= *(arg2 + 0x78))
    return 

int64_t* rcx = *(arg4 + 0x20)

if (rcx == 0)
    return 

int64_t rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

void* rcx_1 = *(rax + 0x130)

if (rcx_1 == 0 || (*(arg1 + 0xc0) & 4) != 0)
    return 

int32_t rax_2 = *(rcx_1 + 0x124)
int64_t var_38_1 = *(rcx_1 + 0x11c)
int64_t var_18 = *(rcx_1 + 0x128)
int32_t var_10_1 = *(rcx_1 + 0x130)
int32_t var_28
sub_140ad3dc0(&var_18, &var_28)
uint64_t rax_4 = zx.q(r14_1)
int32_t var_24
int32_t var_20

if (rax_4.d u<= 5)
    switch (rax_4)
        case 0
            *(*(arg2 + 0x70) + rbx_1 * 0x14 + 4) = var_38_1.d.d
        case 1
            *(*(arg2 + 0x70) + rbx_1 * 0x14 + 4) = var_38_1:4.d.d
        case 2
            *(*(arg2 + 0x70) + rbx_1 * 0x14 + 4) = rax_2.d
        case 3
            *(*(arg2 + 0x70) + rbx_1 * 0x14 + 4) = var_28.d
        case 4
            *(*(arg2 + 0x70) + rbx_1 * 0x14 + 4) = var_24.d
        case 5
            *(*(arg2 + 0x70) + rbx_1 * 0x14 + 4) = var_20.d
sub_141fdb4d0(arg2 + 0x70, *(arg2 + 0x88), 1)
