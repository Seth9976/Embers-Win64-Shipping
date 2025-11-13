// 函数: sub_140662490
// 地址: 0x140662490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rcx = *arg3
int64_t* r14 = arg4
int128_t* var_78 = arg3[2]
arg3[2] = 0
int64_t var_88 = rcx
int128_t zmm1 = *(arg3 + 0x30)
int128_t var_68 = *(arg3 + 0x20)

if (rcx != 0)
    *arg3 = 0

void*** rax_3 = sub_1405eac40(arg4)
void*** rdi = rax_3
void*** var_e8
void*** r12

if (rdi == 0)
label_140662584:
    var_e8 = rdi
    r12 = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
else
    rdi[1].d += 1
    
    if (rax_3 == 0)
        goto label_140662584
    
    rax_3[1].d -= 1
    
    if (rax_3[1].d != 1)
        goto label_140662584
    
    (**rax_3)(rax_3)
    int32_t rax_6 = *(rax_3 + 0xc)
    *(rax_3 + 0xc) -= 1
    
    if (rax_6 != 1)
        goto label_140662584
    
    (*rax_3)[1](rax_3, 1)
    r12 = rdi
    var_e8 = rdi
    rdi[1].d += 1

if (arg2 == 0 || arg2 == 1)
    void var_a8
    void** rax_32 = sub_1405f45f0(&var_a8, nullptr, 0xff)
    int32_t rcx_22 = 2
    void* rdx_4 = *rax_32
    
    if (arg2 == 0)
        rcx_22 = 0xff
    
    *(rdx_4 + 0x10) = var_88
    *(rdx_4 + 0x20) = var_78
    var_78 = nullptr
    *(rdx_4 + 0x30) = var_68
    *(rdx_4 + 0x40) = zmm1
    int64_t rax_35 = var_88
    
    if (*(rdx_4 + 0x10) != 0)
        rax_35 = 0
    
    var_88 = rax_35
    *(rdx_4 + 0x58) = rdi
    rdi = nullptr
    *(rdx_4 + 0x50) = &rax_3[2]
    *(rdx_4 + 0x60) = 0
    *(rdx_4 + 0x68) = rcx_22
    void* rcx_23 = *rax_32
    int32_t r8_1 = rax_32[2].d
    int64_t* rdx_5 = rax_32[1]
    void** r9
    r9.b = 1
    int64_t* rbx_5 = *(rcx_23 + 0x78)
    
    if (rbx_5 == 0)
        sub_1405ff810(rcx_23, rdx_5, r8_1, r9.b)
        arg1[1] = r12
        *arg1 = &rax_3[2]
    else
        rbx_5[9].d += 1
        sub_1405ff810(rcx_23, rdx_5, r8_1, r9.b)
        rbx_5[9].d -= 1
        
        if (rbx_5[9].d != 1)
        label_14066278c:
            *arg1 = &rax_3[2]
            arg1[1] = r12
            
            if (rdi != 0)
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t rsi_1 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*rdi)[1](rdi, zx.q(rsi_1))
        else
            sub_140a2f6e0(rbx_5)
            arg1[1] = var_e8
            *arg1 = &rax_3[2]
    
    if (var_88 != 0)
        int128_t* rcx_25 = &var_68
        
        if (var_78 != 0)
            rcx_25 = var_78
        
        (*(*rcx_25 + 0x10))(rcx_25)
    
    if (*r14 != 0)
        void* rdx_6 = r14[2]
        void* rcx_26 = &r14[4]
        
        if (rdx_6 != 0)
            rcx_26 = rdx_6
        
        int64_t rdx_7 = *rcx_26
        (*(rdx_7 + 0x10))(rcx_26, rdx_7)
    
    __security_check_cookie(rax_1 ^ &var_128)
    return arg1

if (arg2 == 2)
    char rax_14
    int128_t zmm1_2
    rax_14, zmm1_2 = sub_140a54810()
    
    if (rax_14 == 0)
        int128_t* rcx_18 = &var_68
        
        if (var_78 != 0)
            rcx_18 = var_78
        
        var_88((*(*rcx_18 + 8))(rcx_18))
        rax_3[0x12].d = 0
        sub_1405fc0f0(&rax_3[2], zmm1_2, arg5, arg6)
    else
        CRITICAL_SECTION* var_d0
        sub_1405eb890(&var_d0)
        void*** rax_15 = j_sub_140a82f30(0x80)
        int64_t* var_c8
        int64_t* r14_1 = var_c8
        void*** rbx_3 = rax_15
        
        if (rax_15 == 0)
            rbx_3 = nullptr
        else
            if (r14_1 != 0)
                r14_1[1].d += 1
                r14_1 = var_c8
            
            *rbx_3 = &data_142d5ec40
            rbx_3[2] = var_88
            rbx_3[4] = var_78
            var_78 = nullptr
            *(rbx_3 + 0x30) = var_68
            *(rbx_3 + 0x40) = zmm1
            int64_t rax_18 = var_88
            
            if (rbx_3[2] != 0)
                rax_18 = 0
            
            var_88 = rax_18
            CRITICAL_SECTION* rax_19 = var_d0
            rbx_3[0xb] = rdi
            rdi = nullptr
            rbx_3[0xa] = &rax_3[2]
            rbx_3[0xc].b = 0
            rbx_3[0xd] = rax_19
            rbx_3[0xe] = r14_1
        
        int16_t* var_b8
        sub_140a2e390(&var_b8, u"TAsync %d", zx.q(sub_1405f81c0()))
        int16_t* const rdx_2 = &data_142d40450
        int32_t var_b0
        
        if (var_b0 != 0)
            rdx_2 = var_b8
        
        void*** rax_21
        int128_t zmm1_4
        rax_21, zmm1_4 = sub_140a6e140(rbx_3, rdx_2, 0, 0, -1, 0)
        CRITICAL_SECTION* rcx_12 = var_d0
        rcx_12->__offset(0x80).q = rax_21
        sub_1405fc0f0(rcx_12, zmm1_4, arg5, arg6)
        int16_t* rcx_13 = var_b8
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**var_c8)(var_c8)
                int32_t rax_24 = *(var_c8 + 0xc)
                *(var_c8 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*var_c8 + 8))(var_c8, 1)
        
        r14 = arg4
else if (arg2 == 3)
    void*** rax_8 = j_sub_140a82f30(0x70)
    
    if (rax_8 == 0)
        int64_t* rcx_8 = data_143db7ac8
        (*(*rcx_8 + 0x10))(rcx_8, 0, 0)
    else
        *rax_8 = &data_142d5ec70
        rax_8[2] = var_88
        rax_8[4] = var_78
        var_78 = nullptr
        *(rax_8 + 0x30) = var_68
        *(rax_8 + 0x40) = zmm1
        int64_t rax_11 = var_88
        
        if (rax_8[2] != 0)
            rax_11 = 0
        
        var_88 = rax_11
        rax_8[0xb] = rdi
        rdi = nullptr
        rax_8[0xa] = &rax_3[2]
        rax_8[0xc].b = 0
        int64_t* rcx_7 = data_143db7ac8
        (*(*rcx_7 + 0x10))(rcx_7)

goto label_14066278c
