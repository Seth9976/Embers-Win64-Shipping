// 函数: sub_141f75da0
// 地址: 0x141f75da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
void* rbx = *(arg1 + 0x3e8)

if (rbx != 0)
    float zmm6[0x4] = *(arg1 + 0x204)
    void var_70
    int32_t* rax = sub_140acc920(&var_70, arg1 + 0x208)
    int128_t zmm8 = *(arg1 + 0x214)
    float zmm0_1 = zmm6[0]
    int32_t var_44_1 = zmm8.d
    float zmm1 = zmm6[0]
    zmm6[0] = zmm6[0] f* *rax
    zmm6[0] = zmm6[0] f* rax[3]
    zmm0_1 = zmm0_1 f* rax[1]
    zmm1 = zmm1 f* rax[2]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    temp0_1[0] = zmm0_1
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm1
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = zmm6[0]
    zmm6 = *(arg1 + 0x210)
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
    float var_88[0x4] = temp0_4
    float var_48_1 = zmm6[0]
    char rax_1 = sub_140a80f40()
    
    if (rax_1 != 0)
    label_141f75e78:
        result = sub_1419a2d00()
        *(rbx + 0xf0) = temp0_4
        *(rbx + 0x28) = zmm6[0]
        *(rbx + 0x2c) = zmm8.d
    else
        if (data_143f138f4 == rax_1)
            if (data_143de5480 == rax_1)
                goto label_141f75e78
            
            uint32_t rax_2
            rax_2.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_2.b != 0)
                goto label_141f75e78
        
        void** rax_3 = sub_141f5a3b0(&var_88, nullptr, 0xff)
        void* rcx_2 = *rax_3
        *(rcx_2 + 0x10) = rbx.o
        *(rcx_2 + 0x20) = temp0_4
        void* rcx_3 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_2 = rax_3[1]
        int64_t* rbx_1 = *(rcx_3 + 0x38)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        result = sub_1407c96b0(rcx_3, rdx_2, r8_1, 1)
        
        if (rbx_1 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_10)

return result
