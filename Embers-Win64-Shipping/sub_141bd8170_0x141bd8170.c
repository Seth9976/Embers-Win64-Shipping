// 函数: sub_141bd8170
// 地址: 0x141bd8170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t var_248 = 0
char r12 = 0
void*** rax_2 = j_sub_140a82f30(0x380)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_143084a00
    
    if (rdi != -0x10)
        sub_140f21260(&rdi[2])

void*** var_258 = rdi
void* var_260 = &rdi[2]
sub_140918950(&var_260, &rdi[2])
int64_t var_288 = 0x370
void var_268
void* var_250 = &var_268
sub_140e23ed0(&rdi[2], "SWindowTitleBarArea")
void var_238
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_141b7ac40(&var_238)
void*** var_278
void** rax_4 = sub_141b8b140(&var_260, &var_278, rax_3, zmm1)
void*** rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (arg1 + 0x128 == &var_248)
label_141bd82a5:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    *(arg1 + 0x128) = *rax_4
    rdi = *(arg1 + 0x130)
    
    if (rbx_1 == rdi)
        goto label_141bd82a5
    
    *(arg1 + 0x130) = rbx_1
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp6_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rdi)[1](rdi, 1)

int64_t* var_270

if (var_270 != 0)
    var_270[1].d -= 1
    
    if (var_270[1].d == 1)
        (**var_270)(var_270)
        int32_t temp5_1 = *(var_270 + 0xc)
        *(var_270 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_270 + 8))(var_270, 1)

if (var_258 != 0)
    var_258[1].d -= 1
    
    if (var_258[1].d == 1)
        (**var_258)(var_258)
        int32_t temp8_1 = *(var_258 + 0xc)
        *(var_258 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*var_258)[1](var_258, 1)

void var_58
sub_140745b20(&var_58)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp9_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

void var_78
sub_140745b20(&var_78)
sub_140ddea30(&var_238)

if (*(arg1 + 0x121) != 0)
    var_278 = nullptr
    void*** rax_14 = sub_140a84c80(0, 0x30, 0)
    var_278 = rax_14
    var_270.d = 3
    
    if (rax_14 != 0)
        *rax_14 = &data_143083fb0
        sub_140d3a3a0(&rax_14[1], arg1)
        rax_14[2] = sub_141bb5690
        rax_14[4] = sub_140a387b0()
    
    *(arg1 + 0x138) = *sub_140e84110(data_143e29f28, &var_248, &var_278)
    void*** rax_18
    
    if (var_270.d == 0)
        rax_18 = var_278
    label_141bd8434:
        
        if (rax_18 != 0)
            sub_140a74f90(rax_18)
    else
        void*** rcx_21 = var_278
        
        if (rcx_21 != 0)
            (*rcx_21)[7](rcx_21, 0)
            rax_18 = var_278
            
            if (rax_18 != 0)
                rax_18 = sub_140a84c80(rax_18, 0, 0)
                var_278 = rax_18
            
            var_270.d = 0
            goto label_141bd8434
else if (*(arg1 + 0x138) != 0)
    sub_140e8d150(data_143e29f28, *(arg1 + 0x138))
    *(arg1 + 0x138) = 0

var_278 = nullptr
var_270.d = 0
void*** rax_19 = sub_1405978f0(0x28, &var_278)

if (rax_19 != 0)
    *rax_19 = &data_142d57800
    sub_140d3a3a0(&rax_19[1], arg1)
    rax_19[2] = sub_141bdc330
    rax_19[4] = sub_140a387b0()
    *rax_19 = &data_142d57858

sub_1407473e0(*(arg1 + 0x128) + 0x318, &var_278)
sub_140745b20(&var_278)
int32_t rcx_29 = *(arg1 + 0x110)

