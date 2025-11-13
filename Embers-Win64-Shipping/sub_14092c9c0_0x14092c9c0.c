// 函数: sub_14092c9c0
// 地址: 0x14092c9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg2[1].d
int64_t* rbx = *arg2

if (i_1 != 0)
    int32_t i
    
    do
        sub_14091b3c0(&rbx[3])
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[0xe]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1408e7380(arg2, 0)

int32_t rdi = 0
int64_t* var_158_1
int64_t* result

while (true)
    int16_t* var_d8
    sub_140a2e390(&var_d8, u"Achievement_%d_Id", zx.q(rdi))
    int16_t* const r8_2 = &data_142d40450
    uint64_t var_1a8 = 0
    int32_t var_d0
    
    if (var_d0 != 0)
        r8_2 = var_d8
    
    int32_t var_1a0_1 = 0
    int16_t* rdx
    
    if (arg1[3].d == 0)
        rdx = &data_142d40450
    else
        rdx = arg1[2]
    
    int64_t zmm6_1
    result, zmm6_1 = sub_140af5b90(data_143ddb400, rdx, r8_2, &var_1a8, arg1)
    int32_t rbx_1
    
    if (result.b != 0)
        rbx_1 = var_1a0_1
        var_158_1 = var_1a8
        var_1a8 = 0
        int32_t var_150_2 = rbx_1
        int64_t var_1a0_2 = 0
    else
        uint64_t rcx_5 = var_1a8
        rbx_1 = 0
        var_158_1 = nullptr
        int32_t var_150_1 = 0
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    int16_t* rcx_6 = var_d8
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (rbx_1 s<= 1)
        break
    
    int64_t var_148 = 0
    int64_t var_140_1 = 0
    int64_t var_130
    sub_140a96170(&var_130)
    int64_t var_118
    sub_140a96170(&var_118)
    int64_t var_100
    sub_140a96170(&var_100)
    int32_t r8_3 = var_140_1:4.d
    var_140_1.d = rbx_1
    
    if (rbx_1 != 0 || r8_3 != 0)
        sub_1405a4c70(&var_148, rbx_1, r8_3)
        memcpy(var_148, var_158_1, rbx_1 * 2)
    else
        var_140_1:4.d = 0
    
    int16_t* var_c8
    sub_140a2e390(&var_c8, u"Achievement_%d_bIsHidden", zx.q(rdi))
    int16_t* const r8_7 = &data_142d40450
    uint64_t var_198 = 0
    int32_t var_c0
    
    if (var_c0 != 0)
        r8_7 = var_c8
    
    int32_t var_190_1 = 0
    int16_t* rdx_3
    
    if (arg1[3].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = arg1[2]
    
    int16_t* const rcx_15
    int16_t* rbx_2
    
    if (sub_140af5b90(data_143ddb400, rdx_3, r8_7, &var_198, arg1) != 0)
        rbx_2 = var_198
        rcx_15 = rbx_2
        int16_t* var_88_2 = rbx_2
        var_198 = 0
        int32_t var_80_1 = var_190_1
        int64_t var_190_2 = 0
        
        if (var_190_1 == 0)
            rcx_15 = &data_142d40450
    else
        uint64_t rcx_14 = var_198
        rbx_2 = nullptr
        int64_t var_88_1 = 0
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rcx_15 = &data_142d40450
    
    bool var_e8_1 = sub_140a54510(rcx_15, u"true") == 0
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    int16_t* rcx_17 = var_c8
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int16_t* var_b8
    sub_140a2e390(&var_b8, u"Achievement_%d_Title", zx.q(rdi))
    int16_t* r8_9 = &data_142d40450
    uint64_t var_1d8 = 0
    int32_t var_b0
    
    if (var_b0 != 0)
        r8_9 = var_b8
    
    int64_t var_1d0_1 = 0
    int16_t* rdx_4
    
    if (arg1[3].d == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = arg1[2]
    
    uint64_t var_188
    int32_t var_180
    
    if (sub_140af5b90(data_143ddb400, rdx_4, r8_9, &var_1d8, arg1) != 0)
        var_188 = var_1d8
        var_180 = var_1d0_1.d
        int32_t var_17c_1 = var_1d0_1:4.d
        int64_t var_1d0_2 = 0
        var_1d8 = 0
    else
        uint64_t rcx_20 = var_1d8
        var_188 = 0
        var_180.q = 0
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
    void var_78
    int64_t* rax_8 = sub_140aae2f0(&var_78, &var_188)
    int64_t rdx_6 = var_130
    var_130 = *rax_8
    *rax_8 = rdx_6
    int64_t var_128
    int64_t rdx_7 = var_128
    var_128 = rax_8[1]
    rax_8[1] = rdx_7
    int32_t var_120_1 = rax_8[2].d
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t rax_12 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rax_12 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    uint64_t rcx_26 = var_188
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int16_t* rcx_27 = var_b8
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    int16_t* var_a8
    sub_140a2e390(&var_a8, u"Achievement_%d_LockedDesc", zx.q(rdi))
    int16_t* r8_11 = &data_142d40450
    uint64_t var_1c8 = 0
    int32_t var_a0
    
    if (var_a0 != 0)
        r8_11 = var_a8
    
    int64_t var_1c0_1 = 0
    int16_t* rdx_8
    
    if (arg1[3].d == 0)
        rdx_8 = &data_142d40450
    else
        rdx_8 = arg1[2]
    
    uint64_t var_178
    int32_t var_170
    
    if (sub_140af5b90(data_143ddb400, rdx_8, r8_11, &var_1c8, arg1) != 0)
        var_178 = var_1c8
        var_170 = var_1c0_1.d
        int32_t var_16c_1 = var_1c0_1:4.d
        int64_t var_1c0_2 = 0
        var_1c8 = 0
    else
        uint64_t rcx_30 = var_1c8
        var_178 = 0
        var_170.q = 0
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
    void var_60
    int64_t* rax_18 = sub_140aae2f0(&var_60, &var_178)
    int64_t rdx_10 = var_118
    var_118 = *rax_18
    *rax_18 = rdx_10
    int64_t var_110
    int64_t rdx_11 = var_110
    var_110 = rax_18[1]
    rax_18[1] = rdx_11
    int32_t var_108_1 = rax_18[2].d
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t rax_22 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*(*var_58 + 8))(var_58, 1)
    
    uint64_t rcx_36 = var_178
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    int16_t* rcx_37 = var_a8
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    int16_t* var_98
    sub_140a2e390(&var_98, u"Achievement_%d_UnlockedDesc", zx.q(rdi))
    int16_t* r8_13 = &data_142d40450
    uint64_t var_1b8 = 0
    int32_t var_90
    
    if (var_90 != 0)
        r8_13 = var_98
    
    int64_t var_1b0_1 = 0
    int16_t* rdx_12
    
    if (arg1[3].d == 0)
        rdx_12 = &data_142d40450
    else
        rdx_12 = arg1[2]
    
    uint64_t var_168
    int32_t var_160
    
    if (sub_140af5b90(data_143ddb400, rdx_12, r8_13, &var_1b8, arg1) != 0)
        var_168 = var_1b8
        var_160 = var_1b0_1.d
        int32_t var_15c_1 = var_1b0_1:4.d
        int64_t var_1b0_2 = 0
        var_1b8 = 0
    else
        uint64_t rcx_40 = var_1b8
        var_168 = 0
        var_160.q = 0
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
    void var_48
    int64_t* rax_28 = sub_140aae2f0(&var_48, &var_168)
    int64_t rdx_14 = var_100
    var_100 = *rax_28
    *rax_28 = rdx_14
    int64_t var_f8
    int64_t rdx_15 = var_f8
    var_f8 = rax_28[1]
    rax_28[1] = rdx_15
    int32_t var_f0_1 = rax_28[2].d
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rax_32 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    uint64_t rcx_46 = var_168
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    int16_t* rcx_47 = var_98
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    int64_t rbx_6 = sx.q(arg2[1].d)
    int32_t rax_34 = (rbx_6 + 1).d
    arg2[1].d = rax_34
    
    if (rax_34 s> *(arg2 + 0xc))
        sub_1405fdd60(arg2)
    
    int64_t* rbx_8 = rbx_6 * 0x70 + *arg2
    sub_140596d10(rbx_8, &var_148)
    rbx_8[2] = zmm6_1
    sub_1409191f0(&rbx_8[3], &var_130)
    sub_14091b3c0(&var_130)
    int64_t rcx_52 = var_148
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
    
    if (var_158_1 != 0)
        sub_140a74f90(var_158_1)
    
    rdi += 1

if (var_158_1 != 0)
    sub_140a74f90(var_158_1)

result.b = rdi s> 0
return result
