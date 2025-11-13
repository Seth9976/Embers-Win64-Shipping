// 函数: sub_141e3d840
// 地址: 0x141e3d840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(*(arg1 + 0x28) + 0x730)

if (r14 == 0 || ((r14[1].d u>> 0xf).b & 1) != 0)
    if (*(arg2 + 0x40) == 0)
        return sub_141e0ba30(arg2 + 8)
    
    return sub_140324950(*(arg2 + 8), *(arg2 + 0x10), arg3)

void* rax_3 = sub_142475840()
void* rdx = r14[2]
int64_t rax_4 = sx.q(*(rax_3 + 0x38))
int64_t var_78
int64_t var_60

if (rax_4.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
    void* rsi_1 = *(arg1 + 0x28)
    
    if ((*(*r14 + 0x278))(r14, rdx) == 0)
        return sub_141e3eb50(r14, rsi_1 + 0x778, arg2 + 8, arg2 + 0x20, arg3)
    
    void* rax_8 = *(arg2 + 0x18)
    var_78 = 0
    int32_t rcx_2 = 0
    int32_t var_6c_1 = 0
    int32_t rdx_1 = 0
    __builtin_memset(&var_60, 0, 0x1b)
    void* var_68_1 = rax_8
    int32_t rdi_1 = *(rax_8 + 8)
    
    if (rdi_1 s> 0)
        int32_t var_70_1 = 0
        sub_141acba60(&var_78, rdi_1)
        rcx_2 = var_6c_1
        rdx_1 = var_70_1
    
    int32_t rax_9 = rdi_1 + rdx_1
    int32_t var_70_2 = rax_9
    
    if (rax_9 s> rcx_2)
        sub_141acb8e0(&var_78, rdx_1)
    
    sub_141decfa0(&var_60, arg2 + 0x20)
    uint32_t zmm1_1[0x8] =
        sub_141e3eb50(r14, rsi_1 + 0x778, &var_78, &var_60, sub_141e0ba30(arg2 + 8))
    int32_t rbx_1
    rbx_1.b = r14[0x11].b != 0
    return sub_141de0cd0(arg2 + 8, &var_78, arg2 + 0x20, &var_60, zmm1_1, 0x3f800000, rbx_1 + 1)

void* rax_19 = *(arg1 + 0x28)
int64_t* r14_1 = *(rax_19 + 0x730)

if (r14_1 == 0)
    goto label_141e3db20

void* rax_10 = sub_1424696d0()
void* rdx_7 = r14_1[2]
int64_t rax_11 = sx.q(*(rax_10 + 0x38))
uint8_t var_40
int64_t var_38
int64_t* result
int32_t zmm0_1

if (rax_11.d s<= *(rdx_7 + 0x38) && *(*(rdx_7 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
    char rax_14 = (*(*r14_1 + 0x278))(r14_1, rdx_7)
    int32_t rbx_3 = 0
    zmm0_1 = *(*(arg1 + 0x28) + 0x80c)
    var_40 = *(r14_1 + 0x16d)
    int32_t var_3c_1 = zmm0_1
    __builtin_memset(&var_38, 0, 0x20)
    
    if (rax_14 == 0)
        goto label_141e3db93
    
    if (*(arg2 + 0x40) == 0)
        sub_141e0ba30(arg2 + 8)
    else
        sub_140324950(*(arg2 + 8), *(arg2 + 0x10), arg3)
    
    void* rax_15 = *(arg2 + 0x18)
    int32_t rdx_9 = 0
    var_78 = 0
    int32_t var_6c_2 = 0
    __builtin_memset(&var_60, 0, 0x1b)
    void* var_68_2 = rax_15
    int32_t rsi_2 = *(rax_15 + 8)
    
    if (rsi_2 s> 0)
        int32_t var_70_3 = 0
        sub_141acba60(&var_78, rsi_2)
        rdx_9 = var_70_3
        rbx_3 = var_6c_2
    
    int32_t rax_16 = rsi_2 + rdx_9
    int32_t var_70_4 = rax_16
    
    if (rax_16 s> rbx_3)
        sub_141acb8e0(&var_78, rdx_9)
    
    uint32_t zmm1_2[0x8] = sub_141decfa0(&var_60, arg2 + 0x20)
    (*(*r14_1 + 0x2c0))(r14_1, &var_78, &var_60, &var_40)
    uint32_t zmm1_3[0x8] = sub_141de0cd0(arg2 + 8, &var_78, arg2 + 0x20, &var_60, zmm1_2, 
        0x3f800000, zx.d(r14_1[0x2a].b))
    result = sub_1403248d0(*(arg2 + 8), *(arg2 + 0x10), zmm1_3)
    goto label_141e3dba0

rax_19 = *(arg1 + 0x28)
label_141e3db20:
r14_1 = *(rax_19 + 0x730)

if (r14_1 == 0)
    goto label_141e3dbc2

void* rax_20 = sub_14246e590()
void* rdx_15 = r14_1[2]
int64_t rax_21 = sx.q(*(rax_20 + 0x38))

if (rax_21.d s> *(rdx_15 + 0x38) || *(*(rdx_15 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
    rax_19 = *(arg1 + 0x28)
label_141e3dbc2:
    r14_1 = *(rax_19 + 0x730)
    
    if (r14_1 == 0)
        goto label_141e3dd0c
    
    void* rax_26 = sub_14245c1f0()
    void* rdx_17 = r14_1[2]
    int64_t rax_27 = sx.q(*(rax_26 + 0x38))
    
    if (rax_27.d s<= *(rdx_17 + 0x38) && *(*(rdx_17 + 0x30) + (rax_27 << 3)) == rax_26 + 0x30)
        void* rax_29 = *(arg1 + 0x28)
        int32_t rbx_4 = 0
        int32_t var_3c_3 = *(rax_29 + 0x80c)
        var_40 = *(rax_29 + 0x6d9) u>> 1 & 1
        __builtin_memset(&var_38, 0, 0x20)
        
        if (sub_141ded410(&r14_1[0x15]) == 0)
            goto label_141e3db93
        
        sub_141e0ba30(arg2 + 8)
        bool cond:3_1 = sub_141ded690(&r14_1[0x15]) != 0
        var_78 = 0
        void* rax_32 = *(arg2 + 0x18)
        int32_t r12_2
        r12_2.b = cond:3_1
        int32_t var_6c_3 = 0
        __builtin_memset(&var_60, 0, 0x1b)
        int32_t rdx_18 = 0
        void* var_68_3 = rax_32
        int32_t rsi_3 = *(rax_32 + 8)
        
        if (rsi_3 s> 0)
            int32_t var_70_5 = 0
            sub_141acba60(&var_78, rsi_3)
            rdx_18 = var_70_5
            rbx_4 = var_6c_3
        
        int32_t rax_33 = rsi_3 + rdx_18
        int32_t var_70_6 = rax_33
        
        if (rax_33 s> rbx_4)
            sub_141acb8e0(&var_78, rdx_18)
        
        uint32_t zmm1_4[0x8] = sub_141decfa0(&var_60, arg2 + 0x20)
        (*(*r14_1 + 0x2c0))(r14_1, &var_78, &var_60, &var_40)
        result =
            sub_141de0cd0(arg2 + 8, &var_78, arg2 + 0x20, &var_60, zmm1_4, 0x3f800000, r12_2 + 1)
        goto label_141e3dba0
    
    rax_19 = *(arg1 + 0x28)
label_141e3dd0c:
    void* r14_2 = *(rax_19 + 0x730)
    
    if (r14_2 == 0)
    label_141e3de31:
        
        if (*(arg2 + 0x40) == 0)
            return sub_141e0ba30(arg2 + 8)
        
        return sub_140324950(*(arg2 + 8), *(arg2 + 0x10), arg3)
    
    void* rax_35 = sub_1424641d0()
    void* rdx_23 = *(r14_2 + 0x10)
    int64_t rax_36 = sx.q(*(rax_35 + 0x38))
    
    if (rax_36.d s> *(rdx_23 + 0x38))
        goto label_141e3de31
    
    result = *(rdx_23 + 0x30)
    
    if (result[rax_36] != rax_35 + 0x30)
        goto label_141e3de31
    
    if (*(r14_2 + 0x160) s> 0)
        void* rax_37 = *(arg2 + 0x18)
        int32_t rbx_5 = 0
        var_78 = 0
        int32_t rdx_24 = 0
        int32_t var_6c_4 = 0
        __builtin_memset(&var_60, 0, 0x1b)
        void* var_68_4 = rax_37
        int32_t r15_2 = *(rax_37 + 8)
        
        if (r15_2 s> 0)
            int32_t var_70_7 = 0
            sub_141acba60(&var_78, r15_2)
            rdx_24 = var_70_7
            rbx_5 = var_6c_4
        
        int32_t rax_38 = rdx_24 + r15_2
        int32_t var_70_8 = rax_38
        
        if (rax_38 s> rbx_5)
            sub_141acb8e0(&var_78, rdx_24)
        
        sub_141decfa0(&var_60, arg2 + 0x20)
        void* rax_39 = sub_141e21f60(r14_2, *(arg1 + 0x20))
        
        if (rax_39 != 0)
            sub_141ded410(rax_39)
        
        float zmm6_1[0x4] = sub_141e0ba30(&var_78)
        void* rcx_43 = *(arg1 + 0x28)
        int32_t var_a0
        var_a0.q = arg2 + 8
        return sub_141e0cc70(rcx_43, arg1 + 0x20, &var_78, &var_60, zmm6_1, *(rcx_43 + 0x800), 
            var_a0, arg2 + 0x20, *(rcx_43 + 0x804), *(rcx_43 + 0x808))
else
    zmm0_1 = *(*(arg1 + 0x28) + 0x80c)
    var_40 = r14_1[0x1b].b
    int32_t var_3c_2 = zmm0_1
    __builtin_memset(&var_38, 0, 0x20)
label_141e3db93:
    result = (*(*r14_1 + 0x2c0))(r14_1, arg2 + 8, arg2 + 0x20, &var_40)
label_141e3dba0:
    int64_t var_28
    
    if (var_28 != 0)
        result = sub_140a74f90(var_28)
    
    int64_t rcx_25 = var_38
    
    if (rcx_25 != 0)
        return sub_140a74f90(rcx_25)

return result