if (rcx_29 s> 0)
    var_278 = *(arg1 + 0x128)
    int64_t* rax_22 = *(arg1 + 0x130)
    var_270 = rax_22
    
    if (rax_22 != 0)
        rax_22[1].d += 1
        rcx_29 = *(arg1 + 0x110)
    
    void* const rbx_7
    
    if (rcx_29 s<= 0)
        rbx_7 = nullptr
    else
        rbx_7 = **(arg1 + 0x108)
        
        if (rbx_7 == 0)
            rbx_7 = nullptr
        else
            void* rax_24 = sub_141c24610()
            void* rdx_8 = *(rbx_7 + 0x10)
            int64_t rax_25 = sx.q(*(rax_24 + 0x38))
            
            if (rax_25.d s> *(rdx_8 + 0x38) || *(*(rdx_8 + 0x30) + (rax_25 << 3)) != rax_24 + 0x30)
                rbx_7 = nullptr
    
    sub_141b95d30(rbx_7, &var_278)

void* rcx_32 = data_143f5b298
void* rcx_33

if (rcx_32 != 0)
    rcx_33 = *(rcx_32 + 0x788)

int64_t* rbx_8

if (rcx_32 == 0 || rcx_33 == 0)
    rbx_8 = var_270
    rdi.b = 0
else
    rbx_8 = *(rcx_33 + 0xd0)
    r12 = 1
    
    if (rbx_8 == 0)
        rdi.b = 0
    else
        int32_t rax_27 = rbx_8[1].d
        
        if (rax_27 == 0)
            rbx_8 = nullptr
            rdi.b = 0
        else
            rbx_8[1].d = rax_27 + 1
            
            if (*(rcx_33 + 0xc8) == 0)
                rdi.b = 0
            else
                rdi = 1

if ((r12 & 1) != 0 && rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp11_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_8 + 8))(rbx_8, 1)

if (rdi.b != 0)
    void* rax_31 = data_143f5b298
    var_278 = nullptr
    void* rcx_36 = *(rax_31 + 0x788)
    int64_t* rbx_9 = *(rcx_36 + 0xd0)
    int64_t* var_270_1 = rbx_9
    
    if (rbx_9 != 0)
        int32_t rax_32 = rbx_9[1].d
        
        if (rax_32 == 0)
            rbx_9 = nullptr
            var_270_1 = nullptr
        else
            rbx_9[1].d = rax_32 + 1
            var_278 = *(rcx_36 + 0xc8)
    
    int128_t zmm1_1 = var_278.o
    void* rax_36 = *(arg1 + 0x128) + 0x308
    var_278.o = zmm1_1
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    if (&var_278 != rax_36)
        int128_t zmm0_1 = *rax_36
        *rax_36 = zmm1_1
        var_278.o = zmm0_1
    
    if (var_270_1 != 0)
        var_270_1[1].d -= 1
        
        if (var_270_1[1].d == 1)
            (**var_270_1)(var_270_1)
            int32_t temp15_1 = *(var_270_1 + 0xc)
            *(var_270_1 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_270_1 + 8))(var_270_1, 1)
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp16_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)

char rdx_10 = data_1439ae51d

if (*(arg1 + 0x120) != 0)
    rdx_10 = data_1439ae51c

var_260:1.b = 1
var_260.b = rdx_10
int64_t var_258_1 = 0
var_250.d = 0
sub_140e253b0(*(*(arg1 + 0x128) + 0x360), &var_260)
int64_t* rbx_10 = *(arg1 + 0x130)

if (rbx_10 != 0)
    rbx_10[1].d += 1

*arg2 = *(arg1 + 0x128)
arg2[1] = rbx_10

if (rbx_10 != 0)
    int32_t r8_4 = rbx_10[1].d
    rbx_10[1].d = r8_4
    
    if (r8_4 == 0)
        (**rbx_10)(rbx_10)
        int32_t temp12_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp12_1 == 1)
            int64_t r8_6 = *rbx_10
            (*(r8_6 + 8))(rbx_10, 1, r8_6)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
