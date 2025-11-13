// 函数: sub_1408d9160
// 地址: 0x1408d9160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void** var_1a0
sub_140b4cb20(&var_1a0, arg1)
void var_1a8
int64_t* rbx = *SymBuffer::end(&var_1a0, &var_1a8)
int64_t* r9 = *(*rbx + 8)
int64_t* rcx_2 = r9[1]
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u<= rcx_2[1])
    *arg2 = *rdx_2
    int64_t* rax_6 = r9[1]
    *rax_6 += 4
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b54070(r9, arg2, arg3)
else
    (*(*r9 + 0x150))(r9, arg2, 4)

int64_t* r9_1 = *(*rbx + 8)
int64_t* rcx_4 = r9_1[1]
int32_t* r8 = *rcx_4

if (&r8[1] u<= rcx_4[1])
    arg2[1] = *r8
    int64_t* rax_11 = r9_1[1]
    *rax_11 += 4
else if ((*(r9_1 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_1, &arg2[1], arg3)
else
    (*(*r9_1 + 0x150))(r9_1, &arg2[1], 4)

int64_t* r9_2 = *(*rbx + 8)
int64_t* rcx_6 = r9_2[1]
int32_t* r8_1 = *rcx_6

if (&r8_1[1] u<= rcx_6[1])
    arg2[2] = *r8_1
    int64_t* rax_16 = r9_2[1]
    *rax_16 += 4
else if ((*(r9_2 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_2, &arg2[2], arg3)
else
    (*(*r9_2 + 0x150))(r9_2, &arg2[2], 4)

sub_140b4cbb0(&var_1a0)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
