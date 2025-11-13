// 函数: sub_141d8f8c0
// 地址: 0x141d8f8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) != 0)
    return *(arg1 + 0x20)

int64_t var_18
sub_140a2e390(&var_18, u"checkpoint%d", zx.q(*(arg1 + 0x40)))
sub_140a464c0()
uint64_t var_28[0x2]
uint64_t* rax = sub_141d8f980(&var_28, arg1 + 0x30, zx.q(*(arg1 + 0x40)))
uint64_t rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t rax_2 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx_1, 0)
int64_t* rcx_2 = *(arg1 + 0x20)

if (rcx_2 != rax_2)
    *(arg1 + 0x20) = rax_2
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

uint64_t rcx_3 = var_28[0]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return *(arg1 + 0x20)
