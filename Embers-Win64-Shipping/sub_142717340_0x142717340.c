// 函数: sub_142717340
// 地址: 0x142717340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xe8)

if (rcx == 0)
    return 

int128_t zmm7
int128_t var_28_1 = zmm7
(*(*rcx + 0x3f0))(rcx)
int32_t rdi_1 = *(arg1 + 0x20c)

if (not(arg2[0] f== *(arg1 + 0x208)))
    int64_t* rcx_1 = *(arg1 + 0xe8)
    zmm7 = *(arg1 + 0x204)
    (*(*rcx_1 + 0x530))(rcx_1, arg2[0])
    *(arg1 + 0x208) = arg2[0]
    *(arg1 + 0x204) = arg2[0]
    
    if (rdi_1 == 0xffffffff || not(zmm7.d f== arg2[0]))
        goto label_1427173c7
else if (rdi_1 == 0xffffffff)
label_1427173c7:
    void* rcx_2 = *(arg1 + 0x100)
    
    if (rcx_2 != 0)
        *(arg1 + 0x20c) = 0
        int32_t zmm3 = (zx.o(0)).d
        int32_t i_1 = *(rcx_2 + 0x30) - 1
        
        if (i_1 s> 0)
            int32_t zmm4_1 = *(arg1 + 0x204)
            int64_t i = sx.q(i_1)
            int128_t* rdx_3 = *(rcx_2 + 0x28) - 0x18 + (i << 5)
            
            do
                arg2 = *rdx_3
                i_1 -= 1
                arg2[0] = arg2[0] f- rdx_3[2].d
                float zmm2 = *(rdx_3 - 4) f- *(rdx_3 + 0x1c)
                float zmm1 = *(rdx_3 - 8) f- *(rdx_3 + 0x18)
                arg2[0] = arg2[0] * arg2[0]
                zmm3 = zmm3 f+ _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + arg2[0])[0]
                
                if (zmm3 f> zmm4_1)
                    *(arg1 + 0x20c) = i_1
                    break
                
                i -= 1
                rdx_3 -= 0x20
            while (i s> 0)
