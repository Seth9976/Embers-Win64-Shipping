// 函数: sub_140cd4a70
// 地址: 0x140cd4a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void var_1a8
void** var_1a0
int64_t* rbx = *SymBuffer::end(sub_140b4cb20(&var_1a0, arg1), &var_1a8)
int64_t* rcx_2 = *(*rbx + 8)
(*(*rcx_2 + 0x140))(rcx_2, arg2 + 0xc)
int64_t* rcx_3 = *(*rbx + 8)
(*(*rcx_3 + 0x140))(rcx_3, arg2 + 0x14)
int64_t* r9 = *(*rbx + 8)
int64_t* rcx_4 = r9[1]
int32_t* r8 = *rcx_4

if (&r8[1] u<= rcx_4[1])
    *(arg2 + 8) = *r8
    int64_t* rax_11 = r9[1]
    *rax_11 += 4
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b54070(r9, arg2 + 8, arg3)
else
    (*(*r9 + 0x150))(r9, arg2 + 8, 4)

int64_t* rcx_6 = *(*rbx + 8)
(*(*rcx_6 + 0x140))(rcx_6, arg2)

if ((*(*(*rbx + 8) + 0x28) & 1) != 0)
    *(arg2 + 0x30) = 0xffffffff
    *(arg2 + 0x28) = 0
    *(arg2 + 0x20) = 0

sub_140b4cbb0(&var_1a0)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
