// 函数: sub_140ce9080
// 地址: 0x140ce9080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void var_1a8
void** var_1a0
int512_t zmm1 = sub_140ce8e80(arg1, *SymBuffer::end(sub_140b4cb20(&var_1a0, arg2), &var_1a8))
int64_t result = sub_140b4cbb0(&var_1a0)

if (*(arg2 + 0x2a) s< 0)
    void* rcx_4 = *(arg1 + 0x68)
    
    if (rcx_4 != 0)
        result = sub_140cce3c0(rcx_4, arg2, zmm1)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
