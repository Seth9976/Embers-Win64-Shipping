// 函数: sub_140fa5f80
// 地址: 0x140fa5f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x3c40)
void var_3c78
int64_t rax_1 = __security_cookie ^ &var_3c78
int64_t* (* var_3c28)(void* arg1, int64_t* arg2)
int64_t* var_3c20

if (*(arg2 + 0x1c0) != 0)
    int64_t* rcx = *(arg2 + 0x1b8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg2 + 0x1c0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg2 + 0x1b8)
        
        (*(*rcx_1 + 0x48))(rcx_1, &var_3c28)
        int64_t* rbx_1
        
        if (arg2 + 0x1a0 == &var_3c28)
        label_140fa6062:
            rbx_1 = var_3c20
        label_140fa6067:
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        else
            rbx_1 = var_3c20
            *(arg2 + 0x1a0) = var_3c28
            int64_t* rdi_1 = *(arg2 + 0x1a8)
            var_3c28 = nullptr
            
            if (rbx_1 == rdi_1)
                goto label_140fa6067
            
            var_3c20 = nullptr
            *(arg2 + 0x1a8) = rbx_1
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
                
                goto label_140fa6062

*(arg1 + 0x390) = *(arg2 + 0x1a0)
void* rbx_2 = *(arg2 + 0x1a8)
int64_t* rcx_6 = *(arg1 + 0x398)

if (rbx_2 != rcx_6)
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
        rcx_6 = *(arg1 + 0x398)
    
    if (rcx_6 != 0)
        int32_t temp0_1 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_6 + 8))(rcx_6, 1)
    
    *(arg1 + 0x398) = rbx_2

if (*(arg2 + 0x1e8) != 0)
    int64_t* rcx_7 = *(arg2 + 0x1e0)
    
    if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
        int64_t* rcx_8
        
        if (*(arg2 + 0x1e8) == 0)
            rcx_8 = nullptr
        else
            rcx_8 = *(arg2 + 0x1e0)
        
        (*(*rcx_8 + 0x48))(rcx_8, &var_3c28)
        int64_t* rbx_3
        
        if (arg2 + 0x1c8 == &var_3c28)
        label_140fa616f:
            rbx_3 = var_3c20
        label_140fa6174:
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp10_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
        else
            rbx_3 = var_3c20
            *(arg2 + 0x1c8) = var_3c28
            int64_t* rdi_2 = *(arg2 + 0x1d0)
            var_3c28 = nullptr
            
            if (rbx_3 == rdi_2)
                goto label_140fa6174
            
            var_3c20 = nullptr
            *(arg2 + 0x1d0) = rbx_3
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp11_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
                
                goto label_140fa616f

int64_t* rbx_4 = *(arg2 + 0x1d0)
char* (* var_3c18)(void* arg1, char* arg2) = *(arg2 + 0x1c8)

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (&var_3c18 != arg1 + 0x3a0)
    var_3c18.o = *(arg1 + 0x3a0)
    *(arg1 + 0x3a0) = var_3c18.o

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp2_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

sub_1407473e0(arg1 + 0x3c0, arg2 + 0x1f0)

if (*(arg2 + 0x220) != 0)
    int64_t* rcx_17 = *(arg2 + 0x218)
    
    if (rcx_17 != 0 && (*(*rcx_17 + 0x28))(rcx_17) != 0)
        int64_t* rcx_18
        
        if (*(arg2 + 0x220) == 0)
            rcx_18 = nullptr
        else
            rcx_18 = *(arg2 + 0x218)
        
        (*(*rcx_18 + 0x48))(rcx_18, &var_3c28)
        int64_t* rbx_5
        
        if (arg2 + 0x200 == &var_3c28)
        label_140fa62af:
            rbx_5 = var_3c20
        label_140fa62b4:
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp14_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
        else
            rbx_5 = var_3c20
            *(arg2 + 0x200) = var_3c28
            int64_t* rdi_3 = *(arg2 + 0x208)
            var_3c28 = nullptr
            
            if (rbx_5 == rdi_3)
                goto label_140fa62b4
            
            var_3c20 = nullptr
            *(arg2 + 0x208) = rbx_5
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp15_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
                
                goto label_140fa62af

*(arg1 + 0x3b0) = *(arg2 + 0x200)
void* rbx_6 = *(arg2 + 0x208)
int64_t* rcx_23 = *(arg1 + 0x3b8)

if (rbx_6 != rcx_23)
    if (rbx_6 != 0)
        *(rbx_6 + 0xc) += 1
        rcx_23 = *(arg1 + 0x3b8)
    
    if (rcx_23 != 0)
        int32_t temp7_1 = *(rcx_23 + 0xc)
        *(rcx_23 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rcx_23 + 8))(rcx_23, 1)
    
    *(arg1 + 0x3b8) = rbx_6

sub_1407473e0(arg1 + 0x3d0, arg2 + 0x228)
sub_1407473e0(arg1 + 0x3e0, arg2 + 0x238)
*(arg1 + 0x3f0) = *(arg2 + 0x248)
*(arg1 + 0x3f1) = *(arg2 + 0x249)
sub_140692f90(arg1 + 0x3f8, arg2 + 0x250)
*(arg1 + 0x408) = *(arg2 + 0x260)
*(arg1 + 0x409) = *(arg2 + 0x261)
sub_140692f90(arg1 + 0x410, arg2 + 0x268)
*(arg1 + 0x420) = 0
int128_t zmm0_1 = data_14399f5e0
int32_t var_3c08 = 0
int16_t var_3c04 = 0
int128_t var_3bf8 = zmm0_1
int64_t var_3c00 = 0
int64_t var_3bb8
sub_140e13c40(&var_3bb8, *sub_140b58170(&var_3c28, "Regular", 1), 9, &var_3c08)
int128_t zmm0_2 = data_14399f5e0
var_3c08 = 0
int16_t var_3c04_1 = 0
int40_t var_3c00_1 = 0
var_3bf8 = zmm0_2
int64_t var_34c8
sub_140e13c40(&var_34c8, *sub_140b58170(&var_3c28, "Bold", 1), 9, &var_3c08)
void* var_3b80
void* rcx_32 = var_3b80
int64_t r9_2 = var_3bb8
int64_t var_3bb0
int64_t r10 = var_3bb0
int128_t var_3ba8
int128_t zmm1_1 = var_3ba8
int128_t var_3b98
int128_t zmm2 = var_3b98
int64_t var_3b88
int64_t r11 = var_3b88
var_3c18 = sub_140fbf1e0
var_3c28 = sub_140fb25a0
int64_t* var_3c10
var_3c10.d = 0
var_3c20.d = 0
int64_t var_37a8 = r9_2
int64_t var_37a0 = r10
int64_t var_3778 = r11
void* var_3770 = rcx_32
int128_t var_3798 = zmm1_1
int128_t var_3788 = zmm2

if (rcx_32 != 0)
    *(rcx_32 + 8) += 1
    rcx_32 = var_3b80
    r11 = var_3b88
    zmm2 = var_3b98
    zmm1_1 = var_3ba8
    r10 = var_3bb0
    r9_2 = var_3bb8

int64_t var_3b78
int64_t rax_39 = var_3b78
char var_3b6c
char r8 = var_3b6c
int32_t var_3b70
int32_t rdx_10 = var_3b70
int64_t var_3768 = rax_39
char var_375c = r8
int64_t* (* var_3a38)(void* arg1, int64_t* arg2) = sub_140fb4250
int32_t var_3760 = rdx_10
char var_3758 = 1
int64_t var_3750 = 0
int32_t var_3748 = 0
int32_t var_3a30 = 0
int64_t var_3740 = r9_2
int64_t var_3738 = r10
int64_t var_3710 = r11
void* var_3708 = rcx_32
int128_t var_3730 = zmm1_1
int128_t var_3720 = zmm2

