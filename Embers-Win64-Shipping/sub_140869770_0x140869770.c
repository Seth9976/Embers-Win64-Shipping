// 函数: sub_140869770
// 地址: 0x140869770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 != 0)
    result = sub_1405f7040(arg2)
    
    if (result != 0 && *(result + 0x2c) u<= 1)
        char r10 = (*(arg2 + 0x468)).b
        uint64_t var_48 = *arg3
        uint128_t zmm0
        
        if ((r10 & 1) == 0 || *(arg1 + 0x3ec) == 0)
            zmm0 = 0x3f800000
        else
            void* rax = *(arg1 + 0x450)
            void* rdx = arg1 + 0x3f0
            float zmm4 = 3.40282347e+38f
            
            if (rax != 0)
                rdx = rax
            
            void* r8 = rdx + sx.q(*(arg1 + 0x458)) * 0xc
            uint128_t zmm1
            
            if (rdx != r8)
                uint128_t zmm6 = arg3[1].d
                
                do
                    zmm1 = zx.o(*rdx)
                    int32_t rax_2 = *(rdx + 8)
                    float zmm3 = var_48:4.d.d f- _mm_shuffle_ps(zmm1, zmm1, 0x55).d
                    float zmm2 = var_48.d.d f- zmm1.d
                    rdx += 0xc
                    zmm1.d = zmm6.d f- rax_2
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4 = _mm_min_ss(zmm3 * zmm3 + zmm2 * zmm2 f+ zmm1.d, zmm4)
                while (rdx != r8)
            
            zmm1 = *(arg2 + 0x46c)
            zmm0 = _mm_sqrt_ss(zx.o(0).d, zmm4)
            
            if (zmm0.d f< zmm1.d)
                zmm0.d = zmm0.d f/ zmm1.d
            else
                zmm0 = zx.o(0)
        
        uint8_t rcx_3 = 0
        
        if (zmm0.d f<= 0f)
            rcx_3 = 2
        
        uint64_t rax_3
        rax_3.b = arg4 & 0xfc
        rcx_3 |= rax_3.b
        
        if (*(result + 0x28) == 0 && (r10 & 2) != 0)
            zmm0.d = float.s(zx.q(*(result + 0x60)))
            
            if (not(zmm0.d f<= *(arg2 + 0x470)))
                return zx.q((rcx_3 | 2) u>> 1) & 1
        
        return zx.q(rcx_3 u>> 1) & 1

result.b = 0
return result
