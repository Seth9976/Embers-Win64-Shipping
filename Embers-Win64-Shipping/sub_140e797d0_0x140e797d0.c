// 函数: sub_140e797d0
// 地址: 0x140e797d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6
float var_48 = zmm6
void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void* var_228 = arg1
__builtin_memset(arg2, 0, 0x20)
void* r8 = arg1
*(arg2 + 0x3e) = *(arg3 + 0x25)
*(arg2 + 0x3d) = *(arg3 + 0x24)
int64_t var_258
int64_t* var_250

if (*(arg3 + 0x24) != 0)
    int64_t* rbx_1 = arg3[1]
    var_258 = *arg3
    var_250 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (&var_258 != &arg2[2])
        arg4 = *(arg2 + 0x10)
        var_258.o = arg4
        rbx_1 = var_250
        *(arg2 + 0x10) = var_258.o
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
            
            r8 = var_228

void* rcx_2 = data_143e29f28
uint128_t zmm1

if (*(rcx_2 + 0x462) != 0)
    arg4 = _mm_cvtepi32_ps(zx.o(*data_143e29ed0))
    zmm1.d = 1f f/ arg4.d

uint64_t rax_3

if (*(rcx_2 + 0x462) == 0 || zmm1.d f< *(rcx_2 + 0x36c))
    rax_3.b = 0
else
    rax_3.b = 1

*(arg2 + 0x3c) = rax_3.b
int32_t var_248
int32_t var_240

if (*(r8 + 0x18) != 0)
    zmm1 = sub_140e12930(*(r8 + 0x20), &var_258, arg4)[1]
else
    int64_t* rcx_3 = data_143e20d18
    var_248 = int.d(fconvert.t(arg3[2].d))
    int32_t var_244_1 = int.d(fconvert.t(*(arg3 + 0x14)))
    var_240 = int.d(fconvert.t(arg3[3].d))
    int32_t var_23c_1 = int.d(fconvert.t(*(arg3 + 0x1c)))
    (*(*rcx_3 + 0xb0))(rcx_3, &var_258, &var_248)
    zmm1.d = _mm_cvtepi32_ps(zx.o(var_250:4.d)).d f- _mm_cvtepi32_ps(zx.o(var_258:4.d)).d

zmm1.d = zmm1.d f* 0.800000012f

if (arg3[4].d != 1)
    arg4 = 0xbf800000
else
    arg4.d = arg3[3].d.d f- arg3[2].d

int64_t* rbx_2 = arg3[1]
int64_t r14 = *arg3
var_258.d = arg4.d

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_208
int64_t* rax_13 = sub_140e4fff0(&var_208)
var_248.q = r14
var_240.q = rbx_2
int64_t* r14_1 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_248 != &rax_13[0x34])
    var_248.o = *(rax_13 + 0x1a0)
    r14_1 = var_240.q
    *(rax_13 + 0x1a0) = var_248.o

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        (**r14_1)(r14_1)
        int32_t temp4_1 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*r14_1 + 8))(r14_1, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

void*** rax_18 = sub_140e48f30()
var_240.q = rax_18
var_248.q = &rax_18[2]
sub_140918950(&var_248, &rax_18[2])
int32_t var_278 = 0x390
void var_230
void* var_238 = &var_230
int128_t zmm1_2
int32_t zmm6_1
zmm1_2, zmm6_1 = sub_140e23ed0(&rax_18[2], "SPopup")
void var_218
void** rax_19 = sub_140e57320(&var_248, &var_218, rax_13, zmm1_2)
int64_t* r14_2 = rax_19[1]
void* r15_1 = *rax_19

if (r14_2 != 0)
    r14_2[1].d += 1

int64_t* var_210

if (var_210 != 0)
    var_210[1].d -= 1
    
    if (var_210[1].d == 1)
        (**var_210)(var_210)
        int32_t temp8_1 = *(var_210 + 0xc)
        *(var_210 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_210 + 8))(var_210, 1)

int64_t* rbx_5 = var_240.q

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp10_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp11_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

sub_140ddea30(&var_208)
var_248.q = r15_1
var_240.q = r14_2

if (r14_2 != 0)
    r14_2[1].d += 1

void* r13 = var_228
void** rax_26
int128_t zmm0_1
rax_26, zmm0_1 = sub_140e8e470(r13, &var_218, &var_248, var_258.d, zmm6_1)
int64_t* rbx_7 = rax_26[1]

if (rbx_7 != 0)
    rbx_7[1].d += 1

if (arg2 == &var_248)
label_140e79cb5:
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp13_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
else
    *arg2 = *rax_26
    int64_t* r15_2 = arg2[1]
    
    if (rbx_7 == r15_2)
        goto label_140e79cb5
    
    arg2[1] = rbx_7
    
    if (r15_2 != 0)
        r15_2[1].d -= 1
        
        if (r15_2[1].d == 1)
            (**r15_2)(r15_2)
            int32_t temp16_1 = *(r15_2 + 0xc)
            *(r15_2 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*r15_2 + 8))(r15_2, 1)

