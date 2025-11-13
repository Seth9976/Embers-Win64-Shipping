// 函数: sub_14092ae00
// 地址: 0x14092ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t* r14 = arg1
int64_t rbx = sx.q(arg2)
int64_t var_a8 = 0
int32_t var_a0 = 0
int128_t var_98 = zx.o(0)
int64_t var_b0
void var_78
int64_t var_70
void** const var_68
int64_t* var_58
uint64_t var_50
void arg_20
int64_t* rsi_1
int64_t* rdi_4
int64_t var_88
int32_t var_80

if (rbx.d u> 3)
    sub_140a2e390(&var_88, u"Invalid LocalUserNum=%d", zx.q(rbx.d))
    int64_t rcx_37 = var_a8
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    var_a8 = var_88
    var_a0 = var_80
    int32_t var_7c
    var_a0 = var_7c
    rsi_1 = var_98.q
    rdi_4 = var_98:8.q
else if (*(arg3 + 0x18) s<= 1)
    sub_1405947f0(&var_a8, 0x21)
    int32_t rax = var_a0 + 0x21
    var_a0 = rax
    
    if (rax s> 0)
        sub_140594770(&var_a8)
    
    __builtin_wcscpy(var_a8, u"Invalid account id, string empty")
    rsi_1 = var_98.q
    rdi_4 = var_98:8.q
else if (arg1[0x30].d == *(arg1 + 0x1ac))
label_14092af20:
    sub_140927df0(&var_88)
    int64_t* rax_3 = sub_140b58260(&arg_20, u"NULL", 1)
    int64_t rsi = var_88
    var_68 = &data_142e1f860
    int64_t rbx_1 = *rax_3
    int32_t var_48 = var_80
    int128_t var_60
    __builtin_memset(&var_60, 0, 0x18)
    
    if (var_80 != 0)
        sub_1405a4c70(&var_50, var_80, 0)
        memcpy(var_50, rsi, var_80 * 2)
    else
        int32_t var_44_1 = 0
    
    int64_t var_40_1 = rbx_1
    var_68 = &data_142e1f860
    int64_t* rax_6 = j_sub_140a82f30(0xb8)
    rsi_1 = rax_6
    
    if (rax_6 == 0)
        rsi_1 = nullptr
    else
        *rsi_1 = &data_142e1fef8
        void*** rax_7 = j_sub_140a82f30(0x30)
        void*** rdi_5 = rax_7
        
        if (rax_7 == 0)
            rdi_5 = nullptr
        else
            int64_t rbx_2 = *sub_140b58260(&arg_20, u"NULL", 1)
            rdi_5[1] = 0
            rdi_5[2] = 0
            *rdi_5 = &data_142e1f860
            rdi_5[3] = 0
            int64_t r13_1 = var_88
            rdi_5[4].d = var_80
            
            if (var_80 != 0)
                sub_1405a4c70(&rdi_5[3], var_80, 0)
                memcpy(rdi_5[3], r13_1, var_80 * 2)
                rdi_5[5] = rbx_2
                *rdi_5 = &data_142e1f860
            else
                *(rdi_5 + 0x24) = 0
                rdi_5[5] = rbx_2
                *rdi_5 = &data_142e1f860
        
        rsi_1[1] = rdi_5
        void*** rax_9 = j_sub_140a82f30(0x18)
        
        if (rax_9 == 0)
            rax_9 = nullptr
        else
            rax_9[1].d = 1
            *rax_9 = &data_142d42e98
            *(rax_9 + 0xc) = 1
            rax_9[2] = rdi_5
        
        rsi_1[2] = rax_9
        sub_140918950(&rsi_1[1], rdi_5)
        rsi_1[3] = 0
        void* rcx_15 = &rsi_1[5]
        rsi_1[4] = 0
        *(rcx_15 + 0x10) = 0
        *(rcx_15 + 0x18) = 0
        *(rcx_15 + 0x1c) = 0x80
        void* rax_10 = *(rcx_15 + 0x10)
        
        if (rax_10 != 0)
            rcx_15 = rax_10
        
        *rcx_15 = 0
        *(rcx_15 + 8) = 0
        void* rcx_16 = &rsi_1[0xf]
        rsi_1[9].d = 0xffffffff
        *(rsi_1 + 0x4c) = 0
        rsi_1[0xb] = 0
        rsi_1[0xc].d = 0
        rsi_1[0xd] = 0
        rsi_1[0xe] = 0
        *(rcx_16 + 0x10) = 0
        *(rcx_16 + 0x18) = 0
        *(rcx_16 + 0x1c) = 0x80
        void* rax_11 = *(rcx_16 + 0x10)
        
        if (rax_11 != 0)
            rcx_16 = rax_11
        
        *rcx_16 = 0
        *(rcx_16 + 8) = 0
        rsi_1[0x13].d = 0xffffffff
        *(rsi_1 + 0x9c) = 0
        rsi_1[0x15] = 0
        rsi_1[0x16].d = 0
    
    int64_t* rax_12 = j_sub_140a82f30(0x18)
    int64_t* rbx_3 = rax_12
    
    if (rax_12 == 0)
        rbx_3 = nullptr
    else
        rax_12[1].d = 1
        *(rax_12 + 0xc) = 1
        *rbx_3 = &data_142d42ea8
        rbx_3[2] = rsi_1
    
    rdi_4 = var_98:8.q
    var_98.q = 0
    var_98:8.q = 0
    
    if (rbx_3 != 0)
        rdi_4 = rbx_3
    
    sub_1405947f0(&var_98, 3)
    int32_t r13_2 = var_98:0xc.d
    int32_t r12_2 = var_98:8.d + 3
    var_98:8.d = r12_2
    
    if (r12_2 s> r13_2)
        sub_140594770(&var_98)
        r13_2 = var_98:0xc.d
        r12_2 = var_98:8.d
    
    int64_t rbx_4 = var_98.q
    UnDecorator::getReferenceType(rbx_4, &data_142e14158, 6)
    sub_1405d1820(&rsi_1[0xd], &var_98)
    int64_t* r14_1 = var_98:8.q
    *r14_1 = rbx_4
    r14_1[1].d = r12_2
    *(r14_1 + 0xc) = r13_2
    sub_140596d10(&r14_1[2], &var_88)
    r14_1[4].d = 0xffffffff
    int32_t rax_13 = r14_1[1].d
    int16_t* rdx_19
    
    if (rax_13 == 0)
        rdx_19 = &data_142d40450
    else
        rdx_19 = *r14_1
    
    int32_t rcx_22 = rax_13 - 1
    
    if (rax_13 == 0)
        rcx_22 = 0
    
    var_b0 = 0
    sub_1405d2a60(&rsi_1[0xd], &arg_20, sub_1405969c0(rcx_22, rdx_19), r14_1, var_98.d, nullptr)
    var_98.q = rsi_1
    var_98:8.q = rdi_4
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    r14 = arg1
    sub_140917ff0(&r14[0x39], &var_68, &var_98)
    int64_t* rbx_5 = var_98:8.q
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp7_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* rax_18 = (*(*rsi_1 + 8))(rsi_1, &var_78)
    var_98.q = *rax_18
    void* rdx_25 = rax_18[1]
    var_98:8.q = rdx_25
    
    if (rdx_25 != 0)
        *(rdx_25 + 8) += 1
    
    sub_1409175b0(&arg1[0x2f], &arg_10, &var_98)
    int64_t* rbx_6 = var_98:8.q
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp10_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
    
    if (var_70 != 0)
        int32_t temp9_1 = *(var_70 + 8)
        *(var_70 + 8) -= 1
        
        if (temp9_1 == 1)
            (**var_70)(var_70)
            int32_t temp11_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    uint64_t rcx_33 = var_50
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    if (var_58 != 0)
        int32_t temp12_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_58 + 8))(var_58, 1)
    
    int64_t rcx_35 = var_88
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    rbx = zx.q(arg_10)
else
    void* rcx_3 = arg1[0x37]
    void* r8 = &arg1[0x36]
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int32_t rax_2 = *(r8 + (((sx.q(arg1[0x38].d) - 1) & rbx) << 2))
    
    if (rax_2 == 0xffffffff)
        goto label_14092af20
    
    int64_t r8_1 = arg1[0x2f]
    int64_t rdx_4
    
    while (true)
        rdx_4 = sx.q(rax_2)
        int32_t* rcx_5 = rdx_4 << 5
        
        if (*(rcx_5 + r8_1) == rbx.d)
            break
        
        rax_2 = *(rcx_5 + r8_1 + 0x18)
        
        if (rax_2 == 0xffffffff)
            goto label_14092af20
    
    if (rax_2 == 0xffffffff)
        goto label_14092af20
    
    int64_t rdx_6 = rdx_4 << 5
    
    if (rdx_6 == neg.q(r8_1) || rdx_6 + r8_1 == -8)
        goto label_14092af20
    
    sub_140926f00(&r14[0x39], &arg_10, *(rdx_6 + r8_1 + 8))
    int64_t rax_4 = sx.q(arg_10)
    void* rdi_2
    
    if (rax_4.d != 0xffffffff)
        rdi_2 = r14[0x39] + rax_4 * 0x48
    
    int64_t* rdi_3
    
    if (rax_4.d == 0xffffffff || rdi_2 == 0)
        rdi_3 = nullptr
    else
        rdi_3 = rdi_2 + 0x30
    
    rsi_1 = *rdi_3
    rdi_4 = rdi_3[1]
    
    if (rdi_4 == 0)
        rdi_4 = var_98:8.q
    else
        rdi_4[1].d += 1
        
        if (rdi_4 == 0)
            rdi_4 = var_98:8.q

