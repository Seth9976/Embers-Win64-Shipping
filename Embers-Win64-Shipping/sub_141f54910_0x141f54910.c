// 函数: sub_141f54910
// 地址: 0x141f54910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x430) != 0 && std::operator!=<char,struct std::char_traits<char> >(arg1 + 0x438) != 0)
    void* rcx_1 = *(arg1 + 0x430)
    uint64_t result
    
    if (*(arg1 + sx.q(*(arg1 + 0x494)) * 0x10 + 0x458) != *(rcx_1 + 0x1b0))
        void* rbx_1 = arg1 + 0x458
        int64_t i_1 = 2
        int64_t i
        
        do
            int32_t rax_1 = *(rcx_1 + 0x1b0)
            int32_t rdx_4 = 0
            *rbx_1 = 0
            
            if (*(rbx_1 + 4) != rax_1)
                sub_1405a5220(rbx_1 - 8, rax_1)
                rdx_4 = *rbx_1
            
            int32_t rax_4 = *(*(arg1 + 0x430) + 0x1b0) + rdx_4
            *rbx_1 = rax_4
            
            if (rax_4 s> *(rbx_1 + 4))
                sub_140638970(rbx_1 - 8)
            
            void* rax_6 = *(arg1 + 0x430)
            int32_t j = 0
            
            if (*(rax_6 + 0x1b0) s> 0)
                float zmm2[0x4] = zx.o(0)
                int64_t rdx_6 = 0
                
                do
                    float zmm1[0x4] = data_143f3b870
                    rdx_6 += 0x30
                    int64_t rax_5 = *(rbx_1 - 8)
                    zmm1[0].q = zmm2 u>> 0x40
                    j += 1
                    *(rdx_6 + rax_5 - 0x30) = _mm_shuffle_ps(zmm2, zmm1, 0xc4)
                    *(rdx_6 + rax_5 - 0x20) = zmm2
                    *(rdx_6 + rax_5 - 0x10) = __andps_xmmxud_memxud(data_143f3b870, data_143f3b880)
                    rax_6 = *(arg1 + 0x430)
                while (j s< *(rax_6 + 0x1b0))
            
            int32_t rdx_7 = *(rax_6 + 0x1b0)
            *(rbx_1 + 0x130) = 0
            
            if (*(rbx_1 + 0x134) != rdx_7)
                sub_1405c5510(rbx_1 + 0x128, rdx_7)
            
            rcx_1 = *(arg1 + 0x430)
            result = zx.q(*(rcx_1 + 0x1b0))
            
            if (result.d != 0)
                result = zx.q(result.d + *(rbx_1 + 0x130))
                *(rbx_1 + 0x130) = result.d
                
                if (result.d s> *(rbx_1 + 0x134))
                    sub_1405daba0(rbx_1 + 0x128)
                
                rcx_1 = *(arg1 + 0x430)
                int32_t j_1 = 0
                int64_t r8_1 = 0
                
                if (*(rcx_1 + 0x1b0) s> 0)
                    do
                        r8_1 += 1
                        j_1 += 1
                        *(r8_1 + *(rbx_1 + 0x128) - 1) = 1
                        rcx_1 = *(arg1 + 0x430)
                    while (j_1 s< *(rcx_1 + 0x1b0))
            
            rbx_1 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
        *(arg1 + 0x5a6) &= 0xfe
        
        if ((*(arg1 + 0x5a8) & 0x20) == 0)
            sub_140780b40(arg1 + 0x480, arg1 + 0x450)
            
            if (arg1 + 0x470 != arg1 + 0x580)
                uint32_t count = *(arg1 + 0x588)
                int64_t rbp_1 = *(arg1 + 0x580)
                int32_t r8_2 = *(arg1 + 0x47c)
                *(arg1 + 0x478) = count
                
                if (count == 0 && r8_2 == 0)
                    result.b = 1
                    *(arg1 + 0x47c) = 0
                    return result
                
                sub_1405da9e0(arg1 + 0x470, count, r8_2)
                memcpy(*(arg1 + 0x470), rbp_1, count)
    
    result.b = 1
    return result

*(arg1 + 0x458) = 0

if (*(arg1 + 0x45c) != 0)
    sub_1405a5220(arg1 + 0x450, 0)

*(arg1 + 0x468) = 0

if (*(arg1 + 0x46c) != 0)
    sub_1405a5220(arg1 + 0x460, 0)

*(arg1 + 0x488) = 0

if (*(arg1 + 0x48c) != 0)
    sub_1405a5220(arg1 + 0x480, 0)

return false
