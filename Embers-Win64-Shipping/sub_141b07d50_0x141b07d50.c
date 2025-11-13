// 函数: sub_141b07d50
// 地址: 0x141b07d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_28 = &data_14305d9b8
int32_t rax_1 = **(arg1 + 8)
void* rax_2
int64_t rax_3
void* rdx

if (arg3 != 0)
    rax_2 = sub_142577430()
    rdx = arg3[2]
    rax_3 = sx.q(*(rax_2 + 0x38))

void* const rax_6

if (arg3 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rax_6 = nullptr
else
    rax_6 = (*(*arg3 + 0x548))(arg3, zx.q(rax_1))

int64_t var_1c
sub_140d3a3a0(&var_1c, rax_6)
arg2[4].b |= 3
int64_t* rcx_3 = arg2

if ((arg2[4].b & 2) == 0)
    rcx_3 = *arg2

*rcx_3 = &data_14305d9b8
rcx_3[1].d = rax_1
*(rcx_3 + 0xc) = var_1c
return arg2
