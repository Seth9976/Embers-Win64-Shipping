// 函数: sub_141d3f6e0
// 地址: 0x141d3f6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t result = __security_cookie ^ &var_e8
int64_t result_1 = result
int64_t* rsi = *(arg1 + 0x58)

if (rsi != 0)
    int64_t rbp
    rbp.b = 0
    *(*(*rsi + 0x170) + (sx.q(rsi[1].d) << 1)) = *(arg2 + 0x40)
    *(*(*rsi + 0x50) + (sx.q(rsi[1].d) << 2)) = *(arg2 + 0x44)
    *(*(*rsi + 0x188) + (sx.q(rsi[1].d) << 3)) = *(arg2 + 0x48)
    
    if ((*(arg2 + 0x50) & 1) != 0)
        rbp.b = 1
        int64_t rdx_2 = sx.q(rsi[1].d) * 3
        int64_t rcx_2 = *(*rsi + 0x28)
        *(rcx_2 + (rdx_2 << 2)) = *(arg2 + 0x10)
        *(rcx_2 + (rdx_2 << 2) + 8) = *(arg2 + 0x18)
        int64_t rdx_3 = sx.q(rsi[1].d) * 3
        int64_t rcx_3 = *(*rsi + 0x3c8)
        *(rcx_3 + (rdx_3 << 2)) = *(arg2 + 0x10)
        *(rcx_3 + (rdx_3 << 2) + 8) = *(arg2 + 0x18)
    
    int32_t rcx_6 = *(arg2 + 0x50)
    
    if (((rcx_6 u>> 1).b & 1) != 0)
        rbp.b = 1
        *(*(*rsi + 0x68) + sx.q(rsi[1].d) * 0x10) = *(arg2 + 0x20)
        *(*(*rsi + 0x3e0) + sx.q(rsi[1].d) * 0x10) = *(arg2 + 0x20)
        rcx_6 = *(arg2 + 0x50)
    
    if (((rcx_6 u>> 0x15).b & 1) != 0)
        int64_t var_b0 = *(arg2 + 0x30)
        void* rax_18 = *(arg2 + 0x38)
        void* var_a8_1 = rax_18
        
        if (rax_18 != 0)
            *(rax_18 + 8) += 1
        
        sub_1417b5700(rsi, &var_b0)
    
    int32_t rcx_10 = *(arg2 + 0x50)
    
    if (((rcx_10 u>> 2).b & 1) != 0)
        rbp.b = 1
        int64_t rdx_9 = sx.q(rsi[1].d) * 3
        int64_t rcx_9 = *(*rsi + 0x1b8)
        *(rcx_9 + (rdx_9 << 2)) = *(arg2 + 0xa8)
        *(rcx_9 + (rdx_9 << 2) + 8) = *(arg2 + 0xb0)
        rcx_10 = *(arg2 + 0x50)
    
    if (((rcx_10 u>> 3).b & 1) != 0)
        rbp.b = 1
        int64_t rdx_10 = sx.q(rsi[1].d) * 3
        int64_t rcx_12 = *(*rsi + 0x1d0)
        *(rcx_12 + (rdx_10 << 2)) = *(arg2 + 0xb4)
        *(rcx_12 + (rdx_10 << 2) + 8) = *(arg2 + 0xbc)
    
    int64_t rdx_11 = sx.q(rsi[1].d) * 3
    int64_t rcx_13 = *(*rsi + 0x200)
    *(rcx_13 + (rdx_11 << 2)) = *(arg2 + 0xc0)
    *(rcx_13 + (rdx_11 << 2) + 8) = *(arg2 + 0xc8)
    *(*(*rsi + 0x218) + sx.q(rsi[1].d) * 0x10) = *(arg2 + 0xd0)
    *(*(*rsi + 0x2c0) + (sx.q(rsi[1].d) << 2)) = *(arg2 + 0x1d8)
    *(*(*rsi + 0x2d8) + (sx.q(rsi[1].d) << 2)) = *(arg2 + 0x1dc)
    int64_t rdx_17 = sx.q(rsi[1].d) << 6
    int64_t rcx_17 = *(*rsi + 0x290)
    *(rdx_17 + rcx_17) = *(arg2 + 0x150)
    *(rdx_17 + rcx_17 + 0x10) = *(arg2 + 0x160)
    *(rdx_17 + rcx_17 + 0x20) = *(arg2 + 0x170)
    *(rdx_17 + rcx_17 + 0x30) = *(arg2 + 0x180)
    int64_t rdx_19 = sx.q(rsi[1].d) << 6
    int64_t rcx_18 = *(*rsi + 0x2a8)
    *(rdx_19 + rcx_18) = *(arg2 + 0x190)
    *(rdx_19 + rcx_18 + 0x10) = *(arg2 + 0x1a0)
    *(rdx_19 + rcx_18 + 0x20) = *(arg2 + 0x1b0)
    *(rdx_19 + rcx_18 + 0x30) = *(arg2 + 0x1c0)
    *(*(*rsi + 0x2f0) + (sx.q(rsi[1].d) << 2)) = *(arg2 + 0x1e0)
    *(*(*rsi + 0x308) + (sx.q(rsi[1].d) << 2)) = *(arg2 + 0x1e4)
    int32_t rcx_21 = *(arg2 + 0x50)
    
    if (((rcx_21 u>> 0xc).b & 1) != 0)
        rbp.b = 1
        int64_t rdx_22 = sx.q(rsi[1].d) * 3
        int64_t rcx_22 = *(*rsi + 0x230)
        *(rcx_22 + (rdx_22 << 2)) = *(arg2 + 0x114)
        *(rcx_22 + (rdx_22 << 2) + 8) = *(arg2 + 0x11c)
        rcx_21 = *(arg2 + 0x50)
    
    if (((rcx_21 u>> 0xd).b & 1) != 0)
        rbp.b = 1
        int64_t rdx_23 = sx.q(rsi[1].d) * 3
        int64_t rcx_23 = *(*rsi + 0x248)
        *(rcx_23 + (rdx_23 << 2)) = *(arg2 + 0x120)
        *(rcx_23 + (rdx_23 << 2) + 8) = *(arg2 + 0x128)
        rcx_21 = *(arg2 + 0x50)
    
    if (((rcx_21 u>> 0x16).b & 1) != 0)
        rbp.b = 1
        int64_t rdx_24 = sx.q(rsi[1].d) * 3
        int64_t rcx_24 = *(*rsi + 0x260)
        *(rcx_24 + (rdx_24 << 2)) = *(arg2 + 0x12c)
        *(rcx_24 + (rdx_24 << 2) + 8) = *(arg2 + 0x134)
        rcx_21 = *(arg2 + 0x50)
    
    if (((rcx_21 u>> 0x17).b & 1) != 0)
        rbp.b = 1
        int64_t rdx_25 = sx.q(rsi[1].d) * 3
        int64_t rcx_25 = *(*rsi + 0x278)
        *(rcx_25 + (rdx_25 << 2)) = *(arg2 + 0x138)
        *(rcx_25 + (rdx_25 << 2) + 8) = *(arg2 + 0x140)
        rcx_21 = *(arg2 + 0x50)
    
    if (((rcx_21 u>> 0x14).b & 1) != 0)
        void* rbx_1 = *(*(arg1 + 8) + 0x348)
        sub_14177fa60(*rsi, zx.q(rsi[1].d), *(arg2 + 0x1f0))
        sub_141d40c90(*(rbx_1 + 0x260), rsi)
        rcx_21 = *(arg2 + 0x50)
    
    if (((rcx_21 u>> 0x18).b & 1) != 0)
        sub_141d40d20(*(*(arg1 + 8) + 0x348) + 0x598, rsi, *(arg2 + 0x1f3))
        rcx_21 = *(arg2 + 0x50)
    
    int32_t rbx_2 = rcx_21
    
    if ((rcx_21 & 0x200007) != 0)
        void* rax_67 = *(arg2 + 0x30)
        
        if (rax_67 != 0 && *(rax_67 + 0xc) != 0)
            *(sx.q(rsi[1].d) + *(*rsi + 0x158)) = 1
            int64_t* rcx_31 = *(arg2 + 0x30)
            void var_a0
            int64_t* rax_71 = (*(*rcx_31 + 0x28))(rcx_31, &var_a0)
            int128_t zmm1 = zx.o(0)
            int64_t r8_4 = sx.q(rsi[1].d) * 3
            int64_t rdx_30 = *(*rsi + 0x128)
            *(rdx_30 + (r8_4 << 3)) = *rax_71
            *(rdx_30 + (r8_4 << 3) + 8) = rax_71[1].d
            *(rdx_30 + (r8_4 << 3) + 0xc) = *(rax_71 + 0xc)
            *(rdx_30 + (r8_4 << 3) + 0x14) = *(rax_71 + 0x14)
            float zmm2[0x4] = *(arg2 + 0x14)
            float zmm3[0x4] = *(arg2 + 0x10)
            int64_t* rcx_35 = *(arg2 + 0x30)
            uint128_t var_68 = *(arg2 + 0x20)
            float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, (*(arg2 + 0x18)).q)
            uint128_t zmm0 = data_14399f670
            float var_58_1[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, zmm1.q)[0].q)
            float var_48_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
                _mm_unpacklo_ps(data_14399f66c, zmm1.q)[0].q)
            float var_c8
            void var_88
            sub_1417598c0((*(*rcx_35 + 0x28))(rcx_35, &var_88), &var_c8, &var_68)
            uint32_t zmm3_1[0x4] = *(arg2 + 0xac)
            uint32_t temp0_7[0x4] = _mm_and_ps(*(arg2 + 0xa8), 0x7fffffff)
            uint32_t zmm4_1[0x4] = *(arg2 + 0xb0)
            uint32_t temp0_8[0x4] = _mm_and_ps(zmm3_1, 0x7fffffff)
            int32_t rdx_33 = rsi[1].d
            float var_c4
            float zmm1_1 = var_c4 f- temp0_8[0]
            void* rcx_37 = *rsi
            uint32_t temp0_9[0x4] = _mm_and_ps(zmm4_1, 0x7fffffff)
            float var_c4_1 = zmm1_1
            float var_bc
            zmm1_1 = var_bc f+ temp0_7[0]
            var_c8 = var_c8 f- temp0_7[0]
            float var_bc_1 = zmm1_1
            float var_c0
            float var_c0_1 = var_c0 f- temp0_9[0]
            float var_b4
            float var_b4_1 = var_b4 f+ temp0_9[0]
            float var_b8
            float var_b8_1 = var_b8 f+ temp0_8[0]
            sub_141756120(rcx_37, rdx_33, &var_c8)
            rbx_2 = *(arg2 + 0x50)
    
    int64_t r11_1 = 0
    
    if (((rbx_2 u>> 0x1b).b & 1) != 0)
        int32_t r9_2 = 0
        int64_t rdx_34 = sx.q(rsi[1].d) * 3
        int64_t rcx_38 = *(*rsi + 0xf8)
        void* rax_79 = *(rcx_38 + (rdx_34 << 3) + 8)
        void* r8_7 = rcx_38 + (rdx_34 << 3)
        void* r10_1 = r8_7
        
        if (rax_79 != 0)
            r10_1 = rax_79
        
        void* r15_1 = r10_1 + (sx.q(*(r8_7 + 0x10)) << 3)
        
        if (r10_1 != r15_1)
            int32_t rdx_35 = 1
            
            do
                void* rax_81 = *(arg2 + 0x68)
                void* rcx_39 = arg2 + 0x58
                int32_t r8_8 = rdx_35
                
                if (rax_81 != 0)
                    rcx_39 = rax_81
                
                int32_t rax_82 = r9_2
                
                if (r9_2 s< 0)
                    rax_82 = r9_2 + 0x1f
                
                r9_2 += 1
                rdx_35 = rol.d(rdx_35, 1)
                void* rax_85 = *r10_1
                rcx_39.b = (*(rcx_39 + (sx.q(rax_82 s>> 5) << 2)) & r8_8) != 0
                r10_1 += 8
                *(rax_85 + 0x88) = rcx_39.b
            while (r10_1 != r15_1)
            
            rbx_2 = *(arg2 + 0x50)
    
    if (((rbx_2 u>> 0x1c).b & 1) != 0)
        int64_t rdx_36 = sx.q(rsi[1].d) * 3
        int64_t rcx_40 = *(*rsi + 0xf8)
        void* rax_88 = *(rcx_40 + (rdx_36 << 3) + 8)
        void* r8_9 = rcx_40 + (rdx_36 << 3)
        void* rdx_37 = r8_9
        
        if (rax_88 != 0)
            rdx_37 = rax_88
        
        void* r9_3 = rdx_37 + (sx.q(*(r8_9 + 0x10)) << 3)
        
        if (rdx_37 != r9_3)
            int64_t r8_10 = 0
            
            do
                r8_10 += 4
                void* rcx_41 = *rdx_37
                rdx_37 += 8
                *(rcx_41 + 0x8c) = *(r8_10 + *(arg2 + 0x78) - 4)
            while (rdx_37 != r9_3)
    
    int64_t rdx_38 = sx.q(rsi[1].d) * 3
    int64_t rcx_42 = *(*rsi + 0xf8)
    uint128_t** rax_94 = *(rcx_42 + (rdx_38 << 3) + 8)
    uint128_t** r8_11 = rcx_42 + (rdx_38 << 3)
    uint128_t** rdx_39 = r8_11
    
    if (rax_94 != 0)
        rdx_39 = rax_94
    
    result = sx.q(r8_11[2].d)
    void* r8_12 = &rdx_39[result]
    
    while (rdx_39 != r8_12)
        r11_1 += 0x10
        (*rdx_39)[1] = *(*(arg2 + 0x88) + r11_1 - 0x10)
        result = *(arg2 + 0x98)
        uint128_t* rcx_44 = *rdx_39
        rdx_39 = &rdx_39[1]
        *rcx_44 = *(result + r11_1 - 0x10)
    
    if (rbp.b != 0 && *(arg1 + 0x20) != 0)
        void* rcx_45 = *rsi
        int64_t rdx_40 = sx.q(rsi[1].d)
        result = *(rcx_45 + 0x398)
        
        if (*(rdx_40 + result) == 1)
            r8_12.b = 4
            void* rbx_4 = *(*(arg1 + 8) + 0x348)
            sub_14177fa60(rcx_45, rdx_40, r8_12.b)
            result = sub_141d40c90(*(rbx_4 + 0x260), rsi)
    
    if (*(arg2 + 0x1f4) != 0)
        *(arg1 + 0x20) = 1

__security_check_cookie(result_1 ^ &var_e8)
return result
