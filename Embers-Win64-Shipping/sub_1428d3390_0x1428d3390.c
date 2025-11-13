// 函数: sub_1428d3390
// 地址: 0x1428d3390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char rdi = *arg1
int64_t rbp = arg4
int64_t r10 = arg6
int64_t r13 = arg3
int64_t rax_2 = *(arg1 + 0x28)
int64_t r12 = arg2
int64_t r15 = *(arg1 + 0x30)
int64_t var_68 = r10
void* r9 = &arg1[0x10]

if ((rdi & 0x40) == 0)
    rax_2(arg5, r9, r15, r9)
    r10 = var_68
    r9 = &arg1[0x10]

int32_t rsi = 0
uint64_t i_1 = zx.q(rdi) & 7
int32_t r14 = 0xf - i_1.d
*arg1 = i_1.b
int64_t rcx = 0

if (r14 u< 0xf)
    void* rdx_2 = &arg1[zx.q(r14)]
    uint64_t i
    
    do
        uint64_t rax_3 = zx.q(*rdx_2)
        *rdx_2 = 0
        rdx_2 += 1
        rcx = (rcx | rax_3) << 8
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rcx_2 = rcx | zx.q(arg1[0xf])
arg1[0xf] = 1
int64_t result

if (rcx_2 == rbp)
    uint64_t rdi_3 = rbp u>> 4
    
    if (rdi_3 == 0)
        goto label_1428d34a4
    
    r10(r12, r13, rdi_3, r15, arg1, r9, rdi, rax_2, var_68)
    uint64_t rdi_4 = rdi_3 << 4
    r12 += rdi_4
    r13 += rdi_4
    int64_t temp1_1 = rbp
    rbp -= rdi_4
    int64_t var_60
    
    if (temp1_1 != rdi_4)
        sub_1428d3c90(arg1, rdi_4 u>> 4)
    label_1428d34a4:
        
        if (rbp != 0)
            rax_2(arg1, &var_60, r15)
            
            if (rbp != 0)
                char* rdx_6 = nullptr
                
                do
                    rsi += 1
                    char rax_5 = rdx_6[r12] ^ *(&var_60 + rdx_6)
                    rdx_6[r13] = rax_5
                    *(rdx_6 + arg1 + 0x10) ^= rax_5
                    rdx_6 = zx.q(rsi)
                while (rdx_6 u< rbp)
            
            rax_2(&arg1[0x10], &arg1[0x10], r15)
    
    if (r14 u< 0x10)
        __builtin_memset(&arg1[zx.q(r14)], 0, zx.q(0x10 - r14))
    
    rax_2(arg1, &var_60, r15)
    *(arg1 + 0x10) ^= var_60
    int64_t var_58
    *(arg1 + 0x18) ^= var_58
    *arg1 = rdi
    result = 0
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_a8)
return result
