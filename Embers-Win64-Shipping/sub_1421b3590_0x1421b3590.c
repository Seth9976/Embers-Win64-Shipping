// 函数: sub_1421b3590
// 地址: 0x1421b3590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != 0 && *(arg1 + 0x118) s> 0 && (*(arg1 + 0xe0) & 1) != 0)
    void* rbp_1 = *(arg1 + 0x28)
    
    if (rbp_1 != 0 && (*(rbp_1 + 0x2c) & 1) != 0)
        *(arg2 + 8) = 0
        *(arg2 + 0xc) = *(arg1 + 0x118)
        *(arg2 + 0x10) = *(arg1 + 0x114)
        *(arg2 + 0x44) = *(arg1 + 0xe8)
        *(arg2 + 0x38) = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
        int32_t var_40 = 0x3f800000
        *(arg2 + 0x40) = 0x3f800000
        void* rax_3 = *(arg1 + 0x18)
        
        if (rax_3 != 0)
            float zmm2[0x4] = *(rax_3 + 0x1e0)
            float var_40_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *(arg2 + 0x38) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
            *(arg2 + 0x40) = var_40_1
        
        uint64_t r8 = zx.q(*(arg1 + 0x120))
        uint32_t count = r8.d * *(arg1 + 0x114)
        sub_1421ad850(arg2 + 0x18, count, r8)
        memcpy(*(arg2 + 0x28), *(arg1 + 0xf0), count)
        memcpy(*(arg2 + 0x30), *(arg1 + 0xf8), *(arg2 + 0x20) * 2)
        void* r14 = *(rbp_1 + 0x30)
        int32_t* rax_5 = j_sub_140a82f30(0x30)
        int32_t* rbx_1 = rax_5
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            __builtin_memset(rax_5, 0, 0x30)
        
        rbx_1[0xa].b = *(r14 + 0xe8) != 0 | (rbx_1[0xa].b & 0xfe)
        *rbx_1 = *(r14 + 0xb4) * *(r14 + 0xb0)
        
        if (&rbx_1[4] != r14 + 0x118)
            int64_t r12_1 = sx.q(*(r14 + 0x120))
            int32_t r8_4 = rbx_1[7]
            int64_t r13_1 = *(r14 + 0x118)
            rbx_1[6] = r12_1.d
            
            if (r12_1.d != 0 || r8_4 != 0)
                sub_1406387e0(&rbx_1[4], r12_1.d, r8_4)
                memcpy(*(rbx_1 + 0x10), r13_1, (r12_1 << 3).d)
            else
                rbx_1[7] = 0
        
        int32_t rax_10 = 8
        
        if (*(r14 + 0xd1) == 0)
            rax_10 = 4
        
        rbx_1[1] = rax_10
        int32_t rax_11 = 6
        
        if (*(r14 + 0xd1) == 0)
            rax_11 = 2
        
        rbx_1[2] = rax_11
        rbx_1[3] = *(r14 + 0xe0)
        *(rbx_1 + 0x20) = *(*(r14 + 0x138) + 0x20)
        *(arg2 + 0x68) = rbx_1
        *(arg2 + 0x60) = 0
        int64_t zmm0_1 = *(arg1 + 0x130)
        int128_t zmm6
        
        if (zmm0_1.d f<= 9.99999975e-05f)
            zmm6 = zx.o(0)
        else
            zmm6.d = 1f f/ zmm0_1.d
        
        *(arg2 + 0x88) = zmm6.d
        void* rax_14 = *(rbp_1 + 0x30)
        int32_t rcx_7
        
        if ((*(rax_14 + 0xac) & 2) == 0)
            rcx_7 = -1
        else
            rcx_7 = *(rax_14 + 0xf0)
        
        *(arg2 + 0x8c) = rcx_7
        *(arg2 + 0xb2) = *(*(rbp_1 + 0x30) + 0x58)
        *(arg2 + 0xb0) = *(*(rbp_1 + 0x30) + 0x59) & 1
        *(arg2 + 0xb4) = *(*(arg1 + 0x10) + 0x34)
        *(arg2 + 0x94) = *(arg1 + 0x3c)
        *(arg2 + 0x98) = *(arg1 + 0x40)
        *(arg2 + 0x9c) = *(arg1 + 0x44)
        *(arg2 + 0xa0) = *(arg1 + 0x4c)
        *(arg2 + 0xa4) = *(arg1 + 0x38)
        *(arg2 + 0xa8) = *(*(rbp_1 + 0x30) + 0xb0)
        *(arg2 + 0xac) = *(*(rbp_1 + 0x30) + 0xb4)
        *(arg2 + 0x48) = *(*(rbp_1 + 0x30) + 0xac) & 1
        *(arg2 + 0x4c) = *(*(rbp_1 + 0x30) + 0xcc)
        void* rax_27 = *(rbp_1 + 0x30)
        *(arg2 + 0x50) = *(rax_27 + 0xc0)
        *(arg2 + 0x58) = *(rax_27 + 0xc8)
        *(arg2 + 0xb1) = 0
        
        if ((*(arg1 + 0xe0) & 0x200) != 0)
            *(arg2 + 0xb3) = *(arg1 + 0xe4)
            char rax_30 = *(arg2 + 0xb1)
            
            if (*(arg1 + 0xe4) != 0)
                rax_30 = 1
            
            *(arg2 + 0xb1) = rax_30
        
        int64_t rcx_15 = sx.q(*(rbp_1 + 0x98))
        
        if (rcx_15.d s> 0)
            void* rax_31 = *(arg1 + 0x10)
            int32_t arg_8
            sub_140865c40(rax_31 + 0x60, &arg_8, *(*(**(rax_31 + 0x40) + 0x90) + (rcx_15 << 3) - 8))
            int64_t rax_33 = sx.q(arg_8)
            void* const rcx_17
            
            if (rax_33.d == 0xffffffff)
                rcx_17 = nullptr
            else
                rcx_17 = *(rax_31 + 0x60) + rax_33 * 0x18
            
            int32_t* rax_35 = rcx_17 + 8
            
            if (rcx_17 == 0)
                rax_35 = nullptr
            
            *(arg2 + 0x90) = *rax_35
        
        *(arg2 + 0xb5) = *(*(rbp_1 + 0x30) + 0xae)
        void* rax_38 = *(rbp_1 + 0x30)
        *(arg2 + 0x70) = *(rax_38 + 0xd4)
        *(arg2 + 0x78) = *(rax_38 + 0xdc)
        void* rax_40 = *(rbp_1 + 0x30)
        *(arg2 + 0x7c) = *(rax_40 + 0xf8)
        *(arg2 + 0x84) = *(rax_40 + 0x100)
        *(arg2 + 0xb8) = *(arg1 + 0x1b4)
        *(arg2 + 0xc0) = *(*(rbp_1 + 0x30) + 0x5b) u>> 1 & 1
        *(arg2 + 0xc4) = *(*(rbp_1 + 0x30) + 0x38)
        void* rax_44
        rax_44.b = 1
        *(arg2 + 0xc8) = *(*(rbp_1 + 0x30) + 0x3c)
        return rax_44

void* const* rax_45
rax_45.b = 0
return rax_45
