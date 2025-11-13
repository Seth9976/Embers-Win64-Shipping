// 函数: sub_141fdd560
// 地址: 0x141fdd560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint32_t r10 = 0x10
uint32_t r9 = 0
uint32_t rbx = 0x10
uint32_t rax_2

do
    uint32_t r8_1 = (rbx + r9) u>> 1
    rax_2 = r8_1
    int32_t temp0_1 = *(&data_143a2dc90 + (zx.q(r8_1 - 1) << 2))
    
    if (arg3 u> temp0_1)
        rax_2 = rbx
    
    if (arg3 u> temp0_1)
        r9 = r8_1
    
    rbx = rax_2
while (rax_2 - r9 u> 1)
int64_t* rdi_1 = arg1 + ((zx.q(r9) + 1) << 4)
int64_t rax_7 = sx.q(rdi_1[1].d)

if (rax_7.d s<= 0)
    uint64_t r9_1 = 0
    uint32_t rax_11
    
    do
        uint32_t r8_5 = (r10 + r9_1.d) u>> 1
        rax_11 = r8_5
        int32_t temp2_1 = *(&data_143a2dc90 + (zx.q(r8_5 - 1) << 2))
        
        if (arg3 u> temp2_1)
            rax_11 = r10
        
        if (arg3 u> temp2_1)
            r9_1 = zx.q(r8_5)
        
        r10 = rax_11
    while (rax_11 - r9_1.d u> 1)
    uint64_t r9_2 = zx.q(*(&data_143a2dc90 + (r9_1 << 2)))
    int128_t var_78
    int128_t* var_90_1 = &var_78
    int32_t var_68_1 = 1
    int64_t* rcx_12 = data_143f0f180
    int32_t rax_14 = (1 << (data_1439c7a34).b) - 1
    var_78 = zx.o(0)
    int32_t var_54_1 = rax_14
    char var_50_1 = 0
    int128_t var_64_1 = data_143dbb1e0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    (*(*rcx_12 + 0x498))(rcx_12, arg2, &data_143f02b98, r9_2, 0x204, var_90_1)
else
    int64_t rcx_1 = *rdi_1
    int64_t rdx_1 = rax_7 * 2
    int64_t rbp_1 = *(rcx_1 + (rdx_1 << 3) - 0x10)
    *(rcx_1 + (rdx_1 << 3) - 0x10) = 0
    int64_t r15_1 = sx.q(rdi_1[1].d)
    int32_t var_80_1 = *(rcx_1 + (rdx_1 << 3) - 8)
    int32_t rbx_1 = (r15_1 - 1).d
    int32_t var_7c_1 = *(rcx_1 + (rdx_1 << 3) - 4)
    int64_t r14_2 = sx.q(rbx_1) << 4
    sub_1405d1550(*rdi_1 + r14_2)
    int32_t rdx_2 = rdi_1[1].d
    int32_t rcx_5 = rdx_2 - rbx_1
    
    if (rcx_5 != 1)
        int64_t rax_10 = *rdi_1
        memmove(r14_2 + rax_10, (r15_1 << 4) + rax_10, (rcx_5 - 1) << 4)
        rdx_2 = rdi_1[1].d
    
    rdi_1[1].d = rdx_2 - 1
    sub_1405a5010(rdi_1)
    *arg2 = rbp_1
    int64_t var_88 = 0
    sub_1405d1550(&var_88)

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
