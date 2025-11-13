// 函数: sub_1422ddff0
// 地址: 0x1422ddff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
char rcx = arg1[6].b
uint64_t r13 = arg3
uint64_t var_1d8 = arg3

if (rcx - 1 u<= 1 || rcx u>= 6)
    goto label_1422de277

uint64_t* rsi_1

if (sub_140b1d530(arg4) == 0)
    rsi_1 = &arg1[7]
    sub_140597df0(rsi_1, arg4)
else
    int64_t* rax_3
    int32_t rdx
    rax_3, rdx = sub_140b257f0()
    uint64_t var_1b8 = 0
    int32_t rdi_1 = rax_3[1].d
    int64_t rbx_1 = *rax_3
    sub_1405a4c70(&var_1b8, sbb.d(rdx, rdx, rdi_1 != 0) + 0x11 + rdi_1, 0)
    memcpy(var_1b8, rbx_1, rdi_1 * 2)
    sub_140a20ba0(&var_1b8, u"BouncedWavFiles/", 0x10)
    uint64_t r13_1 = var_1b8
    int32_t rbx_2 = arg4[1].d
    uint64_t var_158_1 = r13_1
    var_1b8 = 0
    int32_t var_150_1 = rdi_1
    int32_t var_1ac
    int32_t var_14c_1 = var_1ac
    int32_t var_1b0_1
    var_1b0_1.q = 0
    uint64_t var_1c8
    int32_t var_1c0_1
    uint64_t rdi_3
    int32_t r12_1
    
    if (rdi_1 s> 1)
        int32_t rdi_4 = rbx_2 - 1
        
        if (rbx_2 == 0)
            rdi_4 = 0
        
        int32_t rax_4
        
        if (rdi_1 == 0)
            rax_4 = rdi_1 + 1
        
        if (rdi_1 != 0 || rdi_4 == 0)
            rax_4 = 0
        
        uint64_t var_1a8 = r13_1
        int32_t rdx_8 = rdi_4 + rax_4 + rdi_1
        int64_t var_158_2 = 0
        r13_1 = 0
        var_150_1.q = 0
        
        if (rdx_8 s> var_1ac)
            sub_1405947f0(&var_1a8, rdx_8)
        
        sub_140a20ba0(&var_1a8, *arg4, rdi_4)
        rdi_3 = var_1a8
        rbx_2 = rdi_1
        r12_1 = var_1ac
        var_1c8 = rdi_3
        var_1a8 = 0
        var_1c0_1 = rbx_2
        int32_t var_1bc_2 = r12_1
        int32_t var_1a0_1
        var_1a0_1.q = 0
    else
        uint64_t rdi_2 = *arg4
        var_1c8 = 0
        
        if (rbx_2 != 0)
            sub_1405a4c70(&var_1c8, rbx_2, 0)
            rdi_3 = var_1c8
            memcpy(rdi_3, rdi_2, rbx_2 * 2)
            int32_t var_1bc
            r12_1 = var_1bc
        else
            r12_1 = 0
            int32_t var_1bc_1 = 0
            rdi_3 = 0
    
    rsi_1 = &arg1[7]
    
    if (rsi_1 != &var_1c8)
        uint64_t rcx_11 = *rsi_1
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        *rsi_1 = rdi_3
        var_1c8 = 0
        var_1c0_1.q = 0
        rsi_1[1].d = rbx_2
        *(rsi_1 + 0xc) = r12_1
    else if (rdi_3 != 0)
        sub_140a74f90(rdi_3)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    int64_t var_130
    uint64_t* rax_5 = sub_140b11c80(&var_130, rsi_1)
    
    if (rsi_1 != rax_5)
        uint64_t rcx_15 = *rsi_1
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        *rsi_1 = *rax_5
        *rax_5 = 0
        rsi_1[1].d = rax_5[1].d
        *(rsi_1 + 0xc) = *(rax_5 + 0xc)
        rax_5[1] = 0
    
    int64_t rcx_17 = var_130
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    r13 = var_1d8

sub_140b214e0(rsi_1)
Concurrency::details::UMSThreadProxy::InternalSwitchTo(rsi_1)
arg1[6].b = 1
char result
int32_t rcx_21
result, rcx_21 = sub_1422e1490(arg1, rsi_1)

