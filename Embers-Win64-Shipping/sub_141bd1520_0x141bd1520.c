// 函数: sub_141bd1520
// 地址: 0x141bd1520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
char rbx = *(arg1 + 0x1c0)
void var_238
int64_t* rax_2 = sub_140e4fb70(&var_238)
rax_2[0x40].b = rbx
void*** rax_3 = sub_140e48c50()
void* var_270 = &rax_3[2]
sub_140918950(&var_270, &rax_3[2])
int64_t var_288 = 0x3a8
void var_278
void* var_260 = &var_278
void* var_258
void** rax_4 = sub_140e56930(&var_270, &var_258, rax_2, sub_140e23ed0(&rax_3[2], "SImage"))
int64_t* rbx_2 = rax_4[1]

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_248

if (arg1 + 0x1d8 == &var_248)
label_141bd1614:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    *(arg1 + 0x1d8) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x1e0)
    
    if (rbx_2 == rdi_1)
        goto label_141bd1614
    
    *(arg1 + 0x1e0) = rbx_2
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_250

if (var_250 != 0)
    var_250[1].d -= 1
    
    if (var_250[1].d == 1)
        (**var_250)(var_250)
        int32_t temp5_1 = *(var_250 + 0xc)
        *(var_250 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_250 + 8))(var_250, 1)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t temp8_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rax_3)[1](rax_3, 1)

void var_30
sub_140745b20(&var_30)
void var_48
sub_140745b20(&var_48)
int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t temp9_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_58 + 8))(var_58, 1)

void var_88
sub_140745b20(&var_88)
sub_140ddea30(&var_238)
int64_t* rbx_6 = *(arg1 + 0x1e0)

if (rbx_6 != 0)
    rbx_6[1].d += 1

*arg2 = *(arg1 + 0x1d8)
arg2[1] = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d += 1
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp11_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_3 = *rbx_6
                (*(r8_3 + 8))(rbx_6, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
