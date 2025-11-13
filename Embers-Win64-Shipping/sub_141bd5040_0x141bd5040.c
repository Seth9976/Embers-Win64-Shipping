// 函数: sub_141bd5040
// 地址: 0x141bd5040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
int128_t zmm8 = *(arg1 + 0x5ec)
uint32_t rbx = zx.d(*(arg1 + 0x5e2))
int128_t zmm7 = *(arg1 + 0x5e4)
int32_t var_2d8 = zmm7.d
int128_t var_2b8 = zmm8
char var_2a8 = 1
int32_t var_2d4 = (*(arg1 + 0x5e8)).d
int64_t var_2a0 = 0
int32_t var_298 = 0
char var_2d0 = 1
int64_t var_2c8 = 0
int32_t var_2c0 = 0
void var_270
int64_t* rax_2
int32_t zmm6_1
rax_2, zmm6_1 = sub_140f1fc10(&var_270)
rax_2[0x34] = arg1 + 0x108
rax_2[0x37].b = *(arg1 + 0x5e0)
*(rax_2 + 0x1b9) = *(arg1 + 0x5e1)
*(rax_2 + 0x1bc) = rbx
rax_2[0x39].d = zmm7.d
*(rax_2 + 0x1cc) = zmm6_1
rax_2[0x3a].b = 1
sub_140692f90(&rax_2[0x3b], &var_2c8)
rax_2[0x3f].b = 1
*(rax_2 + 0x1e8) = zmm8
sub_140692f90(&rax_2[0x40], &var_2a0)
void*** rax_6 = j_sub_140a82f30(0x570)
void*** rdi = rax_6

if (rax_6 == 0)
    rdi = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rdi = &data_142ee7488
    
    if (rdi != -0x10)
        sub_140f20dd0(&rdi[2])

int64_t* var_2f0 = &rdi[2]
sub_140918950(&var_2f0, &rdi[2])
int64_t var_308 = 0x560
void var_2f8
void* var_2e0 = &var_2f8
int64_t* var_290
int64_t** rax_7 = sub_140f27db0(&var_2f0, &var_290, rax_2, sub_140e23ed0(&rdi[2], "SScrollBar"))
int64_t* rbx_2 = rax_7[1]

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_280

if (arg1 + 0x600 == &var_280)
label_141bd5246:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    *(arg1 + 0x600) = *rax_7
    int64_t* rdi_1 = *(arg1 + 0x608)
    
    if (rbx_2 == rdi_1)
        goto label_141bd5246
    
    *(arg1 + 0x608) = rbx_2
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_288

if (var_288 != 0)
    var_288[1].d -= 1
    
    if (var_288[1].d == 1)
        (**var_288)(var_288)
        int32_t temp5_1 = *(var_288 + 0xc)
        *(var_288 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_288 + 8))(var_288, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi)[1](rdi, 1)

void var_70
sub_140745b20(&var_70)
void var_98
sub_140745b20(&var_98)
void var_c8
sub_140745b20(&var_c8)
sub_140ddea30(&var_270)
sub_140745b20(&var_2c8)
sub_140745b20(&var_2a0)
int64_t* rbx_5 = *(arg1 + 0x608)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x600)
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

__security_check_cookie(rax_1 ^ &var_328)
return arg2