if (result != 0)
    int32_t rdi_5 = rsi_1[1].d
    uint64_t rbx_4 = *rsi_1
    var_1d8 = 0
    sub_1405a4c70(&var_1d8, sbb.d(rcx_21, rcx_21, rdi_5 != 0) + 2 + rdi_5, 0)
    memcpy(var_1d8, rbx_4, rdi_5 * 2)
    int32_t rcx_30 = sub_140a20ba0(&var_1d8, &data_142d5a024, 1)
    uint64_t r12_2 = var_1d8
    int32_t rbx_5 = *(r13 + 8)
    uint64_t var_148_1 = r12_2
    var_1d8 = 0
    int32_t var_140_1 = rdi_5
    int32_t var_1cc
    int32_t var_13c_1 = var_1cc
    int32_t var_1d0_1
    var_1d0_1.q = 0
    uint64_t var_178
    int32_t rdx_16
    uint64_t rdi_6
    
    if (rdi_5 s> 1)
        int32_t rdi_7 = rbx_5 - 1
        
        if (rbx_5 == 0)
            rdi_7 = 0
        
        int32_t rcx_33
        
        if (rdi_5 == 0)
            rcx_33 = rdi_5 + 1
        
        if (rdi_5 != 0 || rdi_7 == 0)
            rcx_33 = 0
        
        uint64_t var_198 = r12_2
        int32_t rdx_20 = rcx_33 + rdi_7 + rdi_5
        int64_t var_148_2 = 0
        r12_2 = 0
        var_140_1.q = 0
        
        if (rdx_20 s> var_1cc)
            sub_1405947f0(&var_198, rdx_20)
        
        rcx_30 = sub_140a20ba0(&var_198, *r13, rdi_7)
        rdi_6 = var_198
        rbx_5 = rdi_5
        rdx_16 = var_1cc
        var_198 = 0
        int32_t var_190_1
        var_190_1.q = 0
    else
        int64_t r13_2 = *r13
        rdi_6 = 0
        var_178 = 0
        
        if (rbx_5 != 0)
            sub_1405a4c70(&var_178, rbx_5, 0)
            rdi_6 = var_178
            rcx_30 = memcpy(rdi_6, r13_2, rbx_5 * 2)
            int32_t var_16c
            rdx_16 = var_16c
        else
            rdx_16 = 0
    
    uint64_t var_188 = rdi_6
    var_178 = 0
    int32_t var_170
    var_170.q = 0
    int32_t rax_14 = sbb.d(rcx_30, rcx_30, rbx_5 != 0) + 5 + rbx_5
    
    if (rax_14 s> rdx_16)
        sub_1405947f0(&var_188, rax_14)
    
    sub_140a20ba0(&var_188, u".wav", 4)
    uint64_t rbx_6 = var_188
    var_188 = 0
    int32_t var_180_1
    var_180_1.q = 0
    uint64_t var_168 = rbx_6
    int32_t var_160_1 = rbx_5
    int32_t var_15c_1 = rdx_16
    
    if (rsi_1 != &var_168)
        uint64_t rcx_39 = *rsi_1
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        *rsi_1 = rbx_6
        rsi_1[1].d = rbx_5
        var_160_1.q = 0
        var_168 = 0
        *(rsi_1 + 0xc) = rdx_16
    else if (rbx_6 != 0)
        sub_140a74f90(rbx_6)
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)
    
    sub_1422dbf70(arg1, arg2)
    int64_t rax_15 = *arg5
    int128_t* var_c8 = nullptr
    
    if (rax_15 != 0)
        void* rax_16 = arg5[2]
        void* rcx_43 = &arg5[4]
        
        if (rax_16 != 0)
            rcx_43 = rax_16
        
        (**rcx_43)(rcx_43, &var_c8)
    
    int64_t* rax_18 = sub_140a82f30(0x50, 0x10)
    *rax_18 = &data_142f045c8
    rax_18[2] = rax_15
    rax_18[4] = var_c8
    int128_t var_b8
    int128_t zmm0_1 = var_b8
    var_c8 = nullptr
    *(rax_18 + 0x30) = zmm0_1
    int128_t var_a8
    *(rax_18 + 0x40) = var_a8
    int64_t rax_19 = rax_15
    
    if (rax_18[2] != 0)
        rax_19 = 0
    
    *rax_18 = &data_142fe82a8
    int64_t (* var_98)(int64_t* arg1)
    int64_t (* rax_20)(int64_t* arg1) = var_98
    
    if (rax_18 != -0x10)
        rax_20 = sub_14106bb20
    
    if (rax_19 != 0)
        int128_t* rax_21 = var_c8
        int128_t* rcx_46 = &var_b8
        
        if (rax_21 != 0)
            rcx_46 = rax_21
        
        (*(*rcx_46 + 0x10))(rcx_46)
    
    int64_t* rax_23 = j_sub_140a82f30(0xb0)
    int64_t* rbx_7 = rax_23
    void var_78
    
    if (rax_23 == 0)
        rbx_7 = nullptr
    else
        int64_t var_108 = 0
        *rbx_7 = &data_143321810
        int64_t (* var_118)(int64_t* arg1) = rax_20
        
        if (rax_20 != 0)
            int64_t* rcx_48 = &var_78
            
            if (rax_18 != 0)
                rcx_48 = rax_18
            
            (**rcx_48)(rcx_48, &var_108)
        
        sub_1422d62b0(&rbx_7[2], arg1, 3, &var_118)
        rbx_7[0x12].d = 0
        rbx_7[0x13] = 0
        rbx_7[0x14] = 0
    
    int64_t* rcx_50 = arg1[0xa]
    int64_t* rax_25 = rcx_50
    
    if (rcx_50 != rbx_7)
        arg1[0xa] = rbx_7
        rax_25 = rbx_7
        
        if (rcx_50 != 0)
            (*(*rcx_50 + 0x10))(rcx_50, 1)
            rax_25 = arg1[0xa]
    
    sub_1422f56f0(rax_25, data_143db7ac8)
    
    if (rax_20 != 0)
        int64_t* rcx_52 = &var_78
        
        if (rax_18 != 0)
            rcx_52 = rax_18
        
        (*(*rcx_52 + 0x10))(rcx_52)
    
    if (*arg5 != 0)
        void* rax_29 = arg5[2]
        void* rcx_53 = &arg5[4]
        
        if (rax_29 != 0)
            rcx_53 = rax_29
        
        (*(*rcx_53 + 0x10))(rcx_53)
    
    result = 1
else
    arg1[6].b = 4
label_1422de277:
    
    if (*arg5 != 0)
        void* rax_8 = arg5[2]
        void* rcx_22 = &arg5[4]
        
        if (rax_8 != 0)
            rcx_22 = rax_8
        
        (*(*rcx_22 + 0x10))(rcx_22)
    
    result = 0

__security_check_cookie(rax_1 ^ &var_1f8)
return result
