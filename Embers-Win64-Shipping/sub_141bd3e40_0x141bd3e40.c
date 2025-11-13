// 函数: sub_141bd3e40
// 地址: 0x141bd3e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
void*** rax_2 = sub_141b77550()
int64_t* var_2b0 = &rax_2[2]
sub_140918950(&var_2b0, &rax_2[2])
int64_t var_2c8 = 0x370
void var_2b8
void* var_2a0 = &var_2b8
sub_140e23ed0(&rax_2[2], "SProgressBar")
void var_278
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140f64430(&var_278)
int64_t* var_298
int64_t** rax_4 = sub_141b8a0a0(&var_2b0, &var_298, rax_3, zmm1)
int64_t* rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_288

if (arg1 + 0x308 == &var_288)
label_141bd3f2e:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x308) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x310)
    
    if (rbx_1 == rdi_1)
        goto label_141bd3f2e
    
    *(arg1 + 0x310) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_290

if (var_290 != 0)
    var_290[1].d -= 1
    
    if (var_290[1].d == 1)
        (**var_290)(var_290)
        int32_t temp5_1 = *(var_290 + 0xc)
        *(var_290 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_290 + 8))(var_290, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp8_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rax_2)[1](rax_2, 1)

void var_58
sub_140745b20(&var_58)
void var_78
sub_140745b20(&var_78)
int64_t* var_88

if (var_88 != 0)
    var_88[1].d -= 1
    
    if (var_88[1].d == 1)
        (**var_88)(var_88)
        int32_t temp9_1 = *(var_88 + 0xc)
        *(var_88 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_88 + 8))(var_88, 1)

void var_b8
sub_140745b20(&var_b8)
char var_c4 = 0
sub_140ddea30(&var_278)
int64_t* rbx_5 = *(arg1 + 0x310)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x308)
arg2[1] = rbx_5

if (rbx_5 != 0)
    rbx_5[1].d += 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp11_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_3 = *rbx_5
                (*(r8_3 + 8))(rbx_5, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_2e8)
return arg2
