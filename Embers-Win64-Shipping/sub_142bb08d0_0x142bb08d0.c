// 函数: sub_142bb08d0
// 地址: 0x142bb08d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* rsi = *arg1
void* rdi = arg1[2]
int32_t r15 = 0x10000
void* rbx = arg1[1]
void* rbp = *(rsi + 0x90)

if ((arg1[4].b & 1) == 0)
    r15 = *(*(rbx + 0x40) + 8)

int128_t var_58

if (*(rdi + 0x60) == 0x636f6d70)
    var_58 = *(arg1 + 0x38)
else
    sub_142b94c20(rdi + 0x98, &var_58)

*(rdi + 0x50) = arg1[0xa].d
*(rdi + 0x38) = var_58.d
*(rdi + 0x3c) = (var_58:8.q u>> 0x20).d
*(rdi + 0x40) = arg1[0xc].d - arg1[0xb].d
void* rax_9

if (*(rbp + 0x78) == 0x28)
    rax_9 = arg1[0x1d]

if ((*(rbp + 0x78) != 0x28 || rax_9 == 0 || *(rax_9 + 0x373) == 0) && *(rsi + 0x27c) == 0)
    int32_t rax_10 = arg1[4].d
    
    if ((rax_10.b & 2) == 0 && not(test_bit(rax_10, 0x15)))
        char* rax_12 = sub_142bb3a20(rsi, zx.d(**(rbx + 0x40)), arg2)
        
        if (rax_12 != 0)
            *(rdi + 0x40) = zx.d(*rax_12) << 6

*(rdi + 0x30) = var_58:8.d - var_58.d
*(rdi + 0x34) = var_58:0xc.d - var_58:4.d
int32_t rbx_1
int32_t rbp_1

if (*(rsi + 0x190) == 0 || *(rsi + 0x1ba) u<= 0)
    int32_t rcx_8 = sx.d(sub_142b91790(var_58:0xc.d - var_58:4.d, r15))
    int32_t rax_23
    int32_t rbx_2
    
    if (*(rsi + 0x208) == 0xffff)
        rax_23 = sx.d(*(rsi + 0x13e))
        rbx_2 = sx.d(*(rsi + 0x13c))
    else
        rax_23 = sx.d(*(rsi + 0x250))
        rbx_2 = sx.d(*(rsi + 0x24e))
    
    rbx_1 = rbx_2 - rax_23
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1 - rcx_8)
    rbp_1 = (temp1_1 - temp0_1) s>> 1
else
    int16_t rax_19 = sub_142b91790(*(arg1 + 0x114) - var_58:0xc.d, r15)
    int32_t rcx_4 = *(arg1 + 0x114)
    rbp_1 = sx.d(rax_19)
    int32_t rax_20 = *(arg1 + 0x11c)
    
    if (rcx_4 s> rax_20)
        rbx_1 = zx.d(sub_142b91790(rcx_4 - rax_20, r15))
    else
        rbx_1 = 0

int64_t* rcx_10 = *(*(rsi + 0xd0) + 0x50)
int32_t result

if (rcx_10 != 0 && *(*rcx_10 + 0x10) != 0)
    int32_t var_48 = 0
    void* r8_2
    r8_2.b = 1
    result = (*(*rcx_10 + 0x10))(rcx_10[1], zx.q(arg2), r8_2, &var_48)

if (rcx_10 == 0 || *(*rcx_10 + 0x10) == 0 || result == 0)
    *(rdi + 0x54) = rbx_1
    
    if ((arg1[4].b & 1) == 0)
        rbp_1 = sub_142b93e80(rbp_1, r15)
        rbx_1 = sub_142b93e80(rbx_1, r15)
    
    int32_t rcx_14 = *(rdi + 0x38)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(*(rdi + 0x40))
    *(rdi + 0x48) = rbp_1
    *(rdi + 0x4c) = rbx_1
    *(rdi + 0x44) = rcx_14 - ((temp3_1 - temp2_1) s>> 1)
    result = 0

__security_check_cookie(rax_1 ^ &var_78)
return result
