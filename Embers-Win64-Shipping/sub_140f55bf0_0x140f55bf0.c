// 函数: sub_140f55bf0
// 地址: 0x140f55bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
char rax_4 = (*(*arg1 + 0x1c8))()
void* rax_5
void* rbx

if (rax_4 != 0 || arg1[0xc1].b != rax_4)
    rbx = arg1[0x85]
    rax_5 = arg1[0x87]
else
    rbx = arg1[0x86]
    rax_5 = arg1[0x88]

int64_t* rsi = nullptr
void* var_110 = rax_5

if (arg8 == 0)
    rax_5.b = 0
else
    if (arg1[0x34].d != 0)
        int64_t* rcx = arg1[0x33]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
            int64_t* rcx_1
            
            if (arg1[0x34].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x33]
            
            arg1[0x32].b = (*(*rcx_1 + 0x48))(rcx_1).b
    
    if (arg1[0x32].b == 0)
        rax_5.b = 0
    else
        rax_5.b = 1

uint32_t rcx_2 = zx.d(*(rbx + 0x30))
void* rdx = rbx + 0x20
char var_138 = rax_5.b
char r8 = (rax_5.b ^ 1) << 5

if (rcx_2 != 0)
    if (rcx_2 == 1)
        rdx = *(rdx + 0x18)
    else if (rcx_2 == 3)
        rdx = &arg7[2]
    else
        rdx = &arg7[1]

