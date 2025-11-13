// 函数: sub_141bedc40
// 地址: 0x141bedc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_141beee70(arg1)
sub_141be1200(arg1[0xa1], *(arg1 + 0x41c))
void* rcx_1 = arg1[0xa1]
int32_t zmm0 = arg1[0x84].d
int64_t* rbx = nullptr
int32_t var_98 = zmm0
char var_94 = 1
*(rcx_1 + 0x498) = zmm0
*(rcx_1 + 0x49c) = 1
int64_t var_90 = 0
int32_t var_88 = 0
sub_140692f90(rcx_1 + 0x4a0, &var_90)
sub_140745b20(&var_90)
void* rcx_4 = arg1[0xa1]
int32_t zmm0_1 = *(arg1 + 0x47c)
var_98 = zmm0_1
char var_94_1 = 1
*(rcx_4 + 0x5f0) = zmm0_1
*(rcx_4 + 0x5f4) = 1
var_90 = 0
int32_t var_88_1 = 0
sub_140692f90(rcx_4 + 0x5f8, &var_90)
sub_140745b20(&var_90)
int128_t zmm0_2 = *(arg1 + 0x488)
char var_50 = arg1[0x93].b
int64_t var_48 = arg1[0x94]
int64_t* rax_4 = arg1[0x95]
int128_t var_60 = zmm0_2

if (rax_4 != 0)
    rax_4[1].d += 1

int64_t* rcx_7 = arg1[0xa1]
char var_38 = 1
int64_t var_30 = 0
int32_t var_28 = 0
sub_140dd5630(rcx_7, &rcx_7[0x6a], &var_60, 2)
sub_140745b20(&var_30)
int32_t r14 = 1

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp1_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_4 + 8))(rax_4, 1)

void* rcx_11 = arg1[0xa1]
var_60.d = arg1[0x82].d
char var_5c = 1
char var_58 = 1
var_50.q = 0
var_48.d = 0
sub_141be4290(rcx_11, &var_60)
sub_140745b20(&var_50)
void* rcx_13 = arg1[0xa1]
var_60.d = *(arg1 + 0x414)
char var_5c_1 = 1
var_58 = 1
var_50.q = 0
var_48.d = 0
sub_141be3cb0(rcx_13, &var_60)
sub_140745b20(&var_50)
sub_141bdf080(arg1[0xa1], arg1[0x83].b)
int32_t rax_9 = arg1[0x9e].d
void* rsi_1 = arg1[0xa1]
int32_t zmm0_3
int32_t* rcx_16

if ((1 & rax_9.b) == 0)
    arg1[0x9e].d = rax_9 & 0xfffffffe
    
    if (rsi_1 != 0)
        rcx_16 = rsi_1 + 0x4c8
        char var_5c_3 = 0
        var_58 = 1
        var_50.q = 0
        var_48.d = 0
        
        if (&var_60 != rcx_16 && rcx_16[1].b != 0)
            rcx_16[1].b = 0
        
    label_141bedea7:
        rcx_16[2].b = 1
        sub_1407473e0(&rcx_16[4], &var_50)
        sub_140f63650(rsi_1)
        sub_140745b20(&var_50)
else
    zmm0_3 = *(arg1 + 0x4f4)
    arg1[0x9e].d = rax_9 | 1
    
    if (rsi_1 != 0)
        rcx_16 = rsi_1 + 0x4c8
        var_60.d = zmm0_3
        char var_5c_2 = 1
        var_58 = 1
        var_50.q = 0
        var_48.d = 0
        
        if (&var_60 != rcx_16)
            *rcx_16 = zmm0_3
            rcx_16[1].b = 1
        
        goto label_141bedea7
int32_t rax_12 = arg1[0x9e].d
void* rsi_2 = arg1[0xa1]
int32_t* rcx_20

if ((rax_12.b & 2) == 0)
    arg1[0x9e].d = rax_12 & 0xfffffffd
    
    if (rsi_2 != 0)
        rcx_20 = rsi_2 + 0x4e8
        char var_5c_5 = 0
        var_58 = 1
        var_50.q = 0
        var_48.d = 0
        
        if (&var_60 != rcx_20 && rcx_20[1].b != 0)
            rcx_20[1].b = 0
        
    label_141bedf56:
        rcx_20[2].b = 1
        sub_1407473e0(&rcx_20[4], &var_50)
        sub_140f63650(rsi_2)
        sub_140745b20(&var_50)
else
    zmm0_3 = arg1[0x9f].d
    arg1[0x9e].d = rax_12 | 2
    
    if (rsi_2 != 0)
        rcx_20 = rsi_2 + 0x4e8
        var_60.d = zmm0_3
        char var_5c_4 = 1
        var_58 = 1
        var_50.q = 0
        var_48.d = 0
        
        if (&var_60 != rcx_20)
            *rcx_20 = zmm0_3
            rcx_20[1].b = 1
        
        goto label_141bedf56
int32_t rax_15 = arg1[0x9e].d
void* rsi_3 = arg1[0xa1]
int32_t* rcx_24
int64_t* rdx_8

