// 函数: sub_141bcdaa0
// 地址: 0x141bcdaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_418
int64_t rax_1 = __security_cookie ^ &var_418
uint32_t rdi = zx.d(*(arg1 + 0x708))
int32_t var_3a8 = 0
void*** rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    *rax_2 = &data_142e33668
    sub_140d3a3a0(&rax_2[1], arg1)
    rax_2[2] = sub_141be85f0
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_142e336c0

void var_3a0
int64_t* rax_4 = sub_140e93090(&var_3a0)
uint128_t var_3c8

if (&var_3c8 != &rax_4[0x38])
    if (rax_2 != 0)
        (*rax_2)[8](rax_2, &rax_4[0x38])
    else if (rax_4[0x39].d != 0)
        int64_t* rcx_3 = rax_4[0x38]
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = rax_4[0x38]
            
            if (rcx_4 != 0)
                rax_4[0x38] = sub_140a84c80(rcx_4, 0, 0)
            
            rax_4[0x39].d = 0

rax_4[0x3d].d = rdi
rax_4[0x36] = arg1 + 0x138
rax_4[0x56].b = *(arg1 + 0x748)
void*** rax_10 = j_sub_140a82f30(0x548)
void*** rdi_1 = rax_10

if (rax_10 == 0)
    rdi_1 = nullptr
else
    rax_10[1].d = 1
    *(rax_10 + 0xc) = 1
    *rdi_1 = &data_142edf190
    
    if (rdi_1 != -0x10)
        sub_140ee2e20(&rdi_1[2])

void* var_3e0 = &rdi_1[2]
sub_140918950(&var_3e0, &rdi_1[2])
int64_t var_3f8 = 0x538
char var_3e8
char* var_3d0 = &var_3e8
void var_3b8
void** rax_11 = sub_140e9ac90(&var_3e0, &var_3b8, rax_4, sub_140e23ed0(&rdi_1[2], "SCheckBox"))
int64_t* rcx_9 = rax_11[1]

if (rcx_9 != 0)
    rcx_9[1].d += 1

if (arg1 + 0x760 == &var_3c8)
label_141bcdca4:
    
    if (rcx_9 != 0)
        rcx_9[1].d -= 1
        
        if (rcx_9[1].d == 1)
            (**rcx_9)(rcx_9)
            int32_t temp2_1 = *(rcx_9 + 0xc)
            *(rcx_9 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_9 + 8))(rcx_9, 1)
else
    *(arg1 + 0x760) = *rax_11
    int64_t* rbx_2 = *(arg1 + 0x768)
    
    if (rcx_9 == rbx_2)
        goto label_141bcdca4
    
    *(arg1 + 0x768) = rcx_9
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_3b0

if (var_3b0 != 0)
    var_3b0[1].d -= 1
    
    if (var_3b0[1].d == 1)
        (**var_3b0)(var_3b0)
        int32_t temp5_1 = *(var_3b0 + 0xc)
        *(var_3b0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_3b0 + 8))(var_3b0, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp7_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_140e978a0(&var_3a0)

if (rax_2 != 0)
    (*rax_2)[7](rax_2, 0)
    int64_t rax_20 = sub_140a84c80(rax_2, 0, 0)
    
    if (rax_20 != 0)
        sub_140a74f90(rax_20)

if (*(arg1 + 0x110) s> 0)
    int64_t* rcx_22 = *(**(arg1 + 0x108) + 0x30)
    void* rdx_6
    int32_t rdi_3
    
    if (rcx_22 == 0)
        uint128_t zmm0_1 = data_143e244b0.o
        var_3c8 = zmm0_1
        void* rax_22 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_22 != 0)
            *(rax_22 + 8) += 1
        
        rdx_6 = &var_3c8
        rdi_3 = 2
    else
        var_3e8 = 0
        char* var_3d8_1 = &var_3e8
        var_3e0 = sub_141b970e0
        sub_141befea0(rcx_22, &var_3b8, &var_3e0)
        rdx_6 = &var_3b8
        rdi_3 = 1
    
    sub_140f15490(*(arg1 + 0x760), rdx_6)
    
    if ((rdi_3.b & 2) != 0)
        int64_t* rbx_5 = var_3c8:8.q
        rdi_3 &= 0xfffffffd
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp12_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    
    if ((rdi_3.b & 1) != 0 && var_3b0 != 0)
        var_3b0[1].d -= 1
        
        if (var_3b0[1].d == 1)
            (**var_3b0)(var_3b0)
            int32_t temp13_1 = *(var_3b0 + 0xc)
            *(var_3b0 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_3b0 + 8))(var_3b0, 1)

int64_t* rbx_7 = *(arg1 + 0x768)

if (rbx_7 != 0)
    rbx_7[1].d += 1

*arg2 = *(arg1 + 0x760)
arg2[1] = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp9_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp9_1 == 1)
                int64_t r8_4 = *rbx_7
                (*(r8_4 + 8))(rbx_7, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_418)
return arg2
