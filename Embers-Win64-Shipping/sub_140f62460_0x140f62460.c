// 函数: sub_140f62460
// 地址: 0x140f62460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
float zmm9[0x4] = arg4
float zmm0[0x4] = sub_140d96150(arg1 + 0x434, arg2)

if ((*(arg1 + 0x4cd) & 1) != 0)
    int64_t* rcx_1 = data_143e29f28
    (*(*rcx_1 + 0x50))(rcx_1)
    zmm0[0].q = zmm0[0].q f- arg1[0x98]
    
    if (not(zmm0[0].q f<= 0.10000000000000001))
        Dbg1::Reset(&arg1[0x7a])

float var_e8[0x4]

if (arg1[0x8e] != 0)
    void* rax_3 = arg1[0x90]
    void* rcx_3 = &arg1[0x92]
    
    if (rax_3 != 0)
        rcx_3 = rax_3
    
    var_e8 = *arg2
    int64_t rax_4 = *rcx_3
    uint128_t zmm1_1 = zx.o(arg2[3].q)
    float var_c8[0x4] = arg2[2]
    uint64_t var_b8_1 = zmm1_1.q
    arg1[0x8e]((*(rax_4 + 8))(rcx_3, zmm1_1), &var_e8)
    var_e8[0].q = 0
    
    if (&arg1[0x8e] != &var_e8)
        float zmm5_1[0x4] = *(arg1 + 0x470)
        int64_t zmm2 = (*(arg1 + 0x480)).q
        arg4 = *(arg1 + 0x490)
        int128_t zmm4_1 = *(arg1 + 0x4a0)
        zmm0 = var_e8
        int64_t rax_6 = zmm5_1[0].q
        var_e8 = zmm5_1
        *(arg1 + 0x470) = zmm0
        zmm0 = var_c8
        *(arg1 + 0x480) = 0
        *(arg1 + 0x490) = zmm0
        *(arg1 + 0x4a0) = var_b8_1.o
        var_c8 = arg4
        var_b8_1.o = zmm4_1
        
        if (rax_6 != 0)
            int64_t rcx_5 = &var_c8
            
            if (zmm2 != 0)
                rcx_5 = zmm2
            
            (*(*rcx_5 + 0x10))(rcx_5)

int64_t* rdi_1 = arg1[0x74]

if (rdi_1 != 0)
    rdi_1[1].d += 1

int64_t var_108 = arg1[0x73]
int64_t* var_100 = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

float var_a8
sub_140e10810(arg1, &var_a8, arg2, &var_108)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rax_12 = sub_140e13cf0(arg1[0x73], &var_108)
int32_t rcx_10 = arg1[0x83].d
float zmm0_1 = *(rax_12 + 4)

if (rcx_10 != 1)
    zmm0_1 = *rax_12

char rax_13 = *(arg1 + 0x4cc)
float zmm6[0x4] = zx.o(0)

if ((rax_13 & 0x20) != 0)
    float zmm1_2
    float var_a4
    
    zmm1_2 = rcx_10 != 1 ? var_a8 : var_a4
    *(arg1 + 0x4cc) = rax_13 & 0xdf
    arg1[0x72].d = _mm_max_ss(zmm0_1 - zmm1_2, 0)

float zmm0_2[0x4] = sub_140f489f0(arg1)
int64_t* rdi_2 = arg1[0x74]
float zmm8[0x4] = zmm0_2

if (rdi_2 != 0)
    rdi_2[1].d += 1

int64_t var_f8 = arg1[0x73]
int64_t* var_f0 = rdi_2

if (rdi_2 != 0)
    rdi_2[1].d += 1

sub_140e10810(arg1, &var_e8, arg1 + 0x434, &var_f8)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp3_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rax_17 = sub_140e13cf0(arg1[0x73], &var_108)
uint32_t zmm7[0x4] = *(rax_17 + 4)

if (arg1[0x83].d != 1)
    zmm7 = *rax_17

float zmm0_3[0x4] = sub_140f489f0(arg1)
float zmm1_3[0x4] = arg1[0x72].d
float zmm2_1[0x4] = 0x3f800000
zmm1_3[0] = zmm1_3[0] f/ zmm7[0]
zmm2_1[0] = 1f - zmm0_3[0]

if (not(zmm1_3[0] < 0f))
    zmm6 = _mm_min_ss(zmm1_3[0], zmm2_1[0])

if ((*(arg1 + 0x4cc) & 0x10) != 0)
    zmm6 = sub_140ad6340(*(*(arg1[0x75] + 0x4f8) + 0x2d0), zmm6, zmm9, 0x41700000)

int64_t* rax_19 = sub_140e13cf0(arg1[0x73], &var_108)

if (arg1[0x83].d == 1)
    rax_19 += 4

bool cond:3 = *(arg1 + 0x3f4) != 0
zmm7 = *rax_19
zmm7[0] = zmm7[0] f* zmm6[0]

if (not(cond:3))
    uint32_t zmm0_5[0x4]
    zmm0_5, zmm6, zmm7, zmm8 = sub_140ebf340(&arg1[0x7e], arg2)
    zmm0_5[0] = zmm0_5[0] f+ zmm7[0]
    zmm7 = zmm0_5

char r8_2 = *(arg1 + 0x4cc)
char rcx_21 = 0
void* rdx_7 = arg1[0x73]
zmm7[0] = zmm7[0] f- *(rdx_7 + 0x2a8)

if (__andps_xmmxud_memxud(zmm7, data_142d3f770)[0] f> 0.00100000005f)
    rcx_21 = 8

*(arg1 + 0x4cc) = rcx_21 | (r8_2 & 0xf7)
*(rdx_7 + 0x2a8) = zmm7[0]

if ((r8_2 & 8) != 0 && (*(arg1 + 0x4cc) & 8) == 0)
    rdx_7.b = 1
    sub_140e19ef0(arg1, rdx_7.b)

sub_140f61190(arg1[0x75], zmm6[0], zmm8[0])
void* result = arg1[0x75]
void* rcx_24 = *(result + 0x4f8)

if (not(0.999899983f f> *(rcx_24 + 0x2d4)) && *(rcx_24 + 0x2dc) == 0)
    result = arg1[0x73]
    *(result + 0x2a8) = 0

__security_check_cookie(rax_1 ^ &var_128)
return result
