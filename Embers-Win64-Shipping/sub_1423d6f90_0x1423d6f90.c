// 函数: sub_1423d6f90
// 地址: 0x1423d6f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = j_sub_140a82f30(0x280)
char* result

if (rax == 0)
    result = nullptr
else
    result = sub_1423cfa20(rax)

int64_t rsi = sx.q(*(arg1 + 0xc40))
int32_t rax_2 = (rsi + 1).d
*(arg1 + 0xc40) = rax_2

if (rax_2 s> *(arg1 + 0xc44))
    sub_140638870(arg1 + 0xc38)

*(*(arg1 + 0xc38) + (rsi << 3)) = result
*result = arg2
uint64_t r8 = zx.q(*(arg1 + 0xc48))
*(arg1 + 0xc48) = (r8 + 1).d
int16_t* var_28
sub_140a2e390(&var_28, u"Context_%d", r8)
int16_t* const rdx_1 = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx_1 = var_28

void arg_8
*(result + 0xb0) = *sub_140b58260(&arg_8, rdx_1, 1)
int16_t* rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
