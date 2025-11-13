// 函数: sub_141bcce70
// 地址: 0x141bcce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
char rbx = *(arg1 + 0x218)
void var_368
int64_t* rax_2 = sub_14068c640(&var_368)
rax_2[0x68].b = rbx
void*** rax_3 = j_sub_140a82f30(0x4c8)
void*** rdi = rax_3

if (rax_3 == 0)
    rdi = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rdi = &data_142d8c5a0
    
    if (rdi != -0x10)
        sub_140f20640(&rdi[2])

void* var_390 = &rdi[2]
sub_14065fa30(&var_390, &rdi[2])
int64_t var_3b8 = 0x4b8
void var_3a8
void* var_380 = &var_3a8
void* var_3a0
void** rax_4 = sub_140695920(&var_390, &var_3a0, rax_2, sub_140e23ed0(&rdi[2], "SBorder"))
int64_t* rbx_2 = rax_4[1]

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_378

if (arg1 + 0x260 == &var_378)
label_141bccfa0:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    *(arg1 + 0x260) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x268)
    
    if (rbx_2 == rdi_1)
        goto label_141bccfa0
    
    *(arg1 + 0x268) = rbx_2
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_398

if (var_398 != 0)
    var_398[1].d -= 1
    
    if (var_398[1].d == 1)
        (**var_398)(var_398)
        int32_t temp5_1 = *(var_398 + 0xc)
        *(var_398 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_398 + 8))(var_398, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi)[1](rdi, 1)

sub_14068fed0(&var_368)
int32_t rcx_14 = *(arg1 + 0x110)

if (rcx_14 s> 0)
    var_3a0 = *(arg1 + 0x260)
    void* rax_13 = *(arg1 + 0x268)
    void* var_398_1 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
        rcx_14 = *(arg1 + 0x110)
    
    void* const rbx_5
    
    if (rcx_14 s<= 0)
        rbx_5 = nullptr
    else
        rbx_5 = **(arg1 + 0x108)
        
        if (rbx_5 == 0)
            rbx_5 = nullptr
        else
            void* rax_15 = sub_141bf7ac0()
            void* rdx_2 = *(rbx_5 + 0x10)
            int64_t rax_16 = sx.q(*(rax_15 + 0x38))
            
            if (rax_16.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                rbx_5 = nullptr
    
    sub_141b94000(rbx_5, &var_3a0)

int64_t* rbx_6 = *(arg1 + 0x268)

if (rbx_6 != 0)
    rbx_6[1].d += 1

*arg2 = *(arg1 + 0x260)
arg2[1] = rbx_6

if (rbx_6 != 0)
    int32_t r8_3 = rbx_6[1].d
    rbx_6[1].d = r8_3
    
    if (r8_3 == 0)
        (**rbx_6)(rbx_6)
        int32_t temp8_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp8_1 == 1)
            int64_t r8_5 = *rbx_6
            (*(r8_5 + 8))(rbx_6, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_3d8)
return arg2