if (rcx_32 != 0)
    *(rcx_32 + 8) += 1
    r8 = var_3b6c
    rdx_10 = var_3b70
    rax_39 = var_3b78
    rcx_32 = var_3b80
    r11 = var_3b88
    zmm2 = var_3b98
    zmm1_1 = var_3ba8
    r10 = var_3bb0
    r9_2 = var_3bb8

int64_t var_3700 = rax_39
int64_t* (* var_39d8)(void* arg1, int64_t* arg2) = sub_140fb3e70
int32_t var_36f8 = rdx_10
char var_36f4 = r8
char var_36f0 = 1
int64_t var_36e8 = 0
int32_t var_36e0 = 0
int32_t var_39d0 = 0
int64_t var_3538 = r9_2
int64_t var_3530 = r10
int64_t var_3508 = r11
void* var_3500 = rcx_32
int128_t var_3528 = zmm1_1
int128_t var_3518 = zmm2

if (rcx_32 != 0)
    *(rcx_32 + 8) += 1
    r8 = var_3b6c
    rdx_10 = var_3b70
    rax_39 = var_3b78
    rcx_32 = var_3b80
    r11 = var_3b88
    zmm2 = var_3b98
    zmm1_1 = var_3ba8
    r10 = var_3bb0
    r9_2 = var_3bb8

int64_t var_34f8 = rax_39
int64_t* (* var_3a18)(void* arg1, int64_t* arg2) = sub_140fb3990
int32_t var_34f0 = rdx_10
char var_34ec = r8
char var_34e8 = 1
int64_t var_34e0 = 0
int32_t var_34d8 = 0
int32_t var_3a10 = 0
int64_t var_35a0 = r9_2
int64_t var_3598 = r10
int64_t var_3570 = r11
void* var_3568 = rcx_32
int128_t var_3590 = zmm1_1
int128_t var_3580 = zmm2

if (rcx_32 != 0)
    *(rcx_32 + 8) += 1
    r8 = var_3b6c
    rdx_10 = var_3b70
    rax_39 = var_3b78
    rcx_32 = var_3b80
    r11 = var_3b88
    zmm2 = var_3b98
    zmm1_1 = var_3ba8
    r10 = var_3bb0
    r9_2 = var_3bb8

int64_t var_3560 = rax_39
int64_t* (* var_39b8)(void* arg1, int64_t* arg2) = sub_140fb27d0
int32_t var_3558 = rdx_10
char var_3554 = r8
char var_3550 = 1
int64_t var_3548 = 0
int32_t var_3540 = 0
int32_t var_3a68 = 0x3f800000
char var_3a64 = 1
int64_t var_3a60 = 0
int32_t var_3a58 = 0
int32_t var_39b0 = 0
int64_t var_3608 = r9_2
int64_t var_3600 = r10
int64_t var_35d8 = r11
void* var_35d0 = rcx_32
int128_t var_35f8 = zmm1_1
int128_t var_35e8 = zmm2

if (rcx_32 != 0)
    *(rcx_32 + 8) += 1
    r8 = var_3b6c
    rdx_10 = var_3b70
    rax_39 = var_3b78
    rcx_32 = var_3b80
    r11 = var_3b88
    zmm2 = var_3b98
    zmm1_1 = var_3ba8
    r10 = var_3bb0
    r9_2 = var_3bb8

int64_t var_35c8 = rax_39
int64_t* (* var_39f8)(void* arg1, int64_t* arg2) = sub_140fb3760
int32_t var_35c0 = rdx_10
char var_35bc = r8
char var_35b8 = 1
int64_t var_35b0 = 0
int32_t var_35a8 = 0
int32_t var_39f0 = 0
int64_t var_3670 = r9_2
int64_t var_3668 = r10
int64_t var_3640 = r11
void* var_3638 = rcx_32
int128_t var_3660 = zmm1_1
int128_t var_3650 = zmm2

if (rcx_32 != 0)
    *(rcx_32 + 8) += 1
    r8 = var_3b6c
    rdx_10 = var_3b70
    rax_39 = var_3b78
    rcx_32 = var_3b80
    r11 = var_3b88
    zmm2 = var_3b98
    zmm1_1 = var_3ba8
    r10 = var_3bb0
    r9_2 = var_3bb8

int64_t var_3630 = rax_39
int64_t* (* var_3b18)(void* arg1, int64_t* arg2) = sub_140fb3c40
int32_t var_3628 = rdx_10
char var_3624 = r8
char var_3620 = 1
int64_t var_3618 = 0
int32_t var_3610 = 0
int32_t var_3b10 = 0
int64_t var_36d8 = r9_2
int64_t var_36d0 = r10
int64_t var_36a8 = r11
void* var_36a0 = rcx_32
int128_t var_36c8 = zmm1_1
int128_t var_36b8 = zmm2

if (rcx_32 != 0)
    *(rcx_32 + 8) += 1
    r8 = var_3b6c
    rdx_10 = var_3b70
    rax_39 = var_3b78

int64_t var_3698 = rax_39
char* (* var_3ab8)(void* arg1, char* arg2) = sub_140fbf2a0
int64_t* (* var_3ac8)(void* arg1, int64_t* arg2) = sub_140fb3c00
int64_t var_3888 = var_34c8
int64_t var_34c0
int64_t var_3880 = var_34c0
int64_t var_3498
int64_t var_3858 = var_3498
int32_t var_3690 = rdx_10
char var_368c = r8
char var_3688 = 1
int64_t var_3680 = 0
int32_t var_3678 = 0
int32_t var_3a80 = 0x3f800000
char var_3a7c = 1
int64_t var_3a78 = 0
int32_t var_3a70 = 0
int32_t var_3ab0 = 0
int32_t var_3ac0 = 0
void* var_3490
void* var_3850 = var_3490
int128_t var_34b8
int128_t var_3878 = var_34b8
int128_t var_34a8
int72_t var_3868 = var_34a8.9

if (var_3490 != 0)
    *(var_3490 + 8) += 1

int128_t* (* rcx_33)(void* arg1, int128_t* arg2) = nullptr
zmm1_1 = var_3c28.o
int64_t* rbx_7 = *(arg1 + 0x10)
int128_t var_3958 = var_3c18.o
int64_t var_3488
int64_t var_3848 = var_3488
var_3a38.o = var_3a38.o
var_3c18.o = zmm1_1
int32_t var_3480
int32_t var_3840 = var_3480
var_3a18.o = var_3a18.o
var_39d8.o = var_39d8.o
zmm1_1 = var_39b8.o
char var_347c
char var_383c = var_347c
var_39f8.o = var_39f8.o
int128_t zmm0_3 = var_3ab8.o
uint64_t (* var_3b48)(void* arg1) = sub_140fc1680
var_39b8.o = zmm1_1
zmm1_1 = var_3b18.o
var_3ab8.o = zmm0_3
bool (* var_3bd8)(void* arg1) = sub_140fc1620
var_3b18.o = zmm1_1
zmm1_1 = var_3ac8.o
int32_t var_3b40 = 0
int128_t var_3938 = var_3b48.o
int32_t var_3bd0 = 0
int128_t* (* var_3c48)(void* arg1, int128_t* arg2) = sub_140fb2d60
int32_t var_3c40 = 0
var_3ac8.o = zmm1_1
zmm1_1 = var_3bd8.o
int128_t var_3998 = var_3c48.o
char var_3838 = 1
int64_t var_3830 = 0
int32_t var_3828 = 0
int16_t var_3a98 = 0x101
int64_t var_3a90 = 0
int32_t var_3a88 = 0
int32_t var_3a50 = 0x42dc0000
char var_3a4c = 1
int64_t var_3a48 = 0
int32_t var_3a40 = 0
int32_t var_38e0 = 0x42dc0000
char var_38dc = 1
int64_t var_38d8 = 0
int32_t var_38d0 = 0
int128_t var_3918 = zmm1_1

