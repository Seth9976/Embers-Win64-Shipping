// 函数: sub_142053ad0
// 地址: 0x142053ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint32_t r10 = 0x11
uint32_t r9 = 0
uint32_t rbx = 0x11
uint32_t rax_2

do
    uint32_t r8_1 = (rbx + r9) u>> 1
    rax_2 = r8_1
    int32_t temp0_1 = *(&data_143a2e1d0 + (zx.q(r8_1 - 1) << 2))
    
    if (arg3 u> temp0_1)
        rax_2 = rbx
    
    if (arg3 u> temp0_1)
        r9 = r8_1
    
    rbx = rax_2
while (rax_2 - r9 u> 1)
int64_t* rsi_3 = ((zx.q(r9) + 1) << 4) + arg1
int64_t rax_4 = sx.q(rsi_3[1].d)

if (rax_4.d s<= 0)
    uint64_t r9_2 = 0
    uint32_t rax_13
    
    do
        uint32_t r8_5 = (r10 + r9_2.d) u>> 1
        rax_13 = r8_5
        int32_t temp2_1 = *(&data_143a2e1d0 + (zx.q(r8_5 - 1) << 2))
        
        if (arg3 u> temp2_1)
            rax_13 = r10
        
        if (arg3 u> temp2_1)
            r9_2 = zx.q(r8_5)
        
        r10 = rax_13
    while (rax_13 - r9_2.d u> 1)
    uint64_t r9_3 = zx.q(*(&data_143a2e1d0 + (r9_2 << 2)))
    *arg2 = 0
    arg2[1] = 0
    int32_t var_78_1 = 1
    int64_t* rcx_10 = data_143f0f180
    int32_t rax_16 = (1 << (data_1439c7a34).b) - 1
    int128_t var_88 = zx.o(0)
    int32_t var_64_1 = rax_16
    int128_t var_74_1 = data_143dbb1e0
    char var_60_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    void var_a8
    (*(*rcx_10 + 0x498))(rcx_10, &var_a8, &data_143f02b98, r9_3, 0x202, &var_88)
    sub_1405d1600(arg2, &var_a8)
    sub_1405d1550(&var_a8)
    int64_t* rcx_13 = data_143f0f180
    int128_t* var_b0_1
    var_b0_1.b = 1
    (*(*rcx_13 + 0x4b8))(rcx_13, &var_a8, &data_143f02b98, *arg2, 0x10, var_b0_1)
    sub_1405d1600(&arg2[1], &var_a8)
    sub_1405ec8a0(&var_a8)
else
    int64_t rcx_1 = *rsi_3
    int64_t rdx = rax_4 * 3
    int64_t r12_1 = *(rcx_1 + (rdx << 3) - 0x18)
    *(rcx_1 + (rdx << 3) - 0x18) = 0
    int64_t r13_1 = *(rcx_1 + (rdx << 3) - 0x10)
    *(rcx_1 + (rdx << 3) - 0x10) = 0
    int64_t rbp_1 = sx.q(rsi_3[1].d)
    int32_t var_90_1 = *(rcx_1 + (rdx << 3) - 8)
    int32_t var_8c_1 = *(rcx_1 + (rdx << 3) - 4)
    int32_t rdi_1 = (rbp_1 - 1).d
    int64_t r15_1 = sx.q(rdi_1) * 3
    int64_t* rbx_1 = *rsi_3 + (r15_1 << 3)
    sub_1405ec8a0(&rbx_1[1])
    sub_1405d1550(rbx_1)
    int32_t rdx_1 = rsi_3[1].d
    int32_t rax_10 = rdx_1 - rdi_1
    
    if (rax_10 != 1)
        int64_t r9_1 = *rsi_3
        memmove(r9_1 + (r15_1 << 3), r9_1 + rbp_1 * 0x18, (rax_10 - 1) * 0x18)
        rdx_1 = rsi_3[1].d
    
    rsi_3[1].d = rdx_1 - 1
    sub_1405fde90(rsi_3)
    *arg2 = r12_1
    int64_t var_a0 = 0
    int64_t var_98 = 0
    arg2[1] = r13_1
    sub_1405ec8a0(&var_98)
    sub_1405d1550(&var_a0)

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
