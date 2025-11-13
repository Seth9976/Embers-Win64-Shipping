// 函数: sub_141f29f60
// 地址: 0x141f29f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0x338)
uint128_t zmm6 = zx.o(*(arg2 + 0x330))
uint128_t zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
uint128_t zmm8 = zmm6.d
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
uint128_t zmm0
zmm0.d = zmm8.d f* zmm8.d
uint128_t zmm9 = rdi
zmm2.d = zmm2.d f+ zmm0.d
uint128_t zmm1
zmm1.d = zmm9.d f* zmm9.d
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f<= 9.99999994e-09f))
    uint128_t zmm3
    zmm3.d = zmm2.d
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0.d = temp0_1.d f* temp0_1[0]
    zmm1.d = zmm3.d f* zmm0.d
    zmm2.d = 0.5f f- zmm1.d
    zmm0.d = temp0_1.d f* zmm2.d
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm1.d = temp0_1.d f* temp0_1[0]
    zmm3.d = zmm3.d f* zmm1.d
    zmm0.d = temp0_1.d f* (0.5f f- zmm3.d)
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm8.d = zmm8.d f* temp0_1[0]
    zmm7.d = zmm7.d f* temp0_1[0]
    zmm9.d = zmm9.d f* temp0_1[0]
    zmm0.d = zmm8.d
    float arg_8 = temp0_1[0]
    _mm_shuffle_ps(zmm0, zmm0, 0xe1)
    zmm1.d = zmm7.d
    rdi = zmm9.d
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    uint64_t var_78_1 = zmm1.q
    zmm6 = zmm1

int32_t var_70
var_70.q = zmm6.q
char rax = sub_140a80f40()
int32_t result

if (rax != 0)
label_141f2a0ae:
    result = sub_1419a2d00()
    *(arg1 + 0x180) = zmm6.q
    *(arg1 + 0x188) = rdi
else
    if (data_143f138f4 == rax)
        if (data_143de5480 == rax)
            goto label_141f2a0ae
        
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b != 0)
            goto label_141f2a0ae
    
    void var_60
    int64_t* rax_2 = sub_141f0ee60(&var_60, nullptr, 0xff)
    void* rcx_1 = *rax_2
    *(rcx_1 + 0x10) = arg1.o
    *(rcx_1 + 0x20) = rdi.q
    void* rcx_2 = *rax_2
    int32_t r8_1 = rax_2[2].d
    int64_t* rdx = rax_2[1]
    int64_t* rbx_1 = *(rcx_2 + 0x30)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_14119c2b0(rcx_2, rdx, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)

return result
