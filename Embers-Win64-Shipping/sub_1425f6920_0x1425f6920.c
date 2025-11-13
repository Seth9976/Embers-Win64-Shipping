// 函数: sub_1425f6920
// 地址: 0x1425f6920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t r13 = data_143f70ce8
int32_t rsi = 0
int32_t var_e8 = 0
int128_t zmm6 = arg4
sub_140b34200("HighlightRecorder_Save", r13)
bool z

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
    z = true
else
    *(arg1 + 8)
    z = false

bool z_1

if (not(z))
    if (0 == *(arg1 + 0xd0))
        *(arg1 + 0xd0) = 0
        z_1 = true
    else
        *(arg1 + 0xd0)
        z_1 = false

int64_t result

if (not(z) && z_1)
    int32_t rdx_2 = 0
    int32_t var_d8_1 = 0
    int32_t rcx_1 = 0
    int32_t var_d4_1 = 0
    int64_t var_e0 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_e0, rbx_1.d + 1)
            rcx_1 = var_d4_1
            rdx_2 = var_d8_1
        
        int32_t rax_6 = rdx_2 + rbx_1.d + 1
        var_d8_1 = rax_6
        
        if (rax_6 s> rcx_1)
            sub_140594770(&var_e0)
        
        UnDecorator::getReferenceType(var_e0, arg2, (rbx_1.d + 1) * 2)
    
    *(arg1 + 0xd0)
    *(arg1 + 0xd0) = 1
    
    if (arg1 + 0x90 != arg3)
        int128_t zmm2 = *(arg1 + 0x90)
        arg4 = *(arg1 + 0xa0)
        int128_t zmm4_1 = *(arg1 + 0xb0)
        int128_t zmm5_1 = *(arg1 + 0xc0)
        *(arg1 + 0x90) = *arg3
        *(arg1 + 0xa0) = *(arg3 + 0x10)
        *(arg1 + 0xb0) = *(arg3 + 0x20)
        *(arg1 + 0xc0) = *(arg3 + 0x30)
        *arg3 = zmm2
        *(arg3 + 0x10) = arg4
        *(arg3 + 0x20) = zmm4_1
        *(arg3 + 0x30) = zmm5_1
    
    int32_t rax_8 = data_143f70ce8
    sub_140b34200("HighlightRecorder_SaveThreadCreation", rax_8)
    void* r15_1 = arg1 + 0x80
    int64_t* rcx_6 = *r15_1
    
    if (rcx_6 != 0 && sub_140a80fb0(rcx_6) != 0)
        sub_140a81580(*r15_1)
    
    void** rax_10 = j_sub_140a82f30(0x10)
    int64_t (* var_98)(int64_t* arg1)
    int64_t* var_88
    void** rax_15
    uint64_t r14_1
    uint64_t var_b8
    
    if (rax_10 == 0)
        r14_1 = var_b8
        rax_15 = nullptr
    else
        var_b8 = 0
        int32_t var_d0_1
        uint64_t var_c8_1
        
        if (var_d8_1 != 0)
            sub_1405a4c70(&var_b8, var_d8_1, 0)
            uint64_t rax_11 = var_b8
            var_c8_1 = rax_11
            memcpy(rax_11, var_e0, var_d8_1 * 2)
            int32_t var_ac
            var_d0_1 = var_ac
        else
            var_d0_1 = 0
            var_c8_1 = 0
        
        int64_t* rax_13 = sub_140a82f30(0x28, 8)
        rax_13[1] = arg1
        r14_1 = 0
        rax_13[2] = var_c8_1
        *(rax_13 + 0x1c) = var_d0_1
        rax_13[3].d = var_d8_1
        rax_13[4] = zmm6.q
        *rax_13 = &data_14344b558
        var_88 = rax_13
        int64_t (* rax_14)(int64_t* arg1) = var_98
        
        if (rax_13 != -8)
            rax_14 = j_sub_1425f47c0
        
        int64_t var_f0_1 = -1
        var_98 = rax_14
        rax_15 = sub_140a61790(rax_10, u"Highlight Saving", &var_98, 0, 0, var_f0_1)
        rsi = 3
    void* rbx_4 = *r15_1
    
    if (rbx_4 != rax_15)
        *r15_1 = rax_15
        
        if (rbx_4 != 0)
            sub_1405970a0(rbx_4)
            j_sub_140a74f90(rbx_4)
    
    if ((rsi.b & 2) != 0)
        rsi &= 0xfffffffd
        
        if (var_98 != 0)
            void var_78
            int64_t* rcx_14 = &var_78
            
            if (var_88 != 0)
                rcx_14 = var_88
            
            (*(*rcx_14 + 0x10))(rcx_14)
    
    if ((rsi.b & 1) != 0 && r14_1 != 0)
        sub_140a74f90(r14_1)
    
    sub_140b38680("HighlightRecorder_SaveThreadCreation", rax_8)
    
    if (var_e0 != 0)
        sub_140a74f90(var_e0)
    
    sub_140b38680("HighlightRecorder_Save", r13)
    
    if (*arg3 != 0)
        void* rax_18 = arg3[2]
        void* rcx_17 = &arg3[4]
        
        if (rax_18 != 0)
            rcx_17 = rax_18
        
        (*(*rcx_17 + 0x10))(rcx_17)
    
    result.b = 1
else
    sub_140b38680("HighlightRecorder_Save", r13)
    
    if (*arg3 != 0)
        void* rax_4 = arg3[2]
        void* rcx = &arg3[4]
        
        if (rax_4 != 0)
            rcx = rax_4
        
        (*(*rcx + 0x10))(rcx)
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_118)
return result
