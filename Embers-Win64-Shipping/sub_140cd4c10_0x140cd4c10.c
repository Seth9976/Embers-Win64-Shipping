// 函数: sub_140cd4c10
// 地址: 0x140cd4c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void var_1a8
void** var_1a0
int64_t* r9 = *(**SymBuffer::end(sub_140b4cb20(&var_1a0, arg1), &var_1a8) + 8)
int64_t* rcx_3 = r9[1]
int32_t* rdx_2 = *rcx_3

if (&rdx_2[1] u<= rcx_3[1])
    *arg2 = *rdx_2
    int64_t* rax_7 = r9[1]
    *rax_7 += 4
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b54070(r9, arg2, arg3)
else
    (*(*r9 + 0x150))(r9, arg2, 4)

sub_140b4cbb0(&var_1a0)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
