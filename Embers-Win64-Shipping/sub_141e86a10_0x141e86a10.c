// 函数: sub_141e86a10
// 地址: 0x141e86a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t r12 = sx.q(arg3)
int32_t var_164 = 0xffffffff

if (arg2 != 0)
    char rax_2 = *(arg1 + 0x358)
    int32_t rdx = *(arg2 + 0xc)
    var_164 = rdx
    
    if ((rax_2 & 0x20) == 0)
        int64_t* rsi_1 = *(arg1 + 0x70)
        void* r15_3 = &rsi_1[sx.q(*(arg1 + 0x78)) * 2]
        
        if (rsi_1 != r15_3)
            do
                int64_t* rbx_1 = rsi_1[1]
                int64_t* rcx = *rsi_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                (*(*rcx + 0x10))(rcx, arg1, arg2)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_7 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_7 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                rsi_1 = &rsi_1[2]
            while (rsi_1 != r15_3)
            
            rax_2 = *(arg1 + 0x358)
        
        *(arg1 + 0x358) = rax_2 | 0x20
    else if (r12.d s< *(arg1 + 0x138) && *(r12 * 0xc0 + *(arg1 + 0x130) + 0x74) != rdx)
        int64_t* i = *(arg1 + 0x70)
        
        for (void* r15_6 = &i[sx.q(*(arg1 + 0x78)) * 2]; i != r15_6; i = &i[2])
            int64_t* rbx_2 = i[1]
            int64_t* rcx_5 = *i
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            (*(*rcx_5 + 0x20))(rcx_5, arg1, arg2)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_14 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_14 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)

int128_t* var_160
var_160.d = 0x7f800000
uint32_t zmm2[0x4] = *arg4
uint32_t zmm4[0x4] = arg4[1]
uint32_t zmm1[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm2, data_142d3f760), data_142d3f760, 0)
uint32_t zmm3[0x4] = arg4[2]
uint32_t temp0_7 = _mm_movemask_ps(zmm1)
uint32_t var_c8[0x4] = zmm2
float var_b8[0x4] = zmm4
uint32_t var_a8[0x4] = zmm3

if (temp0_7 != 0)
label_141e86c64:
    zmm2 = data_143dbb0c0
    float zmm0[0x4] = data_143dbb0d0
    zmm1 = data_143dbb0e0
    var_c8 = zmm2
    var_b8 = zmm0
    var_a8 = zmm1
else
    var_160.d = 0x7f800000
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm4, data_142d3f760), 
            data_142d3f760, 0)) != 0)
        goto label_141e86c64
    
    var_160.d = 0x7f800000
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm3, data_142d3f760), 
            data_142d3f760, 0)) != 0)
        goto label_141e86c64
    
    zmm1 = _mm_mul_ps(zmm2, zmm2)
    zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
    float temp0_18[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
    zmm1 = _mm_sub_ps(data_143f39c10, temp0_18)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(data_143f39d20, __andps_xmmxud_memxud(zmm1, data_143f39d30), 
            1)) != 0)
        goto label_141e86c64

int32_t rax_20 = *(arg1 + 0x88)

if (r12.d s>= rax_20)
    sub_141e73300(arg1 + 0x80, r12.d - rax_20 + 1)
    zmm2 = var_c8

int128_t zmm9 = arg5
uint32_t (* rax_23)[0x4] = (r12 << 6) + *(arg1 + 0x80)
*rax_23 = zmm2
rax_23[1] = var_b8
rax_23[2] = var_a8

if (arg2 != 0)
    int64_t* i_1 = *(arg1 + 0x70)
    
    for (void* r15_9 = &i_1[sx.q(*(arg1 + 0x78)) * 2]; i_1 != r15_9; i_1 = &i_1[2])
        int64_t* rbx_3 = i_1[1]
        int64_t* rcx_10 = *i_1
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        (*(*rcx_10 + 0x18))(rcx_10, arg2, zx.q(r12.d), &var_c8, zmm9.d)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_27 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_27 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)

uint32_t zmm6[0x4] = var_c8
int32_t var_150 = var_164
int32_t var_14c = r12.d
void*** rax_30 = sub_140a82f30(0x60, 0x10)
*(rax_30 + 0x10) = arg1.o
*(rax_30 + 0x20) = zmm6
*rax_30 = &data_143251868
*(rax_30 + 0x30) = var_b8
*(rax_30 + 0x40) = var_a8
int128_t zmm0_1
zmm0_1.d = zmm9.d
*(rax_30 + 0x50) = zmm0_1
void*** var_f8 = rax_30
int64_t (* var_108)(int64_t* arg1)
int64_t (* rax_31)(int64_t* arg1) = var_108

if (rax_30 != -0x10)
    rax_31 = j_sub_141e72880

var_108 = rax_31
char var_168
int64_t* result = sub_141e85cb0(&var_108, var_168)
__security_check_cookie(rax_1 ^ &var_198)
return result
