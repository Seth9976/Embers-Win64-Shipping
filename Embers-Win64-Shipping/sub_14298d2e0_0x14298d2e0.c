// 函数: sub_14298d2e0
// 地址: 0x14298d2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_5a8 = -2
void var_5e8
int64_t rax_1 = __security_cookie ^ &var_5e8
int64_t result

while (true)
    char var_528[0x40]
    char (* rbx_1)[0x40] = &var_528
    int32_t rdi_1 = 0xff
    int32_t temp0_1
    
    do
        result = (*(*arg2 + 0x10))(arg2, rbx_1, 1)
        
        if (*rbx_1 == 0)
            break
        
        rbx_1 = &(*rbx_1)[1]
        temp0_1 = rdi_1
        rdi_1 -= 1
    while (temp0_1 - 1 s>= 0)
    
    if (var_528[0] == 0)
        break
    
    int64_t rax_3 = 0
    void* var_428
    
    while (true)
        if (rax_3 u>= 0x100)
            sub_1429779b0(&var_428, 3, 1)
            void var_418
            sub_14058b120(
                std::ostream::operator<<(sub_14058b120(
                    sub_14058b120(sub_14058b120(&var_418, "Invalid "), "channel name"), 
                    ": it is more than ")), 
                " characters long.")
            struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
            sub_14297d5a0(&exceptionObject, &var_428)
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn
        
        if (var_528[rax_3] == 0)
            break
        
        rax_3 += 1
    
    char var_5b4
    (*(*arg2 + 0x10))(arg2, &var_5b4, 4)
    char var_5b3
    char var_5b2
    char var_5b1
    int32_t rdi_8 = ((sx.d(var_5b1) << 8 | zx.d(var_5b2)) << 8 | zx.d(var_5b3)) << 8 | zx.d(var_5b4)
    char var_5b8
    (*(*arg2 + 0x10))(arg2, &var_5b8, 1)
    rbx_1.b = var_5b8 != 0
    (*(*arg2 + 0x10))(arg2, &var_428, 3)
    char var_5ac
    (*(*arg2 + 0x10))(arg2, &var_5ac, 4)
    char var_5b0
    (*(*arg2 + 0x10))(arg2, &var_5b0, 4)
    char var_5af
    char var_5ae
    char var_5ad
    char var_5ab
    char var_5aa
    char var_5a9
    void var_5a0
    int32_t* rax_18 = sub_14297bae0(&var_5a0, rdi_8, 
        ((sx.d(var_5a9) << 8 | zx.d(var_5aa)) << 8 | zx.d(var_5ab)) << 8 | zx.d(var_5ac), 
        ((sx.d(var_5ad) << 8 | zx.d(var_5ae)) << 8 | zx.d(var_5af)) << 8 | zx.d(var_5b0), rbx_1.b)
    sub_14297bf70(arg1 + 8, &var_528, rax_18)

__security_check_cookie(rax_1 ^ &var_5e8)
return result
