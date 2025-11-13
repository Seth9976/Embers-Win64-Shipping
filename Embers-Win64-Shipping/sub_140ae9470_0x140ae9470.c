// 函数: sub_140ae9470
// 地址: 0x140ae9470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*arg2)

if (rcx == 1)
    *(arg1 + 0x34) += 1
else if (rcx == 2)
    *(arg1 + 0x30) += 1

sub_140af2ae0()
void* rcx_34
void* rbx_4
int64_t rsi_1
int64_t var_60
int64_t var_50

if (data_143de5b29 == 0)
    char rax_17 = *arg2
    sub_140596d10(&var_60, &arg2[8])
    sub_140596d10(&var_50, &arg2[0x18])
    int128_t zmm0_3 = *(arg2 + 0x28)
    void* var_110
    sub_140596d10(&var_110, &var_60)
    int64_t var_100
    sub_140596d10(&var_100, &var_50)
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    int32_t var_d0_1 = 0xffffffff
    int64_t var_c8
    sub_140b29d90(&var_c8)
    int64_t rcx_27 = var_50
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    int64_t rcx_28 = var_60
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    rsi_1 = sx.q(*(arg1 + 0x28))
    rbx_4 = arg1 + 0x20
    int32_t rax_19 = (rsi_1 + 1).d
    *(rbx_4 + 8) = rax_19
    
    if (rax_19 s> *(rbx_4 + 0xc))
        sub_1407755b0(rbx_4)
    
    char* rcx_31 = rsi_1 * 0x58 + *rbx_4
    *rcx_31 = rax_17
    *(rcx_31 + 8) = 0
    *(rcx_31 + 8) = var_110
    __builtin_memset(&var_110, 0, 0x20)
    int32_t var_108
    *(rcx_31 + 0x10) = var_108
    int32_t var_104
    *(rcx_31 + 0x14) = var_104
    *(rcx_31 + 0x18) = 0
    *(rcx_31 + 0x18) = var_100
    int32_t var_f8
    *(rcx_31 + 0x20) = var_f8
    int32_t var_f4
    *(rcx_31 + 0x24) = var_f4
    *(rcx_31 + 0x28) = zmm0_3
    *(rcx_31 + 0x38) = 0
    *(rcx_31 + 0x38) = var_e0_1
    int64_t var_e0_2 = 0
    *(rcx_31 + 0x40) = var_d8_1.d
    *(rcx_31 + 0x44) = var_d8_1:4.d
    int64_t var_d8_2 = 0
    *(rcx_31 + 0x48) = var_d0_1
    *(rcx_31 + 0x50) = var_c8
    
    if (var_e0_2 != 0)
        sub_140a74f90(var_e0_2)
    
    int64_t rcx_33 = var_100
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    rcx_34 = var_110
else
    void* var_30
    sub_140b6c240(&var_30, arg3 + 1, 1, nullptr)
    void* r13_1 = var_30
    int32_t rdx_1 = 0
    int64_t var_128 = 0
    int32_t rcx_3 = 0
    int32_t var_120_1 = 0
    int32_t var_11c_1 = 0
    
    if (r13_1 != -0x800 && *(r13_1 + 0x800) != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while ((r13_1 + 0x800)[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_128, rbx_1.d + 1)
            rcx_3 = var_11c_1
            rdx_1 = var_120_1
        
        int32_t rax_1 = rbx_1.d + 1 + rdx_1
        int32_t var_120_2 = rax_1
        
        if (rax_1 s> rcx_3)
            sub_140594770(&var_128)
        
        sub_1405a7220(var_128, rbx_1.d + 1, r13_1 + 0x800, rbx_1.d + 1, 0x3f)
    
    char rax_2 = *arg2
    sub_140596d10(&var_60, &arg2[8])
    sub_140596d10(&var_50, &arg2[0x18])
    int128_t zmm0 = *(arg2 + 0x28)
    int32_t rbx_3 = *(r13_1 + 0xc00)
    int64_t var_b8
    sub_140596d10(&var_b8, &var_60)
    int64_t var_a8
    sub_140596d10(&var_a8, &var_50)
    int64_t var_88
    sub_140596d10(&var_88, &var_128)
    int64_t var_70
    sub_140b29d90(&var_70)
    int64_t rcx_13 = var_50
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int64_t rcx_14 = var_60
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t rcx_15 = var_128
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    rsi_1 = sx.q(*(arg1 + 0x28))
    rbx_4 = arg1 + 0x20
    int32_t rax_4 = (rsi_1 + 1).d
    *(rbx_4 + 8) = rax_4
    
    if (rax_4 s> *(rbx_4 + 0xc))
        sub_1407755b0(rbx_4)
    
    char* rcx_18 = rsi_1 * 0x58 + *rbx_4
    *rcx_18 = rax_2
    *(rcx_18 + 8) = 0
    *(rcx_18 + 8) = var_b8
    __builtin_memset(&var_b8, 0, 0x20)
    int32_t var_b0
    *(rcx_18 + 0x10) = var_b0
    int32_t var_ac
    *(rcx_18 + 0x14) = var_ac
    *(rcx_18 + 0x18) = 0
    *(rcx_18 + 0x18) = var_a8
    int32_t var_a0
    *(rcx_18 + 0x20) = var_a0
    int32_t var_9c
    *(rcx_18 + 0x24) = var_9c
    *(rcx_18 + 0x28) = zmm0
    *(rcx_18 + 0x38) = 0
    *(rcx_18 + 0x38) = var_88
    var_88 = 0
    int32_t var_80
    *(rcx_18 + 0x40) = var_80
    int32_t var_7c
    *(rcx_18 + 0x44) = var_7c
    var_80.q = 0
    *(rcx_18 + 0x48) = rbx_3
    *(rcx_18 + 0x50) = var_70
    int64_t rcx_19 = var_88
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_a8
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int64_t rcx_21 = var_b8
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    rcx_34 = var_30

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int64_t result = sx.q(rsi_1.d)
void* rdi_1 = result * 0x58 + *rbx_4

if (*(rdi_1 + 0x20) s> 1)
    return result

return sub_140597df0(rdi_1 + 0x18, sub_140af3580(arg1))
