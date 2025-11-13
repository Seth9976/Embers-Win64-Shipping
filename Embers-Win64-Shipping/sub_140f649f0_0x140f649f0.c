// 函数: sub_140f649f0
// 地址: 0x140f649f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t* arg_10 = arg2
__builtin_memset(&arg1[1], 0, 0x3c)
__builtin_memset(&arg1[9], 0, 0x18)
sub_140ddd1b0(&arg1[0xc])
sub_140ddd1b0(&arg1[0x59])
sub_140a96170(&arg1[0xa6])
arg1[0xa9].b = 0
arg1[0xaa] = 0
arg1[0xab].d = 0
sub_140a98020(&arg1[0xac])
sub_140a96170(&arg1[0xb0])
arg1[0xb3].b = 0
arg1[0xb4] = 0
arg1[0xb5].d = 0
sub_140a96170(&arg1[0xb6])
arg1[0xb9].b = 0
arg1[0xba] = 0
arg1[0xbb].d = 0
sub_140a98020(&arg1[0xbc])
sub_140a96170(&arg1[0xbf])
arg1[0xc3].d = 0
*(arg1 + 0x61c) = 0
arg1[0xc4] = 0
arg1[0xc5].d = 0
arg1[0xc6].w = 0
arg1[0xc7] = 0
arg1[0xc8].d = 0
arg1[0xc9].w = 0
arg1[0xca] = 0
arg1[0xcb].d = 0
__builtin_memset(&arg1[0xcc], 0, 0x11)
arg1[0xcf] = 0
arg1[0xd0].d = 0
arg1[0xd1].d = 0
*(arg1 + 0x68c) = 0
arg1[0xd2] = 0
arg1[0xd3].d = 0
arg1[0xd4].d = 0
*(arg1 + 0x6a4) = 0
arg1[0xd5] = 0
arg1[0xd6].d = 0
arg1[0xd8] = 0
__builtin_memset(&arg1[0xd7], 0, 0x11)
arg1[0xda] = 0
arg1[0xdb].d = 0
arg1[0xdc] = 0
arg1[0xdd] = 0
__builtin_memset(&arg1[0xdf], 0, 0x70)
*(arg1 + 0x77c) = 0
arg1[0xf1].b = 0
arg1[0xf2] = 0
arg1[0xf3].w = 0
__builtin_memset(&arg1[0xf4], 0, 0x18)
arg1[0x100].b = 0
sub_140a96170(&arg1[0x101])
arg1[0x105].b = 0
arg1[0x106] = 0
arg1[0x107].w = 0
arg1[0x108] = 0
sub_140a96170(&arg1[0x10a])
__builtin_memset(&arg1[0x10f], 0, 0x11)
arg1[0x112] = 0
arg1[0x113] = 0

if (arg7 == &arg1[7])
    goto label_140f64d18

int64_t* rcx_11

if (arg7[1].d != 0)
    rcx_11 = *arg7

if (arg7[1].d == 0 || rcx_11 == 0)
    if (arg1[8].d == 0)
        goto label_140f64d3c
    
    int64_t* rcx_12 = arg1[7]
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x38))(rcx_12, 0)
        int64_t rcx_13 = arg1[7]
        
        if (rcx_13 != 0)
            arg1[7] = sub_140a84c80(rcx_13, 0, 0)
        
        arg1[8].d = 0
else
    (*(*rcx_11 + 0x40))(rcx_11, &arg1[7])

label_140f64d18:

if (arg1[8].d == 0)
label_140f64d3c:
    void*** rax_6 = sub_140a84c80(0, 0x20, 0)
    void*** var_2a0 = rax_6
    
    if (rax_6 != 0)
        *rax_6 = &data_142ee9c30
        rax_6[2] = sub_140a387b0()
    
    if (&var_2a0 != &arg1[7])
        if (rax_6 != 0)
            (*rax_6)[8](rax_6, &arg1[7])
        else if (arg1[8].d != 0)
            int64_t* rcx_16 = arg1[7]
            
            if (rcx_16 != 0)
                (*(*rcx_16 + 0x38))(rcx_16, 0)
                int64_t rcx_17 = arg1[7]
                
                if (rcx_17 != 0)
                    arg1[7] = sub_140a84c80(rcx_17, 0, 0)
                
                arg1[8].d = 0
    
    if (rax_6 != 0)
        (*rax_6)[7](rax_6, 0)
        void*** rax_12 = sub_140a84c80(rax_6, 0, 0)
        var_2a0 = rax_12
        
        if (rax_12 != 0)
            sub_140a74f90(rax_12)
