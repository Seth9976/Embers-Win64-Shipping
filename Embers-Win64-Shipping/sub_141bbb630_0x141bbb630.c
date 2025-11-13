// 函数: sub_141bbb630
// 地址: 0x141bbb630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg5
void var_7b8
int64_t rax_1 = __security_cookie ^ &var_7b8
void*** rax_2 = j_sub_140a82f30(0xa8)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    sub_140d92190(rax_2)
    int64_t zmm0_1 = sub_1405ab8c0(&rdi[9])
    *rdi = &data_143082c70
    rdi[9] = &data_143082cd0
    __builtin_memset(&rdi[0xb], 0, 0x30)
    int64_t* rcx_2 = data_143e20d08
    (*(*rcx_2 + 0x50))(rcx_2)
    rdi[0x14] = zmm0_1

void*** rax_4 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rdi

*arg1 = rdi
void**** r14 = &rdi[1]
arg1[1] = rbx_1

if (rdi == 0)
    r14 = nullptr

if (r14 != 0)
    void* rax_5
    
    if (*r14 != 0)
        rax_5 = r14[1]
    
    if (*r14 == 0 || rax_5 == 0 || *(rax_5 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *r14 = rdi
        int64_t* rcx_3 = r14[1]
        
        if (rbx_1 != rcx_3)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_3 = r14[1]
            
            if (rcx_3 != 0)
                int32_t temp5_1 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
            
            r14[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

(*arg1)[0x13].d = arg3
void*** rax_10 = *arg1
uint128_t zmm0_2
zmm0_2.d = (*(arg6 + 4)).d f- arg4[1]
int128_t zmm1
zmm1.d = (*arg6).d f- *arg4
*(rax_10 + 0x8c) = zmm0_2.d
rax_10[0x11].d = zmm1.d
(*arg1)[0x12] = *arg6
int64_t* rbx_2 = arg8[1]
void* rcx_9 = &(*arg1)[0xc]
int64_t var_778 = *arg8

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_778 != rcx_9)
    zmm1 = var_778.o
    int128_t var_678_1 = zmm1
    var_778.o = *rcx_9
    *rcx_9 = zmm1

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2, zmm1)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_12 = *(*arg8 + 0x3a0)
(*arg1)[0xe] = sub_142436920((*(*rcx_12 + 0x150))(rcx_12, zmm1))
int64_t* rdi_2 = nullptr
(*arg1)[0xb] = arg2
int64_t* rcx_14 = *(arg2 + 0x40)
void* r12_1
int64_t* rbx_8
bool cond:3_1

if (rcx_14 != 0)
    char var_788 = 0
    char* var_6d8_1 = &var_788
    void** (* var_6e0)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    void* var_6d0
    sub_141befea0(rcx_14, &var_6d0, &var_6e0)
    int64_t* var_6c8
    rbx_8 = var_6c8
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1
    
    r12_1 = var_6d0
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        rdi_2 = rbx_8
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp7_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            cond:3_1 = temp7_1 != 1
        label_141bbbaf7:
            
            if (not(cond:3_1))
                (*(*rbx_8 + 8))(rbx_8, 1)
else
    void var_6a0
    int64_t* rax_20 = sub_140aae420(&var_6a0, arg2 + 0x28)
    int64_t* rcx_16 = rax_20[1]
    int64_t var_758 = *rax_20
    
    if (rcx_16 != 0)
        rcx_16[1].d += 1
    
    int32_t var_748_1 = rax_20[2].d
    char var_740_1 = 1
    int64_t var_738 = 0
    int32_t var_730_1 = 0
    void var_4a0
    int64_t* rax_23 = sub_14068d9d0(&var_4a0)
    sub_14065da90(&rax_23[0x34], &var_758)
    rax_23[0x37].b = var_740_1
    sub_140692f90(&rax_23[0x38], &var_738)
    void*** rax_25 = j_sub_140a82f30(0x7a8)
    void*** r14_1 = rax_25
    
    if (rax_25 == 0)
        r14_1 = nullptr
    else
        rax_25[1].d = 1
        *(rax_25 + 0xc) = 1
        *r14_1 = &data_142d8b060
        
        if (r14_1 != -0x10)
            sub_140f66da0(&r14_1[2])
    
    void* var_728 = &r14_1[2]
    sub_14065fa30(&var_728, &r14_1[2])
    int64_t var_798_1 = 0x798
    void var_787
    void* var_718_1 = &var_787
    void* var_6c0
    void** rax_26 =
        sub_140697520(&var_728, &var_6c0, rax_23, sub_140e23ed0(&r14_1[2], "STextBlock"))
    int64_t* rcx_24 = rax_26[1]
    r12_1 = *rax_26
    bool cond:2_1 = rcx_24 != 0
    
    if (rcx_24 != 0)
        rcx_24[1].d += 1
        cond:2_1 = rcx_24 != 0
    
    if (cond:2_1)
        rdi_2 = rcx_24
    
    int64_t* var_6b8
    
    if (var_6b8 != 0)
        var_6b8[1].d -= 1
        
        if (var_6b8[1].d == 1)
            (**var_6b8)(var_6b8)
            int32_t temp14_1 = *(var_6b8 + 0xc)
            *(var_6b8 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*var_6b8 + 8))(var_6b8, 1)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp16_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*r14_1)[1](r14_1, 1)
    
    sub_1406913d0(&var_4a0)
    sub_140745b20(&var_738)
    
    if (rcx_16 != 0)
        rcx_16[1].d -= 1
        
        if (rcx_16[1].d == 1)
            (**rcx_16)(rcx_16)
            int32_t rax_33 = *(rcx_16 + 0xc)
            *(rcx_16 + 0xc) -= 1
            
            if (rax_33 == 1)
                (*(*rcx_16 + 8))(rcx_16, 1)
    
    int64_t* var_698
    rbx_8 = var_698
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t r14_2 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            cond:3_1 = r14_2 != 1
            goto label_141bbbaf7
