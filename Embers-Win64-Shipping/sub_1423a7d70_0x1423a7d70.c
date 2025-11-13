// 函数: sub_1423a7d70
// 地址: 0x1423a7d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x30))

if (rbx.d s> 0 && *(*(*(arg1 + 0x28) + 0x128) + (rbx << 3) - 8) == 0)
    *(arg1 + 0x10) = (rbx - 1).d

uint64_t result = zx.q(*(arg1 + 0x34))

if (arg2 == 0)
    if (rbx.d s< result.d)
        do
            result = sub_1423b79e0(*(arg1 + 0x28), rbx.d)
            
            if (result.b != 0)
                *(arg1 + 0x14) = rbx.d
            else if (*(arg1 + 0x10) == 0xffffffff)
                *(arg1 + 0x10) = rbx.d
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d s< *(arg1 + 0x34))
else if (rbx.d s< result.d)
    int64_t r14 = rbx << 3
    uint128_t zmm6
    uint128_t var_28 = zmm6
    int128_t zmm7
    int128_t var_38 = zmm7
    int128_t zmm8
    int128_t var_48 = zmm8
    
    do
        void* r9_1 = *(arg1 + 0x28)
        int64_t* rcx_1
        
        if (rbx.d s< 0 || rbx.d s>= *(r9_1 + 0x130))
            rcx_1 = *(r9_1 + 0x128)
        label_1423a802e:
            
            if (*(rcx_1 + r14) != 0)
                int64_t rbp_1 = sx.q(*(arg1 + 0x20))
                int32_t rax_20 = (rbp_1 + 1).d
                *(arg1 + 0x20) = rax_20
                
                if (rax_20 s> *(arg1 + 0x24))
                    sub_1405a4cf0(arg1 + 0x18)
                
                result = *(arg1 + 0x18)
                *(result + (rbp_1 << 2)) = rbx.d
                *(arg1 + 0x14) = rbx.d
            else if (*(arg1 + 0x10) == 0xffffffff)
                *(arg1 + 0x10) = rbx.d
        else
            rcx_1 = *(r9_1 + 0x128)
            void* r8_2 = *(rcx_1 + r14)
            
            if (r8_2 == 0)
                goto label_1423a802e
            
            int64_t rcx_5
            int64_t rdx_3
            float zmm0
            
            if (*(r8_2 + 0x14f) != 0)
                zmm6 = zx.o(*(r8_2 + 0x110))
                float zmm4[0x4] = *(r8_2 + 0x100)
                result = zx.q(*(r8_2 + 0x118))
                zmm8 = zmm6.q:4.d
                int96_t var_78_1 = zmm4[0].12
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                zmm7 = result.d
                float zmm1 = zmm6.d f* zmm6.d
                float zmm2 = zmm4[0] * zmm4[0]
                float zmm3 = zmm8.d f* zmm8.d
                float zmm5 = zmm7.d f* zmm7.d
                
                if (_mm_min_ss(_mm_min_ss(zmm1, zmm2), zmm3) * 0.5f > zmm5)
                    goto label_1423a802e
                
                if (zmm5 > zmm1 + zmm1 + zmm2 + zmm2 + zmm3 + zmm3)
                    goto label_1423a802e
                
                zmm3 = *(r8_2 + 0x270)
                zmm2 = var_78_1.d
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rbx.d)
                zmm1 = var_78_1:4.d
                int32_t rdx_1 = temp2_1 & 3
                zmm0 = var_78_1:8.d
                int32_t rax_4 = temp3_1 + rdx_1
                result = zx.q((rax_4 & 3) - rdx_1)
                rcx_5 = sx.q(result.d)
                rdx_3 = sx.q(rax_4 s>> 2) * 0xf0 + *(r9_1 + 0x10)
                *(rdx_3 + (rcx_5 << 2)) = zmm2
                *(rdx_3 + (rcx_5 << 2) + 0x10) = zmm1
                *(rdx_3 + (rcx_5 << 2) + 0x20) = zmm0
                *(rdx_3 + (rcx_5 << 2) + 0x30) = zmm2
                *(rdx_3 + (rcx_5 << 2) + 0x40) = zmm1
                *(rdx_3 + (rcx_5 << 2) + 0x50) = zmm0
                *(rdx_3 + (rcx_5 << 2) + 0x60) = zmm4[0]
                *(rdx_3 + (rcx_5 << 2) + 0x70) = zmm6.d
                *(rdx_3 + (rcx_5 << 2) + 0x80) = zmm8.d
                *(rdx_3 + (rcx_5 << 2) + 0x90) = zmm7.d
                *(rdx_3 + (rcx_5 << 2) + 0xe0) = zmm3
                goto label_1423a7ffc
            
            zmm0 = *(r8_2 + 0x270)
            int32_t temp0_4
            int32_t temp1_1
            temp0_4:temp1_1 = sx.q(rbx.d)
            int32_t rdx_5 = temp0_4 & 3
            int32_t rax_8 = temp1_1 + rdx_5
            rcx_5 = sx.q((rax_8 & 3) - rdx_5)
            rdx_3 = sx.q(rax_8 s>> 2) * 0xf0 + *(r9_1 + 0x10)
            *(rdx_3 + (rcx_5 << 2)) = *(r8_2 + 0x100)
            *(rdx_3 + (rcx_5 << 2) + 0x10) = *(r8_2 + 0x104)
            *(rdx_3 + (rcx_5 << 2) + 0x20) = *(r8_2 + 0x108)
            *(rdx_3 + (rcx_5 << 2) + 0x30) = *(r8_2 + 0x100)
            *(rdx_3 + (rcx_5 << 2) + 0x40) = *(r8_2 + 0x104)
            *(rdx_3 + (rcx_5 << 2) + 0x50) = *(r8_2 + 0x108)
            *(rdx_3 + (rcx_5 << 2) + 0x60) = *(r8_2 + 0x10c)
            *(rdx_3 + (rcx_5 << 2) + 0x70) = *(r8_2 + 0x110)
            *(rdx_3 + (rcx_5 << 2) + 0x80) = *(r8_2 + 0x114)
            result = zx.q(*(r8_2 + 0x118))
            *(rdx_3 + (rcx_5 << 2) + 0xe0) = zmm0
            *(rdx_3 + (rcx_5 << 2) + 0x90) = result.d
        label_1423a7ffc:
            *(rdx_3 + (rcx_5 << 2) + 0xd0) = 0x7f7fffff
            *(rdx_3 + (rcx_5 << 2) + 0xc0) = 0
            *(rdx_3 + (rcx_5 << 2) + 0xb0) = 0
            *(rdx_3 + (rcx_5 << 2) + 0xa0) = 0xffff0000
            *(arg1 + 0x14) = rbx.d
        rbx = zx.q(rbx.d + 1)
        r14 += 8
    while (rbx.d s< *(arg1 + 0x34))

return result
