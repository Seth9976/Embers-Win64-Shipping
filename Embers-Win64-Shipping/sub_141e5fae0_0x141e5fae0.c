// 函数: sub_141e5fae0
// 地址: 0x141e5fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4] = *(arg1 + 0x24)
int128_t zmm7
int128_t var_28 = zmm7
uint32_t zmm0[0x4]

if (zmm6[0] f<= 2097152f)
    uint32_t rcx = zx.d(*(arg1 + 8))
    
    if (rcx == 4)
        char rax_4 = *(arg1 + 0x10)
        
        if (rax_4 == 0)
            zmm0 = __minss_xmmss_memss((*(arg1 + 0xc))[0], 0xb8d1b717)
            zmm6[0] = zmm6[0] f* -60f
            zmm6[0] = zmm6[0] f/ zmm0[0]
        else if (rax_4 == 2)
            zmm6 = 0x4a000000
    else if (rcx == 5)
        void* rdi_1 = nullptr
        zmm7 = zx.o(0)
        void* rax_1 = sub_141f8b8d0(arg1 + 0x28)
        void* rcx_3 = *(rax_1 + 0x70)
        void* rdx_2 = sx.q(*(rax_1 + 0x78)) * 0x1c + rcx_3
        
        if (rcx_3 == rdx_2)
            zmm0 = zx.o(0)
        else
            void* rax_3
            
            do
                zmm0 = *(rcx_3 + 4)
                rax_3 = rcx_3
                bool cond:1_1 = zmm0[0] f<= zmm7.d
                zmm7 = _mm_max_ss(zmm7.d, zmm0[0])
                
                if (cond:1_1)
                    rax_3 = rdi_1
                
                rcx_3 += 0x1c
                rdi_1 = rax_3
            while (rcx_3 != rdx_2)
            
            if (rax_3 == 0)
                zmm0 = zx.o(0)
            else
                zmm0 = _mm_max_ss((*(rax_3 + 8))[0], 0)
        
        if (__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> 0.00100000005f)
            zmm6 = 0x4a000000
        else
            zmm6[0] = zmm6[0] f* zmm7.d
else
    zmm6 = 0x4a000000

uint32_t rcx_4 = zx.d(*(arg1 + 9))

if (rcx_4 == 0)
    zmm6[0] = zmm6[0] f+ *(arg1 + 0x14)
else if (rcx_4 == 1)
    zmm0 = __maxss_xmmss_memss((*(arg1 + 0x18))[0], *(arg1 + 0x14))
    zmm6[0] = zmm6[0] f+ zmm0[0]
else if (rcx_4 == 2)
    zmm0 = __maxss_xmmss_memss(__maxss_xmmss_memss((*(arg1 + 0x18))[0], *(arg1 + 0x14))[0], 
        *(arg1 + 0x1c))
    zmm6[0] = zmm6[0] f+ zmm0[0]
else if (rcx_4 == 3)
    zmm6[0] = zmm6[0] f+ *(arg1 + 0x14)

if (zmm6[0] f>= 0f)
    return _mm_min_ss(zmm6[0], 0x4a000000)

return zx.o(0)
