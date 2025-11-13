// 函数: sub_140776860
// 地址: 0x140776860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
(*(*arg2 + 0x1d8))(arg2, &data_14396e7c0)

if ((arg2[5].b & 3) != 0)
    int64_t* rax_3 = sub_14086ea10()
    void var_1b8
    void** var_1b0
    (*(*rax_3 + 0x290))(rax_3, *SymBuffer::end(sub_140b4cb20(&var_1b0, arg2), &var_1b8), arg1, 
        rax_3, 0, 0)
    sub_140b4cbb0(&var_1b0)

int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_1e8)
return result
