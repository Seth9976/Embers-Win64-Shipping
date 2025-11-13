// 函数: sub_140a9b660
// 地址: 0x140a9b660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t var_48 = 4
sub_1405d9400()
int64_t var_38 = data_143cd6fd8
int64_t* rdx_1 = data_143cd6fe0

if (rdx_1 != 0)
    rdx_1[1].d += 1

int32_t var_28 = data_143cd6fe8
char var_20 = 1
int16_t* result_2 = sub_140abcf90(arg2, &var_48)
int16_t* result_1 = result_2

if (result_2 == 0)
    result_1 = nullptr
else
    int32_t rcx_1 = var_48
    float var_40
    
    if (rcx_1 == 0 || rcx_1 == 1)
        *arg3 = var_40
    else if (rcx_1 == 2)
        *arg3 = int.d(fconvert.t(var_40))
    else if (rcx_1 != 3)
        result_1 = nullptr
    else
        *arg3 = int.d(fconvert.t(var_40.q))

int16_t* result

if (var_20 == 0 || rdx_1 == 0)
    result = result_1
else
    rdx_1[1].d -= 1
    
    if (rdx_1[1].d == 1)
        int64_t rdx_3 = *rdx_1
        (*rdx_3)(rdx_1, rdx_3)
        int32_t rsi_1 = *(rdx_1 + 0xc)
        *(rdx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8 = *rdx_1
            (*(r8 + 8))(rdx_1, zx.q(rsi_1), r8)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_68)
return result
