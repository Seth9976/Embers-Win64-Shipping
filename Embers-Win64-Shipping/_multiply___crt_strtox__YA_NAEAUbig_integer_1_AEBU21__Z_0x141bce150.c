// 函数: ?multiply@__crt_strtox@@YA_NAEAUbig_integer@1@AEBU21@@Z
// 地址: 0x141bce150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_418
int64_t rax_1 = __security_cookie ^ &var_418
int64_t** result_1 = arg2
int64_t** result = arg2
int64_t var_368
__builtin_memset(&var_368, 0, 0x2c)
void* r15 = arg1
int32_t var_33c = 0x80
int32_t var_338 = 0xffffffff
int32_t var_334 = 0
int64_t var_328 = 0
int32_t var_320 = 0
sub_140b90d40(&var_368, arg1 + 0x108)
int32_t rbx = 0
int64_t var_360
int32_t rdx_2 = var_360.d - var_334
int64_t* rsi = nullptr
int64_t* var_3e0 = nullptr
int32_t r14 = 0
int32_t var_3d8 = 0
int32_t var_3d4 = 0

if (rdx_2 s> 0)
    sub_1405c5570(&var_3e0, rdx_2)
    r14 = var_3d4
    rbx = var_3d8
    rsi = var_3e0

int64_t var_358
int64_t* var_3c8 = &var_358
int32_t rcx_2 = 0
int32_t var_3d0 = 0
int32_t r8 = 0
int32_t var_3cc = 1
int32_t var_3c0 = 0xffffffff
int64_t var_3bc = 0
int64_t* var_348
int32_t var_340

if (var_340 != 0)
    int64_t* r9_1 = &var_358
    
    if (var_348 != 0)
        r9_1 = var_348
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_340 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_141bce29c:
        int32_t rax_8 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_3cc_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t rax_10 = r8 - rax_9 + 0x1f
        
        if (rax_10 s> var_340)
            rax_10 = var_340
        
        var_3bc.d = rax_10
    else
        while (true)
            int64_t rax_5 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_3bc:4.d = r8
            var_3d0 = rcx_2
            
            if (rax_5.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                var_3bc.d = var_340
                break
            
            rdx_5 = *(r9_1 + (rax_5 << 2) + 4)
            var_3c0 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141bce29c

double zmm2[0x2] = var_3c0.o
double var_388[0x2] = var_3d0.o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
double var_378[0x2] = zmm2
var_3d0.o = (&var_368).o
int64_t var_3b0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_3c0.o = var_388

if (rax_12 s< var_340)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdi_1 = sx.q(rbx)
        int64_t r12 = *var_3d0.q
        rbx = (rdi_1 + 1).d
        var_3d8 = rbx
        
        if (rbx s> r14)
            sub_1405a4d70(&var_3e0)
            r14 = var_3d4
            rbx = var_3d8
            rsi = var_3e0
        
        rsi[rdi_1] = *(r12 + sx.q(i) * 0x10)
        var_3bc:4.d &= not.d(var_3c8:4.d)
        sub_14059bdd0(&var_3c8)
        i = i_1
    while (i s< *(var_3c0.q + 0x18))
    
    r15 = arg1
    result = result_1

if (arg1 + 0x108 != &var_3e0)
    int64_t* rcx_6 = *(arg1 + 0x108)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *(arg1 + 0x108) = rsi
    *(arg1 + 0x110) = rbx
    *(arg1 + 0x114) = r14
else if (rsi != 0)
    sub_140a74f90(rsi)

void*** rax_20 = sub_140a84c80(0, 0x30, 0)

if (rax_20 != 0)
    *rax_20 = &data_143083a20
    sub_140d3a3a0(&rax_20[1], r15)
    rax_20[2] = sub_141bb2f00
    rax_20[4] = sub_140a387b0()

void var_318
int64_t* rax_22 = sub_141b79910(&var_318)
rax_22[0x46] = arg1 + 0x108

if (&result_1 != &rax_22[0x49])
    if (rax_20 != 0)
        (*rax_20)[8](rax_20, &rax_22[0x49])
    else if (rax_22[0x4a].d != 0)
        int64_t* rcx_11 = rax_22[0x49]
        
        if (rcx_11 != 0)
            (*(*rcx_11 + 0x38))(rcx_11, 0)
            int64_t rcx_12 = rax_22[0x49]
            
            if (rcx_12 != 0)
                rax_22[0x49] = sub_140a84c80(rcx_12, 0, 0)
            
            rax_22[0x4a].d = 0

*(rax_22 + 0x2ca) = *(r15 + 0x128)
int64_t* rax_27 = sub_141b76cd0()
var_3c8 = rax_27
var_3d0.q = &rax_27[2]
sub_140918950(&var_3d0, &rax_27[2])
int64_t var_3f8 = 0x498
void var_3e8
var_3c0.q = &var_3e8
int64_t** rax_28 =
    sub_141b87430(&var_3d0, &var_3e0, rax_22, sub_140e23ed0(&rax_27[2], "SComboBox<UObject*>"))
int64_t* rbx_3 = rax_28[1]

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (r15 + 0x130 == &result_1)
label_141bce529:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp4_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    *(r15 + 0x130) = *rax_28
    int64_t* rdi_3 = *(r15 + 0x138)
    
    if (rbx_3 == rdi_3)
        goto label_141bce529
    
    *(r15 + 0x138) = rbx_3
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp8_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rbx_4 = var_3d8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = var_3c8

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp10_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

char var_58 = 0
char var_78 = 0
char var_97 = 0
int64_t* var_a8

if (var_a8 != 0)
    var_a8[1].d -= 1
    
    if (var_a8[1].d == 1)
        (**var_a8)(var_a8)
        int32_t temp12_1 = *(var_a8 + 0xc)
        *(var_a8 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_a8 + 8))(var_a8, 1)

