// 函数: sub_142b8f5b0
// 地址: 0x142b8f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_258
int64_t rax_2 = __security_cookie ^ &var_258
int32_t var_238[0x80]
memset(&var_238, 0, 0x200)
int32_t var_30_1 = 0x80
int32_t var_28_1 = 0
int32_t (* var_38_1)[0x80] = &var_238
int32_t (* rax_3)[0x80] = &var_238
int64_t i_2 = 8
int64_t i

do
    __builtin_memset(rax_3, 0, 0x18)
    rax_3 = &(*rax_3)[0x10]
    __builtin_memset(&(*rax_3)[-0xa], 0, 0x28)
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t rcx_1 = 0

if (var_28_1 s> 0)
    int64_t rdx = 0
    
    do
        rdx += 4
        rcx_1 += 1
        *(rdx + var_38_1 - 4) = 0
    while (rcx_1 s< var_28_1)

int32_t var_24_1 = 0
uint64_t rbx_2 = arg2 u>> 0x1c
int32_t i_3 = 3
*var_38_1 = arg2.d & 0xfffffff
(*var_38_1)[1] = rbx_2.d & 0xfffffff
(*var_38_1)[2] = (rbx_2 u>> 0x1c).d & 0xfffffff
int32_t var_28_2 = 3
int32_t i_1

do
    i_1 = i_3 - 1
    
    if ((*var_38_1)[sx.q(i_1)] != 0)
        break
    
    i_3 = i_1
    int32_t i_4 = i_3
while (i_1 s> 0)
int32_t rax_9 = var_24_1

if (i_3 == 0)
    rax_9 = 0

int32_t var_24_2 = rax_9
sub_142b8f490(arg1, &var_238)
__security_check_cookie(rax_2 ^ &var_258)
