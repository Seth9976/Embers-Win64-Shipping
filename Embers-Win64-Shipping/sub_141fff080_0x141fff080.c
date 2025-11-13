// 函数: sub_141fff080
// 地址: 0x141fff080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t r12

if (*(arg1 + 0xe20) u> 0)
    TEB* gsbase
    
    if (data_143f38398
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f38398)
        
        if (data_143f38398 == 0xffffffff)
            sub_140b58260(&data_143f38390, u"MovieSceneCapture", 1)
            _Init_thread_footer(&data_143f38398)
    
    int64_t rbx_1 = data_143f38390
    j_sub_140b3db50()
    int64_t* rax_4 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t rdx_3 = *rax_4
    
    if ((*(rdx_3 + 0x70))(rax_4, rdx_3) == 0 || data_143de5434 != 0)
        r12.b = 0
    else
        r12.b = 1
else if (data_143de5434 != 0)
    r12.b = 0
else
    r12.b = 1

void*** rax_6 = j_sub_140a82f30(0x2e0)
void*** rdi = rax_6

if (rax_6 == 0)
    rdi = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rdi = &data_142ecd308
    
    if (rdi != -0x10)
        sub_140dde040(&rdi[2])

void* var_2a8 = &rdi[2]
sub_140918950(&var_2a8, &rdi[2])
int64_t var_2d8 = 0x2d0
void var_2c8
void* var_298 = &var_2c8
sub_140e23ed0(&rdi[2], "SOverlay")
void var_250
int64_t* rax_7
int128_t zmm1
rax_7, zmm1 = sub_140dd5d30(&var_250)
int128_t var_2b8
sub_140de49c0(&var_2a8, &var_2b8, rax_7, zmm1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rdi)[1](rdi, 1)

int64_t var_b0

if (var_b0 != 0)
    sub_140a74f90(var_b0)

sub_140ddea30(&var_250)
int64_t (* var_288)(int64_t arg1, void* arg2) = sub_1420048e0
int32_t var_280 = 0
int64_t* var_2b0

if (var_2b0 != 0)
    var_2b0[1].d += 1

int64_t* rax_10 = sub_141ff34e0(&var_250)
int64_t* rax_11 = sub_140a84c80(0, 0x30, 0)

if (rax_11 != 0)
    *rax_11 = &data_14329c328
    sub_140d3a3a0(&rax_11[1], arg1)
    *(rax_11 + 0x10) = var_288.o
    rax_11[4] = arg2
    rax_11[5] = sub_140a387b0()

int64_t var_268 = 0
int64_t rax_13 = 0
int64_t var_278 = 0
char rcx_11 = 1
char var_270 = 1
int32_t var_260 = 0

if (rax_11 != 0)
    (*(*rax_11 + 0x40))(rax_11, &var_268)
    rcx_11 = var_270
    rax_13 = var_278

rax_10[0x37].b = rcx_11
rax_10[0x36] = rax_13
sub_1407473e0(&rax_10[0x38], &var_268)
sub_140745b20(&var_268)

if (rax_11 != 0)
    (*(*rax_11 + 0x38))(rax_11, 0)
    int64_t rax_16 = sub_140a84c80(rax_11, 0, 0)
    
    if (rax_16 != 0)
        sub_140a74f90(rax_16)

int128_t zmm6 = var_2b8
var_2b8 = zmm6

if (var_2b0 != 0)
    var_2b0[1].d += 1

if (&var_2b8 != &rax_10[0x34])
    int128_t zmm0_2 = *(rax_10 + 0x1a0)
    *(rax_10 + 0x1a0) = zmm6
    var_2b8 = zmm0_2

if (var_2b0 != 0)
    var_2b0[1].d -= 1
    
    if (var_2b0[1].d == 1)
        (**var_2b0)(var_2b0)
        int32_t temp4_1 = *(var_2b0 + 0xc)
        *(var_2b0 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_2b0 + 8))(var_2b0, 1)

if (var_2b0 != 0)
    var_2b0[1].d -= 1
    
    if (var_2b0[1].d == 1)
        (**var_2b0)(var_2b0)
        int32_t temp5_1 = *(var_2b0 + 0xc)
        *(var_2b0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_2b0 + 8))(var_2b0, 1)

void*** rax_22 = j_sub_140a82f30(0x510)
void*** rdi_1 = rax_22

if (rax_22 == 0)
    rdi_1 = nullptr
else
    rax_22[1].d = 1
    *(rax_22 + 0xc) = 1
    *rdi_1 = &data_14329d8e0
    
    if (rdi_1 != -0x10)
        sub_1423504d0(&rdi_1[2])

var_2a8 = &rdi_1[2]
sub_140918950(&var_2a8, &rdi_1[2])
int64_t var_2d8_1 = 0x500
void* var_298_1 = &var_2c8
sub_141ff9a80(&var_2a8, &var_288, rax_10, sub_140e23ed0(&rdi_1[2], "SGameLayerManager"))

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp8_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

void var_90
sub_140745b20(&var_90)
int64_t* var_a8

if (var_a8 != 0)
    var_a8[1].d -= 1
    
    if (var_a8[1].d == 1)
        (**var_a8)(var_a8)
        int32_t temp9_1 = *(var_a8 + 0xc)
        *(var_a8 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_a8 + 8))(var_a8, 1)

sub_140ddea30(&var_250)
int64_t* rdi_2 = var_280.q