if (rbx_7 != 0)
    int32_t rax_47 = rbx_7[1].d
    
    if (rax_47 != 0)
        rbx_7[1].d = rax_47 + 1
        rax_47.b = 1
    
    if (rax_47.b == 0)
        rbx_7 = nullptr
    
    if (rbx_7 != 0)
        rcx_33 = *(arg1 + 8)

var_3c48 = rcx_33
var_3c40.q = rbx_7

if (rbx_7 != 0)
    int32_t rax_48 = rbx_7[1].d
    rbx_7[1].d = rax_48
    
    if (rax_48 == 0)
        (**rbx_7)(rbx_7)
        int32_t temp16_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

void var_498
int64_t* rax_51 = sub_14068d9d0(&var_498)
sub_140692eb0(&rax_51[0x3b], &var_37a8)
void*** rax_52 = j_sub_140a82f30(0x7a8)
void*** rdi_4 = rax_52

if (rax_52 == 0)
    rdi_4 = nullptr
else
    rax_52[1].d = 1
    *(rax_52 + 0xc) = 1
    *rax_52 = &data_142d8b060
    
    if (rax_52 != -0x10)
        sub_140f66da0(&rax_52[2])

void*** var_38f0 = rdi_4
void* var_38f8 = &rdi_4[2]
sub_14065fa30(&var_38f8, &rdi_4[2])
int64_t var_3c58 = 0x798
void var_3bc3
void* var_38e8 = &var_3bc3
sub_140e23ed0(&rdi_4[2], "STextBlock")
void* rax_54
int128_t zmm1_2
rax_54, zmm1_2 = sub_140f98690(sub_140ee11e0(rax_51, arg1, &var_3c18), &var_3c48, &var_3958)
int128_t var_3aa8
void** rax_55 = sub_140697520(&var_38f8, &var_3aa8, rax_54, zmm1_2)
int64_t* rbx_9 = rax_55[1]
var_3c48 = *rax_55
var_3c40.q = rbx_9

if (rbx_9 != 0)
    rbx_9[1].d += 1

void*** rax_56 = j_sub_140a82f30(0x88)
void*** rdi_5 = rax_56

if (rax_56 == 0)
    rdi_5 = nullptr
else
    sub_14068e490(rax_56)
    *rdi_5 = &data_142d8add0

int64_t* (* rax_57)(void* arg1, int64_t* arg2) = sub_140698b50(rdi_5)
var_3c28 = rax_57
__builtin_memcpy(&var_3c08, "\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x01", 
    0x11)
var_3bf8:8.q = 0
int32_t var_3be8 = 0
__builtin_memcpy(rax_57 + 0x48, 
    "\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x01", 0x11)
sub_1407473e0(rax_57 + 0x60, &var_3bf8:8)
sub_140745b20(&var_3bf8:8)
*(rax_57 + 0x20) = 2
sub_140693600(rax_57, &var_3c48)

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9)
        int32_t temp18_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rbx_9 + 8))(rbx_9, 1)

void var_8e0
int64_t* rax_60 = sub_14068d9d0(&var_8e0)
sub_140692eb0(&rax_60[0x3b], &var_3740)
void*** rax_61 = j_sub_140a82f30(0x7a8)
void*** rdi_7 = rax_61

if (rax_61 == 0)
    rdi_7 = nullptr
else
    rax_61[1].d = 1
    *(rax_61 + 0xc) = 1
    *rax_61 = &data_142d8b060
    
    if (rax_61 != -0x10)
        sub_140f66da0(&rax_61[2])

void*** var_38c0 = rdi_7
void* var_38c8 = &rdi_7[2]
sub_14065fa30(&var_38c8, &rdi_7[2])
int64_t var_3c58_1 = 0x798
void var_3bc8
void* var_38b8 = &var_3bc8
sub_140e23ed0(&rdi_7[2], "STextBlock")
void* rax_62
int128_t zmm1_3
rax_62, zmm1_3 = sub_140ee11e0(rax_60, arg1, &var_3a38)
int128_t var_3968
void** rax_63 = sub_140697520(&var_38c8, &var_3968, rax_62, zmm1_3)
int64_t* rbx_11 = rax_63[1]
var_3c48 = *rax_63
var_3c40.q = rbx_11

if (rbx_11 != 0)
    rbx_11[1].d += 1

void*** rax_64 = j_sub_140a82f30(0x88)
void*** rdi_8 = rax_64

if (rax_64 == 0)
    rdi_8 = nullptr
else
    sub_14068e490(rax_64)
    *rdi_8 = &data_142d8add0

void* rax_65 = sub_140698b50(rdi_8)
__builtin_memcpy(&var_3c08, "\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x01", 
    0x11)
var_3bf8:8.q = 0
int32_t var_3be8_1 = 0
__builtin_memcpy(rax_65 + 0x48, 
    "\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x01", 0x11)
sub_1407473e0(rax_65 + 0x60, &var_3bf8:8)
sub_140745b20(&var_3bf8:8)
sub_140693600(rax_65, &var_3c48)

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t temp20_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*rbx_11 + 8))(rbx_11, 1)

void var_d28
int64_t* rax_68 = sub_14068d9d0(&var_d28)
sub_140692eb0(&rax_68[0x3b], &var_3538)
void*** rax_69 = j_sub_140a82f30(0x7a8)
void*** rdi_9 = rax_69

if (rax_69 == 0)
    rdi_9 = nullptr
else
    rax_69[1].d = 1
    *(rax_69 + 0xc) = 1
    *rdi_9 = &data_142d8b060
    
    if (rdi_9 != -0x10)
        sub_140f66da0(&rdi_9[2])

void*** var_3808 = rdi_9
void* var_3810 = &rdi_9[2]
sub_14065fa30(&var_3810, &rdi_9[2])
int64_t var_3c58_2 = 0x798
void var_3bc7
void* var_3800 = &var_3bc7
sub_140e23ed0(&rdi_9[2], "STextBlock")
void* rax_70
int128_t zmm1_4
rax_70, zmm1_4 = sub_140ee11e0(rax_68, arg1, &var_39d8)
int128_t var_3978
void** rax_71 = sub_140697520(&var_3810, &var_3978, rax_70, zmm1_4)
int64_t* rbx_13 = rax_71[1]
var_3c48 = *rax_71
var_3c40.q = rbx_13

if (rbx_13 != 0)
    rbx_13[1].d += 1

void*** rax_72 = j_sub_140a82f30(0x88)
void*** rdi_10 = rax_72

if (rax_72 == 0)
    rdi_10 = nullptr
else
    sub_14068e490(rax_72)
    *rdi_10 = &data_142d8add0

void* rax_73 = sub_140698b50(rdi_10)
__builtin_memcpy(&var_3c08, "\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x01", 
    0x11)
var_3bf8:8.q = 0
int32_t var_3be8_2 = 0
__builtin_memcpy(rax_73 + 0x48, 
    "\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x01", 0x11)
sub_1407473e0(rax_73 + 0x60, &var_3bf8:8)
sub_140745b20(&var_3bf8:8)
sub_140693600(rax_73, &var_3c48)

if (rbx_13 != 0)
    rbx_13[1].d -= 1
    
    if (rbx_13[1].d == 1)
        (**rbx_13)(rbx_13)
        int32_t temp22_1 = *(rbx_13 + 0xc)
        *(rbx_13 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*(*rbx_13 + 8))(rbx_13, 1)

void var_1170
int64_t* rax_76 = sub_14068d9d0(&var_1170)
sub_140692eb0(&rax_76[0x3b], &var_35a0)
void*** rax_77 = j_sub_140a82f30(0x7a8)
void*** rdi_11 = rax_77

if (rax_77 == 0)
    rdi_11 = nullptr
