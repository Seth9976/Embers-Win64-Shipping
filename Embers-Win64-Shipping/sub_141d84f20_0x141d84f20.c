// 函数: sub_141d84f20
// 地址: 0x141d84f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*(arg2 + 0x38) = 0
int128_t var_b0 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_b0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b0)

int128_t* rax_3 = *(arg2 + 0x38)
int128_t* r12 = &var_b0
int64_t var_98 = 0
int64_t var_90 = 0

if (rax_3 != 0)
    r12 = rax_3

int32_t var_6c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r15 = &var_98
int64_t var_c0 = 0
int64_t var_b8 = 0

if (rax_5 != 0)
    r15 = rax_5

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_c0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c0)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* r14 = &var_c0
int32_t var_c8 = 0

if (rax_7 != 0)
    r14 = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_c8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
bool cond:4 = var_c8 != 0
*(arg2 + 0x20) = rdi + rax_9
rax_9.b = cond:4
sub_141d80730(arg1, r12, r15, r14, rax_9.b)
int32_t result = sub_1405ae080(&var_98)
int64_t* rbx_1 = var_b0:8.q

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

__security_check_cookie(rax_1 ^ &var_f8)
return result