if (var_a0 s<= 1)
    int64_t* rax_32
    int64_t r8_13
    rax_32, r8_13 = (*(*rsi_1 + 8))(rsi_1, &var_78)
    r8_13.b = 1
    (*(*r14 + 0x88))(r14, zx.q(rbx.d), r8_13, *rax_32, &var_a8, var_b0)
    
    if (var_70 != 0)
        int32_t temp0_1 = *(var_70 + 8)
        *(var_70 + 8) -= 1
        
        if (temp0_1 == 1)
            (**var_70)(var_70)
            int32_t temp1_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    rbx.b = 1
else
    int64_t var_40_2 = data_143cecce0
    int128_t var_60_1
    __builtin_memset(&var_60_1, 0, 0x20)
    var_68 = &data_142e1f860
    int64_t var_40_3 = *sub_140b58260(&arg_20, u"NULL", 1)
    (*(*r14 + 0x88))(r14, zx.q(rbx.d), 0, &var_68, &var_a8, var_b0)
    uint64_t rcx_41 = var_50
    
    if (rcx_41 != 0)
        sub_140a74f90(rcx_41)
    
    if (var_58 != 0)
        int32_t temp2_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_58 + 8))(var_58, 1)
    
    rbx.b = 0

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp5_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_14 = *rdi_4
            (*(r8_14 + 8))(rdi_4, 1, r8_14)

int64_t rcx_49 = var_a8

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

return zx.q(rbx.b)