else
    int64_t* rcx_14 = arg1[7]
    
    if (rcx_14 == 0)
        goto label_140f64d3c
    
    if ((*(*rcx_14 + 0x28))(rcx_14) == 0)
        goto label_140f64d3c

*arg1 = arg2
int64_t* rbx_2 = arg8[1]

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_70

if (&arg1[3] == &var_70)
label_140f64e3c:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    arg1[3] = *arg8
    int64_t* rsi_1 = arg1[4]
    
    if (rbx_2 == rsi_1)
        goto label_140f64e3c
    
    arg1[4] = rbx_2
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp4_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rbx_3 = arg9[1]

if (rbx_3 != 0)
    rbx_3[1].d += 1

void var_80

if (&arg1[5] == &var_80)
label_140f64eb7:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp6_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    arg1[5] = *arg9
    int64_t* rsi_2 = arg1[6]
    
    if (rbx_3 == rsi_2)
        goto label_140f64eb7
    
    arg1[6] = rbx_3
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp8_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)

sub_140de1940(&arg1[0xc], arg4)
int64_t* rcx_30 = arg_10
void var_1c8
int64_t r8 = *(*(*rcx_30 + 0x80))(rcx_30, &var_1c8)
int64_t* rcx_31

if (arg1[8].d == 0)
    rcx_31 = nullptr
else
    rcx_31 = arg1[7]

int64_t var_398
(*(*rcx_31 + 0x48))(rcx_31, &var_398, r8, &arg1[0xc])
int64_t* var_390
int64_t* rbx_4 = var_390
int64_t rax_24 = var_398
int64_t* rdi_1 = rbx_4
int64_t var_1b8 = rax_24

if (rbx_4 != 0)
    rbx_4[1].d += 1
    rbx_4 = var_390

if (&arg1[9] == &var_1b8)
label_140f64f89:
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d != 1)
            rbx_4 = var_390
        else
            (**rdi_1)(rdi_1)
            int32_t temp11_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp11_1 != 1)
                rbx_4 = var_390
            else
                (*(*rdi_1 + 8))(rdi_1, 1)
                rbx_4 = var_390
else
    arg1[9] = rax_24
    int64_t* rsi_3 = arg1[0xa]
    
    if (rdi_1 == rsi_3)
        goto label_140f64f89
    
    arg1[0xa] = rdi_1
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d != 1)
            rbx_4 = var_390
        else
            (**rsi_3)(rsi_3)
            int32_t temp15_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp15_1 != 1)
                rbx_4 = var_390
            else
                (*(*rsi_3 + 8))(rsi_3, 1)
                rbx_4 = var_390

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp14_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_1c0

if (var_1c0 != 0)
    var_1c0[1].d -= 1
    
    if (var_1c0[1].d == 1)
        (**var_1c0)(var_1c0)
        int32_t temp16_1 = *(var_1c0 + 0xc)
        *(var_1c0 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_1c0 + 8))(var_1c0, 1)

char var_2dc = 1
int32_t var_2e0 = 0
int64_t var_2d8 = 0
int32_t var_2d0 = 0
arg1[0xc3].d = 0
*(arg1 + 0x61c) = 1
sub_140692f90(&arg1[0xc4], &var_2d8)
sub_140745b20(&var_2d8)
int16_t var_2f8 = 0x100
int64_t var_2f0 = 0
int32_t var_2e8 = 0
arg1[0xc6].w = 0x100
sub_1407473e0(&arg1[0xc7], &var_2f0)
sub_140745b20(&var_2f0)
int16_t var_310 = 0x100
int64_t var_308 = 0
int32_t var_300 = 0
arg1[0xc9].w = 0x100
sub_1407473e0(&arg1[0xca], &var_308)
sub_140745b20(&var_308)
char var_1f0 = 1
int64_t var_1e8 = 0
int32_t var_1e0 = 0
int128_t var_200 = zx.o(0)
arg1[0xce].b = 1
*(arg1 + 0x660) = zx.o(0)
sub_1407473e0(&arg1[0xcf], &var_1e8)
sub_140745b20(&var_1e8)
int32_t var_328 = 0
char var_324 = 1
int64_t var_320 = 0
int32_t var_318 = 0
arg1[0xd1].d = 0
*(arg1 + 0x68c) = 1
sub_1407473e0(&arg1[0xd2], &var_320)
sub_140745b20(&var_320)
int32_t var_2c8 = 0x3f800000
char var_2c4 = 1
int64_t var_2c0 = 0
int32_t var_2b8 = 0
arg1[0xd4].d = 0x3f800000
*(arg1 + 0x6a4) = 1
sub_140692f90(&arg1[0xd5], &var_2c0)
sub_140745b20(&var_2c0)
int64_t var_368 = 0
int64_t var_360 = 0
char var_358 = 1
int64_t var_350 = 0
int32_t var_348 = 0

