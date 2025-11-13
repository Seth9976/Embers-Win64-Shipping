// 函数: sub_141d91550
// 地址: 0x141d91550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg2[1].d
int64_t* rbx = nullptr
int64_t r13 = *arg2
int64_t var_c8 = 0
int32_t var_c0 = r14
int64_t r15 = 0
int64_t r13_1

if (r14 != 0)
    sub_1405a4c70(&var_c8, r14, 0)
    r15 = var_c8
    memcpy(r15, r13, r14 * 2)
    r14 = arg2[1].d
    r13_1 = r15
else
    int32_t var_bc_1 = 0
    r13_1 = 0

int32_t var_70 = 6
void** const var_78 = &data_142dd6130
char rax = arg2[0xb].b
char var_68 = rax
int16_t* const var_98

if (r14 s> 1)
label_141d91643:
    int16_t* var_a8
    sub_141d8fd20(&var_a8, &var_c8)
    int16_t* const r13_2 = &data_142d40450
    int16_t* const r14_2 = &data_142d40450
    int32_t var_a0
    
    if (var_a0 != 0)
        r14_2 = var_a8
    
    int64_t* rax_4 = sub_140b257f0()
    int16_t* rcx_7
    
    if (rax_4[1].d == 0)
        rcx_7 = &data_142d40450
    else
        rcx_7 = *rax_4
    
    var_98 = rcx_7
    wchar16 const* const var_90_1 = u"Demos/"
    uint64_t var_b8 = 0
    int32_t var_b0_1 = 0
    sub_140b0f5f0(&var_b8, &var_98, 2)
    int16_t* const rax_8 = &data_142d40450
    int16_t* const var_90_2 = r14_2
    
    if (var_b0_1 != 0)
        rax_8 = var_b8
    
    var_98 = rax_8
    uint64_t var_88 = 0
    int32_t var_80_1 = 0
    sub_140b0f5f0(&var_88, &var_98, 2)
    uint64_t rcx_12 = var_b8
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_a8
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    uint64_t* rax_9 = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_98, &var_c8)
    uint64_t rcx_15 = *rax_9
    int32_t rdx_7 = rax_9[1].d
    int32_t rdx_8 = neg.d(rdx_7)
    *rax_9 = 0
    int32_t r8_2 = rax_9[1].d
    var_a8 = rcx_15
    int32_t rcx_16 = *(rax_9 + 0xc)
    int32_t rdx_11 = sbb.d(rdx_8, rdx_8, rdx_7 != 0) + 8 + r8_2
    int32_t var_9c_1 = rcx_16
    rax_9[1] = 0
    
    if (rdx_11 s> rcx_16)
        sub_1405947f0(&var_a8, rdx_11)
    
    sub_140a20ba0(&var_a8, u".header", 7)
    int16_t* const rcx_19 = var_98
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    uint64_t* rax_10 = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_98, &var_c8)
    uint64_t rcx_21 = *rax_10
    int32_t rdx_13 = rax_10[1].d
    int32_t rdx_14 = neg.d(rdx_13)
    *rax_10 = 0
    int32_t r8_3 = rax_10[1].d
    var_b8 = rcx_21
    int32_t rcx_22 = *(rax_10 + 0xc)
    int32_t rdx_17 = sbb.d(rdx_14, rdx_14, rdx_13 != 0) + 6 + r8_3
    var_b0_1 = r8_3
    rax_10[1] = 0
    
    if (rdx_17 s> rcx_22)
        sub_1405947f0(&var_b8, rdx_17)
    
    sub_140a20ba0(&var_b8, u".demo", 5)
    int16_t* const rcx_25 = var_98
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    r15 = var_c8
    
    if (arg1 + 0x30 != &var_c8)
        int32_t r8_4 = *(arg1 + 0x3c)
        *(arg1 + 0x38) = var_c0
        
        if (var_c0 != 0 || r8_4 != 0)
            sub_1405a4c70(arg1 + 0x30, var_c0, r8_4)
            memcpy(*(arg1 + 0x30), r15, var_c0 * 2)
        else
            *(arg1 + 0x3c) = 0
    
    int16_t* r14_5
    
    if (arg2[0xb].b != 0)
        sub_140a464c0()
        int16_t* const rdx_22 = &data_142d40450
        int64_t r9_2
        r9_2.b = 1
        
        if (var_80_1 != 0)
            rdx_22 = var_88
        
        (*(data_14399ea08 + 0x60))(&data_14399ea08, rdx_22, 0, r9_2)
        sub_140a464c0()
        int16_t* const rdx_23 = &data_142d40450
        int64_t r8_7
        r8_7.b = 1
        
        if (var_80_1 != 0)
            rdx_23 = var_88
        
        char const (* r9_3)[0x4] = data_14399ea08
        (*(r9_3 + 0x58))(&data_14399ea08, rdx_23, r8_7, r9_3)
        sub_140a464c0()
        uint64_t rdx_24 = &data_142d40450
        
        if (rcx_22 != 0)
            rdx_24 = var_b8
        
        char const (* r9_4)[0x4] = data_14399ea08
        int64_t rax_21 = (*(r9_4 + 0x20))(&data_14399ea08, rdx_24, 0x10, r9_4)
        int64_t* rcx_37 = *(arg1 + 0x18)
        
        if (rcx_37 != rax_21)
            *(arg1 + 0x18) = rax_21
            
            if (rcx_37 != 0)
                (**rcx_37)(rcx_37, 1)
        
        sub_140a464c0()
        
        if (r8_2 != 0)
            r13_2 = var_a8
        
        char const (* r9_5)[0x4] = data_14399ea08
        int64_t rax_23 = (*(r9_5 + 0x20))(&data_14399ea08, r13_2, 0x10, r9_5)
        int64_t* rcx_38 = *(arg1 + 0x10)
        
        if (rcx_38 != rax_23)
            *(arg1 + 0x10) = rax_23
            
            if (rcx_38 != 0)
                (**rcx_38)(rcx_38, 1)
        
        *(arg1 + 0x28) = 1
        *(arg1 + 0x40) = 0
        *(arg1 + 0x54) = arg2[0xa].d
        *(arg1 + 0x58) = *(arg2 + 0x54)
        sub_140597df0(arg1 + 0x60, &arg2[2])
        sub_141d91d20(arg1 + 0x30, arg1 + 0x48)
        r14_5 = var_a8
    else
        void var_60
        void*** rax_12 = sub_141d90b00(&var_60, arg1 + 0x30)
        *(arg1 + 0x50) = rax_12[1].d
        *(arg1 + 0x54) = *(rax_12 + 0xc)
        *(arg1 + 0x58) = rax_12[2].d
        void* rcx_32 = arg1 + 0x60
        
        if (rcx_32 != &rax_12[3])
            int64_t rax_13 = *rcx_32
            
            if (rax_13 != 0)
                sub_140a74f90(rax_13)
                rcx_32 = arg1 + 0x60
            
            *rcx_32 = rax_12[3]
            rax_12[3] = 0
            *(rcx_32 + 8) = rax_12[4].d
            *(rcx_32 + 0xc) = *(rax_12 + 0x24)
            rax_12[4] = 0
        
        *(arg1 + 0x70) = rax_12[5].d
        *(arg1 + 0x74) = *(rax_12 + 0x2c)
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        sub_141d90d30(arg1)
        sub_140a464c0()
        r14_5 = var_a8
        
        if (r8_2 != 0)
            r13_2 = r14_5
        
        char const (* r9_1)[0x4] = data_14399ea08
        int64_t rax_19 = (*(r9_1 + 0x18))(&data_14399ea08, r13_2, 4, r9_1)
        int64_t* rcx_36 = *(arg1 + 0x10)
        
        if (rcx_36 != rax_19)
            *(arg1 + 0x10) = rax_19
            
            if (rcx_36 != 0)
                (**rcx_36)(rcx_36, 1)
        
        *(arg1 + 0x28) = 2
    
    if (*(arg1 + 0x18) != 0)
        int32_t rax_27 = var_70
        
        if (*(arg1 + 0x10) != 0)
            rax_27 = 0
        
        int32_t var_70_2 = rax_27
    
    if (arg3[1].d != 0)
        int64_t* rcx_41 = *arg3
        
        if (rcx_41 != 0 && (*(*rcx_41 + 0x28))(rcx_41) != 0)
            if (arg3[1].d != 0)
                rbx = *arg3
            
            (*(*rbx + 0x50))(rbx, &var_78)
    
    uint64_t rax_31 = var_b8
    
    if (rax_31 != 0)
        sub_140a74f90(rax_31)
    
    if (r14_5 != 0)
        sub_140a74f90(r14_5)
    
    uint64_t rcx_45 = var_88
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
else
    if (rax != 0)
        int64_t* rax_1 = sub_141d8f6a0(&var_98)
        
        if (&var_c8 != rax_1)
            if (r13_1 != 0)
                sub_140a74f90(r13_1)
            
            int64_t rcx_4 = *rax_1
            *rax_1 = 0
            var_c0 = rax_1[1].d
            int32_t var_bc_2 = *(rax_1 + 0xc)
            rax_1[1] = 0
            var_c8 = rcx_4
        
        int16_t* const rcx_5 = var_98
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        goto label_141d91643
    
    int32_t var_70_1 = 2
    
    if (arg3[1].d != 0)
        int64_t* rcx_8 = *arg3
        
        if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
            if (arg3[1].d != 0)
                rbx = *arg3
            
            (*(*rbx + 0x50))(rbx, &var_78)
var_78 = &data_142d5a028

if (r15 == 0)
    return &data_142d5a028

return sub_140a74f90(r15)
