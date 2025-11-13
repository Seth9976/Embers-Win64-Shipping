// 函数: sub_141c21fb0
// 地址: 0x141c21fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* var_58 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_3 = *(arg2 + 0x20)
int64_t* rdx_2 = var_58
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_50
int128_t* result = sub_140d96150(arg3, sub_141baf710(&var_50, rdx_2))
__security_check_cookie(rax_1 ^ &var_78)
return result
