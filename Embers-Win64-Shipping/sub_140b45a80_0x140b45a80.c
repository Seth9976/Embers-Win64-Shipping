// 函数: sub_140b45a80
// 地址: 0x140b45a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = GetCurrentThreadId()
data_1439a92f9 = 0
data_143de8170 = rax
bool z

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
    z = true
else
    *(arg1 + 8)
    z = false

if (z)
    bool z_1
    
    do
        float zmm0_1[0x4]
        float zmm7_1[0x4]
        int32_t zmm8_1
        int32_t zmm9_1
        zmm0_1, zmm7_1, zmm8_1, zmm9_1 = sub_140b43850(*(arg1 + 0x18))
        float zmm6_1 = zmm0_1[0]
        
        if (data_143de817a != 0)
            zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140b39850(*(arg1 + 0x18))
            int64_t* rcx_2 = *(*(arg1 + 0x18) + 0x48)
            (*(*rcx_2 + 0x10))(rcx_2)
        
        zmm7_1[0] = zmm7_1[0] - zmm6_1
        float temp0_1[0x4] = _mm_max_ss(zmm7_1[0], zmm8_1)
        temp0_1[0] = temp0_1[0] f* zmm9_1
        sub_140b73230(temp0_1)
        
        if (0 == *(arg1 + 8))
            *(arg1 + 8) = 0
            z_1 = true
        else
            *(arg1 + 8)
            z_1 = false
    while (z_1)

return 0
