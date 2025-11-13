// 函数: sub_1408c1a80
// 地址: 0x1408c1a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void*** rax_2 = sub_1408b8c20()
void* var_200 = &rax_2[2]
sub_14065fa30(&var_200, &rax_2[2])
int64_t var_218 = 0x2d8
void var_208
void* var_1f0 = &var_208
sub_140e23ed0(&rax_2[2], "SUIParticle")
void var_1c8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_1408b8f00(&var_1c8)
void* var_1e8
void** rax_4 = sub_1408baee0(&var_200, &var_1e8, rax_3, zmm1)
int64_t* rcx_4 = rax_4[1]

if (rcx_4 != 0)
    rcx_4[1].d += 1

void var_1d8

if (arg1 + 0x128 == &var_1d8)
label_1408c1b6c:
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4)
            int32_t temp2_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
else
    *(arg1 + 0x128) = *rax_4
    int64_t* rbx_1 = *(arg1 + 0x130)
    
    if (rcx_4 == rbx_1)
        goto label_1408c1b6c
    
    *(arg1 + 0x130) = rcx_4
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_1e0

if (var_1e0 != 0)
    var_1e0[1].d -= 1
    
    if (var_1e0[1].d == 1)
        (**var_1e0)(var_1e0)
        int32_t temp5_1 = *(var_1e0 + 0xc)
        *(var_1e0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_1e0 + 8))(var_1e0, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp7_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rax_2)[1](rax_2, 1)

sub_140660250(&var_1c8)
void*** rax_12 = sub_140a84c80(0, 0x30, 0)

if (rax_12 != 0)
    *rax_12 = &data_142e05110
    sub_140d3a3a0(&rax_12[1], arg1)
    rax_12[2] = sub_1408bf420
    rax_12[4] = sub_140a387b0()
    *rax_12 = &data_142e05168

void* rdi_2 = *(arg1 + 0x128) + 0x2c0

if (&var_1d8 != rdi_2)
    if (rax_12 != 0)
        (*rax_12)[8](rax_12, rdi_2)
    else if (*(rdi_2 + 8) != 0)
        int64_t* rcx_15 = *rdi_2
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x38))(rcx_15, 0)
            int64_t rcx_16 = *rdi_2
            
            if (rcx_16 != 0)
                *rdi_2 = sub_140a84c80(rcx_16, 0, 0)
            
            *(rdi_2 + 8) = 0

if (rax_12 != 0)
    (*rax_12)[7](rax_12, 0)
    int64_t rax_18 = sub_140a84c80(rax_12, 0, 0)
    
    if (rax_18 != 0)
        sub_140a74f90(rax_18)

if ((*(arg1 + 0x120) & 1) != 0)
    sub_1408c1740(arg1)
else
    void* rax_19 = *(arg1 + 0x108)
    
    if (rax_19 != 0 && *(rax_19 + 0x28) != 0)
        sub_1408c1740(arg1)

int64_t* rbx_5 = *(arg1 + 0x130)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x128)
arg2[1] = rbx_5

if (rbx_5 != 0)
    rbx_5[1].d += 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp9_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp9_1 == 1)
                int64_t r8_3 = *rbx_5
                (*(r8_3 + 8))(rbx_5, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_238)
return arg2
