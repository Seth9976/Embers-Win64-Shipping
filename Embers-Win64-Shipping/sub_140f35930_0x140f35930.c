// 函数: sub_140f35930
// 地址: 0x140f35930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_988
int64_t rax_1 = __security_cookie ^ &var_988
sub_140f25980(arg1 + 0x398, arg2 + 0x1a0)
sub_14065da90(arg1 + 0x3f8, arg2 + 0x278)
sub_14065da90(arg1 + 0x410, arg2 + 0x290)

if (arg2 + 0x2c0 != arg1 + 0x440)
    int64_t* rcx_4
    
    if (*(arg2 + 0x2c8) != 0)
        rcx_4 = *(arg2 + 0x2c0)
    
    if (*(arg2 + 0x2c8) != 0 && rcx_4 != 0)
        (*(*rcx_4 + 0x40))(rcx_4, arg1 + 0x440)
    else if (*(arg1 + 0x448) != 0)
        int64_t* rcx_5 = *(arg1 + 0x440)
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x38))(rcx_5, 0)
            int64_t rcx_6 = *(arg1 + 0x440)
            
            if (rcx_6 != 0)
                *(arg1 + 0x440) = sub_140a84c80(rcx_6, 0, 0)
            
            *(arg1 + 0x448) = 0

sub_1407473e0(arg1 + 0x450, arg2 + 0x2d0)
*(arg1 + 0x428) = *(arg2 + 0x2a8)
*(arg1 + 0x429) = *(arg2 + 0x2a9)
*(arg1 + 0x42a) = *(arg2 + 0x2aa)

if (arg1 + 0x430 != arg2 + 0x2b0)
    int32_t i_3 = *(arg1 + 0x438)
    
    if (i_3 != 0)
        int64_t* rdi_2 = *(arg1 + 0x430) + 0x10
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_2 = &rdi_2[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = *(arg2 + 0x2b8)
    void* rdi_3 = *(arg2 + 0x2b0)
    int32_t r8_1 = *(arg1 + 0x43c)
    *(arg1 + 0x438) = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808f70(arg1 + 0x430, i_2, r8_1)
        int64_t* rdx_6 = *(arg1 + 0x430)
        
        if (i_2 != 0)
            void* rcx_11 = rdi_3 + 8
            int32_t i_1
            
            do
                *rdx_6 = *(rcx_11 - 8)
                rdx_6[1] = *rcx_11
                void* rax_12 = *(rcx_11 + 8)
                rdx_6[2] = rax_12
                
                if (rax_12 != 0)
                    *(rax_12 + 8) += 1
                
                rdx_6 = &rdx_6[3]
                rcx_11 += 0x18
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x43c) = i_2

*(arg1 + 0x480) = *(arg2 + 0x2e0)
*(arg1 + 0x390) = 0
int64_t* (* var_948)(void* arg1, int64_t* arg2) = sub_140f48230
char* (* var_8a8)(void* arg1, char* arg2) = sub_140f4f960
int32_t var_8c8 = 1
char var_8c4 = 1
int64_t var_8c0 = 0
int32_t var_8b8 = 0
int32_t var_940 = 0
int32_t var_8a0 = 0
void var_488
int64_t* rax_14 = sub_14068d9d0(&var_488)
int128_t var_878 = var_948.o
int64_t* var_938
int64_t* rax_15 = sub_140e46010(&var_938, arg1, &var_878)
int64_t var_928
sub_140a96170(&var_928)
char var_910 = 1
int64_t var_908 = 0
int32_t var_900 = 0
sub_140692f90(&var_908, rax_15)
int64_t rcx_16 = rax_14[0x34]
rax_14[0x34] = var_928
var_928 = rcx_16
int64_t* rcx_17 = rax_14[0x35]
int64_t var_920
rax_14[0x35] = var_920
int32_t var_918
rax_14[0x36].d = var_918
rax_14[0x37].b = var_910
sub_1407473e0(&rax_14[0x38], &var_908)
sub_140745b20(&var_908)

if (rcx_17 != 0)
    rcx_17[1].d -= 1
    
    if (rcx_17[1].d == 1)
        (**rcx_17)(rcx_17)
        int32_t rdi_4 = *(rcx_17 + 0xc)
        *(rcx_17 + 0xc) -= 1
        
        if (rdi_4 == 1)
            (*(*rcx_17 + 8))(rcx_17, zx.q(rdi_4))

int32_t var_930
int64_t* rax_24

if (var_930 == 0)
    rax_24 = var_938
label_140f35c6f:
    
    if (rax_24 != 0)
        sub_140a74f90(rax_24)
else
    int64_t* rcx_22 = var_938
    
    if (rcx_22 != 0)
        (*(*rcx_22 + 0x38))(rcx_22, 0)
        rax_24 = var_938
        
        if (rax_24 != 0)
            rax_24 = sub_140a84c80(rax_24, 0, 0)
            var_938 = rax_24
        
        int32_t var_930_1 = 0
        goto label_140f35c6f
rax_14[0x3a] = *(arg2 + 0x270)
*(rax_14 + 0x3a8) = *(arg1 + 0x3d0)
rax_14[0x77].b = *(arg1 + 0x3e0)
sub_140692f90(&rax_14[0x78], arg1 + 0x3e8)
rax_14[0x7d].d = 1
*(rax_14 + 0x3ec) = 1
sub_140692f90(&rax_14[0x7e], &var_8c0)
void*** rax_27 = j_sub_140a82f30(0x7a8)
void*** rbx_4 = rax_27

