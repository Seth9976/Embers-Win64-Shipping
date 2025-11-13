// 函数: sub_141d3ead0
// 地址: 0x141d3ead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*(arg1 + 0x5d0) + 0x20))(arg1 + 0x5d0)
void* result_1 = result

if (result != 0)
    void* r14_1 = *(arg1 + 0x5c8)
    int64_t rdx_1 = *(r14_1 + 0xb0)
    int32_t rax_1 = (*(rdx_1 + 0x48))(r14_1 + 0xb0, rdx_1)
    int64_t rdx_2 = *(result_1 + 0x50)
    int64_t rbx_1 = sx.q(rax_1)
    result = (*(rdx_2 + 0x48))(result_1 + 0x50, rdx_2)
    
    if (rbx_1.d == result.d)
        if (rbx_1.d s> 0)
            char* rsi_1 = nullptr
            int128_t* r15_1 = nullptr
            float zmm6[0x4]
            float var_38_1[0x4] = zmm6
            float zmm7[0x4]
            float var_48_1[0x4] = zmm7
            
            do
                if (rsi_1[*(result_1 + 8)] == 0)
                    *(*(r14_1 + 0xd0) + (rsi_1 << 2)) = *(*(result_1 + 0x88) + (rsi_1 << 2))
                    int64_t rcx_4 = *(result_1 + 0x58)
                    int64_t rax_5 = *(r14_1 + 0xb8)
                    int64_t rdi_1 = *(result_1 + 0x28)
                    *(r15_1 + rax_5) = *(r15_1 + rcx_4)
                    *(r15_1 + rax_5 + 0x10) = *(r15_1 + rcx_4 + 0x10)
                    *(r15_1 + rax_5 + 0x20) = *(r15_1 + rcx_4 + 0x20)
                    zmm7 = *(r15_1 + rdi_1 + 0x10)
                    int64_t rax_6 = *(arg1 + 0x278)
                    float var_50_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)[0]
                    float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    void* rbx_2 = *(rax_6 + (rsi_1 << 3))
                    sub_14177af60(rbx_2, 1, 1)
                    *(rbx_2 + 0x18) = (_mm_unpacklo_ps(zmm7, temp0_2[0].q)).q
                    *(rbx_2 + 0x20) = var_50_1
                    zmm6 = *(r15_1 + rdi_1)
                    void* rbx_3 = *(*(arg1 + 0x278) + (rsi_1 << 3))
                    sub_14177af60(rbx_3, 2, 1)
                    *(rbx_3 + 0x30) = zmm6
                
                *(*(r14_1 + 0x190) + (rsi_1 << 2)) = *(*(result_1 + 0xd0) + (rsi_1 << 2))
                result = *(r14_1 + 0x130)
                int64_t rcx_7
                rcx_7.b = rsi_1[*(result_1 + 8)] == 0
                r15_1 = &r15_1[3]
                *(rsi_1 + result) = rcx_7.b
                rsi_1 = &rsi_1[1]
            while (rsi_1 s< rbx_1)
        
        *(r14_1 + 0xa8) = 1
        
        if (*(arg1 + 0x310) != 0)
            void* rax_12 = *(arg1 + 0x320)
            void* rcx_8 = arg1 + 0x330
            
            if (rax_12 != 0)
                rcx_8 = rax_12
            
            return (*(arg1 + 0x310))((*(*rcx_8 + 8))(rcx_8), result_1)

return result