else
    rax_77[1].d = 1
    *(rax_77 + 0xc) = 1
    *rdi_11 = &data_142d8b060
    
    if (rdi_11 != -0x10)
        sub_140f66da0(&rdi_11[2])

var_3a30.q = rdi_11
var_3a38 = &rdi_11[2]
sub_14065fa30(&var_3a38, &rdi_11[2])
int64_t var_3c58_3 = 0x798
void var_3bc6
void* var_3a28 = &var_3bc6
sub_140e23ed0(&rdi_11[2], "STextBlock")
void* rax_78
int128_t zmm1_5
rax_78, zmm1_5 = sub_140ee11e0(rax_76, arg1, &var_3a18)
int128_t var_37e8
void** rax_79 = sub_140697520(&var_3a38, &var_37e8, rax_78, zmm1_5)
int64_t* rbx_15 = rax_79[1]
var_3c48 = *rax_79
var_3c40.q = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1

void*** rax_80 = j_sub_140a82f30(0x88)
void*** rdi_12 = rax_80

if (rax_80 == 0)
    rdi_12 = nullptr
else
    sub_14068e490(rax_80)
    *rdi_12 = &data_142d8add0

void* rax_81 = sub_140698b50(rdi_12)
__builtin_memcpy(&var_3c08, "\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x01", 
    0x11)
var_3bf8:8.q = 0
int32_t var_3be8_3 = 0
__builtin_memcpy(rax_81 + 0x48, 
    "\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x00\x00\x40\x40\x01", 0x11)
sub_1407473e0(rax_81 + 0x60, &var_3bf8:8)
sub_140745b20(&var_3bf8:8)
sub_140693600(rax_81, &var_3c48)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp24_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*(*rbx_15 + 8))(rbx_15, 1)

void var_2ed8
int64_t* rax_84 = sub_14068d420(&var_2ed8)
int64_t r13_1 = sx.q(rax_84[0x35].d)
int32_t rcx_98 = (r13_1 + 1).d
rax_84[0x35].d = rcx_98

if (rcx_98 s> *(rax_84 + 0x1ac))
    sub_140638870(&rax_84[0x34])

*(rax_84[0x34] + (r13_1 << 3)) = rax_81
int64_t rdi_14 = sx.q(rax_84[0x35].d)
int32_t rax_86 = (rdi_14 + 1).d
rax_84[0x35].d = rax_86

if (rax_86 s> *(rax_84 + 0x1ac))
    sub_140638870(&rax_84[0x34])

*(rax_84[0x34] + (rdi_14 << 3)) = rax_73
int64_t rdi_15 = sx.q(rax_84[0x35].d)
int32_t rax_88 = (rdi_15 + 1).d
rax_84[0x35].d = rax_88

if (rax_88 s> *(rax_84 + 0x1ac))
    sub_140638870(&rax_84[0x34])

*(rax_84[0x34] + (rdi_15 << 3)) = rax_65
void*** rax_90 = j_sub_140a82f30(0x2e8)
void*** rdi_16 = rax_90

if (rax_90 == 0)
    rdi_16 = nullptr
else
    rax_90[1].d = 1
    *(rax_90 + 0xc) = 1
    *rdi_16 = &data_142d8c590
    
    if (rdi_16 != -0x10)
        sub_14068e550(&rdi_16[2])

var_39d0.q = rdi_16
var_39d8 = &rdi_16[2]
sub_14065fa30(&var_39d8, &rdi_16[2])
int64_t var_3c58_4 = 0x2d8
void var_3bc5
void* var_39c8 = &var_3bc5
void* var_37f8
void** rax_91 =
    sub_140696920(&var_39d8, &var_37f8, rax_84, sub_140e23ed0(&rdi_16[2], "SVerticalBox"))
int64_t* rbx_18 = rax_91[1]
var_3c48 = *rax_91
var_3c40.q = rbx_18

if (rbx_18 != 0)
    rbx_18[1].d += 1

void*** rax_92 = j_sub_140a82f30(0x88)
void*** r15_2 = rax_92

if (rax_92 == 0)
    r15_2 = nullptr
else
    sub_14068e490(rax_92)
    *r15_2 = &data_142d8add0

var_3c08 = 1
var_3c00_1.d = 0x3f800000
var_3c00_1:4.b = 1
var_3bf8.q = 0
var_3bf8:8.d = 0
sub_140692f90(&var_3bf8, &var_3a60)
r15_2[5].d = var_3c08
*(r15_2 + 0x34) = var_3c00_1:4.b
r15_2[6].d = var_3c00_1.d
sub_140692f90(&r15_2[7], &var_3bf8)
sub_140745b20(&var_3bf8)
sub_140693600(r15_2, &var_3c48)

if (rbx_18 != 0)
    rbx_18[1].d -= 1
    
    if (rbx_18[1].d == 1)
        (**rbx_18)(rbx_18)
        int32_t temp26_1 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*(*rbx_18 + 8))(rbx_18, 1)

void var_15b8
int64_t* rax_97 = sub_14068d9d0(&var_15b8)
sub_140692eb0(&rax_97[0x3b], &var_3608)
void*** rax_98 = j_sub_140a82f30(0x7a8)
void*** rdi_17 = rax_98

if (rax_98 == 0)
    rdi_17 = nullptr
else
    rax_98[1].d = 1
    *(rax_98 + 0xc) = 1
    *rdi_17 = &data_142d8b060
    
    if (rdi_17 != -0x10)
        sub_140f66da0(&rdi_17[2])

var_3a10.q = rdi_17
var_3a18 = &rdi_17[2]
sub_14065fa30(&var_3a18, &rdi_17[2])
int64_t var_3c58_5 = 0x798
void var_3bc4
void* var_3a08 = &var_3bc4
sub_140e23ed0(&rdi_17[2], "STextBlock")
void* rax_99
int128_t zmm1_7
rax_99, zmm1_7 = sub_140ee11e0(rax_97, arg1, &var_39b8)
void* var_37d8
void** rax_100 = sub_140697520(&var_3a18, &var_37d8, rax_99, zmm1_7)
var_3c48 = *rax_100
void* rcx_122 = rax_100[1]
var_3c40.q = rcx_122

if (rcx_122 != 0)
    *(rcx_122 + 8) += 1

void*** rax_101 = j_sub_140a82f30(0x88)
void*** rsi_8 = rax_101

if (rax_101 == 0)
    rsi_8 = nullptr
else
    sub_14068e490(rax_101)
    *rsi_8 = &data_142d8add0

void var_1a00
int64_t* rax_102 = sub_14068d9d0(&var_1a00)
sub_140692eb0(&rax_102[0x3b], &var_3670)
void*** rax_103 = sub_140688ae0()
var_39b0.q = rax_103
var_39b8 = &rax_103[2]
sub_14065fa30(&var_39b8, &rax_103[2])
int64_t var_3c58_6 = 0x798
void var_3bbd
void* var_39a8 = &var_3bbd
sub_140e23ed0(&rax_103[2], "STextBlock")
void* rax_104
int128_t zmm1_8
rax_104, zmm1_8 = sub_140ee11e0(rax_102, arg1, &var_39f8)
void* var_3820
void** rax_105 = sub_140697520(&var_39b8, &var_3820, rax_104, zmm1_8)
var_3bd8 = *rax_105
void* rcx_131 = rax_105[1]
var_3bd0.q = rcx_131

if (rcx_131 != 0)
    *(rcx_131 + 8) += 1

void*** rax_106 = j_sub_140a82f30(0x88)
void*** r13_2 = rax_106

if (rax_106 == 0)
    r13_2 = nullptr
else
    sub_14068e490(rax_106)
    *r13_2 = &data_142d8add0

