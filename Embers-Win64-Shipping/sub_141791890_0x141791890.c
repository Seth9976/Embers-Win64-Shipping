// 函数: sub_141791890
// 地址: 0x141791890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
wchar16 const* const var_78 = u"Integrate"
sub_140b19e60()
void** var_70 = &data_1439a8bd0
int64_t var_68 = (zx.o(0)).q
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* result = &var_68
int64_t var_60 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
QueryPerformanceCounter(&performanceCount)
float zmm1 = data_1439b8ea8
void** const var_a8 = &data_142fc7308
int64_t zmm0 = float.d(performanceCount)
void** const var_b0 = &data_142fc9140
int64_t* var_f8 = arg1
void** const var_b8 = &data_142fc9198
float arg_10 = zmm1 * zmm1
void** const arg_20 = &data_142fc7360
int32_t* var_f0 = &arg_18
void** const* i_1 = &var_a8
int40_t var_e0 = &var_b0
void** const* var_d8 = &var_b8
int32_t arg_8
int32_t var_d0 = &arg_8
float* var_c8 = &arg_10
void** const* var_c0 = &arg_20
int64_t var_60_1 = zmm0 f* data_143d796f8 f+ 16777216.0
zmm0 = data_1439b8ea4
zmm0.d = zmm0.d f* zmm0.d
arg_8 = zmm0.d
sub_1417939d0(arg2, &var_f8, 0)
var_f8 = arg2
int64_t* var_f0_1
__builtin_memset(&var_f0_1, 0, 0x15)
var_d8.d = 0
sub_141750820(&var_f8)
void** const* i = i_1
int128_t zmm1_1

if (i != 0)
    int64_t* rsi_1 = var_f0_1
    
    do
        char r8_1 = var_e0:4.b
        void** const** rax_1 = &i_1
        
        if (r8_1 u< 2)
            rax_1 = nullptr
        
        if (rax_1 == 0 || *(sx.q(rax_1[1].d) + (*rax_1)[0x6d]) == 0)
        label_141791ac0:
            int64_t r15_1 = sx.q(var_e0.d)
            int32_t rbx_1 = *(i[0xa] + (r15_1 << 2))
            int128_t* rax_8 = sub_1417ae350(&arg1[0x52], rbx_1)
            int64_t rax_9 = i[0x1f]
            int32_t r8_3 = 0
            int64_t var_84_1 = 0
            int32_t r9_1 = 0
            int32_t r10_1 = 0
            int64_t var_8c_1 = 0
            int32_t r11_1 = 0
            int64_t var_98_1 = i[0x19][r15_1]
            int64_t rcx_11 = r15_1 * 3
            void* rdx_9 = rax_9 + (rcx_11 << 3)
            void* rax_10 = *(rax_9 + (rcx_11 << 3) + 8)
            void* rcx_12 = rdx_9
            
            if (rax_10 != 0)
                rcx_12 = rax_10
            
            void* rdx_10 = rcx_12 + (sx.q(*(rdx_9 + 0x10)) << 3)
            
            if (rcx_12 != rdx_10)
                do
                    int64_t rax_12 = *rcx_12
                    rcx_12 += 8
                    r11_1 |= *rax_12
                    r10_1 |= *(rax_12 + 4)
                    r9_1 |= *(rax_12 + 8)
                    r8_3 |= *(rax_12 + 0xc)
                while (rcx_12 != rdx_10)
                
                var_84_1:4.d = r8_3
                var_84_1.d = r9_1
                var_8c_1:4.d = r10_1
                var_8c_1.d = r11_1
            
            char var_7c_1 = 1
            zmm1_1 = (*(i[0xa] + (r15_1 << 2))).o
            *rax_8 = i[0x1c][r15_1].o
            rax_8[1] = zmm1_1
            rax_8[2].q = var_84_1
            *(rax_8 + 0x28) = *(i[0x2e] + (r15_1 << 1))
            int128_t* rax_14 = sub_1417ae350(&arg1[0x56], rbx_1)
            *rax_14 = *rax_8
            rax_14[1] = rax_8[1]
            rax_14[2] = rax_8[2]
            int128_t* rax_15 = sub_1417ae350(&arg1[0x5a], rbx_1)
            *rax_15 = *rax_8
            rax_15[1] = rax_8[1]
            rax_15[2] = rax_8[2]
        else
            void** const** rax_3 = &i_1
            
            if (r8_1 u< 3)
                rax_3 = nullptr
            
            if (rax_3 != 0)
                int64_t* r8_2 = (*rax_3)[0x85][sx.q(rax_3[1].d) * 2]
                
                if (r8_2 == 0)
                    goto label_141791ac0
                
                int64_t* rax_5 = nullptr
                
                if (*(r8_2 + 0xc) u>= 3)
                    rax_5 = r8_2
                
                if (rax_5 == 0 || *(sx.q(rax_5[1].d) + *(*rax_5 + 0x470)) != 0)
                    goto label_141791ac0
        
        if (rsi_1 != 0)
            int32_t rax_22 = var_d0 + 1
            var_d0 = rax_22
            
            if (rax_22 s>= rsi_1[1].d)
            label_141791c03:
                var_d8.d += 1
                sub_141750820(&var_f8)
                rsi_1 = var_f0_1
                i = i_1
            else
                int64_t* rdx_13 = *(*rsi_1 + (sx.q(rax_22) << 3))
                int64_t performanceCount_1 = *rdx_13
                int32_t var_100_1 = rdx_13[1].d
                char rax_25
                
                if (performanceCount_1 == 0)
                    rax_25 = 0
                else
                    rax_25 = *(performanceCount_1 + 0x40)
                
                char var_fc_1 = rax_25
                performanceCount = performanceCount_1
                i_1.o = performanceCount.o
                i = i_1
        else
            int32_t rax_17 = var_e0.d + 1
            var_e0.d = rax_17
            
            if (rax_17 s>= var_d8:4.d)
                goto label_141791c03
    while (i != 0)

arg_20 = &data_142fc7360
var_b8 = &data_142fc9198
var_b0 = &data_142fc9140
var_a8 = &data_142fc7308
QueryPerformanceCounter(&performanceCount)
zmm1_1.q = float.d(performanceCount)
zmm1_1.q = zmm1_1.q f* data_143d796f8
zmm1_1.q = zmm1_1.q f+ 16777216.0
int128_t zmm0_1
zmm0_1.q = zmm1_1.q f- var_60_1
zmm0_1.q = zmm0_1.q f+ *result
*result = zmm0_1.q
int64_t r8_4 = data_143ef7288
int64_t var_60_2 = zmm1_1.q

if (r8_4 == 0)
    return result

int64_t rax_19 = sx.q(data_143ef7290)
int64_t var_110_1 = (&data_1439b8da8)[rax_19]
zmm0_1.q = _mm_cvtps_pd((*((rax_19 << 2) + 0x142fc4b08)).q).q f* var_68
int64_t var_118_1 = zmm0_1.q
return sub_140b1f700(var_70, u"%s - %s: %f%s", r8_4)
