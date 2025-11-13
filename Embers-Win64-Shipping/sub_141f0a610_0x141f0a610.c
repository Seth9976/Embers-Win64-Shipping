// 函数: sub_141f0a610
// 地址: 0x141f0a610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* rsi = arg3
void* rax_2
int64_t rax_3
void* rdx

if (arg2 != 0)
    rax_2 = sub_142591550()
    rdx = arg2[2]
    rax_3 = sx.q(*(rax_2 + 0x38))

uint64_t result
int64_t r8

if (arg2 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    arg3.b = 1
    int64_t var_58_1 = 0
    result, r8 = (*(*arg2 + 0x6a8))(arg2, 0, arg3)

if ((arg2 != 0 && rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        || result == 0)
    result.b = 0
else
    int64_t r9 = *arg1
    r8.b = 1
    int64_t var_48_1 = 0
    int64_t var_50_1 = (*(r9 + 0x6a8))(arg1, 0, r8, r9, 0)
    int32_t var_3c_1 = 1
    int32_t var_40_1 = 1
    char result_1 = sub_14220a7c0(result, rsi, arg4)
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_78)
return result