if (rax_27 == 0)
    rbx_4 = nullptr
else
    rax_27[1].d = 1
    *(rax_27 + 0xc) = 1
    *rbx_4 = &data_142d8b060
    
    if (rbx_4 != -0x10)
        sub_140f66da0(&rbx_4[2])

void* var_8e0 = &rbx_4[2]
sub_14065fa30(&var_8e0, &rbx_4[2])
int64_t var_968 = 0x798
void var_958
void* var_8d0 = &var_958
int128_t zmm1 = sub_140e23ed0(&rbx_4[2], "STextBlock")

if (rbx_4 != 0)
    rbx_4[1].d += 1

void var_838

if (arg1 + 0x470 == &var_838)
label_140f35da9:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx_4)[1](rbx_4, 1)
else
    *(arg1 + 0x470) = &rbx_4[2]
    void*** rdi_6 = *(arg1 + 0x478)
    
    if (rbx_4 == rdi_6)
        goto label_140f35da9
    
    *(arg1 + 0x478) = rbx_4
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t temp8_1 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rdi_6)[1](rdi_6, 1)

void* var_848
void** rax_32 = sub_140697520(&var_8e0, &var_848, rax_14, zmm1)
void* var_898 = *rax_32
void* rcx_35 = rax_32[1]
void* var_890 = rcx_35

if (rcx_35 != 0)
    *(rcx_35 + 8) += 1

int64_t rbx_5 = *(arg2 + 0x268)
void var_818
int64_t* rax_33 = sub_14068cc20(&var_818)
int128_t var_868 = var_8a8.o
rax_33[0x36] = rbx_5
rax_33[0x68].b = *(arg1 + 0x480)
sub_140692f90(&rax_33[0x44], sub_140e45ef0(&var_948, arg1, &var_868))
int64_t* (* rax_36)(void* arg1, int64_t* arg2)

if (var_940 == 0)
    rax_36 = var_948
label_140f35e88:
    
    if (rax_36 != 0)
        sub_140a74f90(rax_36)
else
    int64_t* (* rcx_40)(void* arg1, int64_t* arg2) = var_948
    
    if (rcx_40 != 0)
        (*(*rcx_40 + 0x38))(rcx_40, 0)
        rax_36 = var_948
        
        if (rax_36 != 0)
            rax_36 = sub_140a84c80(rax_36, 0, 0)
            var_948 = rax_36
        
        int32_t var_940_1 = 0
        goto label_140f35e88
void*** rax_37 = j_sub_140a82f30(0x5c8)
void*** rbx_6 = rax_37

if (rax_37 == 0)
    rbx_6 = nullptr
else
    rax_37[1].d = 1
    *(rax_37 + 0xc) = 1
    *rbx_6 = &data_142d8c580
    
    if (rbx_6 != -0x10)
        sub_140ee2d30(&rbx_6[2])

int64_t* var_8f8 = &rbx_6[2]
sub_14065fa30(&var_8f8, &rbx_6[2])
int64_t var_968_1 = 0x5b8
void var_957
void* var_8e8 = &var_957
int128_t zmm1_1 = sub_140e23ed0(&rbx_6[2], "SButton")

if (rbx_6 != 0)
    rbx_6[1].d += 1

void var_828

if (arg1 + 0x460 == &var_828)
label_140f35f61:
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp10_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*rbx_6)[1](rbx_6, 1)
else
    *(arg1 + 0x460) = &rbx_6[2]
    void*** rdi_8 = *(arg1 + 0x468)
    
    if (rbx_6 == rdi_8)
        goto label_140f35f61
    
    *(arg1 + 0x468) = rbx_6
    
    if (rdi_8 != 0)
        rdi_8[1].d -= 1
        
        if (rdi_8[1].d == 1)
            (**rdi_8)(rdi_8)
            int32_t temp13_1 = *(rdi_8 + 0xc)
            *(rdi_8 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*rdi_8)[1](rdi_8, 1)

void* rax_42
int128_t zmm1_2
rax_42, zmm1_2 = sub_1406936e0(rax_33, &var_898, zmm1_1)
int64_t* var_858
int64_t** rax_43 = sub_140696120(&var_8f8, &var_858, rax_42, zmm1_2)
int64_t* rbx_7 = rax_43[1]
int64_t* var_888 = *rax_43
int64_t* var_880 = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_888)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp15_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

int64_t* var_850

if (var_850 != 0)
    var_850[1].d -= 1
    
    if (var_850[1].d == 1)
        (**var_850)(var_850)
        int32_t temp17_1 = *(var_850 + 0xc)
        *(var_850 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_850 + 8))(var_850, 1)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp19_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*rbx_6)[1](rbx_6, 1)

sub_1406905f0(&var_818)
int64_t* var_840

if (var_840 != 0)
    var_840[1].d -= 1
    
    if (var_840[1].d == 1)
        (**var_840)(var_840)
        int32_t temp21_1 = *(var_840 + 0xc)
        *(var_840 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_840 + 8))(var_840, 1)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp22_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*rbx_4)[1](rbx_4, 1)

sub_1406913d0(&var_488)
uint64_t result = sub_140745b20(&var_8c0)
__security_check_cookie(rax_1 ^ &var_988)
return result