void var_1e48
int64_t* rax_107 = sub_14068d9d0(&var_1e48)
sub_140692eb0(&rax_107[0x3b], &var_36d8)
void*** rax_108 = sub_140688ae0()
var_39f0.q = rax_108
var_39f8 = &rax_108[2]
sub_14065fa30(&var_39f8, &rax_108[2])
int64_t var_3c58_7 = 0x798
void var_3bc2
void* var_39e8 = &var_3bc2
sub_140e23ed0(&rax_108[2], "STextBlock")
void* rax_109
int128_t zmm1_9
rax_109, zmm1_9 = sub_140ee11e0(rax_107, arg1, &var_3b18)
void* var_37b8
void** rax_110 = sub_140697520(&var_39f8, &var_37b8, rax_109, zmm1_9)
var_3b48 = *rax_110
void* rcx_140 = rax_110[1]
var_3b40.q = rcx_140

if (rcx_140 != 0)
    *(rcx_140 + 8) += 1

void*** rax_111 = j_sub_140a82f30(0x88)
void*** r12_1 = rax_111

if (rax_111 == 0)
    r12_1 = nullptr
else
    sub_14068e490(rax_111)
    *r12_1 = &data_142d8add0

void*** rax_112 = sub_140e92390()
var_3b10.q = rax_112
var_3b18 = &rax_112[2]
sub_14065fa30(&var_3b18, &rax_112[2])
int64_t var_3c58_8 = 0x2d8
void var_3bc1
void* var_3b08 = &var_3bc1
sub_140e23ed0(&rax_112[2], "SVerticalBox")
void* rax_115 = sub_140693860(sub_140ed1a40(sub_140698b50(rsi_8), 0x40400000), &var_3c48)
void* rax_118 = sub_140693860(sub_140ed1a40(sub_140698b50(r13_2), 0x40400000), &var_3bd8)
void* rax_121 = sub_140693860(sub_140ed1a40(sub_140698b50(r12_1), 0x40400000), &var_3b48)
void var_3088
int64_t* rax_122
int128_t zmm1_13
rax_122, zmm1_13 = sub_14068d420(&var_3088)
void var_37c8
void** rax_126 = sub_140696920(&var_3b18, &var_37c8, 
    sub_1406938c0(sub_1406938c0(sub_1406938c0(rax_122, rax_121), rax_118), rax_115), zmm1_13)
var_3c48 = *rax_126
void* rcx_159 = rax_126[1]
var_3c40.q = rcx_159

if (rcx_159 != 0)
    *(rcx_159 + 8) += 1

void*** rax_127 = j_sub_140a82f30(0x88)
void*** rbx_24 = rax_127

if (rax_127 == 0)
    rbx_24 = nullptr
else
    sub_14068e490(rax_127)
    *rbx_24 = &data_142d8add0

void*** rax_128 = sub_140e91f70()
void*** var_3af0 = rax_128
void* var_3af8 = &rax_128[2]
sub_14065fa30(&var_3af8, &rax_128[2])
void var_3bc0
void* var_3ae8 = &var_3bc0
int64_t var_3c58_9 = 0x2d8
sub_140e23ed0(var_3af8, "SHorizontalBox")
void* rax_130 = sub_140693860(sub_140eb9be0(rbx_24, &var_3a80), &var_3c48)
void var_33e8
int64_t* rax_131
int128_t zmm1_14
rax_131, zmm1_14 = sub_14068d420(&var_33e8)
void* var_3408
void** rax_134 = sub_140696920(&var_3af8, &var_3408, 
    sub_1406938c0(sub_1406938c0(rax_131, rax_130), r15_2), zmm1_14)
var_3bd8 = *rax_134
void* rcx_170 = rax_134[1]
var_3bd0.q = rcx_170

if (rcx_170 != 0)
    *(rcx_170 + 8) += 1

void*** rax_135 = j_sub_140a82f30(0x88)
void*** rsi_10 = rax_135

if (rax_135 == 0)
    rsi_10 = nullptr
else
    sub_14068e490(rax_135)
    *rsi_10 = &data_142d8add0

int64_t* rbx_26 = *(arg1 + 0x10)
int128_t* (* rcx_172)(void* arg1, int128_t* arg2) = nullptr

if (rbx_26 != 0)
    int32_t rax_136 = rbx_26[1].d
    
    if (rax_136 != 0)
        rbx_26[1].d = rax_136 + 1
        rax_136.b = 1
    
    if (rax_136.b == 0)
        rbx_26 = nullptr
    
    if (rbx_26 != 0)
        rcx_172 = *(arg1 + 8)

var_3c48 = rcx_172
var_3c40.q = rbx_26

if (rbx_26 != 0)
    int32_t rax_137 = rbx_26[1].d
    rbx_26[1].d = rax_137
    
    if (rax_137 == 0)
        (**rbx_26)(rbx_26)
        int32_t temp27_1 = *(rbx_26 + 0xc)
        *(rbx_26 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*(*rbx_26 + 8))(rbx_26, 1)

void var_2290
int64_t* rax_140 = sub_14068d9d0(&var_2290)
sub_140692eb0(&rax_140[0x3b], &var_3888)
void*** rax_141 = sub_140688ae0()
var_3958:8.q = rax_141
var_3958.q = &rax_141[2]
sub_14065fa30(&var_3958, &rax_141[2])
int64_t var_3c58_10 = 0x798
void var_3bbf
void* var_3948 = &var_3bbf
sub_140e23ed0(&rax_141[2], "STextBlock")
void* rax_143
int128_t zmm1_15
rax_143, zmm1_15 = sub_140f98690(sub_140ee11e0(rax_140, arg1, &var_3ac8), &var_3c48, &var_3ab8)
void* var_33f8
void** rax_144 = sub_140697520(&var_3958, &var_33f8, rax_143, zmm1_15)
var_3b48 = *rax_144
void* rcx_183 = rax_144[1]
var_3b40.q = rcx_183

if (rcx_183 != 0)
    *(rcx_183 + 8) += 1

void*** rax_145 = j_sub_140a82f30(0x88)
void*** rbx_28 = rax_145

if (rax_145 == 0)
    rbx_28 = nullptr
else
    sub_14068e490(rax_145)
    *rbx_28 = &data_142d8add0

void* rax_147 = sub_140ed1a40(sub_140698b50(rbx_28), 0x40000000)
*(rax_147 + 0x20) = 2
void var_3478
int64_t* rax_148 = sub_140e8f130(&var_3478, arg1, &var_3938)
int16_t var_3b38 = 0x100
int64_t var_3b30 = 0
int32_t var_3b28 = 0
sub_140692f90(&var_3b30, rax_148)
void var_3468
int64_t* rax_149 = sub_140e8f130(&var_3468, arg1, &var_3918)
int16_t var_3b68 = 0x100
int64_t var_3b60 = 0
int32_t var_3b58 = 0
sub_140692f90(&var_3b60, rax_149)
void var_2ad0
void* rax_151 = sub_140f93f50(sub_140e934e0(&var_2ad0), arg1, &var_3998)
*(rax_151 + 0x1c8) = 0x101
sub_140692f90(rax_151 + 0x1d0, &var_3a90)
*(rax_151 + 0x1e0) = var_3b68.b
*(rax_151 + 0x1e1) = var_3b68:1.b
sub_140692f90(rax_151 + 0x1e8, &var_3b60)
*(rax_151 + 0x1f8) = var_3b38.b
*(rax_151 + 0x1f9) = var_3b38:1.b
sub_140692f90(rax_151 + 0x200, &var_3b30)
*(rax_151 + 0x210) = *(arg1 + 0x3f0)
*(rax_151 + 0x211) = *(arg1 + 0x3f1)
sub_140692f90(rax_151 + 0x218, arg1 + 0x3f8)
void*** rax_156 = sub_140e91730()
void*** var_3ad8 = rax_156
void* var_3ae0 = &rax_156[2]
sub_140918950(&var_3ae0, &rax_156[2])
void var_3bbe
void* var_3ad0 = &var_3bbe
int64_t var_3c58_11 = 0x360
void* var_3458
void** rax_157 =
    sub_140e9b230(&var_3ae0, &var_3458, rax_151, sub_140e23ed0(var_3ae0, "SColorBlock"))