if (var_210 != 0)
    var_210[1].d -= 1
    
    if (var_210[1].d == 1)
        (**var_210)(var_210)
        int32_t temp18_1 = *(var_210 + 0xc)
        *(var_210 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_210 + 8))(var_210, 1)

int64_t* rbx_9 = data_143e29f28
int64_t* rcx_28 = *sub_140e152a0(*(r13 + 0x20), &var_218)
(*(*rcx_28 + 0xf8))(rcx_28)
(*(*rbx_9 + 0x48))(rbx_9)
int128_t zmm6_2
zmm6_2.d = zmm0_1.d f* zmm0_1.d

if (var_210 != 0)
    var_210[1].d -= 1
    
    if (var_210[1].d == 1)
        (**var_210)(var_210)
        int32_t temp19_1 = *(var_210 + 0xc)
        *(var_210 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*var_210 + 8))(var_210, 1)

float zmm6_3 = sub_140e25880(*arg2, zmm6_2, zmm0_1)
int64_t* rax_36 = sub_140e13cf0(*arg2, &var_228)
float zmm2 = zmm6_3 f* *rax_36
zmm6_3 = zmm6_3 f* *(rax_36 + 4)
*(arg2 + 0x34) = zmm2
arg2[7].d = zmm6_3
int32_t rax_37 = arg3[4].d
int32_t r12
r12.b = rax_37 != 3
bool cond:1 = *(r13 + 0x18) != 0
int32_t var_220 = r12
int64_t* rax_39
uint128_t zmm0_2
uint128_t zmm1_4

if (cond:1)
    if (rax_37 != 3)
        zmm1_4 = *(arg3 + 0x1c)
    else
        zmm1_4 = *(arg3 + 0x14)
    
    if (rax_37 != 3)
        zmm0_2 = arg3[2].d
    else
        zmm0_2 = arg3[3].d
    
    void* rcx_37 = *(r13 + 0x20)
    var_248 = zmm0_2.d
    int32_t var_244_2 = zmm1_4.d
    float var_240_1 = zmm2 f+ zmm0_2.d
    float var_23c_2 = zmm6_3 f+ zmm1_4.d
    rax_39 = sub_140d9bb20(&var_228, &arg3[2], &var_248, &var_220, 
        sub_140e12810(rcx_37, &var_218, zmm0_2))
else
    int64_t* rcx_34 = data_143e29f28
    int32_t var_268_1 = r12
    int64_t* var_270_1 = &data_143dbb1f0
    var_278.b = 0
    rax_39 = (*(*rcx_34 + 0x1b8))(rcx_34, &var_228, &arg3[2])

var_258.d = (*rax_39).d
var_258:4.d = (*(rax_39 + 4)).d
zmm0_2 = zx.o(var_258)
*(arg2 + 0x20) = _mm_unpacklo_pd(zmm0_2, zmm0_2.q)

if (*(arg2 + 0x3c) != 0)
    zmm1_4 = arg2[4].d
    int32_t rdx_11 = -1
    int32_t r8_7 = -1
    int32_t rcx_39 = arg3[4].d
    zmm2 = *(arg2 + 0x24)
    
    if (zmm1_4.d f<= arg2[5].d)
        r8_7 = 1
    
    if (zmm2 f<= *(arg2 + 0x2c))
        rdx_11 = 1
    
    if (rcx_39 == 1)
    label_140e79e26:
        zmm1_4.d = _mm_cvtepi32_ps(zx.o(rdx_11)).d f* 30f
    label_140e79e2e:
        zmm1_4.d = zmm1_4.d f+ zmm2
        *(arg2 + 0x24) = _mm_max_ss(zmm1_4.d, 0).d
    else
        if (rcx_39 == 2)
            zmm1_4.d = _mm_cvtepi32_ps(zx.o(rdx_11)).d f* 60f
            goto label_140e79e2e
        
        if (rcx_39 == 3)
            zmm0_2.d = _mm_cvtepi32_ps(zx.o(r8_7)).d f* 60f
            zmm0_2.d = zmm0_2.d f+ zmm1_4.d
            arg2[4].d = zmm0_2.d
        else
            if (rcx_39 == 4)
                goto label_140e79e26
            
            if (rcx_39 == 5)
                zmm0_2.d = _mm_cvtepi32_ps(zx.o(r8_7)).d f* 30f
                zmm0_2.d = zmm0_2.d f+ zmm1_4.d
                zmm1_4 = _mm_cvtepi32_ps(zx.o(rdx_11))
                arg2[4].d = zmm0_2.d
                zmm1_4.d = zmm1_4.d f* 50f
                zmm1_4.d = zmm1_4.d f+ zmm2
                *(arg2 + 0x24) = zmm1_4.d

if (*(arg3 + 0x24) != 0)
    sub_140e85410(data_143e29f28)

if (r14_2 != 0)
    r14_2[1].d -= 1
    
    if (r14_2[1].d == 1)
        (**r14_2)(r14_2)
        int32_t temp22_1 = *(r14_2 + 0xc)
        *(r14_2 + 0xc) -= 1
        
        if (temp22_1 == 1)
            int64_t r8_9 = *r14_2
            (*(r8_9 + 8))(r14_2, 1, r8_9)

__security_check_cookie(rax_1 ^ &var_298)
return arg2