if (rdi_2 != 0)
    rdi_2[1].d += 1

int64_t* rax_27 = sub_141b7aa70(&var_250)
int128_t zmm1_2 = var_288.o
var_2b8 = zmm1_2
rax_27[0x39].b = r12.b
*(rax_27 + 0x1c9) = 0
*(rax_27 + 0x1cc) = r12.b

if (rdi_2 != 0)
    rdi_2[1].d += 1

if (&var_2b8 != &rax_27[0x34])
    int128_t zmm0_3 = *(rax_27 + 0x1a0)
    *(rax_27 + 0x1a0) = zmm1_2
    var_2b8 = zmm0_3

if (var_2b0 != 0)
    var_2b0[1].d -= 1
    
    if (var_2b0[1].d == 1)
        (**var_2b0)(var_2b0)
        int32_t temp12_1 = *(var_2b0 + 0xc)
        *(var_2b0 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_2b0 + 8))(var_2b0, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp13_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

void*** rax_32 = j_sub_140a82f30(0x410)
void*** r14_1 = rax_32

if (rax_32 == 0)
    r14_1 = nullptr
else
    rax_32[1].d = 1
    *(rax_32 + 0xc) = 1
    *r14_1 = &data_143237de0
    
    if (r14_1 != -0x10)
        sub_140f67000(&r14_1[2])

var_2a8 = &r14_1[2]
sub_140918950(&var_2a8, &r14_1[2])
int64_t var_2d8_2 = 0x400
void* var_298_2 = &var_2c8
int128_t zmm1_3
int128_t zmm6_1
zmm1_3, zmm6_1 = sub_140e23ed0(&r14_1[2], "SViewport")
sub_141d86480(&var_2a8, &var_2b8, rax_27, zmm1_3)

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        (**r14_1)(r14_1)
        int32_t temp16_1 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*r14_1)[1](r14_1, 1)

void var_60
sub_140745b20(&var_60)
int64_t* var_78

if (var_78 != 0)
    var_78[1].d -= 1
    
    if (var_78[1].d == 1)
        (**var_78)(var_78)
        int32_t temp18_1 = *(var_78 + 0xc)
        *(var_78 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_78 + 8))(var_78, 1)

void var_98
sub_140745b20(&var_98)

if (var_a8 != 0)
    var_a8[1].d -= 1
    
    if (var_a8[1].d == 1)
        (**var_a8)(var_a8)
        int32_t temp19_1 = *(var_a8 + 0xc)
        *(var_a8 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*var_a8 + 8))(var_a8, 1)

sub_140ddea30(&var_250)

if (var_2b0 != 0)
    var_2b0[1].d += 1

if (arg1 + 0xe10 == &var_2a8)
label_141fff6ce:
    
    if (var_2b0 != 0)
        var_2b0[1].d -= 1
        
        if (var_2b0[1].d == 1)
            (**var_2b0)(var_2b0)
            int32_t temp21_1 = *(var_2b0 + 0xc)
            *(var_2b0 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*var_2b0 + 8))(var_2b0, 1)
else
    *(arg1 + 0xe10) = var_2b8.q
    int64_t* r14_2 = *(arg1 + 0xe18)
    
    if (var_2b0 == r14_2)
        goto label_141fff6ce
    
    *(arg1 + 0xe18) = var_2b0
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            (**r14_2)(r14_2)
            int32_t temp23_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*r14_2 + 8))(r14_2, 1)

var_2a8.o = zmm6_1

if (var_2b0 != 0)
    var_2b0[1].d += 1

void* rcx_56 = *(arg1 + 0xdf8)
var_2b8.q = 0

if (rcx_56 != 0)
    int32_t rax_43 = *(rcx_56 + 8)
    
    if (rax_43 == 0)
        int64_t var_2b0_2 = 0
    else
        *(rcx_56 + 8) = rax_43 + 1
        
        if (rcx_56 != 0)
            var_2b8.q = *(arg1 + 0xdf0)

sub_14203d630(arg2, &var_2b8, &var_2a8)
int64_t (* rax_46)(int64_t arg1, void* arg2) = var_288
var_280.q = rdi_2
int64_t (* rdx_14)(int64_t arg1, void* arg2) = rax_46 + 0x390

if (rax_46 == 0)
    rdx_14 = nullptr

var_288 = rdx_14

if (rdi_2 != 0)
    rdi_2[1].d += 1

int64_t result = sub_14203c2b0(arg2, &var_288)

if (var_2b0 != 0)
    var_2b0[1].d -= 1
    
    if (var_2b0[1].d == 1)
        result = (**var_2b0)(var_2b0)
        int32_t temp26_1 = *(var_2b0 + 0xc)
        *(var_2b0 + 0xc) -= 1
        
        if (temp26_1 == 1)
            result = (*(*var_2b0 + 8))(var_2b0, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        result = (**rdi_2)(rdi_2)
        int32_t temp28_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp28_1 == 1)
            result = (*(*rdi_2 + 8))(rdi_2, 1)

if (var_2b0 != 0)
    var_2b0[1].d -= 1
    
    if (var_2b0[1].d == 1)
        result = (**var_2b0)(var_2b0)
        int32_t temp29_1 = *(var_2b0 + 0xc)
        *(var_2b0 + 0xc) -= 1
        
        if (temp29_1 == 1)
            result = (*(*var_2b0 + 8))(var_2b0, 1)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