var_3c48 = *rax_157
void* rcx_203 = rax_157[1]
var_3c40.q = rcx_203

if (rcx_203 != 0)
    *(rcx_203 + 8) += 1

void var_2530
int64_t* rax_158 = sub_14068c940(&var_2530)
sub_140692e20(&rax_158[0x3c], &var_38e0)
sub_140692e20(&rax_158[0x3f], &var_3a50)
void*** rax_159 = sub_140688920()
var_3938:8.q = rax_159
var_3938.q = &rax_159[2]
sub_14065fa30(&var_3938, &rax_159[2])
int64_t var_3c58_12 = 0x3c8
void var_3c38
void* var_3928 = &var_3c38
void* rax_160
int128_t zmm1_19
rax_160, zmm1_19 = sub_1406937a0(rax_158, &var_3c48, sub_140e23ed0(&rax_159[2], "SBox"))
void* var_3448
void** rax_161 = sub_140695d20(&var_3938, &var_3448, rax_160, zmm1_19)
var_3c48 = *rax_161
void* rcx_212 = rax_161[1]
var_3c40.q = rcx_212

if (rcx_212 != 0)
    *(rcx_212 + 8) += 1

void*** rax_162 = j_sub_140a82f30(0x88)
void*** r15_3 = rax_162

if (rax_162 == 0)
    r15_3 = nullptr
else
    sub_14068e490(rax_162)
    *r15_3 = &data_142d8add0

void*** rax_163 = sub_140e92390()
var_3918:8.q = rax_163
var_3918.q = &rax_163[2]
sub_14065fa30(&var_3918, &rax_163[2])
int64_t var_3c58_13 = 0x2d8
void var_3c37
void* var_3908 = &var_3c37
float zmm6[0x4] = sub_140e23ed0(&rax_163[2], "SVerticalBox")
void* rax_166 = sub_140693860(sub_140ed1a40(sub_140698b50(rsi_10), zmm6), &var_3bd8)
void* rax_167 = sub_140693860(rax_147, &var_3b48)
void* rax_170 = sub_140693860(sub_140ed1a40(sub_140698b50(r15_3), zmm6), &var_3c48)
void var_3238
int64_t* rax_171
int128_t zmm1_22
rax_171, zmm1_22 = sub_14068d420(&var_3238)
void* var_3438
void** rax_176 = sub_140696920(&var_3918, &var_3438, 
    sub_1406938c0(sub_1406938c0(sub_1406938c0(sub_1406938c0(rax_171, rax_170), rax_167), rax_166), 
        var_3c28), 
    zmm1_22)
var_3c48 = *rax_176
void* rdx_101 = rax_176[1]
var_3c40.q = rdx_101

if (rdx_101 != 0)
    *(rdx_101 + 8) += 1

void*** rax_177 = j_sub_140a82f30(0x88)
void*** rbx_33 = rax_177

if (rax_177 == 0)
    rbx_33 = nullptr
else
    sub_14068e490(rax_177)
    *rbx_33 = &data_142d8add0

void*** rax_178 = sub_140e91f70()
void*** var_3898 = rax_178
void* var_38a0 = &rax_178[2]
sub_14065fa30(&var_38a0, &rax_178[2])
void var_3c36
void* var_3890 = &var_3c36
int64_t var_3c58_14 = 0x2d8
sub_140e23ed0(var_38a0, "SHorizontalBox")
void* rax_180 = sub_140693860(sub_140698b50(rbx_33), &var_3c48)
void var_2d28
int64_t* rax_181
int128_t zmm1_23
rax_181, zmm1_23 = sub_14068d420(&var_2d28)
void* var_3418
void** rax_183 = sub_140696920(&var_38a0, &var_3418, sub_1406938c0(rax_181, rax_180), zmm1_23)
int64_t* rbx_35 = rax_183[1]
char* (* rsi_12)(void* arg1, char* arg2) = *rax_183
var_3c48 = rsi_12
var_3c40.q = rbx_35

if (rbx_35 != 0)
    rbx_35[1].d += 1

void var_2878
int64_t* rax_184 = sub_140e50320(&var_2878)
var_3c18 = rsi_12

if (rbx_35 != 0)
    rbx_35[1].d += 1

if (&var_3c18 != &rax_184[0x3a])
    var_3c18.o = *(rax_184 + 0x1d0)
    *(rax_184 + 0x1d0) = var_3c18.o

if (rbx_35 != 0)
    rbx_35[1].d -= 1
    
    if (rbx_35[1].d == 1)
        (**rbx_35)(rbx_35)
        int32_t temp29_1 = *(rbx_35 + 0xc)
        *(rbx_35 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*rbx_35 + 8))(rbx_35, 1)

sub_140669d70(&var_3c48)
void*** rax_187 = sub_140e49080()
var_3998:8.q = rax_187
var_3998.q = &rax_187[2]
sub_140918950(&var_3998, &rax_187[2])
int64_t var_3c58_15 = 0x4f0
void var_3c35
void* var_3988 = &var_3c35
void* var_3428
void** rax_188 =
    sub_140e579a0(&var_3998, &var_3428, rax_184, sub_140e23ed0(&rax_187[2], "SToolTip"))
int64_t* rsi_13 = rax_188[1]
void* r13_4 = *rax_188

if (rsi_13 != 0)
    rsi_13[1].d += 1

int64_t* var_3420

if (var_3420 != 0)
    var_3420[1].d -= 1
    
    if (var_3420[1].d == 1)
        (**var_3420)(var_3420)
        int32_t temp32_1 = *(var_3420 + 0xc)
        *(var_3420 + 0xc) -= 1
        
        if (temp32_1 == 1)
            (*(*var_3420 + 8))(var_3420, 1)

sub_140597060(&var_3998)
sub_140e53770(&var_2878)
sub_140669d70(&var_3418)
sub_140669d70(&var_38a0)
sub_140f9acc0(&var_2d28)
int64_t* var_3430

if (var_3430 != 0)
    var_3430[1].d -= 1
    
    if (var_3430[1].d == 1)
        (**var_3430)(var_3430)
        int32_t temp33_1 = *(var_3430 + 0xc)
        *(var_3430 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*(*var_3430 + 8))(var_3430, 1)

sub_140669d70(&var_3918)
int64_t var_3098

if (var_3098 != 0)
    sub_140a74f90(var_3098)

sub_140660250(&var_3238)
int64_t* var_3440

if (var_3440 != 0)
    var_3440[1].d -= 1
    
    if (var_3440[1].d == 1)
        (**var_3440)(var_3440)
        int32_t temp36_1 = *(var_3440 + 0xc)
        *(var_3440 + 0xc) -= 1
        
        if (temp36_1 == 1)
            (*(*var_3440 + 8))(var_3440, 1)

sub_140669d70(&var_3938)
sub_140690290(&var_2530)
sub_140f9a690(&var_3458)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_3ae0)
sub_140f9a950(&var_2ad0)
sub_140745b20(&var_3b60)
sub_140745b20(&var_3468)
sub_140745b20(&var_3b30)
sub_140745b20(&var_3478)
int64_t* var_33f0

if (var_33f0 != 0)
    var_33f0[1].d -= 1
    
    if (var_33f0[1].d == 1)
        (**var_33f0)(var_33f0)
        int32_t temp38_1 = *(var_33f0 + 0xc)
        *(var_33f0 + 0xc) -= 1
        
        if (temp38_1 == 1)
            (*(*var_33f0 + 8))(var_33f0, 1)

