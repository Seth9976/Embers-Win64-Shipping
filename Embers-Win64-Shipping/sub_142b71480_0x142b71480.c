// 函数: sub_142b71480
// 地址: 0x142b71480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t var_b8 = 0
int32_t rsi = arg4
int32_t i_2 = 0
int32_t rbp = arg2
int32_t rdi = arg5
int32_t var_e8
int16_t (* var_d0)[0x10]
int32_t var_90[0xe]
int16_t var_58[0x10]

if (rdi s> (*(*arg1 + 0x50))())
    int32_t (* var_c0_1)[0xe] = &var_90
    var_d0 = &var_58
    int32_t rax_12
    
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi)
        int32_t rax_7 = (temp1_1 - temp0_1) s>> 1
        int32_t rax_8 = (*(*arg1 + 0x38))(arg1, zx.q(rbp), zx.q(arg4), zx.q(rax_7), var_e8)
        int64_t r9_1 = *arg1
        var_e8 = rax_7
        *var_d0 = (*(r9_1 + 0x18))(arg1, zx.q(rax_8), zx.q(arg4), r9_1)
        int32_t rax_10 = sub_142b71480(arg1, zx.q(rbp), zx.q(rax_8), zx.q(arg4), var_e8)
        rbp = rax_8
        i_2 += 1
        rdi = arg5 - rax_7
        var_d0 = &(*var_d0)[1]
        *var_c0_1 = rax_10
        var_c0_1 = &(*var_c0_1)[1]
        arg5 = rdi
        rax_12 = (*(*arg1 + 0x50))(arg1)
    while (rdi s> rax_12)
    rsi = arg4

int64_t i = 0
void var_a8
uint64_t rax_18

do
    int64_t rax_13 = *arg1
    *(&var_a8 + (i << 2)) = rbp
    int32_t rax_15 = (*(*arg1 + 0x40))(arg1, zx.q(rbp + 1), zx.q(rsi), 
        zx.q((*(rax_13 + 0x18))(arg1, zx.q(rbp), zx.q(rsi))), var_e8)
    int32_t rax_16
    
    if (rbp == rax_15 - 1)
        int64_t r8_5 = *arg1
        rax_16 = (*(r8_5 + 0x10))(arg1, zx.q(rbp), r8_5)
    
    int32_t rcx_11
    
    if (rbp != rax_15 - 1 || rsi + 1 != rax_16)
        rcx_11 = 0
    else
        rcx_11.b = 1
    
    rbp = rax_15
    rax_18 = zx.q(var_b8.d + 1)
    *(&var_d0 + i) = rcx_11.b
    i += 1
    var_b8 = rax_18
while (rax_18.d s< arg5 - 1)

*(&var_a8 + (sx.q(rax_18.d) << 2)) = rbp

do
    i -= 1
    int32_t var_a4[0x5]
    
    if (*(&var_d0 + i) == 0)
        *(&var_b8 + (i << 2)) =
            sub_142b71710(arg1, zx.q(*(&var_a8 + (i << 2))), zx.q(var_a4[i]), zx.q(rsi + 1))
while (i s> 0)

sub_142b71710(arg1, zx.q(rbp), zx.q(arg3), zx.q(rsi + 1))
int64_t rdi_3 = *arg1
int32_t result_1 = (*(rdi_3 + 0x70))(arg1, zx.q((*(rdi_3 + 0x18))(arg1, zx.q(rbp), zx.q(rsi))))
int64_t rbp_1 = sx.q(arg5 - 2)

if (arg5 - 2 s>= 0)
    int64_t temp3_1
    
    do
        char rdi_4 = *(&var_d0 + rbp_1)
        int32_t rcx_19
        
        if (rdi_4 == 0)
            rcx_19 = result_1 - *(&var_b8 + (rbp_1 << 2))
        else
            rcx_19 = (*(*arg1 + 0x20))(arg1, zx.q(*(&var_a8 + (rbp_1 << 2))))
        
        (*(*arg1 + 0x80))(arg1, zx.q(rcx_19), zx.q(rdi_4))
        int64_t rdi_5 = *arg1
        int32_t result_2 = (*(rdi_5 + 0x70))(arg1, 
            zx.q((*(rdi_5 + 0x18))(arg1, zx.q(*(&var_a8 + (rbp_1 << 2))), zx.q(rsi))))
        temp3_1 = rbp_1
        rbp_1 -= 1
        result_1 = result_2
    while (temp3_1 - 1 s>= 0)

int64_t i_1 = sx.q(i_2)
uint64_t result

if (i_1 s<= 0)
    result = zx.q(result_1)
else
    do
        i_1 -= 1
        (*(*arg1 + 0x90))(arg1, zx.q(var_90[i_1]))
        result = (*(*arg1 + 0x70))(arg1, zx.q(var_58[i_1]))
    while (i_1 s> 0)

__security_check_cookie(rax_1 ^ &var_108)
return result
