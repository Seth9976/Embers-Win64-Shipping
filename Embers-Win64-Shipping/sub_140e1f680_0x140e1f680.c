// 函数: sub_140e1f680
// 地址: 0x140e1f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t r12 = 0
int32_t* r14 = arg3
int64_t* rdi = arg1[2]
int64_t* rcx = nullptr

if (rdi != 0)
    int32_t rax_2 = rdi[1].d
    
    if (rax_2 != 0)
        rdi[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        rcx = arg1[1]

int64_t* var_1c0 = rcx

if (rdi != 0)
    int32_t rax_3 = rdi[1].d
    rdi[1].d = rax_3
    
    if (rax_3 == 0)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

char var_1c7
char var_1c5
char var_1c4
void var_168
sub_140de8ba0(arg1, &var_168, r14, arg4, &var_1c5, &var_1c4, &var_1c7)
bool cond:0 = (*(arg1 + 0x2e) & 8) == 0
float zmm4[0x4] = arg2[1].d
float zmm7[0x4] = *(r14 + 0x10)
float zmm0[0x4] = *arg7
float zmm2[0x4] = arg7[1]
int128_t zmm3 = arg7[2]
int128_t zmm5 = *(arg2 + 0x14)
float var_f8[0x4] = zmm0
float zmm1[0x4] = var_f8
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
temp0[0] = temp0[0] f* arg1[0x38].d
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
temp0_1[0] = temp0[0]
zmm0 = *r14
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
float var_b0[0x4] = zmm0
float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
zmm4[0] = zmm4[0] + temp0_3[0]
var_f8 = temp0_2
float var_128[0x4] = temp0_2
zmm1 = zx.o(*(r14 + 0x30))
int64_t var_80 = zmm1.q
int128_t var_108 = zmm3
var_b0[3] = zmm4[0]
zmm3.d = zmm5.d f+ zmm7[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
zmm5.d = zmm5.d f+ zmm1[0]
float var_118[0x4] = zmm2
zmm2 = *(r14 + 0x20)
zmm7[0] = zmm3.d
temp0_4[0] = zmm2[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm4[0] = zmm4[0] + temp0_5[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0_6[0] = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_9[0] = zmm1[0]
float temp0_10[0x4] = _mm_unpacklo_ps(zmm4, zmm5.q)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
int64_t* var_1a0 = temp0_11[0].q
float var_a0[0x4] = temp0_11
zmm2[3].q = temp0_10.q
int64_t* rsi_1

if (cond:0)
    rsi_1 = var_1c0
else
    rsi_1 = var_1c0
    int32_t rdi_1 = 0
    float zmm6[0x4] = *(arg2 + 0x28)
    int64_t* rcx_4 = rsi_1
    zmm7 = zx.o(arg2[2].q)
    var_1a0 = rcx_4
    int32_t rax_6 = rsi_1[0x2e].d
    bool cond:2_1 = rax_6 != 0
    
    if (rax_6 s> 0)
        int128_t** r14_1 = nullptr
        int32_t rax_9
        
        do
            zmm1 = zmm7
            char rax_8
            rax_8, zmm6, zmm7 = sub_140d9f790(*(r14_1 + rsi_1[0x2d]), zmm1, zmm6)
            
            if (rax_8 == 1)
                rdi_1 += 1
                r14_1 = &r14_1[2]
            else if (rdi_1 s>= 0 && rdi_1 s< rsi_1[0x2e].d)
                void* rcx_6 = data_143e20d08
                
                if (rcx_6 != 0)
                    sub_140dc00e0(rcx_6, (sx.q(rdi_1) << 4) + rsi_1[0x2d])
                
                sub_140dbae50(&rsi_1[0x2d], rdi_1, 1, 1)
            
            rax_9 = rsi_1[0x2e].d
        while (rdi_1 s< rax_9)
        
        rsi_1 = var_1c0
        cond:2_1 = rax_9 != 0
        r14 = arg3
        rcx_4 = var_1a0
    
    if (not(cond:2_1))
        *(rcx_4 + 0x2e) &= 0xf7
        
        if (sub_140db3510(&rcx_4[3]) != 0)
            sub_140dc03a0(&rcx_4[3], *(var_1a0 + 0x2e))
        
        rsi_1 = var_1c0

if ((*(arg1 + 0x2e) & 4) != 0)
    (*(*rsi_1 + 8))(rsi_1, zmm1, zx.o(arg2[2].q), *(arg2 + 0x28))

char rax_13 = *(arg2 + 0x2c) & 1
char var_1c8
bool cond:3_1

if (rax_13 != 0)
    if (arg1[0x37].d != 0)
        int64_t* rcx_11 = arg1[0x36]
        
        if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
            int64_t* rcx_12
            
            if (arg1[0x37].d == 0)
                rcx_12 = nullptr
            else
                rcx_12 = arg1[0x36]
            
            (*(*rcx_12 + 0x48))(rcx_12, &var_1c8)
            arg1[0x35].b = var_1c8
    
    cond:3_1 = (arg1[0x35].b & 0x10) != 0
    var_1c8 = 1

if (rax_13 == 0 || not(cond:3_1))
    var_1c8 = 0

void* rcx_13 = *(arg2 + 0x18)

if (rcx_13 != 0)
    int64_t* rdi_3 = *(rcx_13 + 0x10)
    int64_t rdx_7 = 0
    
    if (rdi_3 != 0)
        int32_t rax_18 = rdi_3[1].d
        
        if (rax_18 != 0)
            rdi_3[1].d = rax_18 + 1
            rax_18.b = 1
        
        if (rax_18.b == 0)
            rdi_3 = nullptr
        
        if (rdi_3 != 0)
            rdx_7 = *(rcx_13 + 8)
    
    arg1[6] = rdx_7
    int64_t* rcx_14 = arg1[7]
    
    if (rdi_3 != rcx_14)
        if (rdi_3 != 0)
            *(rdi_3 + 0xc) += 1
            rcx_14 = arg1[7]
        
        if (rcx_14 != 0)
            int32_t temp5_1 = *(rcx_14 + 0xc)
            *(rcx_14 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rcx_14 + 8))(rcx_14, 1)
        
        arg1[7] = rdi_3
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp4_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rax_22 = sub_140da4470(arg5, &var_f8)

if (rax_22 != &arg1[8])
    if (arg1[0x10].b != 0)
        arg1[0x10].b = 0
        
        if (*(arg1 + 0x74) != 0)
            *(arg1 + 0x74) = 0
        
        int64_t rcx_18 = arg1[8]
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
    
    if (rax_22[8].b != 0)
        sub_140d92d60(&arg1[8], rax_22)
        arg1[0x10].b = 1

char var_c4
char var_b8

if (var_b8 != 0)
    int64_t rcx_20 = var_f8[0].q
    char var_b8_1 = 0
    var_c4 = 0
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

*(arg1 + 0x152) &= 0xfe
arg1[0x29].d = arg6
*(arg1 + 0x152) = ((*(arg1 + 0x152) | arg8) & 0xfd) | (rax_13 * 2)
sub_140d96150(&arg1[0x11], r14)
sub_140d96150(&arg1[0x18], &var_b0)
char rdi_5 = var_1c8
*(arg1 + 0x108) = *arg7
*(arg1 + 0x118) = arg7[1]
*(arg1 + 0x128) = arg7[2]
*(arg1 + 0xf8) = *arg4
arg1[0x2a].b = *(*(arg2 + 8) + 0xb8)
*(arg1 + 0x151) = data_143e20cf4
int128_t zmm1_1 = arg2[1]
uint128_t var_158 = *arg2
uint128_t zmm0_1 = arg2[2]
int128_t var_148 = zmm1_1
var_148:8.q = arg1
uint128_t var_138 = zmm0_1
var_138:0xc.b = (_mm_bsrli_si128(zmm0_1, 0xc).b & 0xfe) | rdi_5
sub_140db8860(arg5, arg1, zx.q(arg6), &arg1[0x27])

if (rdi_5 != 0)
    int32_t rax_31 = -1
    
    if (sub_140db3510(&arg1[3]) != 0)
        rax_31 = arg1[4].d
    
    char* var_1e8
    var_1e8.d = rax_31
    sub_140d999f0(*(arg2 + 8), &var_1c0, 0, arg6, var_1e8.d)

char r13_1 = var_1c5

if (r13_1 != 0)
    sub_140d92e00(&var_f8, r14)
    char var_d8
    char var_d8_1 = ((((var_1c4 & 1) * 2) | (var_1c7 & 1)) * 2) | (var_d8 & 0xf9)
    sub_140db8760(arg5, &var_f8)

uint32_t rcx_31 = zx.d(*(arg1 + 0x2d))
char rax_29

if (rcx_31 == 1)
    rax_29 = sub_140da87b0()
else if (rcx_31 == 2)
    rax_29 = 0
else if (rcx_31 == 3)
    rax_29 = 1
else
    rax_29 = data_143e20cf4

var_1c7 = data_143e20cf4
float (* var_1d8_1)[0x4] = &var_128
data_143e20cf4 = rax_29
char* var_1e0
var_1e0.d = arg6
int32_t rax_35 = (*(*arg1 + 0x230))(arg1, &var_158, r14, &var_168, arg5, var_1e0, var_1d8_1, arg8)
int64_t* rdi_6 = var_1c0
int32_t rsi_4 = rax_35
*(rdi_6 + 0x2e) &= 0xef

if (sub_140db3510(&rdi_6[3]) != 0)
    sub_140dc03a0(&rdi_6[3], *(rdi_6 + 0x2e))

if (r13_1 != 0)
    sub_140db7b50(arg5)

if ((arg1[5].b & 2) != 0 && (*(*arg1 + 0x198))(arg1) != 0)
    int64_t* rdi_7 = arg1[2]
    int64_t* r13_2 = data_143e20d08
    
    if (rdi_7 != 0)
        int32_t rax_39 = rdi_7[1].d
        
        if (rax_39 != 0)
            rdi_7[1].d = rax_39 + 1
            rax_39.b = 1
        
        if (rax_39.b == 0)
            rdi_7 = nullptr
        
        if (rdi_7 != 0)
            int32_t rax_40 = rdi_7[1].d
            r12 = arg1[1]
            rdi_7[1].d = rax_40
            
            if (rax_40 == 0)
                (**rdi_7)(rdi_7)
                int32_t temp12_1 = *(rdi_7 + 0xc)
                *(rdi_7 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rdi_7 + 8))(rdi_7, 1)
    
    int64_t var_190 = r12
    int64_t* var_188_1 = rdi_7
    
    if (rdi_7 != 0)
        rdi_7[1].d += 1
    
    char rax_44 = (*(*r13_2 + 0x188))(r13_2, &var_190)
    
    if (rdi_7 != 0)
        rdi_7[1].d -= 1
        
        if (rdi_7[1].d == 1)
            int64_t rdx_19 = *rdi_7
            (*rdx_19)(rdi_7, rdx_19)
            int32_t temp11_1 = *(rdi_7 + 0xc)
            *(rdi_7 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi_7 + 8))(rdi_7, 1)
    
    if (rax_44 != 0)
        void* rax_47 = (*(*arg1 + 0x218))(arg1)
        
        if (rax_47 != 0)
            uint32_t rdx_20 = zx.d(*(rax_47 + 0x30))
            void* r8_3 = rax_47 + 0x20
            
            if (rdx_20 != 0)
                if (rdx_20 == 1)
                    r8_3 = *(r8_3 + 0x18)
                else if (rdx_20 == 3)
                    r8_3 = &arg7[2]
                else
                    r8_3 = &arg7[1]
            
            zmm2 = r14[2]
            char rcx_47 = r14[0xd].b & 1
            var_190.o = *r8_3
            var_f8[3].q = 0
            uint128_t zmm0_2 = r14[3]
            var_f8[1] = r14[4].d
            int128_t zmm1_2 = *r14
            var_f8[0] = zmm0_2.d
            int32_t var_e4_1 = zmm1_2.d
            zmm1_2 = *(r14 + 0x1c)
            char var_c4_1 = (rcx_47 * 2) | (var_c4 & 0xfc)
            int32_t var_e0_1 = r14[1].d
            int128_t* var_1e0_1 = &var_190
            uint64_t var_cc_1 = *(r14 + 0x2c)
            var_f8[2] = zmm2[0]
            int128_t var_dc_1 = zmm1_2
            void* var_1e8_1
            var_1e8_1.b = 0
            sub_140db3600(arg5, rsi_4, &var_f8, rax_47, var_1e8_1.b, var_1e0_1)

void var_178
sub_140db7b70(arg5, &var_178)

if (*(arg5 + 0xd8) != 0)
    rsi_4 = sub_140db54a0(arg5, rsi_4, arg4)

sub_140e278d0(var_1c0, rsi_4, &var_178)
int64_t* var_170

if (var_170 != 0)
    int32_t temp7_1 = *(var_170 + 0xc)
    *(var_170 + 0xc) -= 1
    
    if (temp7_1 == 1)
        (*(*var_170 + 8))(var_170, 1)

data_143e20cf4 = var_1c7

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp9_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rdi + 8))(rdi, 1)

__security_check_cookie(rax_1 ^ &var_208)
return zx.q(rsi_4)