if (&arg1[0xd7] != &var_368)
    int64_t rcx_51 = arg1[0xd7]
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    arg1[0xd7] = 0
    arg1[0xd8] = 0

arg1[0xd9].b = 1
sub_1407473e0(&arg1[0xda], &var_350)
sub_140745b20(&var_350)
int64_t rcx_54 = var_368

if (rcx_54 != 0)
    sub_140a74f90(rcx_54)

arg1[0xc2].d = 1
void*** var_1d8
void**** rax_32 = sub_140a6e480(&var_1d8)
int64_t* rbx_6 = rax_32[1]

if (rbx_6 != 0)
    rbx_6[1].d += 1

void var_90

if (&arg1[1] == &var_90)
label_140f6523b:
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp19_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
else
    arg1[1] = *rax_32
    int64_t* rdi_2 = arg1[2]
    
    if (rbx_6 == rdi_2)
        goto label_140f6523b
    
    arg1[2] = rbx_6
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp22_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* var_1d0

if (var_1d0 != 0)
    var_1d0[1].d -= 1
    
    if (var_1d0[1].d == 1)
        (**var_1d0)(var_1d0)
        int32_t temp21_1 = *(var_1d0 + 0xc)
        *(var_1d0 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_1d0 + 8))(var_1d0, 1)

int64_t* rbx_8 = arg_18
sub_14065da90(&arg1[0xa6], rbx_8)
arg1[0xa9].b = rbx_8[3].b
sub_140692f90(&arg1[0xaa], &rbx_8[4])
int64_t* rcx_64 = *arg1
char rax_41 = (*(*rcx_64 + 8))(rcx_64)
void* rcx_65 = arg1[9]
char var_340 = rax_41
char var_33f = 1
int64_t var_338 = 0
int32_t var_330 = 0
sub_140f15b10(rcx_65, &var_340)
sub_140745b20(&var_338)
sub_1405d9400()
int64_t* rbx_9 = &data_143cd6fd8

if (arg1[0xa9].b != 0)
    rbx_9 = sub_140d44910(&arg1[0xa6])

sub_140f8b290(arg1, rbx_9, 1)
void var_1a8
int64_t* rax_43 = sub_140a97f80(&var_1a8, rbx_9)

if (&arg1[0xac] != rax_43)
    arg1[0xac] = *rax_43
    *rax_43 = 0
    sub_1405aeff0(&arg1[0xad], &rax_43[1])

arg1[0xae].w = rax_43[2].w
*(arg1 + 0x572) = *(rax_43 + 0x12)
*(arg1 + 0x574) = *(rax_43 + 0x14)
int64_t* var_1a0

if (var_1a0 != 0)
    var_1a0[1].d -= 1
    
    if (var_1a0[1].d == 1)
        (**var_1a0)(var_1a0)
        int32_t rax_48 = *(var_1a0 + 0xc)
        *(var_1a0 + 0xc) -= 1
        
        if (rax_48 == 1)
            (*(*var_1a0 + 8))(var_1a0, 1)

arg1[0xaf].b = rax_41

if (arg5[1] != 0)
    sub_140f17cc0(arg1[9], *arg5)

if (arg6[1] != 0)
    sub_140f17c30(arg1[9], *arg6)

void*** rax_51 = j_sub_140a82f30(0x10)
void*** rbx_12 = rax_51

if (rax_51 == 0)
    rbx_12 = nullptr
else
    rbx_12[1] = arg1
    *rbx_12 = &data_142ee8ce0

void*** rax_52 = j_sub_140a82f30(0x18)

if (rax_52 == 0)
    rax_52 = nullptr
else
    rax_52[1].d = 1
    *rax_52 = &data_142d42ea8
    *(rax_52 + 0xc) = 1
    rax_52[2] = rbx_12

void*** rbx_13 = rax_52
void*** rdi_4 = rbx_13

if (rbx_13 != 0)
    rbx_13[1].d += 1
    rbx_13 = rax_52

