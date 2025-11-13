// 函数: sub_141404980
// 地址: 0x141404980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c7a69 == 0 && arg1[1].d s< 3)
    return 

void* rax_2 = (*(*arg1 + 0x240))()
arg1[2] = rax_2

if (rax_2 != 0)
    sub_1420ec790(rax_2)

int32_t rbx_1 = *(arg2 + 0x234)
int128_t zmm6_1

if (sub_140a80f40() == 0)
    uint32_t rax_4
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
        void var_b8
        void** rax_5 = sub_1413d9f70(&var_b8, nullptr, 0xff)
        *(*rax_5 + 0x10) = rbx_1
        void* rcx_4 = *rax_5
        int32_t r8 = rax_5[2].d
        int64_t* rdx_2 = rax_5[1]
        int64_t* rbx_2 = *(rcx_4 + 0x18)
        int64_t* var_1b0_1 = rbx_2
        void* r15_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *r15_1 += 1
            rbx_2 = var_1b0_1
        
        zmm6_1 = sub_1413f8070(rcx_4, rdx_2, r8, 1)
        
        if (rbx_2 != 0)
            int32_t rax_6 = *r15_1
            *r15_1 -= 1
            
            if (rax_6 == 1)
                zmm6_1 = sub_140a2f6e0(var_1b0_1)
    else
        zmm6_1 = sub_1413d4500(&data_143f02b98, rbx_1)
else
    zmm6_1 = sub_1413d4500(&data_143f02b98, rbx_1)

char rax_8 = *(arg2 + 0x220)

if (rax_8 == 0)
    float zmm2[0x4] = *(arg2 + 0x1d0)
    bool cond:1_1 = *(arg2 + 0x14f) == 0
    int32_t r8_1 = *(arg2 + 0x234)
    float var_110_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    char rax_11 = *(arg2 + 0x23d)
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
    int64_t var_128_1 = temp0_4.q
    int64_t var_118 = temp0_4.q
    float var_c8_1[0x4] = zmm2
    zmm6_1 = sub_1413d3660(arg1, &var_118, r8_1, 1, cond:1_1, (*(arg2 + 0x238))[0], rax_11, arg3, 
        arg2 + 0x240)
else if (rax_8 == 1)
    char r15_2 = *(arg2 + 0x23d)
    int32_t rbx_3 = *(arg2 + 0x234)
    int32_t r12_1 = arg1[1].d
    int128_t var_38_1 = zmm6_1
    zmm6_1.d = (*(arg2 + 0x230)).d f* 0.0174532924f
    int32_t var_160_1 = rbx_3
    char var_15c_1 = r15_2
    int32_t var_158_1 = zmm6_1.d
    int32_t var_154_1 = r12_1
    float var_150[0x4] = *(arg2 + 0x240)
    float* rcx_7
    
    if (sub_140a80f40() == 0)
        uint32_t rax_13
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_13.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 == 0 && (data_143de5480 == 0 || rax_13.b != 0))
            float var_f8_1[0x4] = arg4.o
            int64_t var_d8_1 = var_150[2].q
            float var_e8[0x4] = var_158_1.o
            rcx_7 = &var_e8[2]
            goto label_141404bf4
        
        void var_a0
        void** rax_14 = sub_1413da210(&var_a0, nullptr, 0xff)
        void* rcx_9 = *rax_14
        *(rcx_9 + 0x10) = arg4.o
        uint128_t zmm0_2 = zx.o(var_150[2].q)
        *(rcx_9 + 0x20) = var_158_1.o
        *(rcx_9 + 0x30) = zmm0_2.q
        void* rcx_10 = *rax_14
        int32_t r8_3 = rax_14[2].d
        int64_t* rdx_5 = rax_14[1]
        int64_t* rbx_4 = *(rcx_10 + 0x40)
        int64_t* var_1a8_1 = rbx_4
        void* r15_3 = &rbx_4[9]
        
        if (rbx_4 != 0)
            *r15_3 += 1
            rbx_4 = var_1a8_1
        
        sub_1405e4b20(rcx_10, rdx_5, r8_3, 1)
        
        if (rbx_4 != 0)
            int32_t rax_15 = *r15_3
            *r15_3 -= 1
            
            if (rax_15 == 1)
                sub_140a2f6e0(var_1a8_1)
    else
        rcx_7 = &var_150
    label_141404bf4:
        char var_1d0
        var_1d0.q = rcx_7
        char var_1d8
        var_1d8.d = zmm6_1.d
        sub_1413d7d70(&data_143f02b98, r12_1, arg4, rbx_3, 1, r15_2, var_1d8, var_1d0)
    zmm6_1 = var_38_1

