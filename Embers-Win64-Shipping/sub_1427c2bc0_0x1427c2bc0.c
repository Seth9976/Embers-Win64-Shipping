// 函数: sub_1427c2bc0
// 地址: 0x1427c2bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint128_t zmm0 = *(arg1 + 0x88)
int64_t* rdi = nullptr
*(arg1 + 0x8c) = zmm0.d
*(arg1 + 0x90) = zmm0.d
int64_t* rcx

if (*(arg1 + 0x78) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x80)

void var_48
int128_t* rax_3 = (*(*rcx + 0x10))(rcx, &var_48)
*(arg1 + 0xb8) = *rax_3
*(arg1 + 0xc8) = rax_3[1]
*(arg1 + 0xd8) = rax_3[2]
int64_t* rcx_1

if (*(arg1 + 0x68) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x70)

void var_58
int64_t* rax_5 = (*(*rcx_1 + 0x18))(rcx_1, &var_58)
*(arg1 + 0x94) = *rax_5
*(arg1 + 0x9c) = rax_5[1].d

if (*(arg1 + 0x68) != 0)
    rdi = *(arg1 + 0x70)

int64_t* rax_8 = (*(*rdi + 0x10))(rdi, &var_58)
*(arg1 + 0xa0) = *rax_8
int32_t result = rax_8[1].d
*(arg1 + 0xa8) = result
__security_check_cookie(rax_1 ^ &var_78)
return result
