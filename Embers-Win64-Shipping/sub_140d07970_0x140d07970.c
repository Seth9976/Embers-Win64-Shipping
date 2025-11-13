// 函数: sub_140d07970
// 地址: 0x140d07970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t var_18 = __security_cookie ^ &var_278
int64_t* rdi = arg3
void* result
void var_258

if ((arg4 & 2) != 0)
    int16_t var_220_1 = 0x100
    void var_218
    void* var_238 = &var_218
    arg3.b = 1
    void* var_230_1 = &var_218
    int64_t* var_228_1 = &var_18
    void* result_1 = sub_140ce3990(arg2, &var_238, arg3.b)
    
    if (result_1 != 0)
        void* rax_5 = var_238
        void* var_250 = rax_5
        int32_t var_248_1 = ((var_230_1 - rax_5) s>> 1).d
        *rdi = *sub_140b58050(&var_258, &var_250, 1)
        sub_140b301c0(&var_238)
        result = result_1
    else
        sub_140b301c0(&var_238)
        result = nullptr
else
    int64_t rax_3 = -1
    *rdi = *sub_140b58260(&var_258, arg2, 1)
    
    do
        rax_3 += 1
    while (arg2[rax_3] != 0)
    
    result = &arg2[sx.q(rax_3.d)]
__security_check_cookie(var_18 ^ &var_278)
return result
