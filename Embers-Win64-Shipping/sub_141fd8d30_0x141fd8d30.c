// 函数: sub_141fd8d30
// 地址: 0x141fd8d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg2)
int64_t* rbx = *(**(arg1 + 0x18) + (r12 << 3))
void* r8 = *rbx

if (*(arg1 + 0xc) == 0)
    return sub_141fdcd20(r8 + 0x18, *(arg1 + 8), r8 + 8, r12 * 0x88 + **(arg1 + 0x10), 
        &data_143dbb188)

int32_t rdx_2 = 0
int32_t rsi_1 = *(r8 + 0x20) * *(r8 + 0x1c)
int128_t* r14 = nullptr
int128_t* var_38 = nullptr
int32_t rsi_3 = rsi_1 * *(r8 + 0x18) * *(arg1 + 8)
int32_t rcx_1 = 0
int64_t var_30 = 0

if (rsi_3 != 0)
    sub_1405c5510(&var_38, rsi_3)
    rcx_1 = var_30:4.d
    rdx_2 = var_30.d
    r14 = var_38

int32_t rax_3 = rsi_3 + rdx_2
var_30.d = rax_3

if (rax_3 s> rcx_1)
    sub_1405daba0(&var_38)
    r14 = var_38

void* rax_4 = *rbx
int32_t var_48 = 0
int32_t arg_c = 0
void arg_10
sub_140b02330((*sub_140b5e500(&arg_10, 0x103)).q, r14, rsi_3, *(rax_4 + 8), *(rax_4 + 0x10), 0)
int64_t result =
    sub_141fdcd20(r8 + 0x18, *(arg1 + 8), &var_38, r12 * 0x88 + **(arg1 + 0x10), &data_143dbb188)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
