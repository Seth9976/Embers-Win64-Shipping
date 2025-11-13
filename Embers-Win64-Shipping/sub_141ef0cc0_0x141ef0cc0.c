// 函数: sub_141ef0cc0
// 地址: 0x141ef0cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x29]

if (rcx != 0 && (*(*rcx + 0x830))(rcx) != 0)
    int64_t* rcx_1 = arg1[0x29]
    (*(*rcx_1 + 0x7e8))(rcx_1, arg2)

if ((*(*arg1 + 0x548))(arg1) != 0)
    if (*(arg1 + 0x386) == 2)
        void* rax_6 = arg1[0x16]
        int64_t var_48
        float var_40_1
        
        if (rax_6 == 0)
            float rax_7 = data_143a2d6e8
            var_48 = data_143a2d6e0
            var_40_1 = rax_7
        else
            float zmm1[0x4] = *(rax_6 + 0x1d0)
            var_48.d = zmm1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            var_48:4.d = temp0_1[0]
            temp0_2[0] = temp0_2[0] f- *(rax_6 + 0x114)
            var_40_1 = temp0_2[0]
        
        float var_28_1 = var_40_1
        int32_t var_40_2 = data_143dbb200
        int64_t rax_10 = *arg1
        int64_t var_30 = var_48
        var_48 = data_143dbb1f8.q
        
        if ((*(rax_10 + 0x920))(arg1, &var_30, &var_48) == 0 || 0 == 0)
            *(arg1 + 0x386) = 1
    
    (*(*arg1 + 0x760))(arg1, arg2)

void* rdi_1 = arg1[0x25]

if (rdi_1 != 0)
    void* rax_14 = sub_140d21950(rdi_1, sub_14255c120())
    
    if (rax_14 != 0)
        int64_t rdx_4 = *rax_14
        (*(rdx_4 + 0x20))(rax_14, rdx_4)

jump(*(*arg1 + 0x620))
