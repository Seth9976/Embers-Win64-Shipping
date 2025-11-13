// 函数: sub_1428d3870
// 地址: 0x1428d3870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char rbp = *arg1
int64_t rdi = arg4
int64_t r10 = arg6
int64_t r14 = arg3
int64_t rax_2 = *(arg1 + 0x28)
int64_t rsi = arg2
int64_t r13 = *(arg1 + 0x30)
int64_t var_68 = r10

if ((rbp & 0x40) == 0)
    rax_2(arg5, &arg1[0x10], r13)
    *(arg1 + 0x20) += 1
    r10 = var_68

int128_t* i_1 = nullptr
uint64_t i_4 = zx.q(rbp) & 7
int32_t r12 = 0xf - i_4.d
*arg1 = i_4.b
int64_t rcx = 0

if (r12 u< 0xf)
    void* rdx_2 = &arg1[zx.q(r12)]
    uint64_t i
    
    do
        uint64_t rax_3 = zx.q(*rdx_2)
        *rdx_2 = 0
        rdx_2 += 1
        rcx = (rcx | rax_3) << 8
        i = i_4
        i_4 -= 1
    while (i != 1)

int64_t rcx_2 = rcx | zx.q(arg1[0xf])
arg1[0xf] = 1
int64_t result

if (rcx_2 == rdi)
    *(arg1 + 0x20) += ((rdi + 0xf) | 8) u>> 3
    
    if (*(arg1 + 0x20) u<= 0x2000000000000000)
        uint64_t rbp_2 = rdi u>> 4
        
        if (rbp_2 == 0)
            goto label_1428d39b6
        
        r10(rsi, r14, rbp_2, r13, arg1, &arg1[0x10], rbp, rax_2, var_68)
        uint64_t rbp_3 = rbp_2 << 4
        rsi += rbp_3
        r14 += rbp_3
        int64_t temp1_1 = rdi
        rdi -= rbp_3
        int64_t var_60
        int64_t rbp_5
        
        if (temp1_1 == rbp_3)
            rbp_5 = rax_2
        else
            sub_1428d3c90(arg1, rbp_3 u>> 4)
        label_1428d39b6:
            
            if (rdi == 0)
                rbp_5 = rax_2
            else
                int32_t rdx_5 = 0
                char* rcx_5 = nullptr
                
                do
                    rdx_5 += 1
                    *(rcx_5 + arg1 + 0x10) ^= rcx_5[rsi]
                    rcx_5 = zx.q(rdx_5)
                while (rcx_5 u< rdi)
                
                rbp_5 = rax_2
                rbp_5(&arg1[0x10], &arg1[0x10], r13)
                rbp_5(arg1, &var_60, r13)
                int32_t i_3 = 0
                
                if (rdi u>= 0x40)
                    uint64_t rax_10 = zx.q((rdi - 1).d)
                    uint64_t rcx_8 = zx.q(rax_10.d)
                    int64_t r8_5 = rax_10 + r14
                    
                    if ((r14 u> &var_60 + rcx_8 || r8_5 u< &var_60)
                            && (r14 u> rcx_8 + rsi || r8_5 u< rsi))
                        int32_t r9_1 = 0x20
                        
                        do
                            uint64_t rax_13 = zx.q(r9_1 - 0x10)
                            i_3 += 0x40
                            arg5 = *(&var_60 + rax_13)
                            *(i_1 + r14) = *(i_1 + rsi) ^ *(&var_60 + i_1)
                            i_1 = zx.q(i_3)
                            *(rax_13 + r14) = *(rax_13 + rsi) ^ arg5
                            uint64_t rax_14 = zx.q(r9_1)
                            *(rax_14 + r14) = *(rax_14 + rsi) ^ *(&var_60 + rax_14)
                            uint64_t rax_15 = zx.q(r9_1 + 0x10)
                            r9_1 += 0x40
                            *(rax_15 + r14) = *(rax_15 + rsi) ^ *(&var_60 + rax_15)
                        while (i_1 u< (rdi & 0xffffffffffffffc0))
                
                for (uint64_t i_2 = zx.q(i_3); i_2 u< rdi; i_2 = zx.q(i_3))
                    i_3 += 1
                    *(i_2 + r14) = *(i_2 + rsi) ^ *(&var_60 + i_2)
        
        if (r12 u< 0x10)
            __builtin_memset(&arg1[zx.q(r12)], 0, zx.q(0x10 - r12))
        
        rbp_5(arg1, &var_60, r13)
        *(arg1 + 0x10) ^= var_60
        int64_t var_58
        *(arg1 + 0x18) ^= var_58
        *arg1 = rbp
        result = 0
    else
        result = 0xfffffffe
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_a8)
return result
