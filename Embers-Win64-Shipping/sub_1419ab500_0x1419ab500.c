// 函数: sub_1419ab500
// 地址: 0x1419ab500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t rbx = sx.q(*(arg1 + 0xe0))
void* rsi = arg3
int64_t r14 = sx.q(arg4)
void* rdi = arg2
int32_t result_1 = 0

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f12e00)
            break
        
        result_1 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_1419ab5a8

int64_t result
void* rbp_1

if (rbx s<= 0 || result_1 == 0xffffffff)
label_1419ab5a8:
    TEB* gsbase
    result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143ce8564 s> *(0x14 + result))
        result = _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            result = _Init_thread_footer(&data_143ce8564)
    
    rbp_1 = &data_143ce8560
else
    void* rcx_25 = *(arg1 + 0xe8)
    
    if ((rcx_25.b & 1) != 0)
        rcx_25 = (rcx_25 s>> 1) + arg1 + 0xe8
    
    result = sx.q(result_1)
    rbp_1 = rcx_25 + (result << 1)

if (*rbp_1 != 0xffff)
    void var_c8
    memset(&var_c8, 0, 0x80)
    int64_t r10 = 0
    void var_c4
    
    if (r14 s>= 4)
        void var_ac
        void* rax_4 = &var_ac - rsi
        void* rdi_1 = rax_4
        void* r9_1 = &var_c8 - rsi
        int32_t* rcx_5 = rsi + 8
        int64_t r11_2 = &var_c4 - rsi
        int64_t i_3 = ((r14 - 4) u>> 2) + 1
        int64_t r10_1 = i_3 << 2
        int64_t i
        
        do
            *(rcx_5 + r9_1 - 8) = rcx_5[-2]
            *(rcx_5 + r11_2 - 8) = rcx_5[-1]
            *(rcx_5 + r9_1) = *rcx_5
            *(rcx_5 + r11_2) = rcx_5[1]
            void var_c0
            *(rcx_5 + &var_c0 - rsi) = rcx_5[2]
            void var_bc
            *(rcx_5 + &var_bc - rsi) = rcx_5[3]
            void var_b8
            *(rcx_5 + &var_b8 - rsi) = rcx_5[4]
            void var_b4
            *(rcx_5 + &var_b4 - rsi) = rcx_5[5]
            void var_b0
            *(rcx_5 + &var_b0 - rsi) = rcx_5[6]
            *(rcx_5 + rdi_1) = rcx_5[7]
            void var_a8
            *(rcx_5 + &var_a8 - rsi) = rcx_5[8]
            void var_a4
            *(rcx_5 + &var_a4 - rsi) = rcx_5[9]
            void var_a0
            *(rcx_5 + &var_a0 - rsi) = rcx_5[0xa]
            void var_9c
            *(rcx_5 + &var_9c - rsi) = rcx_5[0xb]
            void var_98
            *(rcx_5 + &var_98 - rsi) = rcx_5[0xc]
            int32_t rax_26 = rcx_5[0xd]
            rcx_5 = &rcx_5[0x10]
            void var_94
            *(rcx_5 + &var_94 - rsi - 0x40) = rax_26
            rdi_1 = rax_4
            i = i_3
            i_3 -= 1
        while (i != 1)
        rdi = arg2
        r10 = r10_1
        rsi = arg3
    
    if (r10 s< r14)
        int32_t* rcx_7 = rsi + 8 + (r10 << 4)
        int64_t r8_3 = &var_c8 - rsi
        int64_t r9_2 = &var_c4 - rsi
        int64_t i_2 = r14 - r10
        int64_t i_1
        
        do
            *(rcx_7 + r8_3 - 8) = rcx_7[-2]
            *(rcx_7 + r9_2 - 8) = rcx_7[-1]
            *(rcx_7 + r8_3) = *rcx_7
            *(rcx_7 + r9_2) = rcx_7[1]
            rcx_7 = &rcx_7[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int64_t rcx_9 = *(rdi + 0x30) + 7
    int64_t var_120 = 0
    void*** rcx_10 = rcx_9 & 0xfffffffffffffff8
    void* rax_33 = &rcx_10[5]
    
    if (rax_33 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x30)
        rcx_10 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_33 = &rcx_10[5]
    
    *(rdi + 0x30) = rax_33
    void** rax_34 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_34 = rcx_10
    *(rdi + 8) = &rcx_10[1]
    rcx_10[1] = 0
    *rcx_10 = &data_143009c10
    sub_141992630(&rcx_10[2], rdi, &var_c8, 0x80, &data_143f12e10)
    int64_t r14_2 = *(rdi + 0x1a0)
    uint32_t rbp_3 = zx.d(*rbp_1)
    void*** rcx_17 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int64_t* var_128_1 = &rcx_10[2]
    void* rax_36 = &rcx_17[6]
    
    if (rax_36 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x38)
        rcx_17 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_36 = &rcx_17[6]
    
    *(rdi + 0x30) = rax_36
    void** rax_37 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_37 = rcx_17
    *(rdi + 8) = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142f86150
    rcx_17[2] = r14_2
    rcx_17[3].d = rbp_3
    rcx_17[4] = &rcx_10[2]
    rcx_17[5] = 0
    void* rcx_21 = rcx_17[4][2]
    *(rcx_21 + 8) += 1
    result = sub_1405d1550(&var_120)

__security_check_cookie(rax_1 ^ &var_168)
return result