void var_a0

if (&arg1[0xdc] == &var_a0)
label_140f654b7:
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d != 1)
            rbx_13 = rax_52
        else
            (**rdi_4)(rdi_4)
            int32_t temp25_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp25_1 != 1)
                rbx_13 = rax_52
            else
                (*rdi_4)[1](rdi_4, 1)
                rbx_13 = rax_52
else
    arg1[0xdc] = rbx_12
    void*** rsi_5 = arg1[0xdd]
    
    if (rdi_4 == rsi_5)
        goto label_140f654b7
    
    arg1[0xdd] = rdi_4
    
    if (rsi_5 != 0)
        rsi_5[1].d -= 1
        
        if (rsi_5[1].d != 1)
            rbx_13 = rax_52
        else
            (**rsi_5)(rsi_5)
            int32_t temp28_1 = *(rsi_5 + 0xc)
            *(rsi_5 + 0xc) -= 1
            
            if (temp28_1 != 1)
                rbx_13 = rax_52
            else
                (*rsi_5)[1](rsi_5, 1)
                rbx_13 = rax_52

if (rbx_13 != 0)
    rbx_13[1].d -= 1
    
    if (rbx_13[1].d == 1)
        (**rbx_13)(rbx_13)
        int32_t temp27_1 = *(rbx_13 + 0xc)
        *(rbx_13 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*rbx_13)[1](rbx_13, 1)

arg1[0xde].b = 0
void*** rax_59 = j_sub_140a82f30(0x68)
void*** rbx_14 = rax_59

if (rax_59 == 0)
    rbx_14 = nullptr
else
    rbx_14[1] = arg1
    *rbx_14 = &data_142ee8d20
    rbx_14[2] = 0
    rbx_14[3] = 0
    sub_140d921c0(&rbx_14[4])
    rbx_14[0xb].b = 0
    *(rbx_14 + 0x5c) = 0xffffffff
    rbx_14[0xc].d = 0

void*** rax_60 = j_sub_140a82f30(0x18)

if (rax_60 == 0)
    rax_60 = nullptr
else
    rax_60[1].d = 1
    *rax_60 = &data_142d42ea8
    *(rax_60 + 0xc) = 1
    rax_60[2] = rbx_14

void*** rbx_15 = rax_60
void*** rdi_5 = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1
    rbx_15 = rax_60

void var_c0

if (&arg1[0xdf] == &var_c0)
label_140f655ff:
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d != 1)
            rbx_15 = rax_60
        else
            (**rdi_5)(rdi_5)
            int32_t temp31_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp31_1 != 1)
                rbx_15 = rax_60
            else
                (*rdi_5)[1](rdi_5, 1)
                rbx_15 = rax_60
else
    arg1[0xdf] = rbx_14
    void*** rsi_6 = arg1[0xe0]
    
    if (rdi_5 == rsi_6)
        goto label_140f655ff
    
    arg1[0xe0] = rdi_5
    
    if (rsi_6 != 0)
        rsi_6[1].d -= 1
        
        if (rsi_6[1].d != 1)
            rbx_15 = rax_60
        else
            (**rsi_6)(rsi_6)
            int32_t temp34_1 = *(rsi_6 + 0xc)
            *(rsi_6 + 0xc) -= 1
            
            if (temp34_1 != 1)
                rbx_15 = rax_60
            else
                (*rsi_6)[1](rsi_6, 1)
                rbx_15 = rax_60

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp33_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*rbx_15)[1](rbx_15, 1)

void*** rax_67 = j_sub_140a82f30(0x30)
void*** r15_1 = rax_67

if (rax_67 == 0)
    r15_1 = nullptr
else
    *r15_1 = &data_142ee8c28
    r15_1[1] = &arg1[0xf2]
    r15_1[2] = 0
    r15_1[3].b = 0
    r15_1[4] = 0
    r15_1[5].d = 0
    int64_t* rbx_16 = data_143e243c8
    int64_t rax_70 = (*(*rbx_16 + 0x48))(rbx_16, 
        *sub_140b58170(&arg_10, "EditableText.SelectionBackground", 1), 0)
    char var_218_1 = 1
    int64_t var_220_1 = rax_70
    r15_1[2] = rax_70
    int64_t var_210 = 0
    int32_t var_208_1 = 0
    r15_1[3].b = 1
    sub_1407473e0(&r15_1[4], &var_210)
    sub_140745b20(&var_210)

