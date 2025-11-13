// 函数: sub_14060ee20
// 地址: 0x14060ee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rsi = *(arg1 + 0xc0)
int512_t zmm0
zmm0.o = zx.o(0)

if (rsi != 0)
    int64_t rcx = *(rsi + 0x10)
    int64_t r12_1 = 0
    int64_t r13_1 = 0
    int32_t i = 0
    int32_t rax_2 = ((*(rsi + 0x18) - rcx) s>> 3).d
    int128_t var_a8
    __builtin_memset(&var_a8, 0, 0x30)
    int64_t* rdi_1 = var_a8:8.q
    int128_t var_90
    int32_t arg_10
    
    if (rax_2 s> 0)
        int64_t* rbx_1 = var_90:8.q
        int64_t* r14_1 = nullptr
        
        do
            int64_t rax_4 = *(*(r14_1 + rcx) + 8)
            arg_10.q = rax_4
            
            if (rdi_1 == r12_1)
                sub_14060b9d0(&var_a8, rdi_1, &arg_10)
                int64_t var_98
                r12_1 = var_98
                rdi_1 = var_a8:8.q
            else
                *rdi_1 = rax_4
                rdi_1 = &rdi_1[1]
                var_a8:8.q = rdi_1
            
            int64_t rax_7 = *(*(r14_1 + *(rsi + 0x10)) + 0x10)
            arg_10.q = rax_7
            
            if (rbx_1 == r13_1)
                sub_14060b9d0(&var_90, rbx_1, &arg_10)
                int64_t var_80
                r13_1 = var_80
                rbx_1 = var_90:8.q
            else
                *rbx_1 = rax_7
                rbx_1 = &rbx_1[1]
                var_90:8.q = rbx_1
            
            rcx = *(rsi + 0x10)
            i += 1
            r14_1 = &r14_1[1]
        while (i s< ((*(rsi + 0x18) - rcx) s>> 3).d)
        
        rsi = *(arg1 + 0xc0)
    
    int32_t rax_11 = *(rsi + 8)
    zmm0.o = zx.o(0)
    int64_t* r15_1 = var_a8.q
    int64_t rsi_2 = 0
    void* r14_2 = var_90.q
    int32_t i_8 = ((rdi_1 - r15_1) s>> 3).d
    uint128_t zmm6 = zx.o(0)
    arg_10 = 0x7a120
    int128_t var_78
    __builtin_memset(&var_78, 0, 0x18)
    void** rdx_3 = var_78:8.q
    
    if (i_8 s> 0)
        int64_t* rbx_2 = r15_1
        uint64_t i_4 = zx.q(i_8)
        uint64_t i_1
        
        do
            int64_t* j = *rbx_2
            
            while (j != *(r14_2 - r15_1 + rbx_2))
                void* rcx_3 = *j
                
                if (*(rcx_3 + 8) == 0x51)
                    void* arg_20 = rcx_3
                    
                    if (rdx_3 == rsi_2)
                        zmm0 = sub_14060b6e0(&var_78, rdx_3, &arg_20)
                        rdx_3 = var_78:8.q
                        int64_t var_68
                        rsi_2 = var_68
                    else
                        *rdx_3 = rcx_3
                        rdx_3 = &rdx_3[1]
                        var_78:8.q = rdx_3
                
                j = *rbx_2 + 8
                *rbx_2 = j
            
            rbx_2 = &rbx_2[1]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        r14_2 = var_90.q
    
    int64_t* rbx_3 = var_78.q
    int64_t rdi_5 = (rdx_3 - rbx_3) s>> 3
    sub_14060bea0(rbx_3, rdx_3, rdi_5, sub_140610bc0, zmm0)
    int64_t zmm1 = (zx.o(0)).q
    uint128_t zmm0_1
    
    if (rdi_5.d s> 0)
        int64_t r8_5 = 0
        uint64_t i_6 = zx.q(rdi_5.d)
        uint64_t i_2
        
        do
            void* r9_1 = rbx_3[r8_5]
            
            if (r8_5 s> 0)
                zmm1 = _mm_cvtepi32_pd(zx.q(*(rbx_3[r8_5 - 1] + 0xc)))
            
            r8_5 += 1
            zmm0_1.q = _mm_cvtepi32_pd(zx.q(*(r9_1 + 0xc))).q f- zmm1
            uint64_t temp0_3 = divu.dp.q(0:(sx.q(arg_10) * sx.q(int.d(zmm0_1.q))), sx.q(rax_11))
            arg_10 = *(r9_1 + 0x20)
            zmm6.q = zmm6.q f+ _mm_cvtepi32_pd(zx.q((temp0_3 u/ 0x3e8).d)).q
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
        r15_1 = var_a8.q
    
    if (rdi_5 != 0)
        zmm1 = _mm_cvtepi32_pd(zx.q(*(rbx_3[sx.q(rdi_5.d) - 1] + 0xc)))
    
    int32_t rdx_6 = 0
    void* rax_22 = *(arg1 + 0xc0)
    int64_t* r8_6 = *(rax_22 + 0x10)
    int32_t i_7 = ((*(rax_22 + 0x18) - r8_6) s>> 3).d
    
    if (i_7 s> 0)
        uint64_t i_5 = zx.q(i_7)
        uint64_t i_3
        
        do
            void* rcx_15 = *r8_6
            int32_t rax_25
            
            if (((*(rcx_15 + 0x10) - *(rcx_15 + 8)) & 0xfffffffffffffff8) != 0)
                rax_25 = *(*(*(rcx_15 + 0x10) - 8) + 0xc)
            else
                rax_25 = 0
            
            if (rax_25 s<= rdx_6)
                rax_25 = rdx_6
            
            r8_6 = &r8_6[1]
            rdx_6 = rax_25
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    int64_t rcx_17 = sx.q(arg_10)
    zmm0_1.q = _mm_cvtepi32_pd(zx.q(rdx_6)).q f- zmm1
    uint64_t temp0_7 = divu.dp.q(0:(sx.q(int.d(zmm0_1.q)) * rcx_17), sx.q(rax_11))
    int64_t rdx_8
    rdx_8:result = mulu.dp.q(0x624dd2f1a9fbe77, temp0_7)
    zmm0_1.q = _mm_cvtepi32_pd(zx.q((temp0_7 u/ 0x3e8).d)).q f+ zmm6.q
    zmm0_1.q = zmm0_1.q f* 0.001
    _mm_cvtpd_ps(zmm0_1)
    
    if (rbx_3 != 0)
        int64_t* rax_31 = rbx_3
        
        if (((rsi_2 - rbx_3) & 0xfffffffffffffff8) u>= 0x1000)
            rbx_3 = rbx_3[-1]
            
            if (rax_31 - rbx_3 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        result = j_sub_140a74f90(rbx_3)
    
    if (r14_2 != 0)
        void* rax_34 = r14_2
        
        if (((r13_1 - r14_2) & 0xfffffffffffffff8) u>= 0x1000)
            r14_2 = *(r14_2 - 8)
            
            if (rax_34 - r14_2 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        result = j_sub_140a74f90(r14_2)
    
    if (r15_1 != 0)
        int64_t* rax_37 = r15_1
        
        if (((r12_1 - r15_1) & 0xfffffffffffffff8) u< 0x1000)
            result = j_sub_140a74f90(r15_1)
        else
            r15_1 = r15_1[-1]
            
            if (rax_37 - r15_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            result = j_sub_140a74f90(r15_1)

return result
