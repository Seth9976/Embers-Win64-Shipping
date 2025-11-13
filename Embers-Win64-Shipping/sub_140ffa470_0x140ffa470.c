// 函数: sub_140ffa470
// 地址: 0x140ffa470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48

if (arg3 != 0)
    int32_t rcx_6 = *(arg2 + 0x18)
    *(arg2 + 0x18) = *(arg3 + 0x18)
    *(arg3 + 0x18) = rcx_6
    int32_t rcx_7 = *(arg2 + 0x1c)
    *(arg2 + 0x1c) = *(arg3 + 0x1c)
    *(arg3 + 0x1c) = rcx_7
    int32_t rcx_8 = *(arg2 + 0x20)
    *(arg2 + 0x20) = *(arg3 + 0x20)
    *(arg3 + 0x20) = rcx_8
    int64_t rax_10 = *(arg3 + 0x40)
    int64_t rcx_9 = *(arg2 + 0x40)
    *(arg2 + 0x40) = rax_10
    *(arg3 + 0x40) = rcx_9
    __security_check_cookie(rax_1 ^ &var_48)
    return rax_10

int64_t* rdi = *(arg2 + 0x40)

if (rdi != 0)
    (*(*rdi + 8))(rdi)

void var_28
(*(*rdi + 0x50))(rdi, &var_28)
int64_t rax_5 = (*(*rdi + 0x10))(rdi)
int64_t* rcx_3 = *(arg2 + 0x40)
*(arg2 + 0x40) = 0

if (rcx_3 != 0)
    rax_5 = (*(*rcx_3 + 0x10))(rcx_3)

*(arg2 + 0x1c) = 0
*(arg2 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_48)
return rax_5
