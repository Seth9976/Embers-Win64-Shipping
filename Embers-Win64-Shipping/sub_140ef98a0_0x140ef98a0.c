// 函数: sub_140ef98a0
// 地址: 0x140ef98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t var_38 = __security_cookie ^ &var_f8
char var_c8 = 0
uint64_t rax_1

if (*(arg1 + 0x3c1) == 0)
    rax_1.b = 0
else
    if (*(arg1 + 0x3d0) != 0)
        int64_t* rcx = *(arg1 + 0x3c8)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x3d0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x3c8)
            
            *(arg1 + 0x3c0) = (*(*rcx_1 + 0x48))(rcx_1)
    
    rax_1 = zx.q(*(arg1 + 0x3c0))

int64_t* rbx_1 = arg3[1]
int64_t* var_b8 = rbx_1
int64_t var_c0 = *arg3
void*** var_b0
int64_t* var_a8
int64_t var_98
void var_8c
int64_t var_88

if (rax_1.b == 0)
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_98 = 0
    int32_t var_90_1 = 0
    memset(&var_8c, 0, 0x54)
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_2 = 0
    void**** rax_9 = sub_140ef7910(&var_b0, &var_98, &var_c0, arg1 + 0x130, arg4)
    *arg2 = *rax_9
    void* rcx_19 = rax_9[1]
    arg2[1] = rcx_19
    
    if (rcx_19 != 0)
        *(rcx_19 + 8) += 1
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t temp2_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_a8 + 8))(var_a8, 1)
    
    int32_t var_40_3 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    sub_1405e1b50(&var_88, 0)
    int64_t var_68_1
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    int64_t rcx_25 = var_88
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    int64_t rcx_26 = var_98
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_98 = 0
    int32_t var_90 = 0
    memset(&var_8c, 0, 0x54)
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c = 0x80
    int32_t var_58 = 0xffffffff
    int32_t var_54 = 0
    int64_t var_48 = 0
    int32_t var_40 = 0
    void**** rax_6 = sub_140ef74d0(&var_b0, &var_98, &var_c0, arg1 + 0x130, arg4)
    *arg2 = *rax_6
    void* rcx_6 = rax_6[1]
    arg2[1] = rcx_6
    
    if (rcx_6 != 0)
        *(rcx_6 + 8) += 1
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t temp3_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_a8 + 8))(var_a8, 1)
    
    int32_t var_40_1 = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    sub_1405e1b50(&var_88, 0)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_12 = var_88
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_98
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                int64_t r8_2 = *rbx_1
                (*(r8_2 + 8))(rbx_1, 1, r8_2)
__security_check_cookie(var_38 ^ &var_f8)
return arg2
