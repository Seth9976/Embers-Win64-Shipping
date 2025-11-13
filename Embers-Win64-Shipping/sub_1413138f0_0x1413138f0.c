// 函数: sub_1413138f0
// 地址: 0x1413138f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4]
float var_b8[0x4] = zmm13
char rax = sub_141319740()
void* r12 = *arg2
float rax_1 = sub_141312a10(arg2)
float r14 = rax_1
float zmm6[0x4] = 0x3f47ae14
char rax_2

if (rax != 0)
    rax_2 = sub_141319740()
    zmm13 = 0x3f47ae14
    zmm13[0] = 0.779999971f / _mm_max_ss((*(data_143eb4010 + 4))[0], 0x3c23d70a)[0]

if (rax == 0 || rax_2 == 0)
    zmm13 = 0x3f800000

float zmm14[0x4] = *(arg2 + 0x1114)

if (zmm14[0] >= 1f)
    zmm14 = _mm_min_ss(zmm14[0], 0x42c60000)
else
    zmm14 = 0x3f800000

float zmm12[0x4] = arg2[0x222].d
bool cond:1 = zmm12[0] >= 1f
zmm14[0] = zmm14[0] * 0.00999999978f

if (cond:1)
    zmm12 = _mm_min_ss(zmm12[0], 0x42c60000)
else
    zmm12 = 0x3f800000

float zmm7[0x4] = *(arg2 + 0x112c)
uint64_t r15 = zx.q(data_14401b1a0)
zmm12[0] = zmm12[0] * 0.00999999978f
float temp0_4[0x4] = _mm_min_ss(zmm12[0], zmm14[0])
TEB* gsbase
float zmm8[0x4]

if (rax == 0)
    zmm8 = zmm7
else
    if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r15 << 3))))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    zmm8 = logf(zmm13[0])
    zmm8[0] = zmm8[0] f* data_143cda910
    zmm8[0] = zmm8[0] + zmm7[0]

zmm7 = arg2[0x225].d
float zmm0_1[0x4]

if (rax == 0)
    zmm0_1 = zmm7
else
    if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r15 << 3))))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    zmm0_1 = logf(zmm13[0])
    zmm0_1[0] = zmm0_1[0] f* data_143cda910
    zmm0_1[0] = zmm0_1[0] + zmm7[0]

float zmm9[0x4] = *(arg2 + 0x10ec)
zmm8[0] = zmm8[0] - 1f
zmm7 = 0x3f800000
float zmm11[0x4] = 0x3f800000
float var_f0 = _mm_min_ss(zmm8[0], zmm0_1[0])[0]
int32_t rax_7 = sub_1422e5a30(arg2)
float var_f4 = 0f
int64_t rax_8

if (rax_7 u> 0x1e || not(test_bit(0x6562c800, rax_7)))
    rax_8 = sx.q(rax_7)

if (((rax_7 u<= 0x1e && test_bit(0x6562c800, rax_7))
        || (*(&data_143f025fc + rax_8 * 0x14) & 1) != 0) && sub_1422eb710() == 0)
    zmm9 = zx.o(0)

float zmm1[0x4] = zmm9
zmm9 = 0x40000000
float arg_8 = powf(0x40000000[0], zmm1[0])
char rax_10 = sub_141319740()
float zmm0_3[0x4] = 0x3f47ae14
zmm0_3[0] = 0.779999971f / _mm_max_ss((*(data_143eb4010 + 4))[0], 0x3c23d70a)[0]
float arg_10 = zmm0_3[0]

if (rax_10 == 0)
    arg_10 = 1f

zmm0_3 = zx.o(0)

