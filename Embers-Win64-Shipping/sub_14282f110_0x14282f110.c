// 函数: sub_14282f110
// 地址: 0x14282f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char* var_b0 = arg1
int32_t var_e8 = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0xf
*arg1 = 0
int32_t var_e8_1 = 1
*arg3 = 1
int64_t var_e0 = 0
int32_t var_d8 = 0
int64_t* rcx = arg2

while (true)
    if (sub_14282a90c(rcx) == 0)
        __security_check_cookie(rax_1 ^ &var_108)
        return arg1
    
    void* var_a8
    
    if (sub_14282b034(arg2) == 0x21)
        if (*arg3 != 0)
            __security_check_cookie(rax_1 ^ &var_108)
            return arg1
        
        sub_14058a5c0(&var_a8, "illegal character found while scanning tag handle")
        struct std::exception::VTable* exceptionObject
        sub_1428244f0(&exceptionObject, &var_e0, &var_a8)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    int32_t rax_4
    
    if (*arg3 != 0)
        sub_142821f24()
        int64_t var_d0 = 0
        int64_t* var_c8_1 = arg2
        rax_4 = sub_14282694c(&data_143f89650, &var_d0)
        
        if (rax_4 s<= 0)
            *arg3 = 0
            var_e0 = arg2[1]
            int32_t var_d8_1 = arg2[2].d
    
    if (*arg3 == 0 || *arg3 == 0)
        sub_142821920()
        int64_t var_c0 = 0
        int64_t* var_b8_1 = arg2
        rax_4 = sub_14282694c(&data_143f89740, &var_c0)
    
    if (rax_4 s<= 0)
        __security_check_cookie(rax_1 ^ &var_108)
        return arg1
    
    int64_t* rax_5 = sub_14282af50(arg2, &var_a8, rax_4)
    int64_t* rdx_3 = rax_5
    
    if (rax_5[3] u>= 0x10)
        rdx_3 = *rax_5
    
    sub_14058c1d0(arg1, rdx_3, rax_5[2])
    int64_t var_90
    
    if (var_90 u>= 0x10)
        sub_14058ba50(var_a8, var_90 + 1)
    
    rcx = arg2