sub_140669d70(&var_3958)
sub_1406913d0(&var_2290)
sub_140669d70(&var_3408)
sub_140669d70(&var_3af8)
sub_140f9acc0(&var_33e8)
int64_t* var_37c0

if (var_37c0 != 0)
    var_37c0[1].d -= 1
    
    if (var_37c0[1].d == 1)
        (**var_37c0)(var_37c0)
        int32_t temp39_1 = *(var_37c0 + 0xc)
        *(var_37c0 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*(*var_37c0 + 8))(var_37c0, 1)

sub_140669d70(&var_3b18)
int64_t var_2ee8

if (var_2ee8 != 0)
    sub_140a74f90(var_2ee8)

sub_140660250(&var_3088)
int64_t* var_37b0

if (var_37b0 != 0)
    var_37b0[1].d -= 1
    
    if (var_37b0[1].d == 1)
        (**var_37b0)(var_37b0)
        int32_t temp42_1 = *(var_37b0 + 0xc)
        *(var_37b0 + 0xc) -= 1
        
        if (temp42_1 == 1)
            (*(*var_37b0 + 8))(var_37b0, 1)

sub_140669d70(&var_39f8)
sub_1406913d0(&var_1e48)
int64_t* var_3818

if (var_3818 != 0)
    var_3818[1].d -= 1
    
    if (var_3818[1].d == 1)
        (**var_3818)(var_3818)
        int32_t temp44_1 = *(var_3818 + 0xc)
        *(var_3818 + 0xc) -= 1
        
        if (temp44_1 == 1)
            (*(*var_3818 + 8))(var_3818, 1)

sub_140669d70(&var_39b8)
sub_1406913d0(&var_1a00)
int64_t* var_37d0

if (var_37d0 != 0)
    var_37d0[1].d -= 1
    
    if (var_37d0[1].d == 1)
        (**var_37d0)(var_37d0)
        int32_t temp46_1 = *(var_37d0 + 0xc)
        *(var_37d0 + 0xc) -= 1
        
        if (temp46_1 == 1)
            (*(*var_37d0 + 8))(var_37d0, 1)

sub_140669d70(&var_3a18)
sub_1406913d0(&var_15b8)
int64_t* var_37f0

if (var_37f0 != 0)
    var_37f0[1].d -= 1
    
    if (var_37f0[1].d == 1)
        (**var_37f0)(var_37f0)
        int32_t temp47_1 = *(var_37f0 + 0xc)
        *(var_37f0 + 0xc) -= 1
        
        if (temp47_1 == 1)
            (*(*var_37f0 + 8))(var_37f0, 1)

sub_140669d70(&var_39d8)
int64_t var_2d38

if (var_2d38 != 0)
    sub_140a74f90(var_2d38)

sub_140660250(&var_2ed8)
int64_t* var_37e0

if (var_37e0 != 0)
    var_37e0[1].d -= 1
    
    if (var_37e0[1].d == 1)
        (**var_37e0)(var_37e0)
        int32_t temp50_1 = *(var_37e0 + 0xc)
        *(var_37e0 + 0xc) -= 1
        
        if (temp50_1 == 1)
            (*(*var_37e0 + 8))(var_37e0, 1)

sub_140669d70(&var_3a38)
sub_1406913d0(&var_1170)
int64_t* var_3970

if (var_3970 != 0)
    var_3970[1].d -= 1
    
    if (var_3970[1].d == 1)
        (**var_3970)(var_3970)
        int32_t temp52_1 = *(var_3970 + 0xc)
        *(var_3970 + 0xc) -= 1
        
        if (temp52_1 == 1)
            (*(*var_3970 + 8))(var_3970, 1)

sub_140669d70(&var_3810)
sub_1406913d0(&var_d28)
int64_t* var_3960

if (var_3960 != 0)
    var_3960[1].d -= 1
    
    if (var_3960[1].d == 1)
        (**var_3960)(var_3960)
        int32_t temp54_1 = *(var_3960 + 0xc)
        *(var_3960 + 0xc) -= 1
        
        if (temp54_1 == 1)
            (*(*var_3960 + 8))(var_3960, 1)

sub_140669d70(&var_38c8)
sub_1406913d0(&var_8e0)
int64_t* var_3aa0

if (var_3aa0 != 0)
    var_3aa0[1].d -= 1
    
    if (var_3aa0[1].d == 1)
        (**var_3aa0)(var_3aa0)
        int32_t temp55_1 = *(var_3aa0 + 0xc)
        *(var_3aa0 + 0xc) -= 1
        
        if (temp55_1 == 1)
            (*(*var_3aa0 + 8))(var_3aa0, 1)

sub_140669d70(&var_38f8)
sub_1406913d0(&var_498)
sub_140745b20(&var_38d8)
sub_140745b20(&var_3a48)
sub_140745b20(&var_3a90)
sub_140745b20(&var_3830)
sub_140691aa0(&var_3888)
sub_140745b20(&var_3a78)
sub_140745b20(&var_3680)
sub_140691aa0(&var_36d8)
sub_140745b20(&var_3618)
sub_140691aa0(&var_3670)
sub_140745b20(&var_35b0)
sub_140691aa0(&var_3608)
sub_140745b20(&var_3a60)
sub_140745b20(&var_3548)
sub_140691aa0(&var_35a0)
sub_140745b20(&var_34e0)
sub_140691aa0(&var_3538)
sub_140745b20(&var_36e8)
sub_140691aa0(&var_3740)
sub_140745b20(&var_3750)
sub_140691aa0(&var_37a8)
var_3c48 = sub_140fc1680
var_3bd8 = sub_140fc1620
var_3b48 = sub_140fb2d60
var_3ac8 = sub_140fb2d60
var_3b18 = sub_140fb4590
int32_t var_3c40_1 = 0
int128_t zmm0_6 = var_3c48.o
var_3ab8 = sub_140fb4660
int32_t var_3bd0_1 = 0
var_3a50.w = 0x101
var_3a48 = 0
int32_t var_3a40_1 = 0
int32_t var_3b40_1 = 0
int16_t var_3a98_1 = 0x100
var_3a90 = 0
int32_t var_3a88_1 = 0
var_3a80.w = 0x101
var_3a78 = 0
int32_t var_3a70_1 = 0
var_3a68.w = 0x101
var_3a60 = 0
int32_t var_3a58_1 = 0
int32_t var_3ac0_1 = 0
__builtin_memcpy(&var_38c8, "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 
    0x11)
int64_t var_38b0 = 0
int32_t var_38a8 = 0
int32_t var_3b10_1 = 0
int32_t var_3ab0_1 = 0
var_3968 = var_3bd8.o
int128_t zmm1_26 = var_3ac8.o
var_3aa8 = zmm0_6
zmm0_6 = var_3b48.o
var_37e8 = zmm1_26
var_3978 = zmm0_6
int64_t* rax_215 = sub_140e8f130(&var_3998, arg1, &var_3aa8)
int16_t var_3b68_1 = 0x100
var_3b60 = 0
int32_t var_3b58_1 = 0
sub_140692f90(&var_3b60, rax_215)
int64_t* rax_216 = sub_140e8f130(&var_37c8, arg1, &var_3968)
int16_t var_3b38_1 = 0x100
var_3b30 = 0
int32_t var_3b28_1 = 0
sub_140692f90(&var_3b30, rax_216)
void* rax_218 = sub_140f93f50(sub_140e934e0(&var_2d28), arg1, &var_3978)
*(rax_218 + 0x1c8) = 0x101
sub_140692f90(rax_218 + 0x1d0, &var_3a48)
*(rax_218 + 0x1e0) = var_3b38_1.b
*(rax_218 + 0x1e1) = var_3b38_1:1.b
sub_140692f90(rax_218 + 0x1e8, &var_3b30)
*(rax_218 + 0x1f8) = var_3b68_1.b
*(rax_218 + 0x1f9) = var_3b68_1:1.b
sub_140692f90(rax_218 + 0x200, &var_3b60)
*(rax_218 + 0x210) = *(arg1 + 0x3f0)
*(rax_218 + 0x211) = *(arg1 + 0x3f1)
sub_140692f90(rax_218 + 0x218, arg1 + 0x3f8)
void*** rax_223 = sub_140e91730()
void*** var_3ad8_1 = rax_223
var_3ae0 = &rax_223[2]
sub_140918950(&var_3ae0, &rax_223[2])
void* var_3ad0_1 = &var_3c35
int64_t var_3c58_16 = 0x360
void** rax_224 =
    sub_140e9b230(&var_3ae0, &var_37b8, rax_218, sub_140e23ed0(var_3ae0, "SColorBlock"))