float zmm2[0x4] = *rdx
char rcx_4 = (*arg3)[0xd].b
zmm2[0] = zmm2[0] f* *arg7
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
temp0_2[0] = temp0_2[0] f* *(arg7 + 4)
float var_128 = zmm2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0_3[0] = temp0_3[0] f* *(arg7 + 8)
int128_t* var_150 = &var_128
float var_124 = temp0_2[0]
float zmm1[0x4] = (*arg3)[3]
float var_120 = temp0_3[0]
float zmm0[0x4] = arg3[1][0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
temp0_4[0] = temp0_4[0] f* *(arg7 + 0xc)
float var_ec = zmm0[0]
zmm0 = *arg3
float var_f0 = zmm1[0]
float var_dc = zmm0[0]
int64_t var_e4 = 0
float var_11c = temp0_4[0]
float var_d8 = (*arg3)[1][0]
float var_d4[0x4] = *(arg3 + 0x1c)
float var_e8 = (*arg3)[2][0]
int64_t var_c4 = *(arg3 + 0x2c)
double zmm0_1[0x2]
double zmm6[0x2]
zmm0_1, zmm6 = sub_140db3600(arg5, arg6, &var_f0, rbx, r8, var_150)
int32_t result_1 = arg6 + 1

if (arg1[0x83].b == 0)
    double var_58_1[0x2] = zmm6
    
    if (arg1[0x74].d != 0)
        int64_t* rcx_6 = arg1[0x73]
        
        if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
            int64_t* rcx_7
            
            if (arg1[0x74].d == 0)
                rcx_7 = nullptr
            else
                rcx_7 = arg1[0x73]
            
            (*(*rcx_7 + 0x48))(rcx_7)
            arg1[0x72].d = zmm0_1[0].d
    
    zmm6 = _mm_cvtps_pd(arg1[0x72].d[0])
    
    if (arg1[0x8c].d != 0)
        int64_t* rcx_8 = arg1[0x8b]
        
        if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
            int64_t* rcx_9
            
            if (arg1[0x8c].d == 0)
                rcx_9 = nullptr
            else
                rcx_9 = arg1[0x8b]
            
            (*(*rcx_9 + 0x48))(rcx_9)
            arg1[0x8a].d = zmm0_1[0].d
    
    zmm0_1 = arg1[0x8a].d
    
    if (not(zmm0_1[0].d f== 0f))
        zmm6 = sub_140f61a50(zmm6, _mm_cvtps_pd(zmm0_1[0]))
    
    float zmm10[0x4] = 0x7f7fffff
    int32_t var_134_1 = 0x7f7fffff
    int32_t* rax_15 = sub_140f466a0(&arg1[0xa5])
    int128_t zmm7
    
    if (rax_15[1].b == 0)
        zmm7 = 0x7f7fffff
    else
        zmm7 = *rax_15
    
    double zmm9[0x2] = 0xff7fffff
    int32_t var_134_2 = 0xff7fffff
    int32_t* rax_16 = sub_140f466a0(&arg1[0xa1])
    double zmm0_3[0x2]
    
    if (rax_16[1].b == 0)
        zmm0_3 = 0xff7fffff
    else
        zmm0_3 = *rax_16
    
    double zmm1_1[0x2] = 0x3fe0000000000000
    float zmm2_1[0x4] = _mm_cvtps_pd(zmm0_3[0])
    zmm6[0] = zmm6[0] * zmm1_1[0]
    zmm2_1[0].q = zmm2_1[0].q f* zmm1_1[0]
    double temp0_8[0x2] = _mm_cvtps_pd(zmm7.q)
    zmm6[0] = zmm6[0] f- zmm2_1[0].q
    temp0_8[0] = temp0_8[0] * zmm1_1[0]
    zmm1_1 = zx.o(0)
    temp0_8[0] = temp0_8[0] f- zmm2_1[0].q
    zmm6[0] = zmm6[0] / temp0_8[0]
    
    if (not(zmm6[0] < 0.0))
        zmm1_1 = __minsd_xmmsd_memsd(zmm6[0], 0x3ff0000000000000)
    
    zmm6 = zx.o(0)
    zmm6[0].d = fconvert.s(zmm1_1[0])
    
    if (arg1[0x95].d != 0)
        int64_t* rcx_12 = arg1[0x94]
        
        if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
            int64_t* rcx_13
            
            if (arg1[0x95].d == 0)
                rcx_13 = nullptr
            else
                rcx_13 = arg1[0x94]
            
            (*(*rcx_13 + 0x48))(rcx_13)
            arg1[0x93].d = temp0_8[0].d
    
    float zmm11[0x4] = arg1[0x93].d
    
    if (not(zmm11[0] == 1f))
        int128_t zmm8
        int128_t var_78_1 = zmm8
        
        if (*(arg1 + 0x4b4) == 0)
        label_140f560ba:
            zmm0_3 = 0x3f800000
            zmm0_3[0].d = 1f f- zmm6[0].d
            zmm6 = 0x3f800000
            zmm6[0].d = 1f f- powf(zmm0_3[0].d, zmm11[0].d)[0].d
        else
            int32_t var_134_3 = 0xff7fffff
            int32_t* rax_20
            rax_20, zmm0_3 = sub_140f466a0(&arg1[0xa1])
            
            if (rax_20[1].b == 0)
                zmm8 = 0xff7fffff
            else
                zmm8 = *rax_20
            
            if (zmm8.d f>= *sub_140eff5d0(&arg1[0x96], zmm0_3[0].d))
                goto label_140f560ba
            
            int32_t var_134_4 = 0x7f7fffff
            int32_t* rax_22
            rax_22, zmm0_3 = sub_140f466a0(&arg1[0xa5])
            
            if (rax_22[1].b == 0)
                zmm8 = 0x7f7fffff
            else
                zmm8 = *rax_22
            
            if (zmm8.d f<= *sub_140eff5d0(&arg1[0x96], zmm0_3[0].d))
                goto label_140f560ba
            
            int32_t var_134_5 = 0x7f7fffff
            int32_t* rax_24 = sub_140f466a0(&arg1[0xa5])
            
            if (rax_24[1].b != 0)
                zmm10 = *rax_24
            
            int32_t var_134_6 = 0xff7fffff
            int32_t* rax_25
            double zmm0_4
            rax_25, zmm0_4 = sub_140f466a0(&arg1[0xa1])
            
            if (rax_25[1].b != 0)
                zmm9 = *rax_25
            
            double zmm1_2[0x2] = sub_140f45890(_mm_cvtps_pd(*sub_140eff5d0(&arg1[0x96], zmm0_4.d)), 
                zmm9[0], zmm10[0])
            zmm6 = sub_140f61ad0(zmm6[0].d, zmm1_2, zmm11)
    
    zmm6[0].d = zmm6[0].d f* *arg3
    char* rbx_3 = arg1[0x7f] + 0x1a8
    zmm7 = (*arg3)[1]
    
    if (*(rbx_3 + 0x10) != 0)
        int64_t* rcx_21 = *(rbx_3 + 8)
        
        if (rcx_21 != 0 && (*(*rcx_21 + 0x28))(rcx_21) != 0)
            if (*(rbx_3 + 0x10) != 0)
                rsi = *(rbx_3 + 8)
            
            char var_137
            (*(*rsi + 0x48))(rsi, &var_137)
            *rbx_3 = var_137
    
    if (*rbx_3 != data_1439ae51c)
        void* r9_1 = var_110
        uint32_t rcx_23 = zx.d(*(r9_1 + 0x30))
        void* rdx_3 = r9_1 + 0x20
        
        if (rcx_23 != 0)
            if (rcx_23 == 1)
                rdx_3 = *(rdx_3 + 0x18)
            else if (rcx_23 == 3)
                rdx_3 = &arg7[2]
            else
                rdx_3 = &arg7[1]
        
        zmm2_1 = *rdx_3
        int64_t zmm5_1 = arg3[3][0]
        zmm0_3 = zmm2_1
        zmm0_3[0].d = zmm0_3[0].d f* *arg7
        char rcx_25 = (*arg3)[0xd].b & 1
        float zmm3_1 = arg3[1][0]
        float zmm4_1 = (*arg3)[2]
        var_110.d = zmm0_3[0].d
        zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        zmm1_1[0].d = zmm1_1[0].d f* *(arg7 + 4)
        var_150 = &var_110
        zmm0_3 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
        zmm0_3[0].d = zmm0_3[0].d f* *(arg7 + 8)
        char var_bc
        char var_bc_2 = (rcx_25 * 2) | ((((rcx_4 & 1) * 2) | (var_bc & 0xfc)) & 0xfc)
        float temp0_13[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
        temp0_13[0] = temp0_13[0] f* *(arg7 + 0xc)
        int64_t var_e4_1 = 0
        int32_t var_108_1 = zmm0_3[0].d
        zmm0_3 = *(arg3 + 0x1c)
        float var_104_1 = temp0_13[0]
        zmm2_1 = (*arg3)[3]
        var_128.o = zmm0_3
        double var_d4_1[0x2] = zmm0_3
        int64_t var_c4_1 = (_mm_unpacklo_ps((*arg3)[0xb], zmm5_1)).q
        var_110:4.d = zmm1_1[0].d
        var_f0 = zmm2_1[0]
        float var_ec_1 = zmm3_1
        float var_e8_1 = zmm4_1
        int32_t var_dc_1 = zmm6[0].d
        int32_t var_d8_1 = zmm7.d
        sub_140db3600(arg5, result_1, &var_f0, r9_1, r8, var_150)

var_150.d = result_1
char var_158
var_158.q = arg5
int32_t result = sub_140e1e7e0(arg1, arg2, arg3, arg4, var_158, var_150.d, arg7, var_138)

if (result_1 s>= result)
    result = result_1

__security_check_cookie(rax_1 ^ &var_178)
return result
