// 函数: sub_14243fe80
// 地址: 0x14243fe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xe4) & 1) != 0)
    sub_1424404b0(&data_143a307b0, arg1 + 0xc8)
    *(arg1 + 0xe4) &= 0xfe

int64_t* rcx = *(arg2 + 0x258)

if (rcx == 0 || (*(*rcx + 0x28))(rcx) == 0)
    return 

int64_t* rcx_1 = *(arg2 + 0x258)
char rax_3

if (rcx_1 != 0)
    rax_3 = (*(*rcx_1 + 0x28))(rcx_1)

int32_t rax_7

if (rcx_1 == 0 || rax_3 == 0)
    rax_7 = -1
else
    int64_t* rdi_1 = *(arg2 + 0x258)
    int32_t rax_5 = (*(*rdi_1 + 0x20))(rdi_1)
    int64_t rdx_1 = *rdi_1
    rax_7 = sub_140a6af60((*(rdx_1 + 0x18))(rdi_1, rdx_1), rax_5)

sub_1424277f0(&data_143a307b0, rax_7, arg2 + 0x250)
int32_t arg_8
sub_142434fb0(&data_143a307b0, &arg_8, arg2 + 0x250)
int64_t rax_8 = sx.q(arg_8)
void* const rcx_5

if (rax_8.d == 0xffffffff)
    rcx_5 = nullptr
else
    rcx_5 = data_143a307b0 + rax_8 * 0x28

*(rcx_5 + 0x18) = arg1
sub_142429d60(arg1 + 0xc8, arg2 + 0x250)
*(arg1 + 0xe4) |= 1
