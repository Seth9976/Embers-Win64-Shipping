// 函数: sub_141bd4870
// 地址: 0x141bd4870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
uint32_t rsi = 0
int32_t var_2d4 = 0
void* const rbx_1

if (*(arg1 + 0x110) s<= 0)
    rbx_1 = nullptr
else
    rbx_1 = **(arg1 + 0x108)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_3 = sub_141c088a0()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            rbx_1 = nullptr

int32_t rdx_1 = *(arg1 + 0x110)
char var_2d8
void** (* var_2d0)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
int64_t* var_2a0
void* rax_8
int64_t* rdi
int32_t r12

if (rdx_1 s<= 0)
label_141bd4963:
    rdi = data_143e244b8
    r12 = 2
    var_2a0 = data_143e244b0
    int64_t* var_298_1 = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rax_8 = &var_2a0
else
    void* rcx_1 = **(arg1 + 0x108)
    
    if (rcx_1 == 0)
        goto label_141bd4963
    
    int64_t* rax_7 = *(rcx_1 + 0x30)
    
    if (rax_7 == 0)
        goto label_141bd4963
    
    r12 = 1
    
    if (rdx_1 s<= 0 || rcx_1 == 0)
        rax_7 = nullptr
    
    var_2d8 = 0
    char* var_2c8_1 = &var_2d8
    var_2d0 = sub_141b970e0
    void var_280
    sub_141befea0(rax_7, &var_280, &var_2d0)
    int64_t* var_298
    rdi = var_298
    rax_8 = &var_280

int128_t zmm0

if (rbx_1 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(rbx_1 + 0x50)

char var_260 = 1
int64_t var_258 = 0
int32_t var_250 = 0
int128_t var_2c0 = zmm0
int128_t var_270 = var_2c0
uint32_t var_2d4_1
int128_t* var_2a8
int128_t var_290

if (rbx_1 == 0)
    zmm0 = data_142d3f670
    var_2a8 = &var_290
    var_2d4_1 = 0
    var_2d8 = 0
else
    rsi = zx.d(*(rbx_1 + 0x4d))
    zmm0 = *(rbx_1 + 0x3c)
    var_2d4_1 = zx.d(*(rbx_1 + 0x4c))
    var_2d8 = *(rbx_1 + 0x38)
    var_2a8 = &var_290

int64_t* rbx_2 = *(rax_8 + 8)
var_2d0 = *rax_8
var_290 = zmm0

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_238
int64_t* rax_10 = sub_141b7a8c0(&var_238)
char rcx_7 = var_2d8
var_2a0 = rax_10
rax_10[0x3c].b = rcx_7
*(rax_10 + 0x1a4) = rsi
rax_10[0x34].d = var_2d4_1
*(rax_10 + 0x1e4) = *var_2a8
rax_10[0x37].b = 1
*(rax_10 + 0x1a8) = var_2c0
sub_140692f90(&rax_10[0x38], &var_258)
char rax_11 = *(arg1 + 0x120)
int64_t* rsi_1 = rbx_2
int64_t* r13 = var_2a0
var_2d0 = var_2d0
*(r13 + 0x1f4) = rax_11
*(r13 + 0x1f5) = *(arg1 + 0x121)
*(r13 + 0x1f6) = *(arg1 + 0x122)
*(r13 + 0x1f7) = *(arg1 + 0x123)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_2d0 != &r13[0x3a])
    var_2d0.o = *(r13 + 0x1d0)
    rsi_1 = rbx_2
    *(r13 + 0x1d0) = var_2d0.o

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp2_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

void*** rax_20 = sub_141b776e0()
var_2c0:8.q = rax_20
var_2c0.q = &rax_20[2]
sub_140918950(&var_2c0, &rax_20[2])
int64_t var_2e8 = 0x420
void var_2d7
void* var_2b0 = &var_2d7
void* var_248
void** rax_21 = sub_141b8ae00(&var_2c0, &var_248, r13, sub_140e23ed0(&rax_20[2], "SSafeZone"))
int64_t* rbx_4 = rax_21[1]

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (arg1 + 0x128 == &var_290)
label_141bd4bf9:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
else
    *(arg1 + 0x128) = *rax_21
    int64_t* rsi_2 = *(arg1 + 0x130)
    
    if (rbx_4 == rsi_2)
        goto label_141bd4bf9
    
    *(arg1 + 0x130) = rbx_4
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp10_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)

int64_t* var_240

if (var_240 != 0)
    var_240[1].d -= 1
    
    if (var_240[1].d == 1)
        (**var_240)(var_240)
        int32_t temp9_1 = *(var_240 + 0xc)
        *(var_240 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_240 + 8))(var_240, 1)

int64_t* rbx_6 = var_2c0:8.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp12_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp13_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

void var_78
sub_140745b20(&var_78)
sub_140ddea30(&var_238)
sub_140745b20(&var_258)

if ((r12.b & 2) != 0)
    r12 &= 0xfffffffd
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp16_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rdi + 8))(rdi, 1)

int64_t* var_278

if ((r12.b & 1) != 0 && var_278 != 0)
    var_278[1].d -= 1
    
    if (var_278[1].d == 1)
        (**var_278)(var_278)
        int32_t temp17_1 = *(var_278 + 0xc)
        *(var_278 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_278 + 8))(var_278, 1)

int64_t* rbx_9 = *(arg1 + 0x130)

if (rbx_9 != 0)
    rbx_9[1].d += 1

*arg2 = *(arg1 + 0x128)
arg2[1] = rbx_9

if (rbx_9 != 0)
    int32_t r8_5 = rbx_9[1].d
    rbx_9[1].d = r8_5
    
    if (r8_5 == 0)
        (**rbx_9)(rbx_9)
        int32_t temp18_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp18_1 == 1)
            int64_t r8_7 = *rbx_9
            (*(r8_7 + 8))(rbx_9, 1, r8_7)

__security_check_cookie(rax_1 ^ &var_308)
return arg2
