// 函数: sub_140f0f7a0
// 地址: 0x140f0f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
char r15 = (arg9 ^ 1) << 5
bool cond:0 = 0f f>= *(arg1 + 0x11c)
void* var_220 = arg3
char var_258_1
int128_t zmm0
uint128_t zmm1

if (not(cond:0))
    zmm0 = *(arg1 + 0x10c)
    zmm1 = *(arg1 + 0x108)
    zmm1.d = zmm1.d f* zmm1.d
    var_258_1 = 1
    zmm0.d = zmm0.d f* zmm0.d
    zmm1.d = zmm1.d f+ zmm0.d

if (cond:0 || not(zmm1.d f> 0f))
    var_258_1 = 0

int64_t* rcx = *arg4
void var_158
(*(*rcx + 0x38))(rcx, &var_158)
int64_t* rcx_1 = *arg4
void var_208
(*(*rcx_1 + 0x10))(rcx_1, &var_208)
int64_t* rcx_2 = *arg4
int16_t var_1d8
(*(*rcx_2 + 0x20))(rcx_2, &var_1d8)
zmm1 = *(arg1 + 0x10c)
zmm0 = *(arg5 + 8)
int128_t zmm14
zmm14.d = 1f f/ zmm0.d
uint128_t zmm12
zmm12.d = zmm1.d f* zmm0.d
uint128_t zmm15

if (zmm1.d f<= 0f)
    zmm15 = zx.o(0)
else
    zmm15 = zmm12

uint128_t zmm11 = *(arg1 + 0x108)
uint128_t zmm13

if (zmm11.d f<= 0f)
    zmm13 = zx.o(0)
else
    zmm13.d = zmm11.d f* zmm0.d

if (zmm1.d f>= 0f)
    zmm12 = zx.o(0)
else
    zmm12 ^= 0x80000000

if (zmm11.d f>= 0f)
    zmm11 = zx.o(0)
else
    zmm11.d = zmm11.d f* zmm0.d
    zmm11 ^= 0x80000000

int64_t* rax_6 = *(arg1 + 0x78)
int16_t* const rsi = &data_142d40450
int16_t* rcx_3

if (rax_6[1].d == 0)
    rcx_3 = &data_142d40450
else
    rcx_3 = *rax_6

zmm1 = *(arg1 + 0xb0)
int64_t var_148 = *(arg3 + 0x48)
int16_t var_13c = var_1d8
int64_t var_138 = *(arg1 + 0x90)
int64_t var_130 = *(arg1 + 0x98)
int32_t var_140 = zmm0.d
int64_t var_108 = *(arg1 + 0xc0)
int64_t* rax_12 = *(arg1 + 0xc8)
int128_t var_128 = *(arg1 + 0xa0)
int40_t var_118 = zmm1.5

if (rax_12 != 0)
    rax_12[1].d += 1

int64_t var_f8 = *(arg1 + 0xd0)
int32_t var_f0 = *(arg1 + 0xd8)
char var_ec = *(arg1 + 0xdc)
uint128_t var_1e8
void* var_1d0
char var_1c0
sub_140f02b20(&var_1e8, &var_1d0, &var_148, &var_208, rcx_3, var_1c0)

if (rax_12 != 0)
    rax_12[1].d -= 1
    
    if (rax_12[1].d == 1)
        (**rax_12)(rax_12)
        int32_t temp1_1 = *(rax_12 + 0xc)
        *(rax_12 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_12 + 8))(rax_12, 1)

int16_t* var_278
char var_270
int32_t var_250
int32_t var_240
int32_t var_230
void var_1f8
int32_t rsi_4
uint128_t zmm0_1
int128_t zmm1_1
int128_t zmm2_1
uint128_t zmm3_1
int128_t zmm4_1
uint128_t zmm5_1
float zmm6_1
float zmm7_1
float zmm8_1
float zmm9_1

if (var_258_1 == 0)
    rsi_4 = arg7
