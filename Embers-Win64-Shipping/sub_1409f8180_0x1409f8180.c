// 函数: sub_1409f8180
// 地址: 0x1409f8180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_d8
int32_t* var_b0 = &var_d8
bool cond:0 = arg3[1].d s> 1
int128_t zmm0 = var_b0.o
var_d8 = 0
int128_t var_58 = zmm0
char var_48 = 1

if (not(cond:0))
    var_d8 = 1
else if (arg1[1].d s<= 1)
    var_d8 = 3
else if (arg2[1].d s> 1)
    void* rax_2 = sub_140cde0b0()
    sub_140d19010(rax_2, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    int64_t var_a0_1 = 0
    void* rax_4 = sub_140d2dfc0(sub_1409f8ea0(), rax_2, 0, 0, 0, 0, 0, 0, 0)
    int64_t var_88
    int64_t* rax_5 = sub_140b254c0(&var_88)
    int32_t rcx_3 = arg3[1].d
    int32_t rbx_2 = rcx_3 - 1
    
    if (rcx_3 == 0)
        rbx_2 = 0
    
    int32_t rcx_5
    
    if (rax_5[1].d == 0)
        rcx_5 = 2
    
    if (rax_5[1].d != 0 || rbx_2 == 0xffffffff)
        rcx_5 = 1
    
    int64_t var_e8 = *rax_5
    *rax_5 = 0
    int32_t rax_7 = rax_5[1].d
    int32_t rax_8 = *(rax_5 + 0xc)
    rax_5[1] = 0
    int32_t rdx_4 = rax_7 + rbx_2 + rcx_5
    
    if (rdx_4 s> rax_8)
        sub_1405947f0(&var_e8, rdx_4)
    
    sub_140a2cf70(&var_e8, *arg3, rbx_2)
    
    if (rax_4 + 0x28 == &var_e8)
        int64_t rcx_9 = var_e8
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    else
        int64_t rcx_8 = *(rax_4 + 0x28)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *(rax_4 + 0x28) = var_e8
        *(rax_4 + 0x30) = rax_7
        *(rax_4 + 0x34) = rax_8
        int32_t var_e0_1
        var_e0_1.q = 0
        var_e8 = 0
    
    int64_t rcx_10 = var_88
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    sub_140597df0(rax_4 + 0x48, arg1)
    sub_140597df0(rax_4 + 0x58, arg2)
    int128_t var_78
    int64_t* rax_12 = sub_1409f70b0(&var_78, arg3)
    
    if (rax_4 + 0x38 != rax_12)
        *(rax_4 + 0x38) = *rax_12
        *rax_12 = 0
        sub_1405aeff0(rax_4 + 0x40, &rax_12[1])
    
    int64_t rbx_4 = -1
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t rax_15 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    int32_t rax_17 = *(rax_4 + 0xc)
    void* const rax_24
    
    if (rax_17 s>= data_143e1d9b4)
        rax_24 = nullptr
    else
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_17)
        uint32_t rdx_11 = zx.d(temp1_1)
        int32_t rax_19 = temp2_1 + rdx_11
        rax_24 =
            *(data_143e1d9a0 + (sx.q(rax_19 s>> 0x10) << 3)) + sx.q(zx.d(rax_19.w) - rdx_11) * 0x18
    
    *(rax_24 + 8) |= 0x40000000
    int64_t* rax_25 = sub_141802500()
    int64_t r8_2 = *rax_25
    (*(r8_2 + 0x40))(rax_25, &var_b0, r8_2)
    var_88.o = *arg5
    int128_t zmm0_1 = *arg4
    int64_t rax_27 = *var_b0
    var_78 = zmm0_1
    int64_t* rax_28 = (*(rax_27 + 0x90))(zmm0_1)
    int64_t* rax_29 = sub_140a84c80(0, 0x40, 0)
    
    if (rax_29 != 0)
        int128_t zmm0_2 = var_78
        *rax_29 = &data_142e49960
        rax_29[1] = sub_1409f7e70
        rax_29[2] = rax_4
        *(rax_29 + 0x18) = zmm0_2
        *(rax_29 + 0x28) = var_88.o
        rax_29[7] = sub_140a387b0()
        *rax_29 = &data_142e499b8
    
    void var_68
    
    if (&var_68 != rax_28)
        if (rax_29 != 0)
            (*(*rax_29 + 0x40))(rax_29, rax_28)
        else if (rax_28[1].d != 0)
            int64_t* rcx_25 = *rax_28
            
            if (rcx_25 != 0)
                (*(*rcx_25 + 0x38))(rcx_25, 0)
                int64_t rcx_26 = *rax_28
                
                if (rcx_26 != 0)
                    *rax_28 = sub_140a84c80(rcx_26, 0, 0)
                
                rax_28[1].d = 0
    
    if (rax_29 != 0)
        (*(*rax_29 + 0x38))(rax_29, 0)
        int64_t rax_35 = sub_140a84c80(rax_29, 0, 0)
        
        if (rax_35 != 0)
            sub_140a74f90(rax_35)
    
    int16_t* rdi_3
    
    if (arg1[1].d == 0)
        rdi_3 = &data_142d40450
    else
        rdi_3 = *arg1
    
    int32_t rdx_15 = 0
    int64_t var_d0 = 0
    int32_t rcx_30 = 0
    int64_t var_c8_1 = 0
    
    if (rdi_3 != 0 && *rdi_3 != 0)
        do
            rbx_4 += 1
        while (rdi_3[rbx_4] != 0)
        
        if (rbx_4.d + 1 s> 0)
            sub_1405947f0(&var_d0, rbx_4.d + 1)
            rcx_30 = var_c8_1:4.d
            rdx_15 = var_c8_1.d
        
        int32_t rax_36 = rbx_4.d + 1 + rdx_15
        var_c8_1.d = rax_36
        
        if (rax_36 s> rcx_30)
            sub_140594770(&var_d0)
        
        UnDecorator::getReferenceType(var_d0, rdi_3, (rbx_4.d + 1) * 2)
    
    int32_t* rcx_34 = var_b0
    (*(*rcx_34 + 0x50))(rcx_34, &var_d0)
    int64_t rcx_35 = var_d0
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    int64_t var_c0 = 0
    int32_t var_b8_1 = 0
    sub_1405947f0(&var_c0, 4)
    int32_t rax_38 = var_b8_1 + 4
    var_b8_1 = rax_38
    
    if (rax_38 s> 0)
        sub_140594770(&var_c0)
    
    UnDecorator::getReferenceType(var_c0, &data_142d85f90, 8)
    int32_t* rcx_39 = var_b0
    (*(*rcx_39 + 0x48))(rcx_39, &var_c0)
    int64_t rcx_40 = var_c0
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)
    
    int32_t* rcx_41 = var_b0
    (*(*rcx_41 + 0x88))(rcx_41)
    
    if (arg5 != 0)
        int32_t temp3_1 = *(arg5 + 8)
        *(arg5 + 8) -= 1
        
        if (temp3_1 == 1)
            (**arg5)(arg5)
            int32_t temp4_1 = *(arg5 + 0xc)
            *(arg5 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*arg5 + 8))(arg5, 1)
else
    var_d8 = 2

int64_t result = sub_1409f5f90(&var_58)
__security_check_cookie(rax_1 ^ &var_138)
return result
