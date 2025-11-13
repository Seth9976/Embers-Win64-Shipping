// 函数: sub_140b0c350
// 地址: 0x140b0c350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int64_t* r9 = *(*arg1 + 8)
int64_t* rcx = r9[1]
int32_t* r8 = *rcx

if (&r8[1] u<= rcx[1])
    *arg2 = *r8
    int64_t* rax_5 = r9[1]
    *rax_5 += 4
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b54070(r9, arg2, arg3)
else
    (*(*r9 + 0x150))(r9, arg3, 4)

int64_t* r9_1 = *(*arg1 + 8)
int64_t* rcx_2 = r9_1[1]
int32_t* rdx = *rcx_2

if (&rdx[1] u<= rcx_2[1])
    arg2[1] = *rdx
    int64_t* rax_10 = r9_1[1]
    *rax_10 += 4
else if ((*(r9_1 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_1, &arg2[1], arg3)
else
    (*(*r9_1 + 0x150))(r9_1, &arg2[1], 4)

int64_t* r9_2 = *(*arg1 + 8)
int64_t* rcx_4 = r9_2[1]
int32_t* rdx_2 = *rcx_4

if (&rdx_2[1] u<= rcx_4[1])
    arg2[2] = *rdx_2
    int64_t* rax_15 = r9_2[1]
    *rax_15 += 4
else if ((*(r9_2 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_2, &arg2[2], arg3)
else
    (*(*r9_2 + 0x150))(r9_2, &arg2[2], 4)

int64_t* r9_3 = *(*arg1 + 8)
int64_t* rcx_6 = r9_3[1]
int32_t* rdx_4 = *rcx_6
int64_t* result

if (&rdx_4[1] u<= rcx_6[1])
    arg2[3] = *rdx_4
    result = r9_3[1]
    *result += 4
else if ((*(r9_3 + 0x29) & 0x20) != 0)
    result = sub_140b54070(r9_3, &arg2[3], arg3)
else
    result = (*(*r9_3 + 0x150))(r9_3, &arg2[3], 4)

__security_check_cookie(rax_1 ^ &var_38)
return result
