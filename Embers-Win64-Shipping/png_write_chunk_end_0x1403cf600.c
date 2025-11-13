// 函数: png_write_chunk_end
// 地址: 0x1403cf600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t result = __security_cookie ^ &var_38
int64_t result_1 = result

if (arg1 != 0)
    *(arg1 + 0x4a8) = 0x82
    int32_t rax_1 = *(arg1 + 0x244)
    uint8_t var_c = (rax_1 u>> 0x18).b
    uint8_t var_b_1 = (rax_1 u>> 0x10).b
    char var_a_1 = rax_1:1.b
    char var_9_1 = rax_1.b
    result = sub_1403cc370(arg1, &var_c, 4)

__security_check_cookie(result_1 ^ &var_38)
return result