void*** rax_71 = j_sub_140a82f30(0x18)

if (rax_71 == 0)
    rax_71 = nullptr
else
    rax_71[1].d = 1
    *rax_71 = &data_142d42ea8
    *(rax_71 + 0xc) = 1
    rax_71[2] = r15_1

void*** rbx_17 = rax_71
void*** rdi_7 = rbx_17

if (rbx_17 != 0)
    rbx_17[1].d += 1
    rbx_17 = rax_71

void var_60

if (&arg1[0xe3] == &var_60)
label_140f657ab:
    
    if (rdi_7 != 0)
        rdi_7[1].d -= 1
        
        if (rdi_7[1].d != 1)
            rbx_17 = rax_71
        else
            (**rdi_7)(rdi_7)
            int32_t temp37_1 = *(rdi_7 + 0xc)
            *(rdi_7 + 0xc) -= 1
            
            if (temp37_1 != 1)
                rbx_17 = rax_71
            else
                (*rdi_7)[1](rdi_7, 1)
                rbx_17 = rax_71
else
    arg1[0xe3] = r15_1
    void*** rsi_7 = arg1[0xe4]
    
    if (rdi_7 == rsi_7)
        goto label_140f657ab
    
    arg1[0xe4] = rdi_7
    
    if (rsi_7 != 0)
        rsi_7[1].d -= 1
        
        if (rsi_7[1].d != 1)
            rbx_17 = rax_71
        else
            (**rsi_7)(rsi_7)
            int32_t temp40_1 = *(rsi_7 + 0xc)
            *(rsi_7 + 0xc) -= 1
            
            if (temp40_1 != 1)
                rbx_17 = rax_71
            else
                (*rsi_7)[1](rsi_7, 1)
                rbx_17 = rax_71

if (rbx_17 != 0)
    rbx_17[1].d -= 1
    
    if (rbx_17[1].d == 1)
        (**rbx_17)(rbx_17)
        int32_t temp39_1 = *(rbx_17 + 0xc)
        *(rbx_17 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*rbx_17)[1](rbx_17, 1)

void*** rax_78 = j_sub_140a82f30(0x28)
void*** r15_2 = rax_78

if (rax_78 == 0)
    r15_2 = nullptr
else
    *r15_2 = &data_142ee8c38
    r15_2[1] = 0
    r15_2[2].b = 0
    r15_2[3] = 0
    r15_2[4].d = 0
    int64_t* rbx_18 = data_143e243c8
    int64_t rax_80 = (*(*rbx_18 + 0x48))(rbx_18, 
        *sub_140b58170(&arg_18, "EditableText.CompositionBackground", 1), 0)
    char var_238_1 = 1
    int64_t var_240_1 = rax_80
    r15_2[1] = rax_80
    int64_t var_230 = 0
    int32_t var_228_1 = 0
    r15_2[2].b = 1
    sub_1407473e0(&r15_2[3], &var_230)
    sub_140745b20(&var_230)

void*** rax_81 = j_sub_140a82f30(0x18)

if (rax_81 == 0)
    rax_81 = nullptr
else
    rax_81[1].d = 1
    *rax_81 = &data_142d42ea8
    *(rax_81 + 0xc) = 1
    rax_81[2] = r15_2

void*** rbx_19 = rax_81
void*** rdi_9 = rbx_19

if (rbx_19 != 0)
    rbx_19[1].d += 1
    rbx_19 = rax_81

void var_180

if (&arg1[0xe5] == &var_180)
label_140f6594c:
    
    if (rdi_9 != 0)
        rdi_9[1].d -= 1
        
        if (rdi_9[1].d != 1)
            rbx_19 = rax_81
        else
            (**rdi_9)(rdi_9)
            int32_t temp43_1 = *(rdi_9 + 0xc)
            *(rdi_9 + 0xc) -= 1
            
            if (temp43_1 != 1)
                rbx_19 = rax_81
            else
                (*rdi_9)[1](rdi_9, 1)
                rbx_19 = rax_81
else
    arg1[0xe5] = r15_2
    void*** rsi_8 = arg1[0xe6]
    
    if (rdi_9 == rsi_8)
        goto label_140f6594c
    
    arg1[0xe6] = rdi_9
    
    if (rsi_8 != 0)
        rsi_8[1].d -= 1
        
        if (rsi_8[1].d != 1)
            rbx_19 = rax_81
        else
            (**rsi_8)(rsi_8)
            int32_t temp46_1 = *(rsi_8 + 0xc)
            *(rsi_8 + 0xc) -= 1
            
            if (temp46_1 != 1)
                rbx_19 = rax_81
            else
                (*rsi_8)[1](rsi_8, 1)
                rbx_19 = rax_81