else
    zmm0_1 = var_1e8
    uint128_t var_218 = zmm0_1
    void* rax_19 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    if ((*(arg1 + 0xb0)).d f!= *(arg1 + 0x110) || (*(arg1 + 0xb4)).d f!= *(arg1 + 0x114)
            || (*(arg1 + 0xb8)).d f!= *(arg1 + 0x118)
            || not((*(arg1 + 0xbc)).d f== *(arg1 + 0x11c)))
        int64_t* rbx_2 = *(arg1 + 0xc8)
        int64_t r8_1 = *(arg1 + 0x98)
        int64_t r9_1 = *(arg1 + 0xc0)
        var_138.o = *(arg1 + 0xa0)
        var_128 = *(arg1 + 0xb0)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        char rax_20 = *(arg1 + 0xdc)
        int32_t rcx_7 = var_138.d
        int64_t r10_1 = *(arg1 + 0xd0)
        int32_t r11_1 = *(arg1 + 0xd8)
        zmm1_1 = *(arg1 + 0x110)
        var_130 = 0
        
        if ((var_138 u>> 0x28).b == 0)
            rcx_7 = 0
        
        int16_t** rax_23 = *(arg1 + 0x78)
        var_138.d = rcx_7
        
        if (rax_23[1].d != 0)
            rsi = *rax_23
        
        int32_t var_1b0_1 = (*(arg5 + 8)).d
        int64_t var_1a8_1 = *(arg1 + 0x90)
        int64_t var_1b8 = *(var_220 + 0x48)
        int16_t var_1ac_1 = var_1d8
        int64_t var_1a0_1 = r8_1
        int64_t var_178_1 = r9_1
        uint128_t var_198_1 = var_138.o
        int128_t var_188_1 = zmm1_1
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        char var_15c_1 = rax_20
        int64_t var_168_1 = r10_1
        int32_t var_160_1 = r11_1
        int64_t** rax_29 = sub_140f02b20(&var_250, &var_1d0, &var_1b8, &var_208, rsi, var_1c0)
        var_218.q = *rax_29
        *rax_29 = var_218.q
        var_218:8.q = rax_29[1]
        rax_29[1] = var_218:8.q
        int32_t var_248
        int64_t* rsi_1 = var_248.q
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp11_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp13_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp14_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    zmm5_1 = *arg8
    zmm4_1 = *(arg8 + 4)
    zmm0_1.d = zmm5_1.d f* *(arg1 + 0xb0)
    int64_t* rbx_3 = *arg4
    zmm1_1.d = zmm4_1.d f* *(arg1 + 0xb4)
    zmm3_1 = *(arg8 + 8)
    rsi_4 = arg7 + 1
    zmm2_1 = *(arg8 + 0xc)
    zmm5_1.d = zmm5_1.d f* *(arg1 + 0x110)
    zmm4_1.d = zmm4_1.d f* *(arg1 + 0x114)
    var_230 = zmm0_1.d
    zmm0_1.d = zmm3_1.d f* *(arg1 + 0xb8)
    zmm3_1.d = zmm3_1.d f* *(arg1 + 0x118)
    int32_t var_22c_1 = zmm1_1.d
    zmm1_1.d = zmm2_1.d f* *(arg1 + 0xbc)
    zmm2_1.d = zmm2_1.d f* *(arg1 + 0x11c)
    int32_t var_228_1 = zmm0_1.d
    int32_t var_224_1 = zmm1_1.d
    var_250 = zmm5_1.d
    int32_t var_24c_1 = zmm4_1.d
    int32_t var_248_1 = zmm3_1.d
    int32_t var_244_1 = zmm2_1.d
    int32_t* rax_37 = (*(*rbx_3 + 0x38))(rbx_3, &var_220)
    zmm13.d = zmm13.d f+ *rax_37
    zmm15.d = zmm15.d f+ rax_37[1]
    zmm13.d = zmm13.d f* zmm14.d
    zmm15.d = zmm15.d f* zmm14.d
    int32_t* rax_39 = (*(*rbx_3 + 0x18))(rbx_3, &var_1f8)
    zmm8_1 = *(arg5 + 8)
    int32_t zmm4_2 = *(arg5 + 0x24)
    zmm7_1 = zmm13.d
    zmm2_1 = *(arg5 + 0x1c)
    zmm3_1 = *(arg5 + 0x28)
    zmm6_1 = zmm15.d
    zmm1_1 = *(arg5 + 0x20)
    int128_t zmm10
    zmm10.d = zmm14.d f* *rax_39
    zmm9_1 = zmm14.d f* rax_39[1]
    char rcx_19 = *(arg5 + 0x34) & 1
    var_13c.q = 0
    zmm0_1.d = zmm15.d f* zmm4_2
    uint128_t zmm5_2
    zmm5_2.d = zmm13.d f* zmm2_1.d
    zmm13.d = zmm13.d f* zmm1_1.d
    zmm5_2.d = zmm5_2.d f+ zmm0_1.d
    zmm15.d = zmm15.d f* zmm3_1.d
    zmm13.d = zmm13.d f+ zmm15.d
    zmm5_2.d = zmm5_2.d f+ *(arg5 + 0x2c)
    zmm7_1 = zmm7_1 * zmm8_1 f+ *(arg5 + 0xc)
    zmm6_1 = zmm6_1 * zmm8_1 f+ *(arg5 + 0x10)
    zmm13.d = zmm13.d f+ *(arg5 + 0x30)
    var_240 = zmm2_1.d
    int32_t var_23c_1 = zmm1_1.d
    int32_t var_238_1 = zmm4_2
    int32_t var_234_1 = zmm3_1.d
    var_148.d = zmm7_1
    var_130:4.o = var_240.o
    var_148:4.d = zmm6_1
    var_128:0xc.q = (_mm_unpacklo_ps(zmm5_2, zmm13.q)).q
    float var_140_1 = zmm8_1
    var_138:4.d = zmm10.d
    var_130.d = zmm9_1
    var_118:4.b = (rcx_19 * 2) | (var_118:4.b & 0xfc)
    var_270.q = &var_250
    var_278.b = r15
    sub_140db3db0(arg6, rsi_4, &var_148, &var_218, var_278.b, var_270, &var_230)
    int64_t* rbx_4 = var_218:8.q
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp9_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

