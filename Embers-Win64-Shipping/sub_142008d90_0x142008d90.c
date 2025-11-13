// 函数: sub_142008d90
// 地址: 0x142008d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int64_t* rcx = arg1[0x26]
int128_t zmm7
int128_t var_28 = zmm7
void* rax

if (rcx != 0)
    int32_t zmm0_1
    rax, zmm0_1 = sub_141dcc7c0(rcx)
    
    if (rax != 0 && (*(rax + 0x22d) & 4) != 0)
        void* rcx_1 = arg1[0x16]
        
        if (rcx_1 != 0)
            zmm6 = *(rax + 0x244)
            zmm7 = *(rcx_1 + 0x1d8)
            
            if (not(zmm7.d f>= zmm6.d))
                (*(*arg1 + 0x3f0))(arg1)
                zmm6.d = zmm6.d f- zmm7.d
                int64_t rax_2
                rax_2.b = 1
                zmm6.d = zmm6.d f+ 2f
                *(arg1 + 0xcc) = _mm_min_ss(zmm0_1, zmm6.d)
                return rax_2

rax.b = 0
return rax