if (rbx_19 != 0)
    rbx_19[1].d -= 1
    
    if (rbx_19[1].d == 1)
        (**rbx_19)(rbx_19)
        int32_t temp45_1 = *(rbx_19 + 0xc)
        *(rbx_19 + 0xc) -= 1
        
        if (temp45_1 == 1)
            (*rbx_19)[1](rbx_19, 1)

void*** rax_88 = j_sub_140a82f30(0x10)
void*** rbx_20 = rax_88

if (rax_88 == 0)
    rbx_20 = nullptr
else
    *rbx_20 = &data_142ee8c48

void*** rax_89 = j_sub_140a82f30(0x18)

if (rax_89 == 0)
    rax_89 = nullptr
else
    rax_89[1].d = 1
    *rax_89 = &data_142d42ea8
    *(rax_89 + 0xc) = 1
    rax_89[2] = rbx_20

void*** rbx_21 = rax_89
void*** rdi_10 = rbx_21

if (rbx_21 != 0)
    rbx_21[1].d += 1
    rbx_21 = rax_89

void var_170

if (&arg1[0xe7] == &var_170)
label_140f65a62:
    
    if (rdi_10 != 0)
        rdi_10[1].d -= 1
        
        if (rdi_10[1].d != 1)
            rbx_21 = rax_89
        else
            (**rdi_10)(rdi_10)
            int32_t temp49_1 = *(rdi_10 + 0xc)
            *(rdi_10 + 0xc) -= 1
            
            if (temp49_1 != 1)
                rbx_21 = rax_89
            else
                (*rdi_10)[1](rdi_10, 1)
                rbx_21 = rax_89
else
    arg1[0xe7] = rbx_20
    void*** rsi_9 = arg1[0xe8]
    
    if (rdi_10 == rsi_9)
        goto label_140f65a62
    
    arg1[0xe8] = rdi_10
    
    if (rsi_9 != 0)
        rsi_9[1].d -= 1
        
        if (rsi_9[1].d != 1)
            rbx_21 = rax_89
        else
            (**rsi_9)(rsi_9)
            int32_t temp52_1 = *(rsi_9 + 0xc)
            *(rsi_9 + 0xc) -= 1
            
            if (temp52_1 != 1)
                rbx_21 = rax_89
            else
                (*rsi_9)[1](rsi_9, 1)
                rbx_21 = rax_89

if (rbx_21 != 0)
    rbx_21[1].d -= 1
    
    if (rbx_21[1].d == 1)
        (**rbx_21)(rbx_21)
        int32_t temp51_1 = *(rbx_21 + 0xc)
        *(rbx_21 + 0xc) -= 1
        
        if (temp51_1 == 1)
            (*rbx_21)[1](rbx_21, 1)

void*** rax_96 = j_sub_140a82f30(0x10)
void*** rbx_22 = rax_96

if (rax_96 == 0)
    rbx_22 = nullptr
else
    *rbx_22 = &data_142ee8c58

void*** rax_97 = j_sub_140a82f30(0x18)

if (rax_97 == 0)
    rax_97 = nullptr
else
    rax_97[1].d = 1
    *rax_97 = &data_142d42ea8
    *(rax_97 + 0xc) = 1
    rax_97[2] = rbx_22

void*** rbx_23 = rax_97
void*** rdi_11 = rbx_23

if (rbx_23 != 0)
    rbx_23[1].d += 1
    rbx_23 = rax_97

void var_160

if (&arg1[0xe9] == &var_160)
label_140f65b7d:
    
    if (rdi_11 != 0)
        rdi_11[1].d -= 1
        
        if (rdi_11[1].d != 1)
            rbx_23 = rax_97
        else
            (**rdi_11)(rdi_11)
            int32_t temp55_1 = *(rdi_11 + 0xc)
            *(rdi_11 + 0xc) -= 1
            
            if (temp55_1 != 1)
                rbx_23 = rax_97
            else
                (*rdi_11)[1](rdi_11, 1)
                rbx_23 = rax_97
