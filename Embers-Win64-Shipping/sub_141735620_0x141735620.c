// 函数: sub_141735620
// 地址: 0x141735620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const var_158 = u"DetectCollisions"
sub_140b19e60()
void** var_150 = &data_1439a8bd0
int64_t var_148 = (zx.o(0)).q
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* result = &var_148
int64_t var_140 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
void* rcx_2 = arg1[1]
int64_t var_140_1 = float.d(performanceCount_1) f* data_143d796f8 f+ 16777216.0

if (*(rcx_2 + 0x79) != 0)
    int512_t zmm1_1
    int128_t zmm6_1
    zmm1_1, zmm6_1 = sub_141781e90(rcx_2)
    zmm1_1.o = zmm6_1
    int512_t zmm1_2
    int128_t zmm6_2
    zmm1_2, zmm6_2 = sub_141781830(arg1[1])
    int64_t r12_1 = arg1[1]
    int64_t* i_8 = j_sub_140a82f30(0xf0)
    int64_t* rdi_1 = nullptr
    int64_t* i_4 = i_8
    
    if (i_8 == 0)
        i_4 = nullptr
    else
        *i_8 = 0
        sub_141703230(&i_8[2], 1.40129846e-45f)
    
    int64_t* i_6 = i_4
    int64_t* i_9 = j_sub_140a82f30(0xf0)
    int64_t* i_5 = i_9
    
    if (i_9 == 0)
        i_5 = nullptr
    else
        *i_9 = 0
        sub_141703230(&i_9[2], 2.80259693e-45f)
    
    int64_t* i_7 = i_5
    int64_t* rax_1 = j_sub_140a82f30(0x150)
    int64_t* rsi_1 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        *rax_1 = 0
        sub_141703230(&rax_1[2], 4.20389539e-45f)
        rsi_1[0x1d] = -1
        __builtin_memset(&rsi_1[0x1e], 0, 0x18)
        rsi_1[0x27] = 0
        rsi_1[0x28].d = 0
        *(rsi_1 + 0x144) = 4
    
    void* r8 = *arg1
    int64_t* var_100_1 = rsi_1
    int64_t* var_108 = rsi_1
    int64_t var_f8_1 = r12_1
    void* var_168 = &arg1[2]
    int64_t* rax_3 = *(r8 + 0x18)
    
    if (rax_3 != 0)
        char rdx = rax_3[1].b
        int64_t* rcx_7 = nullptr
        
        if (rdx == 1)
            rcx_7 = rax_3
        
        if (rcx_7 == 0)
            int64_t* rcx_10 = nullptr
            
            if (rdx == 0)
                rcx_10 = rax_3
            
            if (rcx_10 == 0)
                int64_t* rcx_13 = nullptr
                
                if (rdx == 2)
                    rcx_13 = rax_3
                
                if (rcx_13 == 0)
                    if (rdx == 3)
                        rdi_1 = rax_3
                    
                    if (rdi_1 != 0)
                        zmm1_2.o = zmm6_2
                        (*(*rdi_1 + 0x88))(rdi_1, zmm1_2, r8, &var_168, &i_6, arg3)
                else
                    int64_t* rbx_3 = *(r8 + 0x10)
                    int32_t var_160
                    int32_t* var_68_1 = &var_160
                    void** var_58_1 = &var_168
                    int64_t** var_50_1 = &i_6
                    var_160 = zmm6_2.d
                    void* var_70 = r8
                    int64_t* var_60_1 = rcx_13
                    int64_t var_48_1 = arg3
                    
                    if (rbx_3[0x11].b != 0)
                        sub_14175a890(rbx_3, 0)
                    
                    sub_1416ea4b0(&rbx_3[0x39], &var_70, 0)
            else
                int64_t* rbx_2 = *(r8 + 0x10)
                int32_t arg_20
                int32_t* var_98_1 = &arg_20
                void** var_88_1 = &var_168
                int64_t** var_80_1 = &i_6
                arg_20 = zmm6_2.d
                void* var_a0 = r8
                int64_t* var_90_1 = rcx_10
                int64_t var_78_1 = arg3
                
                if (rbx_2[0x11].b != 0)
                    sub_14175a890(rbx_2, 0)
                
                sub_1416ea2e0(&rbx_2[0x39], &var_a0, 0)
        else
            int64_t* rbx_1 = *(r8 + 0x10)
            int32_t arg_8
            int32_t* var_c8_1 = &arg_8
            void** var_b8_1 = &var_168
            int64_t** var_b0_1 = &i_6
            arg_8 = zmm6_2.d
            void* var_d0 = r8
            int64_t* var_c0_1 = rcx_7
            int64_t var_a8_1 = arg3
            
            if (rbx_1[0x11].b != 0)
                sub_14175a890(rbx_1, 0)
            
            sub_1416ea680(&rbx_1[0x39], &var_d0, 0)
    
    sub_1417487e0(&i_6)
    sub_141706380(&var_108)
    int64_t* i = i_5
    
    while (i != 0)
        int64_t* i_2 = i
        i = *i
        
        if (i_2 != 0)
            j_sub_140a74f90(i_2)
    
    int64_t* i_1 = i_4
    
    while (i_1 != 0)
        int64_t* i_3 = i_1
        i_1 = *i_1
        
        if (i_3 != 0)
            j_sub_140a74f90(i_3)

int64_t performanceCount_2
QueryPerformanceCounter(&performanceCount_2)
int128_t zmm1
zmm1.q = float.d(performanceCount_2)
zmm1.q = zmm1.q f* data_143d796f8
zmm1.q = zmm1.q f+ 16777216.0
*result = zmm1.q f- var_140_1 f+ *result
int64_t r8_1 = data_143ef7288
int64_t var_140_2 = zmm1.q

if (r8_1 == 0)
    return result

int64_t rax_6 = sx.q(data_143ef7290)
int64_t var_170_2 = (&data_1439b8da8)[rax_6]
int64_t var_178_2 = _mm_cvtps_pd(*((rax_6 << 2) + 0x142fc4b08)) f* var_148
return sub_140b1f700(var_150, u"%s - %s: %f%s", r8_1)
