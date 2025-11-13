// 函数: sub_140d76740
// 地址: 0x140d76740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d76db0(arg1)
int64_t var_18 = *arg2
int64_t* rax_1 = arg2[1]

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

int32_t arg_8
sub_140d6f690(arg1 + 0xb0, &arg_8, &var_18, nullptr)

if (rax_1 != 0)
    int32_t temp0_1 = *(rax_1 + 0xc)
    *(rax_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rax_1 + 8))(rax_1, 1)

int64_t* rcx_2 = *arg2
HWND param0 = (*(*rcx_2 + 0xc0))(rcx_2)
int64_t rdx_1 = 0
HIMC param1 = nullptr
int64_t arg_10 = 0

if (*(arg1 + 0x50) != 0)
    int64_t* rcx_3 = *(arg1 + 0x20)
    int64_t r8_1 = *rcx_3
    (*(r8_1 + 0x38))(rcx_3, &arg_10, r8_1)
    rdx_1 = arg_10
    param1 = *(arg1 + 0x40)

int64_t* rcx_4 = *(arg1 + 0x20)
int64_t rax_4 = *rcx_4

if (rdx_1 == 0)
    (*(rax_4 + 0x48))(rcx_4, param0, *(arg1 + 0x30), &arg_8)
else
    (*(rax_4 + 0x40))(rcx_4, rdx_1)

return ImmAssociateContext(param0, param1)