arg5 = arg7
int32_t var_6f8 = arg5.d
char var_6f4 = 1
int64_t var_6f0 = 0
int32_t var_6e8 = 0

if (rdi_2 != 0)
    rdi_2[1].d += 1

void var_668
int64_t* rax_39 = sub_1418aee00(&var_668)
rax_39[0x34].d = arg5.d
*(rax_39 + 0x1a4) = 1
sub_140692f90(&rax_39[0x35], &var_6f0)
void* var_768 = r12_1

if (rdi_2 != 0)
    rdi_2[1].d += 1

if (&var_768 != &rax_39[0x37])
    var_768.o = *(rax_39 + 0x1b8)
    *(rax_39 + 0x1b8) = var_768.o

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp12_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp15_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

void*** rax_44 = j_sub_140a82f30(0x330)
void*** r14_3 = rax_44

if (rax_44 == 0)
    r14_3 = nullptr
else
    rax_44[1].d = 1
    *(rax_44 + 0xc) = 1
    *r14_3 = &data_142feae18
    
    if (r14_3 != -0x10)
        sub_140f209b0(&r14_3[2])

void* var_710 = &r14_3[2]
sub_140918950(&var_710, &r14_3[2])
int64_t var_798_2 = 0x320
void var_786
void* var_700 = &var_786
void* var_6b0
void** rax_45 = sub_1418afba0(&var_710, &var_6b0, rax_39, sub_140e23ed0(&r14_3[2], "SDPIScaler"))
int64_t* rbx_11 = rax_45[1]

if (rbx_11 != 0)
    rbx_11[1].d += 1

void* rax_47 = &(*arg1)[0xf]
void var_688

if (rax_47 == &var_688)
label_141bbbcbe:
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp19_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rbx_11 + 8))(rbx_11, 1)
else
    *rax_47 = *rax_45
    int64_t* rsi_1 = *(rax_47 + 8)
    
    if (rbx_11 == rsi_1)
        goto label_141bbbcbe
    
    *(rax_47 + 8) = rbx_11
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp23_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* var_6a8

if (var_6a8 != 0)
    var_6a8[1].d -= 1
    
    if (var_6a8[1].d == 1)
        (**var_6a8)(var_6a8)
        int32_t temp22_1 = *(var_6a8 + 0xc)
        *(var_6a8 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*(*var_6a8 + 8))(var_6a8, 1)

if (r14_3 != 0)
    r14_3[1].d -= 1
    
    if (r14_3[1].d == 1)
        (**r14_3)(r14_3)
        int32_t temp25_1 = *(r14_3 + 0xc)
        *(r14_3 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*r14_3)[1](r14_3, 1)

int64_t* var_4a8

if (var_4a8 != 0)
    var_4a8[1].d -= 1
    
    if (var_4a8[1].d == 1)
        (**var_4a8)(var_4a8)
        int32_t temp27_1 = *(var_4a8 + 0xc)
        *(var_4a8 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*(*var_4a8 + 8))(var_4a8, 1)

void var_4c0
sub_140745b20(&var_4c0)
sub_140ddea30(&var_668)
int128_t zmm0_4 = sub_140745b20(&var_6f0)
sub_140e258a0((*arg1)[0xf], zmm0_4)
void*** rcx_63 = *arg1
(*rcx_63)[0xa](rcx_63)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp29_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rbx_16 = arg8[1]

if (rbx_16 != 0)
    rbx_16[1].d -= 1
    
    if (rbx_16[1].d == 1)
        (**rbx_16)(rbx_16)
        int32_t temp30_1 = *(rbx_16 + 0xc)
        *(rbx_16 + 0xc) -= 1
        
        if (temp30_1 == 1)
            int64_t r8_6 = *rbx_16
            (*(r8_6 + 8))(rbx_16, 1, r8_6)

__security_check_cookie(rax_1 ^ &var_7b8)
int512_t zmm6
zmm6.o = var_48
return arg1
