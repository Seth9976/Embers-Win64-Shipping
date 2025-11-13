// 函数: sub_141b6e470
// 地址: 0x141b6e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_78 = *(arg1 + 0x2dc)
uint32_t var_74 = zx.d(*(arg1 + 0x2d9))
char var_70 = *(arg1 + 0x2db)
char var_6f = *(arg1 + 0x2da)
char var_6e = *(arg1 + 0x2e4)
int32_t var_48 = 0
int32_t zmm0 = *(arg1 + 0x368)
char var_68 = *(arg1 + 0x370)
int32_t var_98 = zmm0
int32_t var_60 = zmm0
int32_t var_6c = 1
int64_t var_58 = 0
int32_t var_50 = 0
char var_44 = 0
int64_t var_40 = 0
int32_t var_38 = 0
char var_30 = 0
char var_94 = 1
int64_t var_90 = 0
int32_t var_88 = 0
char var_5c = 1
sub_140692f90(&var_58, &var_90)
sub_140745b20(&var_90)
int32_t zmm0_1 = *(arg1 + 0x36c)
var_98 = zmm0_1
int32_t var_48_1 = zmm0_1
char var_94_1 = 1
var_90 = 0
int32_t var_88_1 = 0
char var_44_1 = 1
sub_140692f90(&var_40, &var_90)
sub_140745b20(&var_90)
char var_30_1 = *(arg1 + 0x371)
uint32_t var_6c_1 = zx.d(*(arg1 + 0x2d8))
char* (* var_a8)(void* arg1, char* arg2, int512_t arg3 @ zmm1)
char* (** rax_8)(void* arg1, char* arg2, int512_t arg3 @ zmm1) =
    sub_141b6e830(&var_a8, arg1, arg1 + 0x2e8, &var_78)
int64_t* rdi = rax_8[1]

if (rdi != 0)
    rdi[1].d += 1

if (arg1 + 0x378 != &var_98)
    *(arg1 + 0x378) = *rax_8
    int64_t* rbx_1 = *(arg1 + 0x380)
    
    if (rdi != rbx_1)
        *(arg1 + 0x380) = rdi
        rdi = nullptr
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x380)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (arg1 + 0x2f8 == &var_98)
label_141b6e650:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    *(arg1 + 0x2f8) = *(arg1 + 0x378)
    int64_t* rsi_1 = *(arg1 + 0x300)
    
    if (rbx_2 == rsi_1)
        goto label_141b6e650
    
    *(arg1 + 0x300) = rbx_2
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp8_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t temp9_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

var_a0.d = 0
var_a8 = sub_141bb4c60
int64_t* rax_20 = sub_140a84c80(0, 0x30, 0)

if (rax_20 != 0)
    *rax_20 = &data_143084628
    sub_140d3a3a0(&rax_20[1], arg1)
    *(rax_20 + 0x10) = var_a8.o
    rax_20[5] = sub_140a387b0()
    *rax_20 = &data_143084680

char* (* rdi_2)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = *(arg1 + 0x378) + 0x5d0

if (&var_98 != rdi_2)
    if (rax_20 != 0)
        (*(*rax_20 + 0x40))(rax_20, rdi_2)
    else if (*(rdi_2 + 8) != 0)
        int64_t* rcx_18 = *rdi_2
        
        if (rcx_18 != 0)
            (*(*rcx_18 + 0x38))(rcx_18, 0)
            int64_t rcx_19 = *rdi_2
            
            if (rcx_19 != 0)
                *rdi_2 = sub_140a84c80(rcx_19, 0, 0)
            
            *(rdi_2 + 8) = 0

if (rax_20 != 0)
    (*(*rax_20 + 0x38))(rax_20, 0)
    int64_t rax_26 = sub_140a84c80(rax_20, 0, 0)
    
    if (rax_26 != 0)
        sub_140a74f90(rax_26)

int64_t* rbx_5 = *(arg1 + 0x380)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x378)
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
                (*(*rbx_5 + 8))(rbx_5, 1)

sub_140745b20(&var_40)
sub_140745b20(&var_58)
return arg2
