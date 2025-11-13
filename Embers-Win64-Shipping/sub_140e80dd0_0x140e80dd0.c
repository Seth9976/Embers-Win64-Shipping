// 函数: sub_140e80dd0
// 地址: 0x140e80dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int32_t rdi
rdi.b = *(arg4 + 0x3c) != 0
int64_t* rbx = arg4[1]
int64_t r14 = *arg4

if (rbx != 0)
    rbx[1].d += 1

void var_2d8
int64_t* rax_3
int32_t zmm6_1
rax_3, zmm6_1 = sub_140dd5ed0(&var_2d8)
int64_t var_450 = r14
rax_3[0x34].d = 1
*(rax_3 + 0x202) = 0x101
int128_t zmm1 = *(arg4 + 0x24)
*(rax_3 + 0x1e4) = arg4[4].d.d
rax_3[0x3d].d = zmm1.d
*(rax_3 + 0x1e1) = 0
zmm1 = arg4[7].d
rax_3[0x3f].d = rdi
int64_t* rdi_1 = rbx
*(rax_3 + 0x1ec) = (*(arg4 + 0x34)).d
rax_3[0x3e].d = zmm1.d
*(rax_3 + 0x1fc) = zmm6_1
*(rax_3 + 0x1f4) = 0
*(rax_3 + 0x205) = *(arg4 + 0x3d)
int32_t rax_5
rax_5.b = *(arg4 + 0x3d) != 0
rax_3[0x41].d = rax_5

if (rbx != 0)
    rbx[1].d += 1

if (&var_450 != &rax_3[0x4c])
    zmm1 = var_450.o
    int128_t var_2e8_1 = zmm1
    var_450.o = *(rax_3 + 0x260)
    rdi_1 = rbx
    *(rax_3 + 0x260) = zmm1

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void*** rax_11 = j_sub_140a82f30(0xa88)
void*** rdi_2 = rax_11

if (rax_11 == 0)
    rdi_2 = nullptr
else
    rax_11[1].d = 1
    *(rax_11 + 0xc) = 1
    *rdi_2 = &data_142ecd2f8
    
    if (rdi_2 != -0x10)
        sub_140dde300(&rdi_2[2])

int64_t* var_418 = &rdi_2[2]
sub_140918950(&var_418, &rdi_2[2])
char var_488 = 0x78
void var_478
void* var_408 = &var_478
int64_t* var_438
sub_140de51f0(&var_418, &var_438, rax_3, sub_140e23ed0(&rdi_2[2], "SWindow"))

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp7_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi_2)[1](rdi_2, 1)

int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp8_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_70 + 8))(var_70, 1)

char var_a8 = 0
char var_b0 = 0
char var_b8 = 0
char var_c0 = 0
void var_108
sub_140745b20(&var_108)
int64_t* var_120

if (var_120 != 0)
    var_120[1].d -= 1
    
    if (var_120[1].d == 1)
        (**var_120)(var_120)
        int32_t rdi_3 = *(var_120 + 0xc)
        *(var_120 + 0xc) -= 1
        
        if (rdi_3 == 1)
            (*(*var_120 + 8))(var_120, zx.q(rdi_3))

sub_140ddea30(&var_2d8)
int64_t* var_430

if (var_430 != 0)
    var_430[1].d += 1

int64_t* rsi_1 = var_438
void var_388

if (arg1 + 0xb8 == &var_388)
label_140e8111c:
    
    if (var_430 != 0)
        var_430[1].d -= 1
        
        if (var_430[1].d == 1)
            (**var_430)(var_430)
            int32_t temp10_1 = *(var_430 + 0xc)
            *(var_430 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_430 + 8))(var_430, 1)
else
    *(arg1 + 0xb8) = rsi_1
    int64_t* rbx_5 = *(arg1 + 0xc0)
    
    if (var_430 == rbx_5)
        goto label_140e8111c
    
    *(arg1 + 0xc0) = var_430
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp12_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

if (*(arg4 + 0x3d) != 0)
    int64_t rax_22 = arg4[2]
    
    if (rax_22 != 0)
        int64_t var_400 = rax_22
        void* rax_23 = arg4[3]
        void* var_3f8_1 = rax_23
        
        if (rax_23 != 0)
            *(rax_23 + 8) += 1
        
        sub_140e8b090(rsi_1, &var_400)

void*** rax_24 = j_sub_140a82f30(0x58)
void*** r15 = rax_24

if (rax_24 == 0)
    r15 = nullptr
else
    int64_t* rbx_6 = arg4[1]
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1
    
    if (var_430 != 0)
        var_430[1].d += 1
    
    char r8_2 = *(arg4 + 0x3e)
    int64_t var_3f0 = *arg4
    int64_t* var_3e8_1 = rbx_6
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1
    
    sub_140e50e40(r15, &var_3f0, r8_2)
    *r15 = &data_142ed7778
    r15[9] = rsi_1
    r15[0xa] = var_430
    
    if (var_430 != 0)
        *(var_430 + 0xc) += 1
        var_430[1].d -= 1
        
        if (var_430[1].d == 1)
            (**var_430)(var_430)
            int32_t temp15_1 = *(var_430 + 0xc)
            *(var_430 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_430 + 8))(var_430, 1)
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp16_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* rax_30 = j_sub_140a82f30(0x18)
int64_t* rbx_7 = rax_30

if (rax_30 == 0)
    rbx_7 = nullptr
else
    rax_30[1].d = 1
    *(rax_30 + 0xc) = 1
    *rbx_7 = &data_142d42ea8
    rbx_7[2] = r15

void**** rsi_2 = &r15[1]

if (r15 == 0)
    rsi_2 = nullptr