void var_c0
sub_140745b20(&var_c0)
void var_d0
sub_140745b20(&var_d0)
void var_e0
sub_140745b20(&var_e0)
void var_f8
sub_140745b20(&var_f8)
int64_t* var_108

if (var_108 != 0)
    var_108[1].d -= 1
    
    if (var_108[1].d == 1)
        (**var_108)(var_108)
        int32_t temp14_1 = *(var_108 + 0xc)
        *(var_108 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_108 + 8))(var_108, 1)

void var_138
sub_140745b20(&var_138)
int64_t* var_170

if (var_170 != 0)
    var_170[1].d -= 1
    
    if (var_170[1].d == 1)
        (**var_170)(var_170)
        int32_t temp15_1 = *(var_170 + 0xc)
        *(var_170 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_170 + 8))(var_170, 1)

sub_140ddea30(&var_318)

if (rax_20 != 0)
    (*rax_20)[7](rax_20, 0)
    int64_t rax_43 = sub_140a84c80(rax_20, 0, 0)
    
    if (rax_43 != 0)
        sub_140a74f90(rax_43)

int64_t* rbx_9 = *(r15 + 0x138)

if (rbx_9 != 0)
    rbx_9[1].d += 1

*result = *(r15 + 0x130)
result[1] = rbx_9

if (rbx_9 != 0)
    rbx_9[1].d += 1
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp17_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)

int32_t var_320_1 = 0

if (var_328 != 0)
    sub_140a74f90(var_328)

bool cond:1 = var_360:4.d == 0
var_360.d = 0

if (not(cond:1))
    sub_1405a5410(&var_368, 0)

int32_t var_338_1 = 0xffffffff
int32_t var_334_1 = 0
sub_14059a8e0(&var_358, 0)

if (var_348 != 0)
    sub_140a74f90(var_348)

int64_t rcx_45 = var_368

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

__security_check_cookie(rax_1 ^ &var_418)
return result
