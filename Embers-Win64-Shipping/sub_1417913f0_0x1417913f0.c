// 函数: sub_1417913f0
// 地址: 0x1417913f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
wchar16 const* const var_98 = u"Integrate"
sub_140b19e60()
void** var_90 = &data_1439a8bd0
int64_t var_88 = (zx.o(0)).q
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* result = &var_88
int64_t var_80 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
QueryPerformanceCounter(&performanceCount)
float zmm1 = data_1439b8ea8
void** const var_e0 = &data_142fc7308
void* var_d8
int64_t* var_68 = &var_d8
int64_t zmm0 = float.d(performanceCount)
var_d8 = arg1
void** const var_e8 = &data_142fc9140
int64_t (* var_60)(int64_t* arg1, int32_t* arg2) = sub_1417a8ef0
void** const var_f0 = &data_142fc9198
zmm0 = zmm0 f* data_143d796f8
void** const var_f8 = &data_142fc7360
float arg_10 = zmm1 * zmm1
int32_t* var_d0 = &arg_18
void** const* var_c8 = &var_e0
void** const* var_c0 = &var_e8
void** const* var_b8 = &var_f0
int32_t arg_8
int32_t* var_b0 = &arg_8
float* var_a8 = &arg_10
int64_t var_80_1 = zmm0 f+ 16777216.0
zmm0 = data_1439b8ea4
void** const* var_a0 = &var_f8
void* rax = *arg2
zmm0.d = zmm0.d f* zmm0.d
int64_t* var_70
int64_t* var_58 = &var_70
var_70 = arg2
arg_8 = zmm0.d
sub_14077b750(*(rax + 8), &var_60, 0)
int64_t* r12 = *arg2
int32_t rdi = 0
int32_t rax_1 = r12[1].d
int32_t r14 = rax_1
performanceCount.d = rax_1

if (rax_1 s>= 0)
    r14 = 0

if (r14 s< rax_1)
    int32_t rax_20
    int64_t rcx_4
    
    do
        int64_t* rsi_1 = *(*r12 + (sx.q(r14) << 3))
        int64_t* rax_3 = nullptr
        char r8_1 = *(rsi_1 + 0xc)
        
        if (r8_1 u>= 2)
            rax_3 = rsi_1
        
        if (rax_3 == 0 || *(sx.q(rax_3[1].d) + *(*rax_3 + 0x368)) == 0)
        label_141791626:
            int32_t rbx_1 = *(*(*rsi_1 + 0x50) + (sx.q(rsi_1[1].d) << 2))
            int128_t* rax_10 = sub_1417ae350(arg1 + 0x290, rbx_1)
            int64_t r8_3 = sx.q(rsi_1[1].d)
            void* rax_11 = *rsi_1
            int32_t r9_1 = 0
            int64_t* var_d0_1 = rsi_1
            int32_t r10_1 = 0
            var_c0 = 0
            int32_t r11_1 = 0
            var_c8 = 0
            int64_t rcx_9 = *(rax_11 + 0x50)
            int64_t rax_12 = *(rax_11 + 0xf8)
            var_d8 = *(*(rax_11 + 0xe0) + (r8_3 << 3))
            int64_t rcx_10 = r8_3 * 3
            var_c8.d = *(rcx_9 + (r8_3 << 2))
            void* rdx_9 = rax_12 + (rcx_10 << 3)
            void* rax_13 = *(rax_12 + (rcx_10 << 3) + 8)
            void* rcx_11 = rdx_9
            
            if (rax_13 != 0)
                rcx_11 = rax_13
            
            void* rdx_10 = rcx_11 + (sx.q(*(rdx_9 + 0x10)) << 3)
            
            if (rcx_11 != rdx_10)
                do
                    int64_t rax_15 = *rcx_11
                    rcx_11 += 8
                    rdi |= *rax_15
                    r11_1 |= *(rax_15 + 4)
                    r10_1 |= *(rax_15 + 8)
                    r9_1 |= *(rax_15 + 0xc)
                while (rcx_11 != rdx_10)
                
                var_b8.d = r9_1
                var_c0:4.d = r10_1
                var_c0.d = r11_1
                var_c8:4.d = rdi
            
            var_b8:4.b = 1
            *rax_10 = var_d8.o
            rax_10[1] = var_c8.o
            rax_10[2].q = var_b8
            *(rax_10 + 0x28) = *(*(*rsi_1 + 0x170) + (sx.q(rsi_1[1].d) << 1))
            int128_t* rax_18 = sub_1417ae350(arg1 + 0x2b0, rbx_1)
            *rax_18 = *rax_10
            rax_18[1] = rax_10[1]
            rax_18[2] = rax_10[2]
            int128_t* rax_19
            rax_19, rcx_4 = sub_1417ae350(arg1 + 0x2d0, rbx_1)
            rdi = 0
            *rax_19 = *rax_10
            rax_19[1] = rax_10[1]
            rax_19[2] = rax_10[2]
        else
            int64_t* rax_5 = nullptr
            
            if (r8_1 u>= 3)
                rax_5 = rsi_1
            
            if (rax_5 != 0)
                int64_t* r8_2 = *(*(*rax_5 + 0x428) + sx.q(rax_5[1].d) * 0x10)
                
                if (r8_2 == 0)
                    goto label_141791626
                
                int64_t* rax_7 = nullptr
                
                if (*(r8_2 + 0xc) u>= 3)
                    rax_7 = r8_2
                
                if (rax_7 == 0 || *(sx.q(rax_7[1].d) + *(*rax_7 + 0x470)) != 0)
                    goto label_141791626
        
        rax_20 = r12[1].d
        r14 += 1
        rcx_4.b = performanceCount.d s< rax_20
        rax_20.b = r14 s< rax_20
    while (rax_20.b != rcx_4.b)

var_f8 = &data_142fc7360
var_f0 = &data_142fc9198
var_e8 = &data_142fc9140
var_e0 = &data_142fc7308
QueryPerformanceCounter(&performanceCount)
int128_t zmm1_1
zmm1_1.q = float.d(performanceCount)
zmm1_1.q = zmm1_1.q f* data_143d796f8
zmm1_1.q = zmm1_1.q f+ 16777216.0
int128_t zmm0_1
zmm0_1.q = zmm1_1.q f- var_80_1
zmm0_1.q = zmm0_1.q f+ *result
*result = zmm0_1.q
int64_t r8_4 = data_143ef7288
int64_t var_80_2 = zmm1_1.q

if (r8_4 == 0)
    return result

int64_t rax_22 = sx.q(data_143ef7290)
int64_t var_100_1 = (&data_1439b8da8)[rax_22]
zmm0_1.q = _mm_cvtps_pd((*((rax_22 << 2) + 0x142fc4b08)).q).q f* var_88
int64_t var_108_1 = zmm0_1.q
return sub_140b1f700(var_90, u"%s - %s: %f%s", r8_4)
