// 函数: sub_1428d3560
// 地址: 0x1428d3560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char r14 = *arg1
int64_t rbp = arg4
int64_t r12 = *(arg1 + 0x28)
int64_t* rsi = arg3
int64_t r13 = *(arg1 + 0x30)
int64_t* rdi = arg2

if ((r14 & 0x40) == 0)
    r12(arg5, &arg1[0x10], r13)
    *(arg1 + 0x20) += 1

uint64_t i_5 = zx.q(r14) & 7
int128_t* i_2 = nullptr
int32_t r15 = 0xf - i_5.d
*arg1 = i_5.b
int64_t rcx = 0

if (r15 u< 0xf)
    void* rdx_2 = &arg1[zx.q(r15)]
    uint64_t i
    
    do
        uint64_t rax_2 = zx.q(*rdx_2)
        *rdx_2 = 0
        rdx_2 += 1
        rcx = (rcx | rax_2) << 8
        i = i_5
        i_5 -= 1
    while (i != 1)

int64_t rcx_2 = rcx | zx.q(arg1[0xf])
arg1[0xf] = 1
int64_t result

if (rcx_2 == rbp)
    *(arg1 + 0x20) += ((rbp + 0xf) | 8) u>> 3
    
    if (*(arg1 + 0x20) u<= 0x2000000000000000)
        int64_t var_50
        int64_t var_48
        
        if (rbp u>= 0x10)
            uint64_t i_6 = rbp u>> 4
            rbp -= i_6 * 0x10
            uint64_t i_1
            
            do
                *(arg1 + 0x10) ^= *rdi
                *(arg1 + 0x18) ^= rdi[1]
                r12(&arg1[0x10], &arg1[0x10], r13)
                r12(arg1, &var_50, r13)
                uint64_t rax_10 = 8
                
                do
                    rax_10 = zx.q(rax_10.d - 1)
                    char temp1_1 = arg1[rax_10 + 8]
                    arg1[rax_10 + 8] += 1
                    
                    if (temp1_1 != 0xff)
                        break
                while (rax_10.d != 0)
                
                *rsi = *rdi ^ var_50
                int64_t rax_14 = var_48 ^ rdi[1]
                rdi = &rdi[2]
                rsi[1] = rax_14
                rsi = &rsi[2]
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
        
        if (rbp != 0)
            int32_t rdx_5 = 0
            char* rcx_5 = nullptr
            
            do
                rdx_5 += 1
                *(rcx_5 + arg1 + 0x10) ^= *(rcx_5 + rdi)
                rcx_5 = zx.q(rdx_5)
            while (rcx_5 u< rbp)
            
            r12(&arg1[0x10], &arg1[0x10], r13)
            r12(arg1, &var_50, r13)
            int32_t i_4 = 0
            
            if (rbp u>= 0x40)
                uint64_t rax_16 = zx.q((rbp - 1).d)
                uint64_t rcx_8 = zx.q(rax_16.d)
                void* r8_6 = rax_16 + rsi
                
                if ((rsi u> &var_50 + rcx_8 || r8_6 u< &var_50)
                        && (rsi u> rcx_8 + rdi || r8_6 u< rdi))
                    int32_t r9 = 0x20
                    
                    do
                        int128_t* rax_19 = zx.q(r9 - 0x10)
                        i_4 += 0x40
                        arg5 = *(&var_50 + rax_19)
                        *(i_2 + rsi) = *(i_2 + rdi) ^ *(&var_50 + i_2)
                        i_2 = zx.q(i_4)
                        *(rax_19 + rsi) = *(rax_19 + rdi) ^ arg5
                        int128_t* rax_20 = zx.q(r9)
                        *(rax_20 + rsi) = *(rax_20 + rdi) ^ *(&var_50 + rax_20)
                        int128_t* rax_21 = zx.q(r9 + 0x10)
                        r9 += 0x40
                        *(rax_21 + rsi) = *(rax_21 + rdi) ^ *(&var_50 + rax_21)
                    while (i_2 u< (rbp & 0xffffffffffffffc0))
            
            for (char* i_3 = zx.q(i_4); i_3 u< rbp; i_3 = zx.q(i_4))
                i_4 += 1
                *(i_3 + rsi) = *(i_3 + rdi) ^ *(&var_50 + i_3)
        
        if (r15 u< 0x10)
            __builtin_memset(&arg1[zx.q(r15)], 0, zx.q(0x10 - r15))
        
        r12(arg1, &var_50, r13)
        *(arg1 + 0x10) ^= var_50
        *(arg1 + 0x18) ^= var_48
        *arg1 = r14
        result = 0
    else
        result = 0xfffffffe
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_78)
return result
