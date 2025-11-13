// 函数: sub_14125eb50
// 地址: 0x14125eb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
EnterCriticalSection(arg1 + 0x28)
int32_t rdi = *(arg1 + 0x20)
int32_t rbp_2 = (arg3 + 0x3ff) & 0xfffffc00
int32_t rsi = -1
int32_t rcx_1 = 0

if (rdi s> 0)
    int32_t* r10_1 = *(arg1 + 0x18)
    void* r8 = -0xfffffffffffffff0
    int32_t* rax_2 = r10_1
    int64_t r9_1 = 0
    int64_t r11_1 = -1
    
    do
        if (rax_2[1] != *(arg1 + 0x10))
            int32_t rdx = *rax_2
            
            if (rdx s>= rbp_2 && (r11_1 == -1 || rdx s< *(r8 + r10_1)))
                rsi = rcx_1
                r8 = rax_2 - r10_1
                r11_1 = r9_1
                
                if (rdx == rbp_2)
                    break
        
        rcx_1 += 1
        r9_1 += 1
        rax_2 = &rax_2[4]
    while (rcx_1 s< rdi)

int64_t* rcx_7
int64_t var_a8

if (rsi s< 0)
    int32_t rsi_1 = *(arg1 + 0x10)
    int128_t var_88
    int128_t* var_b0_1 = &var_88
    int32_t var_78_1 = 1
    int64_t* rcx_9 = data_143f0f180
    int32_t rax_9 = (1 << (data_1439c7a34).b) - 1
    var_88 = zx.o(0)
    int32_t var_64_1 = rax_9
    char var_60_1 = 0
    int128_t var_74_1 = data_143dbb1e0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int32_t var_94_1 = rsi_1
    int32_t var_98_1 = rbp_2
    (*(*rcx_9 + 0x498))(rcx_9, &var_a8, &data_143f02b98, zx.q(rbp_2), 4, var_b0_1)
    int64_t rdi_2 = var_a8
    var_a8 = 0
    sub_1405d1550(&var_a8)
    *arg2 = rbp_2
    int64_t var_90
    rcx_7 = &var_90
    arg2[1] = rsi_1
    *(arg2 + 8) = rdi_2
    var_90 = 0
else
    int64_t rax_3 = *(arg1 + 0x18)
    int64_t r15_3 = sx.q(rsi) << 4
    int32_t rbp_3 = *(r15_3 + rax_3)
    int64_t r13_1 = *(r15_3 + rax_3 + 8)
    *(r15_3 + rax_3 + 8) = 0
    int32_t r12_1 = *(arg1 + 0x10)
    var_a8.d = rbp_3
    var_a8:4.d = r12_1
    sub_1405d1550(*(arg1 + 0x18) + 8 + r15_3)
    int32_t rdx_1 = *(arg1 + 0x20)
    int32_t rax_5 = rdx_1 - rsi
    
    if (rax_5 != 1)
        int64_t r9_2 = *(arg1 + 0x18)
        memmove(r9_2 + r15_3, (sx.q(rsi + 1) << 4) + r9_2, (rax_5 - 1) << 4)
        rdx_1 = *(arg1 + 0x20)
    
    *(arg1 + 0x20) = rdx_1 - 1
    sub_1405a5010(arg1 + 0x18)
    *arg2 = rbp_3
    int64_t var_a0
    rcx_7 = &var_a0
    arg2[1] = r12_1
    *(arg2 + 8) = r13_1
    var_a0 = 0
sub_1405d1550(rcx_7)

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
