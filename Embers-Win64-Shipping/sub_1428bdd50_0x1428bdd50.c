// 函数: sub_1428bdd50
// 地址: 0x1428bdd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* result_1 = &data_143fecb40
void* const rdi = arg2

if (arg6 != 0)
    result_1 = arg6

int64_t* rax_3 = sub_1428a6a70(0xb8)
int32_t rax_4

if (rax_3 != 0)
    rax_4 = sub_1428be0d0(rax_3)

void* result

if (rax_3 != 0 && rax_4 == 0)
    sub_1428be000(rax_3)
    sub_1428be000(nullptr)
    result = nullptr
else if (rax_3 == 0)
    sub_1428be000(rax_3)
    result = nullptr
else
    if (rdi == 0)
        void* const rax_5 = &data_143509920
        
        if (arg3 != 0)
            rax_5 = rdi
        
        rdi = rax_5
    
    if (sub_1428be280(rax_3, rdi, arg3, arg1, nullptr) == 0 || *rax_3 == 0)
        sub_1428be000(rax_3)
        result = nullptr
    else
        int32_t var_98
        void var_88
        
        if (sub_142891c10(rax_3[1], arg4, arg5) == 0 || *rax_3 == 0)
            sub_1428be000(rax_3)
            result = nullptr
        else if (sub_1428918e0(rax_3[1], &var_88, &var_98) == 0)
            sub_1428be000(rax_3)
            result = nullptr
        else if (sub_142891c70(rax_3[1], rax_3[3]) == 0)
            sub_1428be000(rax_3)
            result = nullptr
        else if (sub_142891c10(rax_3[1], &var_88, zx.q(var_98)) == 0)
            sub_1428be000(rax_3)
            result = nullptr
        else if (sub_1428918e0(rax_3[1], result_1, arg7) == 0)
            sub_1428be000(rax_3)
            result = nullptr
        else
            sub_1428be000(rax_3)
            result = result_1

__security_check_cookie(rax_1 ^ &var_c8)
return result
