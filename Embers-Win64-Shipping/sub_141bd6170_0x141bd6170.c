// 函数: sub_141bd6170
// 地址: 0x141bd6170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void*** rax_2 = sub_140e48fc0()
void* var_220 = &rax_2[2]
sub_140918950(&var_220, &rax_2[2])
int64_t var_238 = 0x2c8
void var_228
void* var_210 = &var_228
sub_140e23ed0(&rax_2[2], "SSpacer")
void var_1e8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140e50180(&var_1e8)
void* var_208
void** rax_4 = sub_140e57660(&var_220, &var_208, rax_3, zmm1)
int64_t* rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_1f8

if (arg1 + 0x110 == &var_1f8)
label_141bd625e:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x110) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x118)
    
    if (rbx_1 == rdi_1)
        goto label_141bd625e
    
    *(arg1 + 0x118) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_200

if (var_200 != 0)
    var_200[1].d -= 1
    
    if (var_200[1].d == 1)
        (**var_200)(var_200)
        int32_t temp5_1 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_200 + 8))(var_200, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp7_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rax_2)[1](rax_2, 1)

void var_38
sub_140745b20(&var_38)
sub_140ddea30(&var_1e8)
int64_t* rbx_4 = *(arg1 + 0x118)

if (rbx_4 != 0)
    rbx_4[1].d += 1

*arg2 = *(arg1 + 0x110)
arg2[1] = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp9_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp9_1 == 1)
                int64_t r8_3 = *rbx_4
                (*(r8_3 + 8))(rbx_4, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_258)
return arg2
