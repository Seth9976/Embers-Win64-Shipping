// 函数: sub_141bd57c0
// 地址: 0x141bd57c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void*** rax_2 = j_sub_140a82f30(0x3d8)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_142d8c570
    
    if (rdi != -0x10)
        sub_140f20750(&rdi[2])

void* var_2f0 = &rdi[2]
sub_14065fa30(&var_2f0, &rdi[2])
int64_t var_318 = 0x3c8
void var_308
void* var_2e0 = &var_308
sub_140e23ed0(&rdi[2], "SBox")
void var_2c8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_14068c940(&var_2c8)
void* var_300
void** rax_4 = sub_140695d20(&var_2f0, &var_300, rax_3, zmm1)
int64_t* rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_2d8

if (arg1 + 0x120 == &var_2d8)
label_141bd58e0:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x120) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x128)
    
    if (rbx_1 == rdi_1)
        goto label_141bd58e0
    
    *(arg1 + 0x128) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_2f8

if (var_2f8 != 0)
    var_2f8[1].d -= 1
    
    if (var_2f8[1].d == 1)
        (**var_2f8)(var_2f8)
        int32_t temp5_1 = *(var_2f8 + 0xc)
        *(var_2f8 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_2f8 + 8))(var_2f8, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi)[1](rdi, 1)

sub_140690290(&var_2c8)
int32_t rcx_14 = *(arg1 + 0x110)

if (rcx_14 s> 0)
    var_300 = *(arg1 + 0x120)
    void* rax_13 = *(arg1 + 0x128)
    void* var_2f8_1 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
        rcx_14 = *(arg1 + 0x110)
    
    int64_t* rbx_4
    
    if (rcx_14 s<= 0)
        rbx_4 = nullptr
    else
        rbx_4 = **(arg1 + 0x108)
        
        if (rbx_4 == 0)
            rbx_4 = nullptr
        else
            void* rax_15 = sub_141c096c0()
            void* rdx_2 = rbx_4[2]
            int64_t rax_16 = sx.q(*(rax_15 + 0x38))
            
            if (rax_16.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                rbx_4 = nullptr
    
    sub_141b95450(rbx_4, &var_300)

int64_t* rbx_5 = *(arg1 + 0x128)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x120)
arg2[1] = rbx_5

if (rbx_5 != 0)
    int32_t r8_3 = rbx_5[1].d
    rbx_5[1].d = r8_3
    
    if (r8_3 == 0)
        (**rbx_5)(rbx_5)
        int32_t temp8_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp8_1 == 1)
            int64_t r8_5 = *rbx_5
            (*(r8_5 + 8))(rbx_5, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_338)
return arg2
