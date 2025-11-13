// 函数: sub_1428225f4
// 地址: 0x1428225f4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rsi
rsi.b = arg3
int64_t var_38 = 0
int64_t var_30 = 0xf
char var_48 = 0
void* const rdx = &data_142e5e874

if (arg3 != 0)
    rdx = &data_1434d3578

SimpleString::operator=(&var_48, rdx)
sub_14281f344(arg1, &var_48)

if (var_30 u>= 0x10)
    sub_14058ba50(var_48.q, var_30 + 1)

int64_t* rax_2 = arg2

if (arg2[3] u>= 0x10)
    rax_2 = *arg2

int64_t* var_60 = rax_2
class std::wostream* rax_3 = arg2[2]
char* var_50 = nullptr
int32_t* rax_4

if (rsi.b == 0)
    rax_4 = sub_142821920()
else
    rax_4 = sub_142821b94()

class std::wostream* result

if (var_50 u< rax_3)
    char* rdx_5
    
    do
        result = sub_14281f52c(rax_4, &var_60)
        int32_t rbx_1 = result.d
        
        if (result.d s<= 0)
            result.b = 0
            goto label_14282271c
        
        rdx_5 = var_50
        
        while (true)
            int32_t temp0_1 = rbx_1
            rbx_1 -= 1
            
            if (temp0_1 - 1 s< 0)
                break
            
            rdx_5.b = *(rdx_5 + var_60)
            wchar16 var_68
            var_68.b = rdx_5.b
            sub_14281f460(arg1, &var_68, 1)
            rdx_5 = &var_50[1]
            var_50 = rdx_5
    while (rdx_5 u< rax_3)

if (rsi.b != 0)
    sub_14281f460(arg1, U">", 1)

result.b = 1
label_14282271c:
__security_check_cookie(rax_1 ^ &var_88)
return result
