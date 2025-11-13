// 函数: sub_1429d41d0
// 地址: 0x1429d41d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
void var_18
void* rax_2 = &var_18

for (int32_t i = 0; i s< 2; i += 1)
    for (int32_t j = 0; j s< 4; )
        *rax_2 &= 0xfe
        char rcx = (j.b & 3) << 3
        j += 1
        *rax_2 = ((*rax_2 | (i.b & 1)) & 0xe1) | rcx
        rax_2 += 1

sub_1429d4a20(arg1, &var_18)
sub_1429d4660(arg1, &var_18)
int64_t result = sub_1429d5360(arg1, &var_18)
__security_check_cookie(rax_1 ^ &var_38)
return result