else
    arg1[0xe9] = rbx_22
    void*** rsi_10 = arg1[0xea]
    
    if (rdi_11 == rsi_10)
        goto label_140f65b7d
    
    arg1[0xea] = rdi_11
    
    if (rsi_10 != 0)
        rsi_10[1].d -= 1
        
        if (rsi_10[1].d != 1)
            rbx_23 = rax_97
        else
            (**rsi_10)(rsi_10)
            int32_t temp58_1 = *(rsi_10 + 0xc)
            *(rsi_10 + 0xc) -= 1
            
            if (temp58_1 != 1)
                rbx_23 = rax_97
            else
                (*rsi_10)[1](rsi_10, 1)
                rbx_23 = rax_97

if (rbx_23 != 0)
    rbx_23[1].d -= 1
    
    if (rbx_23[1].d == 1)
        (**rbx_23)(rbx_23)
        int32_t temp57_1 = *(rbx_23 + 0xc)
        *(rbx_23 + 0xc) -= 1
        
        if (temp57_1 == 1)
            (*rbx_23)[1](rbx_23, 1)

arg1[0xed].d = data_143dbb1f0.d
*(arg1 + 0x76c) = data_143dbb1f0:4.d
*(arg1 + 0x78c) = 0
void var_190

if (&var_190 != &arg1[0xf0] && arg1[0xf1].b != 0)
    arg1[0xf1].b = 0

arg1[0xf7].d = 0xffffffff
arg1[0x109].d = 0
*(arg1 + 0x84c) = 0
arg1[0x114].b = 0
arg1[0x10d].d = 0
*(arg1 + 0x86c) = data_143dbb1f0.d
arg1[0x10e].d = data_143dbb1f0:4.d
void*** rax_105 = j_sub_140a82f30(0xe8)
void*** rbx_24 = rax_105

if (rax_105 == 0)
    rbx_24 = nullptr
else
    memset(&rax_105[4], 0, 0xc8)
    rbx_24[1] = 0
    void* rcx_123 = &rbx_24[5]
    rbx_24[2] = 0
    *rbx_24 = &data_142edb430
    rbx_24[3] = 0
    rbx_24[4] = 0
    *(rcx_123 + 0x10) = 0
    *(rcx_123 + 0x18) = 0
    *(rcx_123 + 0x1c) = 0x80
    void* rax_106 = *(rcx_123 + 0x10)
    
    if (rax_106 != 0)
        rcx_123 = rax_106
    
    *rcx_123 = 0
    *(rcx_123 + 8) = 0
    void* rcx_124 = &rbx_24[0xf]
    rbx_24[9].d = 0xffffffff
    *(rbx_24 + 0x4c) = 0
    rbx_24[0xb] = 0
    rbx_24[0xc].d = 0
    rbx_24[0xd] = 0
    rbx_24[0xe] = 0
    *(rcx_124 + 0x10) = 0
    *(rcx_124 + 0x18) = 0
    *(rcx_124 + 0x1c) = 0x80
    void* rax_107 = *(rcx_124 + 0x10)
    
    if (rax_107 != 0)
        rcx_124 = rax_107
    
    *rcx_124 = 0
    *(rcx_124 + 8) = 0
    rbx_24[0x13].d = 0xffffffff
    *(rbx_24 + 0x9c) = 0
    rbx_24[0x15] = 0
    rbx_24[0x16].d = 0
    __builtin_memset(&rbx_24[0x17], 0, 0x2c)

void*** rax_108 = sub_140dd3780(rbx_24)
void*** var_388 = rbx_24
void** rcx_126 = &rbx_24[1]
void*** var_380 = rax_108

if (rbx_24 == 0)
    rcx_126 = nullptr

void*** rdi_12 = rax_108

if (rcx_126 != 0)
    void* rax_109
    
    if (*rcx_126 != 0)
        rax_109 = rcx_126[1]
    
    if (*rcx_126 == 0 || rax_109 == 0 || *(rax_109 + 8) s<= 0)
        if (rdi_12 != 0)
            rdi_12[1].d += 1
        
        *rcx_126 = rbx_24
        sub_140ea4170(&rcx_126[1], rdi_12)
        
        if (rdi_12 != 0)
            rdi_12[1].d -= 1
            
            if (rdi_12[1].d == 1)
                (**rdi_12)(rdi_12)
                int32_t temp62_1 = *(rdi_12 + 0xc)
                *(rdi_12 + 0xc) -= 1
                
                if (temp62_1 == 1)
                    (*rdi_12)[1](rdi_12, 1)

if (&arg1[0x10f] != &var_388)
    arg1[0x10f] = rbx_24
    var_388 = nullptr
    sub_14066a200(&arg1[0x110], &var_380)
    rdi_12 = var_380