if (arg2[0x220] != 0)
    zmm0_3 = sub_14141f620(arg2)
    
    if (zmm0_3[0] <= 0f)
        zmm0_3 = zx.o(0)
    else
        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        int32_t rbx_1 = data_143cda914
        zmm0_3[0] = zmm0_3[0] / arg_10
        void* r14_1 = *(ThreadLocalStoragePointer + (r15 << 3))
        
        if (rbx_1 s> *(r14_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            rbx_1 = data_143cda914
            
            if (rbx_1 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
                rbx_1 = data_143cda914
        
        float zmm0_4[0x4] = logf(zmm0_3[0])
        zmm0_4[0] = zmm0_4[0] f* data_143cda910
        
        if (rbx_1 s> *(r14_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        zmm1 = data_143cda910
        zmm1[0] = zmm1[0] * 1.71479833f
        void* rcx_8 = arg2[0x220]
        zmm1[0] = zmm1[0] + zmm0_4[0]
        zmm0_3, zmm6, zmm7, zmm8 = sub_141f89240(rcx_8, zmm1)
        r14 = rax_1
    
    zmm9 = 0x40000000

arg_10 = powf(zmm9[0], zmm0_3[0])[0]
float var_e4 = (*(data_143eb4028 + 4))[0]
float var_f8

var_f8 = r14 != 2 ? 0.180000007f : 1f

void* rax_12 = *arg2

if ((*(rax_12 + 0x2c) & 0x20) == 0 || (*(rax_12 + 0x28) & 1) == 0)
    arg_10 = 1f
    arg_8 = 1f
else if (*(rax_12 + 0x5c) != 0)
    arg_8 = 1f
    arg_10 = 1f
    char rax_13 = sub_141319740()
    char rax_14
    
    if (rax_13 != 0)
        rax_14 = sub_141319740()
    
    if (rax_13 == 0 || rax_14 == 0)
        zmm6 = 0x3f800000
        zmm1 = *(*arg2 + 0x58)
    else
        void* rax_16 = *arg2
        float temp0_7[0x4] = _mm_max_ss((*(data_143eb4010 + 4))[0], 0x3c23d70a)
        zmm1 = *(rax_16 + 0x58)
        zmm6[0] = zmm6[0] / temp0_7[0]
    
label_141313eb5:
    zmm11 = powf(zmm9[0], zmm1[0])
    zmm11[0] = zmm11[0] * zmm6[0]
    zmm7 = zmm11
else if ((*(r12 + 0x28) & 0x20) == 0)
    zmm11 = 0x3f800000
    zmm7 = 0x3f800000
    arg_10 = 1f
    arg_8 = 1f
else if (arg2[0x2a9].d s>= arg3)
    if (r14 == 2)
        char rax_18 = sub_141319740()
        char rax_19
        
        if (rax_18 != 0)
            rax_19 = sub_141319740()
            float temp0_9[0x4] = _mm_max_ss((*(data_143eb4010 + 4))[0], 0x3c23d70a)
            zmm6[0] = zmm6[0] / temp0_9[0]
        
        if (rax_18 == 0 || rax_19 == 0)
            zmm6 = 0x3f800000
        
        void* ThreadLocalStoragePointer_1 = gsbase->ThreadLocalStoragePointer
        zmm7 = arg2[0x21c].d
        float zmm0_6[0x4] = *(arg2 + 0x10dc)
        zmm7[0] = zmm7[0] * zmm7[0]
        float temp0_10[0x4] = _mm_max_ss(zmm0_6[0], 0x3f800000)
        int64_t rdx = *(ThreadLocalStoragePointer_1 + (r15 << 3))
        zmm7[0] = zmm7[0] f* arg2[0x21b].d
        bool cond:4_1 = data_143cda914 s<= *(0x14 + rdx)
        zmm7[0] = zmm7[0] * 100f
        zmm7[0] = zmm7[0] / temp0_10[0]
        
        if (not(cond:4_1))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        if ((arg2[0x21f].b & 1) == 0)
            zmm0_6 = zx.o(0)
        else
            zmm0_6 = logf(zmm7[0])
            zmm0_6[0] = zmm0_6[0] f* data_143cda910
        
        zmm1 = zmm0_6
        goto label_141313eb5
    
    zmm7 = arg2[0x223].d
    zmm11 = *(arg2 + 0x111c)
    
    if (rax != 0)
        zmm7 = powf(zmm9[0], zmm7[0])
        zmm7[0] = zmm7[0] * zmm13[0]
        zmm11 = powf(zmm9[0], zmm11[0])
        zmm11[0] = zmm11[0] * zmm13[0]

zmm1 = var_f0
float temp0_8[0x4] = _mm_min_ss(zmm11[0], zmm7[0])
zmm8[0] = zmm8[0] - zmm1[0]
float var_ec = temp0_8[0]
float zmm0_5[0x4] = 0x3f800000
zmm0_5[0] = 1f / zmm8[0]
float var_f0_1 = zmm0_5[0]
zmm0_5[0] = zmm0_5[0] * zmm1[0]
float zmm15[0x4] = zmm0_5 ^ data_142d3f780
float _X = powf(zmm9[0], zmm1[0])
void* rbx_2 = arg2[0x221]
float _X_1 = _X
void* rbx_3

if (rbx_2 == 0)
    rbx_3 = data_1439b70c0
else
    rbx_3 = *(rbx_2 + 0x78)

int64_t* rbx_5 = *(rbx_3 + 0x10)

if (rbx_5 != 0)
    rbx_5[1].d += 1

zmm6 = arg2[0x224].d
zmm9 = *(arg2 + 0x1124)
float arg_20 = *(data_143eb3fe0 + 4)
_X = zmm6[0] * -0.0166666675f
exp2f(_X)
float temp0_11[0x4] = __maxss_xmmss_memss(zmm6[0], 0x3a83126f)
zmm1 = 0x3f800000
zmm1[0] = 1f - _X
zmm6 = 0x3c888889
zmm1[0] = zmm1[0] * arg_20 / temp0_11[0]
float var_e0 = 0.0166666675f / zmm1[0]
_X = *(arg2 + 0x1124) * -0.0166666675f
exp2f(_X)
bool cond:3 = *(arg2 + 0xd64) != 0
zmm1 = 0x3f800000
float temp0_12[0x4] = __maxss_xmmss_memss(zmm9[0], 0x3a83126f)
zmm1[0] = 1f - _X
zmm11[0] = zmm11[0] * 0.180000007f
zmm1[0] = zmm1[0] * arg_20 / temp0_12[0]
zmm6[0] = 0.0166666675f / zmm1[0]
zmm1 = var_ec
zmm1[0] = zmm1[0] * 0.180000007f

if (cond:3 || r14 == 2 || not(*(arg2 + 0x111c) f> arg2[0x223].d))
    var_f4 = 1f

void* rax_22 = *arg2
arg1[4] = arg_8
int32_t rcx_10 = *(rax_22 + 0x34)
int32_t rax_23 = arg2[0x224].d
arg1[5] = arg_10
arg1[9] = var_f0_1
arg1[7] = rax_23
int32_t rax_24 = *(arg2 + 0x1124)
arg1[0xc] = var_e4
arg1[8] = rax_24
void* rax_25 = data_143eb3ff8
arg1[0xd] = var_f8
arg1[6] = rcx_10
int32_t rcx_11 = *(rax_25 + 4)
int64_t rax_26 = data_14395f4d0
arg1[0xe] = var_e0
arg1[2] = zmm1[0]
arg1[0x12] = var_f4
*arg1 = temp0_4[0]
arg1[1] = zmm14[0]
arg1[3] = zmm11[0]
arg1[0xa] = zmm15[0]
arg1[0xb] = _X_1[0]
arg1[0xf] = zmm6[0]
arg1[0x10] = arg_20
arg1[0x11] = zmm13[0]
arg1[0x13] = rcx_11
*(arg1 + 0x50) = rbx_5
*(arg1 + 0x58) = rax_26

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        char rax_28
        
        if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
            rax_28 = sub_1405949a0()
        
        if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_28 != 0))
            (**rbx_5)(rbx_5, 1)
        else
            bool z_1
            
            if (0 == *(rbx_5 + 0xc))
                *(rbx_5 + 0xc) = 1
                z_1 = true
            else
                *(rbx_5 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx_5)

return arg1
