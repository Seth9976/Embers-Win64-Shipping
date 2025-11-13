// 函数: sub_14199eba0
// 地址: 0x14199eba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_a8
uint16_t i = sub_1419a2ec0(*((sx.q((*1111")[sx.q(data_1439c7a08)]) << 3) + &data_143f13910), 
    &var_a8, &data_143f10690, *(arg2 + 0x60) u>> 4 & 1)
int128_t zmm7 = var_a8
int32_t r12 = 1
int64_t r14
r14.b = 1

if (1 u< *(arg2 + 0x56))
    void* rax_1 = var_a8.q
    
    do
        int32_t rbx_1 = 1
        char rcx_2 = r14.b
        int32_t rax_3 = *(arg2 + 0x44) s>> rcx_2
        char var_88_1 = 0
        int64_t var_84_1 = 0
        
        if (rax_3 s>= 1)
            rbx_1 = rax_3
        
        int32_t var_7c_1 = 0
        int32_t rax_5 = *(arg2 + 0x48) s>> rcx_2
        char var_70_1 = 0
        
        if (rax_5 s>= 1)
            r12 = rax_5
        
        char var_86_1 = 1
        char var_87_1 = (r14 - 1).b
        
        if (*(arg2 + 0x54) != 0)
            int32_t var_7c_2 = *(arg2 + 0x4c)
        
        var_a8.q = arg2
        var_a8:8.b = r14.b
        var_a8:9.b = 0
        float* rax_8
        uint128_t zmm6_1
        rax_8, zmm6_1 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx_1))
        __builtin_memset(&rax_8[2], 0, 0x18)
        uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(r12))
        *rax_8 = zmm6_1.d f/ zmm0_1.d
        zmm0_1.d = zmm6_1.d f/ zmm1_1.d
        rax_8[1] = zmm0_1.d
        void*** rax_9 = sub_14081d830(0x38, *(arg1 + 8), 1, 0)
        
        if (rax_9 != 0)
            rax_9[1] = *(arg2 + 8)
            *rax_9 = &data_142f34e88
            *(rax_9 + 0x18) = var_88_1.o
            rax_9[2] = 0
            *(rax_9 + 0x28) = arg2.o
        
        *(rax_8 + 8) = rax_9
        void*** rax_10 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
        
        if (rax_10 != 0)
            int128_t zmm0_3 = var_a8
            rax_10[1] = *(arg2 + 8)
            *rax_10 = &data_142f285c0
            rax_10[2] = 0
            *(rax_10 + 0x18) = zmm0_3
        
        *(rax_8 + 0x10) = rax_10
        *(rax_8 + 0x18) = arg3
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(r12 + 7)
        r12 = 1
        int32_t rcx_5 = 1
        int32_t r8_1 = ((temp0_3 & 7) + temp1_1) s>> 3
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 + 7)
        int32_t rax_17 = (temp3_1 + (temp2_1 & 7)) s>> 3
        
        if (rax_17 s>= 1)
            rcx_5 = rax_17
        
        int32_t rcx_6 = 1
        
        if (r8_1 s>= 1)
            rcx_6 = r8_1
        
        int32_t var_b4_1 = rcx_6
        sub_1419a3600(rcx_6.b)
        var_88_1.o = zx.o(0)
        sub_141998c50(rax_1, &data_143f193d0, rax_8)
        var_70_1.q = rcx_5.q
        var_88_1.q = rax_8
        var_84_1:4.o = zmm7
        int32_t var_68_1 = 1
        void*** rax_18
        char rcx_8
        rax_18, rcx_8 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
        void*** rbx_2 = rax_18
        
        if (rax_18 == 0)
            rbx_2 = nullptr
        else
            sub_1419a3600(rcx_8)
            rbx_2[6].b = 0xa
            void* var_90_1 = &data_143f19400
            rbx_2[2] = 0
            rbx_2[3] = 0
            *(rbx_2 + 0x20) = rax_8.o
            *rbx_2 = &data_14300a9c0
            *(rbx_2 + 0x38) = var_88_1.o
            *(rbx_2 + 0x48) = arg2.o
            rbx_2[0xb] = var_68_1.q
        
        rbx_2[2] = *(arg1 + 0x1a0)
        rbx_2[3] = *(arg1 + 0x218)
        int64_t rsi_2 = sx.q(*(arg1 + 0x18))
        int32_t rax_21 = (rsi_2 + 1).d
        *(arg1 + 0x18) = rax_21
        
        if (rax_21 s> *(arg1 + 0x1c))
            sub_14083a440(arg1 + 0x10, rsi_2.d)
        
        r14.b += 1
        *(*(arg1 + 0x10) + (rsi_2 << 3)) = rbx_2
        i = zx.w(r14.b)
    while (i u< *(arg2 + 0x56))

return i