if ((rax_15.b & 4) == 0)
    arg1[0x9e].d = rax_15 & 0xfffffffb
    
    if (rsi_3 != 0)
        char var_5c_7 = 0
        rcx_24 = rsi_3 + 0x508
        var_58 = 1
        var_50.q = 0
        var_48.d = 0
        
        if (rsi_3 + 0x4c8 != rcx_24)
            if (rcx_24[1].b != 0)
                rcx_24[1].b = 0
            
            if (*(rsi_3 + 0x4cc) != 0)
                *rcx_24 = *(rsi_3 + 0x4c8)
                rcx_24[1].b = 1
        
        rdx_8 = rsi_3 + 0x4d8
        rcx_24[2].b = *(rsi_3 + 0x4d0)
    label_141bee02c:
        sub_1407473e0(&rcx_24[4], rdx_8)
        sub_140f63650(rsi_3)
        sub_140745b20(&var_50)
else
    zmm0_3 = *(arg1 + 0x4fc)
    arg1[0x9e].d = rax_15 | 4
    
    if (rsi_3 != 0)
        rcx_24 = rsi_3 + 0x508
        var_60.d = zmm0_3
        char var_5c_6 = 1
        var_58 = 1
        var_50.q = 0
        var_48.d = 0
        
        if (&var_60 != rcx_24)
            *rcx_24 = zmm0_3
            rcx_24[1].b = 1
        
        rcx_24[2].b = 1
        rdx_8 = &var_50
        goto label_141bee02c
int32_t rax_20 = arg1[0x9e].d
void* rsi_4 = arg1[0xa1]
int32_t* rcx_28
int64_t* rdx_10

if ((rax_20.b & 8) == 0)
    arg1[0x9e].d = rax_20 & 0xfffffff7
    
    if (rsi_4 != 0)
        char var_5c_9 = 0
        rcx_28 = rsi_4 + 0x528
        var_58 = 1
        var_50.q = 0
        var_48.d = 0
        
        if (rsi_4 + 0x4e8 != rcx_28)
            if (rcx_28[1].b != 0)
                rcx_28[1].b = 0
            
            if (*(rsi_4 + 0x4ec) != 0)
                *rcx_28 = *(rsi_4 + 0x4e8)
                rcx_28[1].b = 1
        
        rdx_10 = rsi_4 + 0x4f8
        rcx_28[2].b = *(rsi_4 + 0x4f0)
    label_141bee0f6:
        sub_1407473e0(&rcx_28[4], rdx_10)
        sub_140f63650(rsi_4)
        sub_140745b20(&var_50)
else
    zmm0_3 = arg1[0xa0].d
    arg1[0x9e].d = rax_20 | 8
    
    if (rsi_4 != 0)
        rcx_28 = rsi_4 + 0x528
        var_60.d = zmm0_3
        char var_5c_8 = 1
        var_58 = 1
        var_50.q = 0
        var_48.d = 0
        
        if (&var_60 != rcx_28)
            *rcx_28 = zmm0_3
            rcx_28[1].b = 1
        
        rcx_28[2].b = 1
        rdx_10 = &var_50
        goto label_141bee0f6
int32_t rcx_32
rcx_32.b = sub_140b5b8a0(*(arg1 + 0x114), 0) == 0
int32_t* rdx_14
int32_t rsi_5
int512_t zmm1_1

if ((arg1[0x23].d != 0 | rcx_32.b) == 0)
label_141bee182:
    zmm0_3 = arg1[0x21].d
    rdx_14 = &var_98
    char var_94_2 = 1
    rsi_5 = 2
    var_98 = zmm0_3
    r14 = 0
    var_90 = 0
    int32_t var_88_2 = 0
else
    void* rax_26 = sub_140d3c6e0(arg1 + 0x10c)
    
    if (rax_26 == 0)
        goto label_141bee182
    
    int64_t rax_27
    rax_27, zmm1_1 = sub_140d1fd20(rax_26, *(arg1 + 0x114))
    
    if (rax_27 == 0)
        goto label_141bee182
    
    int64_t var_68 = *(arg1 + 0x114)
    int32_t* rax_30
    rax_30, zmm1_1 = sub_141b70000(&var_60, sub_140d3c6e0(arg1 + 0x10c), &var_68)
    rdx_14 = rax_30
    rsi_5 = 0
    zmm0_3 = *rax_30

char rax_31 = rdx_14[1].b
int64_t* var_78 = nullptr
int32_t var_70 = 0
sub_140692f90(&var_78, &rdx_14[2])

if (rsi_5 != 0)
    sub_140745b20(&var_90)

if (r14 != 0)
    sub_140745b20(&var_58)

void* rdi_1 = arg1[0xa1]
*(rdi_1 + 0x390) = zmm0_3
*(rdi_1 + 0x394) = rax_31
int32_t zmm0_5 = sub_140692f90(rdi_1 + 0x398, &var_78)

if (var_70 == 0)
    zmm0_5 = zmm0_3
else
    int64_t* rcx_41 = var_78
    
    if (rcx_41 == 0)
        zmm0_5 = zmm0_3
    else if ((*(*rcx_41 + 0x28))(rcx_41) == 0)
        zmm0_5 = zmm0_3
    else
        if (var_70 != 0)
            rbx = var_78
        
        (*(*rbx + 0x48))(rbx)
        int32_t var_80_1 = zmm0_5

zmm1_1.o = zx.o(0)
zmm1_1.q = fconvert.d(zmm0_5)
sub_140f2d8d0(rdi_1, zmm1_1, 3, 0)
uint64_t result = sub_140745b20(&var_78)
__security_check_cookie(rax_1 ^ &var_b8)
return result
