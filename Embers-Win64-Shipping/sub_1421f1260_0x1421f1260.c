// 函数: sub_1421f1260
// 地址: 0x1421f1260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
int32_t arg_10
void arg_18
sub_141fe3550(arg1 + 0x38, &arg_18, &arg_10)
float arg_8
void arg_20
int64_t result = sub_141fe3550(arg1 + 0x68, &arg_20, &arg_8)
void* rbx = *(arg1 + 0x90)
int32_t rdi = 1
float zmm7[0x4] = zx.o(0)
float zmm0_1[0x4]
float zmm1
float zmm2

if (rbx != 0)
    void* rax
    rax, zmm0_1 = sub_1424a03a0()
    void* rdx_2 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38))
        int64_t result_1 = result
        result = *(rdx_2 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            result = (**(rbx + 0x28))(rbx + 0x28, rdx_2)
            int32_t r14_1 = result.d
            
            if (result.d s> 1)
                int64_t r8_3 = *(rbx + 0x28)
                zmm8 = zx.o(0)
                (*(r8_3 + 0x18))(rbx + 0x28, zx.q((result - 1).d), r8_3)
                int64_t r8_4 = *(rbx + 0x28)
                (*(r8_4 + 0x18))(rbx + 0x28, 0, r8_4)
                int64_t rax_2 = *(rbx + 0x28)
                zmm9 = _mm_max_ss(zmm0_1[0], 0)
                zmm0_1[0] = zmm0_1[0] - zmm9[0]
                float temp0_2[0x4] = _mm_max_ss(zmm0_1[0], 0x3f800000)
                (*(rax_2 + 0x20))(rbx + 0x28, 0, 0)
                int32_t rbp_1 = 1
                float zmm13[0x4] = zmm0_1
                int128_t zmm12
                zmm12.d = 1f / temp0_2[0]
                
                do
                    (*(*(rbx + 0x28) + 0x18))(rbx + 0x28, zx.q(rbp_1))
                    result = (*(*(rbx + 0x28) + 0x20))(rbx + 0x28, 0, zx.q(rbp_1))
                    rbp_1 += 1
                    zmm2 = zmm0_1[0] - zmm9[0]
                    zmm1 = zmm0_1[0] + zmm13[0]
                    zmm9 = zmm0_1
                    zmm13 = zmm0_1
                    zmm8[0] = zmm8[0] + zmm1 * 0.5f * zmm2 f* zmm12.d
                while (rbp_1 s< r14_1)
                
                arg_8 = zmm8[0]

void* rbx_2 = *(arg1 + 0x60)

if (rbx_2 == 0)
    zmm0_1 = arg_8
    zmm0_1[0] = zmm0_1[0] f* arg_10
else
    void* rax_5
    rax_5, zmm0_1 = sub_1424a03a0()
    void* rdx_5 = *(rbx_2 + 0x10)
    result = sx.q(*(rax_5 + 0x38))
    
    if (result.d s> *(rdx_5 + 0x38))
        zmm0_1 = arg_8
        zmm0_1[0] = zmm0_1[0] f* arg_10
    else
        int64_t result_2 = result
        result = *(rdx_5 + 0x30)
        
        if (*(result + (result_2 << 3)) != rax_5 + 0x30)
            zmm0_1 = arg_8
            zmm0_1[0] = zmm0_1[0] f* arg_10
        else
            result = (**(rbx_2 + 0x28))(rbx_2 + 0x28, rdx_5)
            int32_t rsi_1 = result.d
            
            if (result.d s<= 1)
                zmm0_1 = arg_8
                zmm0_1[0] = zmm0_1[0] f* arg_10
            else
                int64_t r8_7 = *(rbx_2 + 0x28)
                (*(r8_7 + 0x18))(rbx_2 + 0x28, zx.q((result - 1).d), r8_7)
                int64_t r8_8 = *(rbx_2 + 0x28)
                (*(r8_8 + 0x18))(rbx_2 + 0x28, 0, r8_8)
                int64_t rax_7 = *(rbx_2 + 0x28)
                zmm8 = _mm_max_ss(zmm0_1[0], 0)
                zmm0_1[0] = zmm0_1[0] - zmm8[0]
                float temp0_4[0x4] = _mm_max_ss(zmm0_1[0], 0x3f800000)
                (*(rax_7 + 0x20))(rbx_2 + 0x28, 0, 0)
                zmm9 = zmm0_1
                int128_t zmm10
                zmm10.d = 1f / temp0_4[0]
                
                do
                    (*(*(rbx_2 + 0x28) + 0x18))(rbx_2 + 0x28, zx.q(rdi))
                    result = (*(*(rbx_2 + 0x28) + 0x20))(rbx_2 + 0x28, 0, zx.q(rdi))
                    rdi += 1
                    zmm1 = zmm0_1[0] - zmm8[0]
                    zmm2 = zmm0_1[0] + zmm9[0]
                    zmm8 = zmm0_1
                    zmm9 = zmm0_1
                    zmm7[0] = zmm7[0] + zmm2 * arg_8 * 0.5f * zmm1 f* zmm10.d
                while (rdi s< rsi_1)

return result