if (rdi_12 != 0)
    rdi_12[1].d -= 1
    
    if (rdi_12[1].d == 1)
        (**rdi_12)(rdi_12)
        int32_t temp60_1 = *(rdi_12 + 0xc)
        *(rdi_12 + 0xc) -= 1
        
        if (temp60_1 == 1)
            (*rdi_12)[1](rdi_12, 1)

void* rax_114 = sub_140f74dd0()
int64_t var_290 = *(rax_114 + 0x88)
void* rcx_134 = *(rax_114 + 0x90)
void* var_288 = rcx_134

if (rcx_134 != 0)
    *(rcx_134 + 8) += 1

int64_t* rdi_13 = arg1[0x10f]
void var_150
int64_t* rax_115 = sub_140f63d90(&var_150, arg1, sub_140f6baf0)
void var_140
sub_140e72240(rdi_13, &var_290, sub_140f63d10(&var_140, arg1, sub_140f8f5b0), rax_115, 1)
void* rax_117 = sub_140f74dd0()
int64_t var_2b0 = *(rax_117 + 0x48)
void* rcx_139 = *(rax_117 + 0x50)
void* var_2a8 = rcx_139

if (rcx_139 != 0)
    *(rcx_139 + 8) += 1

int64_t* rdi_14 = arg1[0x10f]
void var_130
int64_t* rax_118 = sub_140f63d90(&var_130, arg1, sub_140f6b950)
void var_120
sub_140e72240(rdi_14, &var_2b0, sub_140f63d10(&var_120, arg1, sub_140f74090), rax_118, 0)
void* rax_120 = sub_140f74dd0()
int64_t var_280 = *(rax_120 + 0x68)
void* rcx_144 = *(rax_120 + 0x70)
void* var_278 = rcx_144

if (rcx_144 != 0)
    *(rcx_144 + 8) += 1

int64_t* rdi_15 = arg1[0x10f]
void var_110
int64_t* rax_121 = sub_140f63d90(&var_110, arg1, sub_140f6ba90)
void var_100
sub_140e72240(rdi_15, &var_280, sub_140f63d10(&var_100, arg1, sub_140f877c0), rax_121, 1)
void* rax_123 = sub_140f74dd0()
int64_t var_270 = *(rax_123 + 0x58)
void* rcx_149 = *(rax_123 + 0x60)
void* var_268 = rcx_149

if (rcx_149 != 0)
    *(rcx_149 + 8) += 1

int64_t* rdi_16 = arg1[0x10f]
void var_f0
int64_t* rax_124 = sub_140f63d90(&var_f0, arg1, sub_140f6b8c0)
void var_e0
sub_140e72240(rdi_16, &var_270, sub_140f63d10(&var_e0, arg1, sub_140f73ae0), rax_124, 0)
int64_t var_378 = 0
int32_t var_370 = 0
void*** rax_126 = sub_1405978f0(0x20, &var_378)

if (rax_126 != 0)
    rax_126[1] = arg1
    *rax_126 = &data_142ee99f0
    rax_126[3] = sub_140a387b0()
    *rax_126 = &data_142ee9a48

void* rax_128 = sub_140f74dd0()
int64_t var_260 = *(rax_128 + 0xa8)
void* rcx_154 = *(rax_128 + 0xb0)
void* var_258 = rcx_154

if (rcx_154 != 0)
    *(rcx_154 + 8) += 1

void var_d0
sub_140e72240(arg1[0x10f], &var_260, &var_378, sub_140f63d90(&var_d0, arg1, sub_140f6ba00), 0)
void* rax_130 = sub_140f74dd0()
int64_t var_250 = *(rax_130 + 0xc8)
void* rcx_158 = *(rax_130 + 0xd0)
void* var_248 = rcx_158

if (rcx_158 != 0)
    *(rcx_158 + 8) += 1

int64_t* rdi_17 = arg1[0x10f]
void var_50
int64_t* rax_131 = sub_140f63d90(&var_50, arg1, sub_1405948d0)
void var_b0
sub_140e72240(rdi_17, &var_250, sub_140f63d10(&var_b0, arg1, sub_140f89df0), rax_131, 0)
sub_140de06c0(arg4)

if (arg5[1] != 0)
    arg5[1] = 0

if (arg6[1] != 0)
    arg6[1] = 0

sub_140597060(arg8)
sub_140597060(arg9)
return arg1
