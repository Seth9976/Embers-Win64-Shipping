// 函数: sub_141e42e50
// 地址: 0x141e42e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_e0 = &arg_8
void*** (* var_e8)() = j_sub_141e3a360
void* rdi = sub_140a756e0(&var_e8, &data_143a2d2b4) + 0x30
void* arg_20 = rdi
(*(*arg1 + 0x288))(arg1, arg2, rdi)
sub_141e47a50(arg3, 0)
uint64_t rax_2 = zx.q(*(rdi + 0x78))
uint32_t rdx_1 = (rax_2 * 3).d

if (rdx_1 s> *(arg3 + 0xc))
    sub_1405a52a0(arg3, rdx_1)
    rax_2 = zx.q(*(rdi + 0x78))

int32_t i = 0
float zmm6[0x4]
float var_48[0x4] = zmm6

if (rax_2.d s> 0)
    int64_t r13_1 = 0
    
    do
        void* rax_3 = *(rdi + 0x70)
        void* rsi_1 = rdi
        int64_t j = 0
        
        if (rax_3 != 0)
            rsi_1 = rax_3
        
        void* rsi_2 = rsi_1 + r13_1
        zmm6 = *(rsi_2 + 0x18)
        
        do
            int64_t rdi_1 = sx.q(*(rsi_2 + (j << 2)))
            
            if (rdi_1.d s< 0 || rdi_1.d s>= arg1[0x1a].d)
                rax_3.b = 0
            else
                rax_3.b = 1
            
            if (rax_3.b != 0)
                int64_t var_d0
                __builtin_memset(&var_d0, 0, 0x18)
                int64_t var_a8_1 = 0
                int32_t var_d8 = rdi_1.d
                int32_t var_b8_1 = 0xfffffffe
                int32_t var_b0_1 = 0xfffffffe
                int64_t var_a0_1 = 0
                int64_t rbp_1 = sx.q(sub_141e34c50(arg3, &var_d8))
                
                if (var_a8_1 != 0)
                    sub_140a74f90(var_a8_1)
                
                int64_t rdx_3 = rdi_1 * 3
                void* r8_3 = (rbp_1 << 6) + *arg3
                zmm6[0] = zmm6[0] f* *(rsi_2 + (j << 2) + 0xc)
                zmm6[0] = zmm6[0] f+ *(r8_3 + 0x10)
                *(r8_3 + 0x10) = zmm6[0]
                *(r8_3 + 8) = *(arg1[0x19] + (rdx_3 << 3))
                *(r8_3 + 0x1c) = *(arg1[0x19] + (rdx_3 << 3) + 0x14)
            
            j += 1
        while (j s< 3)
        
        rdi = arg_20
        i += 1
        r13_1 += 0x1c
    while (i s< *(rdi + 0x78))

int32_t rax_6 = arg3[1].d
int128_t zmm8 = zx.o(0)
int32_t arg_18
void* rcx_8
int32_t rdx_4

if (rax_6 s<= 0)
    rcx_8 = *arg3
    rdx_4 = rax_6
else
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    int32_t r12 = 1
    void* r13_2 = nullptr
    arg_18 = 1
    
    do
        rcx_8 = *arg3
        int32_t rdi_2 = r12
        rdx_4 = rax_6
        void* rsi_3 = rcx_8 + r13_2
        
        if (r12 s< rax_6)
            void* r15_1 = r13_2 + 0x40
            
            do
                void* rbx_1 = r15_1 + rcx_8
                rdx_4 = rax_6
                void* rbp_2 = rcx_8
                
                if (*(rsi_3 + 8) == *(rbx_1 + 8))
                    zmm6 = *(rbx_1 + 0x10)
                    
                    if (zmm6[0] >= 0f)
                        zmm7 = _mm_min_ss(zmm6[0], 0x3f800000)
                    else
                        zmm7 = zx.o(0)
                    
                    uint32_t zmm0_2[0x4] = sub_141e43500(rsi_3)
                    zmm0_2[0] = zmm0_2[0] f+ zmm7[0]
                    
                    if (not(_mm_and_ps(zmm0_2, 0x7fffffff)[0] f<= 9.99999994e-09f))
                        zmm7 = 0x3f800000
                        zmm7[0] = 1f f/ zmm0_2[0]
                        float zmm0_3 = sub_141e43500(rsi_3) * zmm7[0] f* *(rsi_3 + 0x1c)
                        
                        if (zmm6[0] >= 0f)
                            zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
                        else
                            zmm6 = zx.o(0)
                        
                        zmm7[0] = zmm7[0] * zmm6[0]
                        zmm7[0] = zmm7[0] f* *(rbx_1 + 0x1c)
                        zmm7[0] = zmm7[0] + zmm0_3
                        *(rsi_3 + 0x1c) = zmm7[0]
                        zmm0_3 = *(rbx_1 + 0x10)
                        
                        if (zmm0_3 >= 0f)
                            zmm0_3 = _mm_min_ss(zmm0_3, 0x3f800000)
                        else
                            zmm0_3 = (zx.o(0)).d
                        
                        *(rsi_3 + 0x10) = zmm0_3 f+ *(rsi_3 + 0x10)
                        rbp_2 = *arg3
                    
                    int64_t rbx_3 = sx.q(rdi_2) << 6
                    int64_t rcx_11 = *(rbx_3 + rbp_2 + 0x30)
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                    
                    int32_t rdx_9 = arg3[1].d
                    rcx_8 = *arg3
                    int32_t rax_10 = rdx_9 - rdi_2 - 1
                    
                    if (rax_10 s>= 1)
                        rax_10 = 1
                    
                    if (rax_10 != 0)
                        memcpy(rcx_8 + rbx_3, (sx.q(rdx_9 - rax_10) << 6) + rcx_8, rax_10 << 6)
                        rdx_9 = arg3[1].d
                        rcx_8 = *arg3
                    
                    rdx_4 = rdx_9 - 1
                    rdi_2 -= 1
                    arg3[1].d = rdx_4
                    r15_1 -= 0x40
                
                rdi_2 += 1
                r15_1 += 0x40
                rax_6 = rdx_4
            while (rdi_2 s< rdx_4)
            
            r12 = arg_18
        
        r12 += 1
        r13_2 += 0x40
        arg_18 = r12
        rax_6 = rdx_4
    while (r12 s<= rdx_4)

arg_18.b = 0
sub_141e37480(rcx_8, rdx_4, arg_8)
int64_t r8_7 = sx.q(arg3[1].d)
int32_t rdx_10 = 0
int32_t* result

if (r8_7.d s> 0)
    int64_t rcx_13 = 0
    result = *arg3 + 0x10
    
    do
        float zmm0_4 = *result
        
        if (zmm0_4 < 9.99999975e-06f)
            sub_141e47850(arg3, rdx_10, r8_7.d - rdx_10, 0)
            break
        
        rdx_10 += 1
        zmm8.d = zmm8.d f+ zmm0_4
        rcx_13 += 1
        result = &result[0x10]
    while (rcx_13 s< r8_7)

int32_t i_1 = 0

if (arg3[1].d s> 0)
    int128_t zmm9
    zmm9.d = 1f f/ zmm8.d
    int64_t rdx_11 = 0
    
    do
        result = *arg3
        rdx_11 += 0x40
        i_1 += 1
        *(rdx_11 + result - 0x30) = zmm9.d f* *(rdx_11 + result - 0x30)
    while (i_1 s< arg3[1].d)

*(arg_20 + 0x78) = 0

if (*(arg_20 + 0x7c) s<= 0xffffffff)
    sub_141e47d90(arg_20, 0)

result.b = arg3[1].d != 0
return result
