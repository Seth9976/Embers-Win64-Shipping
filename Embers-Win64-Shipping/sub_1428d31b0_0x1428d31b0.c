// 函数: sub_1428d31b0
// 地址: 0x1428d31b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char rdi = *arg1
int64_t rbp = arg4
int64_t r14 = *(arg1 + 0x28)
int64_t* r13 = arg3
int64_t r15 = *(arg1 + 0x30)
int64_t* r12 = arg2

if ((rdi & 0x40) == 0)
    r14(arg5, &arg1[0x10], r15)

uint64_t i_2 = 0
uint64_t i_3 = zx.q(rdi) & 7
int32_t rax_2 = 0xf - i_3.d
*arg1 = i_3.b
int64_t rcx = 0

if (rax_2 u< 0xf)
    void* rdx_2 = &arg1[zx.q(rax_2)]
    uint64_t i
    
    do
        uint64_t rax_3 = zx.q(*rdx_2)
        *rdx_2 = 0
        rdx_2 += 1
        rcx = (rcx | rax_3) << 8
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t rcx_2 = rcx | zx.q(arg1[0xf])
arg1[0xf] = 1
int64_t result

if (rcx_2 == rbp)
    int64_t var_50
    int64_t var_48
    
    if (rbp u>= 0x10)
        i_2 = rbp u>> 4
        rbp -= i_2 * 0x10
        uint64_t i_1
        
        do
            r14(arg1, &var_50, r15)
            uint64_t rax_6 = 8
            
            do
                rax_6 = zx.q(rax_6.d - 1)
                char temp1_1 = arg1[rax_6 + 8]
                arg1[rax_6 + 8] += 1
                
                if (temp1_1 != 0xff)
                    break
            while (rax_6.d != 0)
            
            int64_t rax_8 = *r12 ^ var_50
            *r13 = rax_8
            *(arg1 + 0x10) ^= rax_8
            int64_t rax_10 = r12[1] ^ var_48
            r13[1] = rax_10
            *(arg1 + 0x18) ^= rax_10
            r14(&arg1[0x10], &arg1[0x10], r15)
            r12 = &r12[2]
            r13 = &r13[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (rbp != 0)
        r14(arg1, &var_50, r15)
        
        if (rbp != 0)
            uint64_t i_4 = i_2
            
            do
                i_2 = zx.q(i_2.d + 1)
                char rax_11 = *(i_4 + r12) ^ *(&var_50 + i_4)
                *(i_4 + r13) = rax_11
                arg1[i_4 + 0x10] ^= rax_11
                i_4 = zx.q(i_2.d)
            while (i_4 u< rbp)
        
        r14(&arg1[0x10], &arg1[0x10], r15)
    
    uint64_t rcx_7 = zx.q(rax_2)
    
    if (rcx_7.d u< 0x10)
        __builtin_memset(&arg1[rcx_7], 0, zx.q(0x10 - rcx_7.d))
    
    r14(arg1, &var_50, r15)
    *(arg1 + 0x10) ^= var_50
    *(arg1 + 0x18) ^= var_48
    *arg1 = rdi
    result = 0
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_78)
return result