var_3c48 = *rax_224
void* rcx_350 = rax_224[1]
var_3c40_1.q = rcx_350

if (rcx_350 != 0)
    *(rcx_350 + 8) += 1

void* rax_226 = sub_140f93f50(sub_140e934e0(&var_2ad0), arg1, &var_37e8)
*(rax_226 + 0x1c8) = 0x101
sub_140692f90(rax_226 + 0x1d0, &var_3a60)
*(rax_226 + 0x1e0) = 0x101
sub_140692f90(rax_226 + 0x1e8, &var_3a78)
*(rax_226 + 0x1f8) = 0x100
sub_140692f90(rax_226 + 0x200, &var_3a90)
*(rax_226 + 0x210) = *(arg1 + 0x3f0)
*(rax_226 + 0x211) = *(arg1 + 0x3f1)
sub_140692f90(rax_226 + 0x218, arg1 + 0x3f8)
void*** rax_229 = sub_140e91730()
void*** var_3af0_1 = rax_229
var_3af8 = &rax_229[2]
sub_140918950(&var_3af8, &rax_229[2])
void* var_3ae8_1 = &var_3c36
int64_t var_3c58_17 = 0x360
void** rax_230 =
    sub_140e9b230(&var_3af8, &var_3820, rax_226, sub_140e23ed0(var_3af8, "SColorBlock"))
var_3bd8 = *rax_230
void* rcx_361 = rax_230[1]
var_3bd0_1.q = rcx_361

if (rcx_361 != 0)
    *(rcx_361 + 8) += 1

void* rax_232 = sub_140693860(sub_1406a4fe0(), &var_3c48)
void* rax_234 = sub_140693860(sub_1406a4fe0(), &var_3bd8)
void* rax_237 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_33e8), rax_234), rax_232)
void** rax_238
int128_t zmm1_29
rax_238, zmm1_29 = sub_140688620(&var_38f8, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorThemes.cpp", 
    0x143, &var_3c37)
void** rax_239 = sub_140696920(rax_238, &var_37d8, rax_237, zmm1_29)
var_3bd8 = *rax_239
void* rcx_370 = rax_239[1]
var_3bd0_1.q = rcx_370

if (rcx_370 != 0)
    *(rcx_370 + 8) += 1

var_3c40_1.q = rsi_13
void* r15_4 = r13_4 + 0x390

if (r13_4 == 0)
    r15_4 = nullptr

var_3c48 = r15_4

if (rsi_13 != 0)
    rsi_13[1].d += 1

int64_t* rax_240
int128_t zmm6_1
rax_240, zmm6_1 = sub_14068c640(&var_2878)
var_3aa8 = var_3ab8.o
int64_t* rax_241 = sub_140e45b90(&var_3968, arg1, &var_3aa8)
var_3c08.q = 0
var_3c00_1.b = 1
var_3bf8.q = 0
var_3bf8:8.d = 0
sub_140692f90(&var_3bf8, rax_241)
rax_240[0x44] = var_3c08.q
rax_240[0x45].b = var_3c00_1.b
sub_1407473e0(&rax_240[0x46], &var_3bf8)
sub_140745b20(&var_3bf8)
sub_140745b20(&var_3968)
var_3aa8 = var_3b18.o
int64_t* rax_244 = sub_140e45dd0(&var_3978, arg1, &var_3aa8)
var_3868:8.b = 1
__builtin_memcpy(&var_3888, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
var_3858 = 0
var_3878 = zx.o(0)
var_3850.d = 0
sub_140692f90(&var_3858, rax_244)
sub_140693390(&rax_240[0x55], &var_3888)
rax_240[0x5a].b = var_3868:8.b
sub_1407473e0(&rax_240[0x5b], &var_3858)
sub_140745b20(&var_3858)
sub_140ddfb70(&var_3888)
int128_t zmm1_30 = sub_140745b20(&var_3978)
rax_240[0x39].b = 1
*(rax_240 + 0x1b8) = zmm6_1
sub_140692f90(&rax_240[0x3a], &var_38b0)
var_3c18 = r15_4

if (rsi_13 != 0)
    rsi_13[1].d += 1

if (&var_3c18 != &rax_240[6])
    zmm1_30 = var_3c18.o
    var_3c18.o = *(rax_240 + 0x30)
    *(rax_240 + 0x30) = zmm1_30

if (rsi_13 != 0)
    rsi_13[1].d -= 1
    
    if (rsi_13[1].d == 1)
        (**rsi_13)(rsi_13)
        int32_t temp57_1 = *(rsi_13 + 0xc)
        *(rsi_13 + 0xc) -= 1
        
        if (temp57_1 == 1)
            (*(*rsi_13 + 8))(rsi_13, 1)

sub_140597060(&var_3c48)
void* rax_249 = sub_1406936e0(rax_240, &var_3bd8, zmm1_30)
int64_t* rax_250
int128_t zmm1_31
rax_250, zmm1_31 = sub_140688320(&var_38e0, "SBorder", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorThemes.cpp", 
    0x13d, &var_3c38)
void** rax_251 = sub_140695920(rax_250, &var_37f8, rax_249, zmm1_31)
int64_t* rbx_56 = rax_251[1]
var_3c48 = *rax_251
var_3c40_1.q = rbx_56

if (rbx_56 != 0)
    rbx_56[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_3c48)

if (rbx_56 != 0)
    rbx_56[1].d -= 1
    
    if (rbx_56[1].d == 1)
        (**rbx_56)(rbx_56)
        int32_t temp60_1 = *(rbx_56 + 0xc)
        *(rbx_56 + 0xc) -= 1
        
        if (temp60_1 == 1)
            (*(*rbx_56 + 8))(rbx_56, 1)

sub_140669d70(&var_37f8)
sub_140669d70(&var_38e0)
sub_14068fed0(&var_2878)
sub_140669d70(&var_37d8)
sub_140669d70(&var_38f8)
sub_140f9acc0(&var_33e8)
sub_140f9a690(&var_3820)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_3af8)
sub_140f9a950(&var_2ad0)
sub_140f9a690(&var_37b8)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_3ae0)
sub_140f9a950(&var_2d28)
sub_140745b20(&var_3b30)
sub_140745b20(&var_37c8)
sub_140745b20(&var_3b60)
sub_140745b20(&var_3998)
sub_140745b20(&var_38b0)
sub_140745b20(&var_3a60)
sub_140745b20(&var_3a78)
sub_140745b20(&var_3a90)
sub_140745b20(&var_3a48)

if (rsi_13 != 0)
    rsi_13[1].d -= 1
    
    if (rsi_13[1].d == 1)
        (**rsi_13)(rsi_13)
        int32_t temp61_1 = *(rsi_13 + 0xc)
        *(rsi_13 + 0xc) -= 1
        
        if (temp61_1 == 1)
            (*(*rsi_13 + 8))(rsi_13, 1)

sub_140597060(&var_3498)
int64_t result = sub_140597060(&var_3b88)
__security_check_cookie(rax_1 ^ &var_3c78)
return result
