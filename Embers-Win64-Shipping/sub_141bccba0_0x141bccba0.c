// 函数: sub_141bccba0
// 地址: 0x141bccba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
void*** rax_2 = sub_141b772a0()
void* var_270 = &rax_2[2]
sub_140918950(&var_270, &rax_2[2])
int64_t var_298 = 0x3d8
void var_288
void* var_260 = &var_288
sub_140e23ed0(&rax_2[2], "SBackgroundBlur")
void var_248
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_141b79f00(&var_248)
void* var_280
void** rax_4 = sub_141b88fc0(&var_270, &var_280, rax_3, zmm1)
int64_t* rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_258

if (arg1 + 0x1c8 == &var_258)
label_141bccc91:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x1c8) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x1d0)
    
    if (rbx_1 == rdi_1)
        goto label_141bccc91
    
    *(arg1 + 0x1d0) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_278

if (var_278 != 0)
    var_278[1].d -= 1
    
    if (var_278[1].d == 1)
        (**var_278)(var_278)
        int32_t temp5_1 = *(var_278 + 0xc)
        *(var_278 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_278 + 8))(var_278, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp8_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rax_2)[1](rax_2, 1)

void var_38
sub_140745b20(&var_38)
char var_44 = 0
void var_58
sub_140745b20(&var_58)
void var_78
sub_140745b20(&var_78)
int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t temp9_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

sub_140ddea30(&var_248)
int32_t rcx_18 = *(arg1 + 0x110)

if (rcx_18 s> 0)
    var_280 = *(arg1 + 0x1c8)
    void* rax_15 = *(arg1 + 0x1d0)
    void* var_278_1 = rax_15
    
    if (rax_15 != 0)
        *(rax_15 + 8) += 1
        rcx_18 = *(arg1 + 0x110)
    
    void* const rbx_5
    
    if (rcx_18 s<= 0)
        rbx_5 = nullptr
    else
        rbx_5 = **(arg1 + 0x108)
        
        if (rbx_5 == 0)
            rbx_5 = nullptr
        else
            void* rax_17 = sub_141bf7030()
            void* rdx_2 = *(rbx_5 + 0x10)
            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
            
            if (rax_18.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                rbx_5 = nullptr
    
    sub_141b93df0(rbx_5, &var_280)

int64_t* rbx_6 = *(arg1 + 0x1d0)

if (rbx_6 != 0)
    rbx_6[1].d += 1

*arg2 = *(arg1 + 0x1c8)
arg2[1] = rbx_6

if (rbx_6 != 0)
    int32_t r8_3 = rbx_6[1].d
    rbx_6[1].d = r8_3
    
    if (r8_3 == 0)
        (**rbx_6)(rbx_6)
        int32_t temp10_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp10_1 == 1)
            int64_t r8_5 = *rbx_6
            (*(r8_5 + 8))(rbx_6, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_2b8)
return arg2
