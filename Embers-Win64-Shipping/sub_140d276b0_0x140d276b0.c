// 函数: sub_140d276b0
// 地址: 0x140d276b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char* rax_2 = *(arg2 + 0x20)

while (*rax_2 != 4)
    char* rax_3 = *(arg2 + 0x20)
    uint32_t rcx = zx.d(*rax_3)
    *(arg2 + 0x20) = &rax_3[1]
    void var_58
    (&data_143e1cd60)[zx.q(rcx)](*(arg2 + 0x18), arg2, &var_58)
    rax_2 = *(arg2 + 0x20)

void* result = &rax_2[1]
*(arg2 + 0x20) = result

if (*result == 0xb)
    *(arg2 + 0x20) = result + 1
else
    uint64_t rax_6 = zx.q(*result)
    *(arg2 + 0x20) = result + 1
    result = (&data_143e1cd60)[rax_6](*(arg2 + 0x18), arg2, arg3)

__security_check_cookie(rax_1 ^ &var_78)
return result
