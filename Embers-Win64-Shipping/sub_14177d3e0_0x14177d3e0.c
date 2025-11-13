// 函数: sub_14177d3e0
// 地址: 0x14177d3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x80)
int64_t* r14 = nullptr
int64_t r10 = sx.q(arg4)
void* rdx = nullptr
float (* rbp_1)[0x4] = r10 * 0x1a0 + *(arg1 + 0x180)
int64_t r10_1 = r10 << 4
void* r12 = &data_1439b8e08
int64_t* r9 = nullptr
float* r15_2 = r10 * 0xc0 + *(arg1 + 0x60)
void* rax = *(r10_1 + r8)

if (*(rax + 0xc) u>= 2)
    rdx = rax

void* const rax_2 = nullptr
int64_t* rbx = *((zx.q((sbb.q(arg1, arg1, rdx != 0)).d) & 8) + r10_1 + r8)

if (rdx == 0)
    rax_2 = 8

int64_t* rdi = *(rax_2 + r10_1 + r8)
char r8_1 = *(rdi + 0xc)

if (r8_1 u>= 1)
    r9 = rdi

int64_t* arg_8

if (r9 == 0)
    arg_8 = &data_1439b8e08
else
    int64_t* rcx_3 = nullptr
    
    if (r8_1 u>= 1)
        rcx_3 = rdi
    
    arg_8 = *(*rcx_3 + 0x1d0) + sx.q(rcx_3[1].d) * 0xc

int64_t* var_e8

if (r9 == 0)
    var_e8 = &data_1439b8e08
else
    int64_t* rcx_5 = nullptr
    
    if (r8_1 u>= 1)
        rcx_5 = rdi
    
    var_e8 = *(*rcx_5 + 0x1b8) + sx.q(rcx_5[1].d) * 0xc

char r9_1 = *(rbx + 0xc)
int64_t* r8_2 = nullptr

if (r9_1 u>= 1)
    r8_2 = rbx

int64_t* var_f8

if (r8_2 == 0)
    var_f8 = &data_1439b8e08
else
    int64_t* rcx_7 = nullptr
    
    if (r9_1 u>= 1)
        rcx_7 = rbx
    
    var_f8 = *(*rcx_7 + 0x1d0) + sx.q(rcx_7[1].d) * 0xc

if (r8_2 != 0)
    int64_t* rcx_9 = nullptr
    
    if (r9_1 u>= 1)
        rcx_9 = rbx
    
    r12 = *(*rcx_9 + 0x1b8) + sx.q(rcx_9[1].d) * 0xc

float var_a8[0x4]
float (* rax_15)[0x4] = sub_14175df90(&var_a8, rdi)
int32_t var_c8
int32_t* rax_16 = sub_14175dbf0(&var_c8, rdi)
float var_98[0x4]
float (* rax_17)[0x4] = sub_14175df90(&var_98, rbx)
int32_t var_bc[0x5]
int32_t* rax_18
int64_t rdx_9
int512_t zmm1
int128_t zmm10_1
rax_18, rdx_9, zmm1, zmm10_1 = sub_14175dbf0(&var_bc, rbx)
zmm1.o = zmm10_1
double zmm2_1[0x4]
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10_2
zmm2_1, zmm6, zmm7, zmm8, zmm9, zmm10_2 =
    sub_141781460(rbp_1, rdx_9, rax_18, rax_17, r12, var_f8, rax_16, rax_15, var_e8, arg_8)
int32_t rbx_2 = 0
*arg2 = 0

if (arg5 s> 0)
    int128_t var_48_1 = zmm6
    int128_t var_58_1 = zmm7
    zmm7 = zx.o(0)
    int128_t var_68_1 = zmm8
    int128_t var_78_1 = zmm9
    
    do
        int32_t rax_22
        int32_t rcx_18
        
        if ((*(arg1 + 0x2c)).d f> zmm7.d)
            if (r15_2[0xe].b == 0)
                goto label_14177d6a8
            
            rax_22 = 0
            rcx_18 = 1
        else if (r15_2[1].d f<= zmm7.d || r15_2[0xe].b != 0)
            rax_22 = 0
            rcx_18 = 1
        else
        label_14177d6a8:
            var_e8.d = (*rbp_1)[0x23] - rbp_1[8][0]
            var_e8:4.d = rbp_1[9][0] - (*rbp_1)[0x21]
            float var_e0_1 = (*rbp_1)[0x25] - (*rbp_1)[0x22]
            double zmm3_1[0x4]
            zmm2_1, zmm3_1, zmm6, zmm7, zmm8, zmm9 =
                sub_141778c10(&var_f8, r15_2, &rbp_1[0xa], &var_e8)
            float zmm0_1 = var_f8:4.d
            zmm2_1[0].o = var_f8.d
            zmm2_1[0].d = zmm2_1[0].d f* zmm2_1[0].d
            zmm2_1[0].d = zmm2_1[0].d f+ zmm0_1 * zmm0_1
            zmm0_1 = (*rbp_1)[0x63] f+ zmm9.d
            float var_f0
            zmm2_1[0].d = zmm2_1[0].d f+ var_f0 * var_f0
            zmm2_1[0].o = _mm_sqrt_ss(zmm2_1[0].d, zmm2_1[0].d)
            
            if (zmm2_1[0].d f<= zmm0_1)
                rax_22 = 0
                rcx_18 = 1
            else
                zmm0_1 = *(arg1 + 0x34)
                zmm3_1[0].o = zmm8
                zmm3_1[0].d = zmm3_1[0].d f- zmm6.d
                zmm3_1[0].o = _mm_max_ss(zmm3_1[0].d, zmm7.d)
                
                if (not(zmm0_1 f> zmm7.d))
                    zmm0_1 = *r15_2
                
                void* var_128
                var_128.d = zmm0_1
                zmm2_1, zmm7, zmm10_2 = sub_140038f00(rbp_1, &var_f8, zmm2_1, zmm3_1, var_128.d)
                rax_22 = 1
                rcx_18 = 0
        
        int64_t* arg_10
        arg_10.d = rax_22
        arg_10:4.d = rcx_18
        *arg2 = arg_10
        
        if (arg_10.d == 0 && data_1439b8de8 != 0)
            break
        
        rbx_2 += 1
    while (rbx_2 s< arg5)

int64_t* rdx_12 = nullptr
zmm2_1[0].o = zmm10_2

if (*(rbx + 0xc) u>= 2)
    rdx_12 = rbx

int512_t zmm2_2
int128_t zmm10_3
zmm2_2, zmm10_3 = sub_141782130(arg1, rdx_12, &rbp_1[0xe], &rbp_1[0xc], &rbp_1[0xe], &rbp_1[0x10], 
    &(*rbp_1)[0x46])
zmm2_2.o = zmm10_3

if (*(rdi + 0xc) u>= 2)
    r14 = rdi

sub_141782130(arg1, r14, &rbp_1[0xf], &(*rbp_1)[0x33], &rbp_1[0xf], &(*rbp_1)[0x43], 
    &(*rbp_1)[0x49])
return arg2