zmm5_1 = *arg8
zmm4_1 = *(arg8 + 4)
zmm0_1.d = zmm5_1.d f* *(arg1 + 0xb0)
uint32_t rcx_23 = zx.d(*(arg1 + 0xf0))
zmm1_1.d = zmm4_1.d f* *(arg1 + 0xb4)
int64_t* rbx_5 = *arg4
zmm3_1 = *(arg8 + 8)
zmm2_1 = *(arg8 + 0xc)
var_230 = zmm0_1.d
zmm0_1.d = zmm3_1.d f* *(arg1 + 0xb8)
int32_t var_22c_2 = zmm1_1.d
zmm1_1.d = zmm2_1.d f* *(arg1 + 0xbc)
int32_t var_228_2 = zmm0_1.d
int32_t var_224_2 = zmm1_1.d
int32_t* r14_1

if (rcx_23 == 0)
    r14_1 = arg1 + 0xe0
else if (rcx_23 == 1)
    r14_1 = *(arg1 + 0xf8)
else if (rcx_23 == 3)
    r14_1 = &arg8[2]
else
    r14_1 = &arg8[1]

zmm2_1.d = zmm2_1.d f* r14_1[3]
zmm3_1.d = zmm3_1.d f* r14_1[2]
zmm4_1.d = zmm4_1.d f* r14_1[1]
zmm5_1.d = zmm5_1.d f* *r14_1
int32_t var_23c_2 = zmm4_1.d
int32_t var_238_2 = zmm3_1.d
var_240 = zmm5_1.d
int32_t var_234_2 = zmm2_1.d
int32_t* rax_44 = (*(*rbx_5 + 0x38))(rbx_5, &var_1f8)
zmm11.d = zmm11.d f+ *rax_44
zmm12.d = zmm12.d f+ rax_44[1]
zmm11.d = zmm11.d f* zmm14.d
zmm12.d = zmm12.d f* zmm14.d
float* rax_46 = (*(*rbx_5 + 0x18))(rbx_5, &var_220)
zmm8_1 = *(arg5 + 8)
int32_t zmm4_3 = *(arg5 + 0x24)
zmm2_1 = *(arg5 + 0x1c)
zmm3_1 = *(arg5 + 0x28)
zmm1_1 = *(arg5 + 0x20)
zmm7_1 = zmm11.d
zmm6_1 = zmm12.d
char rdx_13 = *(arg5 + 0x34) & 1
zmm0_1.d = zmm12.d f* zmm4_3
uint128_t zmm5_3
zmm5_3.d = zmm11.d f* zmm2_1.d
zmm9_1 = zmm14.d * *rax_46
zmm14.d = zmm14.d f* rax_46[1]
zmm5_3.d = zmm5_3.d f+ zmm0_1.d
zmm11.d = zmm11.d f* zmm1_1.d
zmm12.d = zmm12.d f* zmm3_1.d
int128_t* var_268_2 = &var_230
zmm5_3.d = zmm5_3.d f+ *(arg5 + 0x2c)
var_250 = zmm2_1.d
int32_t var_24c_2 = zmm1_1.d
zmm11.d = zmm11.d f+ zmm12.d
int32_t var_248_2 = zmm4_3
int32_t var_244_2 = zmm3_1.d
var_118:4.b = (rdx_13 * 2) | (var_118:4.b & 0xfc)
zmm11.d = zmm11.d f+ *(arg5 + 0x30)
var_130:4.o = var_250.o
var_270.q = &var_240
var_13c.q = 0
var_278.b = r15
var_128:0xc.q = (_mm_unpacklo_ps(zmm5_3, zmm11.q)).q
float var_140_2 = zmm8_1
var_138:4.d = zmm9_1
var_148.d = zmm7_1 * zmm8_1 f+ *(arg5 + 0xc)
var_130.d = zmm14.d
var_148:4.d = zmm6_1 * zmm8_1 f+ *(arg5 + 0x10)
sub_140db3db0(arg6, rsi_4 + 1, &var_148, &var_1e8, var_278.b, var_270, var_268_2)
int64_t* rbx_6 = var_1e8:8.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp5_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* var_1c8

if (var_1c8 != 0)
    var_1c8[1].d -= 1
    
    if (var_1c8[1].d == 1)
        (**var_1c8)(var_1c8)
        int32_t temp6_1 = *(var_1c8 + 0xc)
        *(var_1c8 + 0xc) -= 1
        
        if (temp6_1 == 1)
            int64_t r8_6 = *var_1c8
            (*(r8_6 + 8))(var_1c8, 1, r8_6)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rsi_4 + 1)
