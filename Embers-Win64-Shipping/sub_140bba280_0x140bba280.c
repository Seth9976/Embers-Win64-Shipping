// 函数: sub_140bba280
// 地址: 0x140bba280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void** var_1e0
std::exception::exception(&var_1e0)
int64_t* r14 = arg2[2]
var_1e0 = &data_142e838a0
void* var_1c8 = arg1
char var_1c0 = 1

if (((arg2[1].d u>> 4).b & 1) == 0)
    (*(*arg2 + 0xa0))(arg2, arg1)
else
    *(arg1 + 0x2c) += 1
    char rax_4 = *(arg1 + 0x28)
    void** var_1b8
    void var_1e8
    
    if ((rax_4 & 0x10) != 0 || (rax_4 & 3) == 0)
        (*(*r14 + 0x280))(r14, *SymBuffer::end(sub_140b4cb20(&var_1b8, arg1), &var_1e8), arg2)
    else
        (*(*r14 + 0x290))(r14, *SymBuffer::end(sub_140b4cb20(&var_1b8, arg1), &var_1e8), arg2, r14, 
            0, 0)
    sub_140b4cbb0(&var_1b8)
    *(arg1 + 0x2c) -= 1

r14[0x18](arg2, &var_1e0)
void** result = sub_140d16360(&var_1e0)
__security_check_cookie(rax_1 ^ &var_218)
return result
