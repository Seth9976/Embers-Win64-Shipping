// 函数: sub_1429cbd00
// 地址: 0x1429cbd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = -2
int32_t i = 1

if (*(arg1 + 0x20) == 0)
    int32_t r15 = ***(arg1 + 8)
    int32_t r12_1 = r15
    
    if (*arg1 s> 1)
        int64_t rsi_1 = 8
        
        do
            void* rcx = **(arg1 + 8)
            int64_t rbx_1 = sx.q(*(rcx + rsi_1))
            int64_t r9_1 = **(arg1 + 0x10)
            memmove(r9_1 + (sx.q(r15) << 2), r9_1 + (sx.q(*(rcx + rsi_1 + 4)) << 2), (rbx_1 << 2).d)
            *(**(arg1 + 8) + rsi_1 + 4) = r15
            r15 += rbx_1.d
            
            if (r12_1 s< rbx_1.d)
                r12_1 = rbx_1.d
            
            i += 1
            rsi_1 += 8
        while (i s< *arg1)
    
    sub_14058d4e0(*(arg1 + 0x10), sx.q(r15))
    return zx.q(r12_1)

uint64_t r13
r13.b = 0
int64_t* rcx_4 = *(arg1 + 8)
int32_t r15_1 = **rcx_4

if (*arg1 s> 1)
    int64_t rsi_2 = 8
    
    do
        *(rsi_2 + *rcx_4 + 4) = r15_1
        int32_t rax_10
        rax_10.b = r15_1 s> arg1[1] * i
        r13.b |= rax_10.b
        rcx_4 = *(arg1 + 8)
        r15_1 += *(rsi_2 + *rcx_4)
        i += 1
        rsi_2 += 8
    while (i s< *arg1)

int32_t rax_13
rax_13.b = r15_1 s> arg1[1] * *arg1
r13.b |= rax_13.b
int128_t var_90
__builtin_memset(&var_90, 0, 0x18)
int32_t i_1 = 0
int64_t r14 = 0
int128_t* rax_14

if (r13.b == 0)
    rax_14 = *(arg1 + 0x10)
else
    sub_14058d4e0(&var_90, sx.q(r15_1))
    rax_14 = &var_90
    int64_t var_80
    r14 = var_80

int128_t* arg_10 = rax_14
int32_t rbx_2 = arg1[1]
int32_t arg_20 = rbx_2
int32_t var_78 = rbx_2
int32_t i_2 = 0

if (*arg1 s> 0)
    do
        int32_t rdx_5 = i_1 * 2
        int64_t* r8_3 = *(arg1 + 8)
        int32_t r9_2 = *(*r8_3 + (sx.q(rdx_5) << 2))
        int32_t var_58 = r9_2
        int64_t r10_1 = *rax_14 + (sx.q(*(*r8_3 + (sx.q(rdx_5 + 1) << 2))) << 2)
        int32_t rax_19 = arg1[1]
        int64_t rdx_7
        
        if (r9_2 s> rax_19)
            void** rax_22 = *(arg1 + 0x18)
            void** rcx_10 = rax_22[1]
            void** rbx_3 = rax_22
            
            while (*(rcx_10 + 0x19) == 0)
                if (rcx_10[4].d s>= i_1)
                    rbx_3 = rcx_10
                    rcx_10 = *rcx_10
                else
                    rcx_10 = rcx_10[2]
            
            if (rbx_3 == rax_22 || i_1 s< rbx_3[4].d)
                int32_t* var_70 = &i_2
                int64_t* rax_23 = sub_1429c9300(&arg1[6], &data_1435fc448, &var_70)
                void** var_68
                sub_1429c9630(&arg1[6], &var_68, rbx_3, &rax_23[4], rax_23)
                rbx_3 = var_68
            
            rdx_7 = rbx_3[5]
            int32_t* rax_24 = &var_58
            
            if (arg_20 s>= r9_2)
                rax_24 = &var_78
            
            rbx_2 = *rax_24
            arg_20 = rbx_2
            var_78 = rbx_2
        else
            rdx_7 = **(arg1 + 0x10) + (sx.q(rax_19 * i_1) << 2)
        
        memmove(r10_1, rdx_7, r9_2 << 2)
        i_1 = i_2 + 1
        i_2 = i_1
    while (i_1 s< *arg1)
    
    r13 = zx.q(r13.b)

void* rcx_14

if (r13.b == 0)
    sub_14058d4e0(*(arg1 + 0x10), sx.q(r15_1))
    rcx_14 = var_90.q
else
    int64_t* rdx_9 = *(arg1 + 0x10)
    
    if (rdx_9 == &var_90)
        rcx_14 = var_90.q
    else
        rcx_14 = *rdx_9
        *rdx_9 = var_90.q
        rdx_9[1] = var_90:8.q
        int64_t rax_27 = rdx_9[2]
        rdx_9[2] = r14
        r14 = rax_27

if (rcx_14 != 0)
    int64_t r14_2 = (r14 - rcx_14) s>> 2
    
    if (r14_2 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (r14_2 << 2 u>= 0x1000)
        if ((rcx_14.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_29 = *(rcx_14 - 8)
        
        if (rax_29 u>= rcx_14)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_16 = rcx_14 - rax_29
        
        if (rcx_16 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_16 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_14 = rax_29
    
    j_sub_140a74f90(rcx_14)

return zx.q(rbx_2)
