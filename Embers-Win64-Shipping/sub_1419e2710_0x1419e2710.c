// 函数: sub_1419e2710
// 地址: 0x1419e2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xc0)

if (rax != 0)
    rax = *(rax + 0x238)

if (rax == 0)
    void* rcx = *(arg1 + 0xa0)
    
    if (rcx != 0)
        void* rax_4 = sub_141dc9840(rcx)
        
        if (rax_4 != 0)
            int64_t* rax_5 = sub_140d3c6e0(rax_4 + 0x218)
            
            if (rax_5 != 0)
                (*(*rax_5 + 0x548))(rax_5, arg2, 0, 0)
                return arg2
    
    *(arg2 + 0xc) = data_143dbb1f8.q
    int32_t rax_7 = data_143dbb200
    *(arg2 + 0x14) = rax_7
    *arg2 = *(arg2 + 0xc)
    arg2[1].d = rax_7
    arg2[3].b = 0
    return arg2

float zmm2[0x4] = *(rax + 0x108)
int32_t zmm1 = *(rax + 0x114)
int32_t zmm4 = *(rax + 0x10c)
zmm2[0] = zmm2[0] f+ zmm1
int128_t zmm5 = *(rax + 0x104)
zmm2[0] = zmm2[0] f- zmm1
int32_t zmm3 = *(rax + 0x110)
float zmm6[0x4] = *(rax + 0x100)
int128_t zmm7
zmm7.d = zmm5.d f+ zmm3
float var_44 = zmm2[0]
zmm6[0] = zmm6[0] f- zmm4
float var_50 = zmm2[0]
zmm6[0] = zmm6[0] f+ zmm4
zmm5.d = zmm5.d f- zmm3
arg2[3].b = 1
*arg2 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm7.q)
arg2[1].d = var_50
*(arg2 + 0xc) = temp0_1.q
*(arg2 + 0x14) = var_44
return arg2