if (rsi_2 == 0)
label_140e812ea:
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
else
    void* rax_31
    
    if (*rsi_2 != 0)
        rax_31 = rsi_2[1]
    
    if (*rsi_2 != 0 && rax_31 != 0 && *(rax_31 + 8) s> 0)
        goto label_140e812ea
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
    
    *rsi_2 = r15
    int64_t* rcx_26 = rsi_2[1]
    
    if (rbx_7 != rcx_26)
        if (rbx_7 != 0)
            *(rbx_7 + 0xc) += 1
            rcx_26 = rsi_2[1]
        
        if (rcx_26 != 0)
            int32_t temp23_1 = *(rcx_26 + 0xc)
            *(rcx_26 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*rcx_26 + 8))(rcx_26, 1)
        
        rsi_2[1] = rbx_7
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp22_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
        
        goto label_140e812ea

void var_378

if (arg1 + 0xc8 == &var_378)
label_140e81333:
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp18_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
else
    *(arg1 + 0xc8) = r15
    int64_t* rsi_3 = *(arg1 + 0xd0)
    
    if (rbx_7 == rsi_3)
        goto label_140e81333
    
    *(arg1 + 0xd0) = rbx_7
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t temp21_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)

int128_t zmm6_2 = zx.o(0)
int128_t var_468 = zx.o(0)
int64_t* rcx_33 = *arg3
int64_t* rsi_4

if (rcx_33 == 0)
    int64_t rax_44 = *(arg1 + 0x20)
    void* rax_45 = *(arg1 + 0x28)
    void* var_3d8_1 = rax_45
    
    if (rax_45 != 0)
        *(rax_45 + 8) += 1
    
    zmm6_2 = rax_44.o
    int64_t* rsi_5 = _mm_bsrli_si128(zx.o(0), 8).q
    var_468 = zmm6_2
    
    if (rsi_5 != 0)
        rsi_5[1].d -= 1
        
        if (rsi_5[1].d == 1)
            (**rsi_5)(rsi_5)
            int32_t temp25_1 = *(rsi_5 + 0xc)
            *(rsi_5 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*rsi_5 + 8))(rsi_5, 1)
    
    rsi_4 = var_468:8.q
else
    void var_3d0
    int64_t* rax_40 = (*(*rcx_33 + 0x10))(rcx_33, &var_3d0)
    
    if (&var_468 == rax_40)
        rsi_4 = var_468:8.q
    else
        var_468.q = *rax_40
        *rax_40 = 0
        rsi_4 = rax_40[1]
        
        if (rsi_4 == 0)
            zmm6_2 = var_468
            rsi_4 = var_468:8.q
        else
            var_468:8.q = rsi_4
            zmm6_2 = var_468
            rax_40[1] = 0
    
    int64_t* var_3c8
    
    if (var_3c8 != 0)
        var_3c8[1].d -= 1
        
        if (var_3c8[1].d == 1)
            (**var_3c8)(var_3c8)
            int32_t temp27_1 = *(var_3c8 + 0xc)
            *(var_3c8 + 0xc) -= 1
            
            if (temp27_1 == 1)
                (*(*var_3c8 + 8))(var_3c8, 1)

int128_t var_3b8 = zmm6_2

if (rsi_4 != 0)
    rsi_4[1].d += 1

int128_t var_3a8 = var_438.o

if (var_430 != 0)
    var_430[1].d += 1

void var_398
sub_140e595a0(data_143e29f28, &var_398, &var_3a8, &var_3b8, 1)
int64_t* var_390

if (var_390 != 0)
    var_390[1].d -= 1
    
    if (var_390[1].d == 1)
        (**var_390)(var_390)
        int32_t temp29_1 = *(var_390 + 0xc)
        *(var_390 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*var_390 + 8))(var_390, 1)

if (*(arg4 + 0x3c) != 0)
    void var_348
    sub_140d91ed0(&var_348)
    void* var_368
    sub_140d986d0(&var_348, &var_368, zx.o(0).q, 0x3e19999a, 5)
    sub_140e1c6a0(var_438, &var_348, 0x3f800000, &arg4[5])
    sub_140d952d0(&var_348)

void var_358

if (arg1 + 0xb8 != &var_358)
    *(arg1 + 0xb8) = nullptr
    int64_t* r14_4 = *(arg1 + 0xc0)
    
    if (r14_4 != 0)
        *(arg1 + 0xc0) = 0
        r14_4[1].d -= 1
        
        if (r14_4[1].d == 1)
            (**r14_4)(r14_4)
            int32_t temp32_1 = *(r14_4 + 0xc)
            *(r14_4 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*(*r14_4 + 8))(r14_4, 1)

*arg2 = r15
arg2[1] = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1

if (rsi_4 != 0)
    rsi_4[1].d -= 1
    
    if (rsi_4[1].d == 1)
        (**rsi_4)(rsi_4)
        int32_t temp34_1 = *(rsi_4 + 0xc)
        *(rsi_4 + 0xc) -= 1
        
        if (temp34_1 == 1)
            (*(*rsi_4 + 8))(rsi_4, 1)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp36_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp36_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

if (var_430 != 0)
    var_430[1].d -= 1
    
    if (var_430[1].d == 1)
        (**var_430)(var_430)
        int32_t temp38_1 = *(var_430 + 0xc)
        *(var_430 + 0xc) -= 1
        
        if (temp38_1 == 1)
            (*(*var_430 + 8))(var_430, 1)

int64_t* rbx_8 = arg3[1]

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp39_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp39_1 == 1)
            int64_t r8_5 = *rbx_8
            (*(r8_5 + 8))(rbx_8, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_4a8)
return arg2
