// 函数: sub_142033600
// 地址: 0x142033600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg2 + 8))(arg2) == 0)
    return 0

int64_t result = 0
int64_t* var_b8 = nullptr
int32_t var_b0 = 0
char rax_3 = sub_142032b50(arg1, &var_b8, arg3)
int64_t r15 = sx.q(var_b0)
int64_t* r13 = var_b8

if (rax_3 != 0)
    int64_t* rdi_1 = r13[1]
    int64_t* r14_1 = *r13
    var_b8 = r14_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    uint32_t zmm0_2[0x4]
    uint128_t zmm6
    uint32_t zmm6_1[0x4]
    zmm0_2, zmm6_1 = sub_140d7ade0((zx.o(0)).d, zx.o(0)[0], zmm6)
    int64_t* rsi = r13
    void* r12_3 = &r13[r15 * 2]
    uint32_t var_a8[0x4]
    
    if (r13 != r12_3)
        uint32_t var_48_1[0x4] = zmm6_1
        zmm6_1 = var_b8.o
        uint128_t zmm8 = 0x7fffffffffffffff
        int128_t zmm7
        zmm7.q = fconvert.d(zmm0_2[0])
        
        do
            void* rax_4 = *rsi
            uint32_t zmm1_1[0x4] = zx.o(r14_1[2])
            zmm1_1[0].q = zmm1_1[0].q f- zmm7.q
            zmm0_2 = zx.o(*(rax_4 + 0x10))
            zmm0_2[0].q = zmm0_2[0].q f- zmm7.q
            zmm1_1 = _mm_and_ps(zmm1_1, zmm8)
            
            if (not(_mm_cvtps_pd(_mm_cvtpd_ps(_mm_and_ps(zmm0_2, zmm8))[0].q).q f>= zmm1_1[0].q))
                var_a8[0].q = rax_4
                void* rax_5 = rsi[1]
                var_a8[2].q = rax_5
                
                if (rax_5 != 0)
                    *(rax_5 + 8) += 1
                
                zmm0_2 = var_a8
                int64_t* rbx_1 = _mm_bsrli_si128(zmm6_1, 8)[0].q
                var_a8 = zmm6_1
                zmm6_1 = zmm0_2
                var_b8.o = zmm0_2
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp8_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                r14_1 = var_b8
            
            rsi = &rsi[2]
        while (rsi != r12_3)
    
    int64_t rbx_2 = *sub_140b58170(&var_b8, "ImageWrapper", 1)
    j_sub_140b3db50()
    int64_t* rax_9 = j_sub_140b407e0(&data_143de7d78, rbx_2)
    int64_t r9 = *rax_9
    int64_t* var_90
    (*(r9 + 0x40))(rax_9, &var_90, 0, r9)
    int64_t* rcx_6 = var_90
    
    if (rcx_6 == 0)
        result = 0
    else
        result = 0
        
        if ((**rcx_6)(rcx_6, r14_1[3], sx.q(r14_1[4].d)) != 0)
            int64_t* rcx_7 = var_90
            __builtin_memset(&var_a8, 0, 0x18)
            
            if ((*(*rcx_7 + 0x20))(rcx_7, 0, 8, &var_a8) != 0)
                int64_t* rcx_8 = var_90
                int32_t rax_15 = (*(*rcx_8 + 0x28))(rcx_8)
                int64_t* rcx_9 = var_90
                int64_t rdx_4 = *rcx_9
                int32_t rax_16 = (*(rdx_4 + 0x30))(rcx_9, rdx_4)
                result = (*(*arg2 + 0x10))(arg2, var_a8[0].q, zx.q(rax_15), zx.q(rax_16), arg4)
            
            int64_t rcx_11 = var_a8[0].q
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
    
    int64_t* var_88
    
    if (var_88 != 0)
        var_88[1].d -= 1
        
        if (var_88[1].d == 1)
            (**var_88)(var_88)
            int32_t temp5_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_88 + 8))(var_88, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp7_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (r15.d != 0)
    void* rdi_2 = &r13[1]
    int32_t i
    
    do
        int64_t* rbx_5 = *rdi_2
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp2_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        rdi_2 += 0x10
        i = r15.d
        r15 = zx.q(r15.d - 1)
    while (i != 1)

if (r13 != 0)
    sub_140a74f90(r13)

return result