if (arg8 != 0)
    int32_t var_138 = *(arg2 + 0x234)
    int64_t var_130_1 = arg8
    
    if (sub_140a80f40() == 0)
        uint32_t rax_18
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_18.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_18.b == 0))
            void var_88
            int64_t* rax_19 = sub_1413dd010(&var_88, nullptr, 0xff)
            *(*rax_19 + 0x10) = var_138.o
            void* rcx_17 = *rax_19
            int32_t r8_4 = rax_19[2].d
            int64_t* rdx_6 = rax_19[1]
            int64_t* rbx_5 = *(rcx_17 + 0x28)
            int64_t* var_1a0_1 = rbx_5
            int32_t* r15_4 = &rbx_5[9]
            
            if (rbx_5 != 0)
                *r15_4 += 1
                rbx_5 = var_1a0_1
            
            sub_1405e48c0(rcx_17, rdx_6, r8_4, 1)
            
            if (rbx_5 != 0)
                int32_t rax_20 = *r15_4
                *r15_4 -= 1
                
                if (rax_20 == 1)
                    sub_140a2f6e0(var_1a0_1)
        else
            float var_108[0x4] = var_138.o
            sub_1413c80e0(&var_108, &data_143f02b98, zmm6_1)
    else
        sub_1413c80e0(&var_138, &data_143f02b98, zmm6_1)

int32_t r14_1 = *(arg2 + 0x234)
int32_t rbx_6 = arg1[1].d
int32_t* var_180_1 = arg6
int32_t var_170_1 = rbx_6
char rax_21 = sub_140a80f40()

if (rax_21 != 0)
label_141404de7:
    
    if (rbx_6 s> 1)
        sub_1413d4eb0(&data_143f02b98, rbx_6, r14_1, arg6)
        sub_1413e6430(&data_143f02b98, rbx_6, r14_1, arg7)
    else
        sub_141260f60(&data_143f02b98, rbx_6, r14_1, arg6)
        sub_141269520(&data_143f02b98, rbx_6, r14_1, arg7)
else
    if (data_143f138f4 == rax_21)
        if (data_143de5480 == rax_21)
            goto label_141404de7
        
        uint32_t rax_22
        rax_22.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_22.b == 0)
            goto label_141404e2c
        
        goto label_141404de7
    
label_141404e2c:
    void var_70
    int64_t* rax_23 = sub_1413dc830(&var_70, nullptr, 0xff)
    void* rcx_20 = *rax_23
    *(rcx_20 + 0x10) = r14_1.o
    *(rcx_20 + 0x20) = arg7.o
    void* rcx_21 = *rax_23
    int32_t r8_8 = rax_23[2].d
    int64_t* rdx_10 = rax_23[1]
    int64_t* rbx_7 = *(rcx_21 + 0x38)
    int64_t* var_198_1 = rbx_7
    int32_t* r14_2 = &rbx_7[9]
    
    if (rbx_7 != 0)
        *r14_2 += 1
        rbx_7 = var_198_1
    
    sub_1407c96b0(rcx_21, rdx_10, r8_8, 1)
    
    if (rbx_7 != 0)
        int32_t rax = *r14_2
        *r14_2 -= 1
        
        if (rax == 1)
            sub_140a2f6e0(var_198_1)

if (arg5 == 0)
    return 

int32_t r14_3 = arg1[1].d
int64_t* var_178_1
var_178_1.d = r14_3
int32_t var_188_1
var_188_1.q = arg1
int64_t* var_180_2 = arg5
char rax_24 = sub_140a80f40()

if (rax_24 != 0)
label_141404eef:
    
    if (r14_3 s> 1)
        sub_1413d8100(&data_143f02b98, arg1, arg5)
    else
        sub_141264b20(&data_143f02b98, arg1, arg5)
    
    return 

if (data_143f138f4 == rax_24)
    if (data_143de5480 == rax_24)
        goto label_141404eef
    
    uint32_t rax_25
    rax_25.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_25.b == 0)
        goto label_141404f12
    
    goto label_141404eef

label_141404f12:
void var_58
void** rax_26 = sub_1413da0c0(&var_58, nullptr, 0xff)
void* rcx_24 = *rax_26
*(rcx_24 + 0x10) = var_188_1.o
*(rcx_24 + 0x20) = var_178_1
void* rcx_25 = *rax_26
int32_t r8_10 = rax_26[2].d
int64_t* rdx_12 = rax_26[1]
int64_t* rbx_9 = *(rcx_25 + 0x30)
int64_t* var_190_1 = rbx_9
void* rdi_1 = &rbx_9[9]

if (rbx_9 != 0)
    *rdi_1 += 1
    rbx_9 = var_190_1

sub_140778000(rcx_25, rdx_12, r8_10, 1)

if (rbx_9 == 0)
    return 

int32_t rsi_1 = *rdi_1
*rdi_1 -= 1

if (rsi_1 == 1)
    sub_140a2f6e0(var_190_1)
