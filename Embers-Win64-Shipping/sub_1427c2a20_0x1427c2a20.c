// 函数: sub_1427c2a20
// 地址: 0x1427c2a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint128_t zmm0 = *(arg1 + 0x40)
int64_t* rdi = nullptr
*(arg1 + 0x44) = zmm0.d
*(arg1 + 0x48) = zmm0.d
int64_t* rcx

if (*(arg1 + 0x30) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x38)

void var_48
int128_t* rax_3 = (*(*rcx + 0x10))(rcx, &var_48)
*(arg1 + 0x68) = *rax_3
*(arg1 + 0x78) = rax_3[1]
*(arg1 + 0x88) = rax_3[2]
int64_t* rcx_1

if (*(arg1 + 0x20) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x28)

void var_58
int64_t* rax_5 = (*(*rcx_1 + 0x18))(rcx_1, &var_58)
*(arg1 + 0x4c) = *rax_5
*(arg1 + 0x54) = rax_5[1].d

if (*(arg1 + 0x20) != 0)
    rdi = *(arg1 + 0x28)

int64_t* rax_8 = (*(*rdi + 0x10))(rdi, &var_58)
*(arg1 + 0x58) = *rax_8
int32_t result = rax_8[1].d
*(arg1 + 0x60) = result
__security_check_cookie(rax_1 ^ &var_78)
return result
