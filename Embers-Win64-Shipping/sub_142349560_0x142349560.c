// 函数: sub_142349560
// 地址: 0x142349560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result_2 = 0
TEB* gsbase

if (data_143f58d88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f58d88)
    
    if (data_143f58d88 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_8 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.SkeletalMeshLODRadiusScale", r8_2)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_2 = *rax_8
            rax_9 = (*(rdx_2 + 0x60))(rax_8, rdx_2)
        
        data_143f58d80 = rax_9
        _Init_thread_footer(&data_143f58d88)

float zmm6[0x4] = *(data_143f58d80 + 4)

if (zmm6[0] >= 0.25f)
    __minss_xmmss_memss(zmm6[0], 0x3f800000)

float zmm1 = arg3[1]
float var_48 = *arg3
float var_44 = zmm1
float var_40 = arg3[2]
int32_t var_3c = 0x3f800000
float zmm0_1[0x4]
int32_t zmm6_1
zmm0_1, zmm6_1 = sub_1422dff00(&var_48, arg3[6], arg2)
int64_t rax_3 = *arg1
float zmm8[0x4] = zmm0_1
zmm8[0] = zmm8[0] f* zmm6_1
zmm8[0] = zmm8[0] f* zmm6_1
int32_t rax_4 = (*(rax_3 + 0x60))(arg1)
void* rcx_2 = *arg2

if (rcx_2 != 0 && (*(rcx_2 + 0x2c) & 0x10) != 0)
    uint32_t i_1 = *(arg1[8] + 8) - 1
    
    if (i_1 s> 0)
        int64_t i = sx.q(i_1)
        int128_t* rax_6 = i * 0xb8 + arg1[9]
        
        do
            zmm0_1 = *rax_6
            
            if (i s<= sx.q(rax_4))
                zmm0_1[0] = zmm0_1[0] f+ *(rax_6 + 4)
            
            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
            zmm0_1[0] = zmm0_1[0] * 0.25f
            
            if (zmm0_1[0] > zmm8[0])
                result_2 = i_1
                break
            
            i_1 -= 1
            i -= 1
            rax_6 -= 0xb8
        while (i s> 0)

uint32_t result = zx.d(arg5)
int32_t rdx_1 = arg1[0xc].d

if (result_2 s>= result)
    result = result_2

if (rdx_1 == 0)
    arg1[6].d = result

zmm0_1 = *(arg1 + 0x34)
uint32_t result_1 = arg1[6].d

if (arg4 == rdx_1)
    float temp0_2[0x4] = _mm_max_ss(zmm0_1[0], zmm8[0])
    
    if (result_1 s<= result)
        result = result_1
    
    arg1[6].d = result
    *(arg1 + 0x34) = temp0_2[0]
else
    *(arg1 + 0x2c) = zmm0_1[0]
    arg1[5].d = result_1
    arg1[0xc].d = arg4
    arg1[6].d = result
    *(arg1 + 0x34) = zmm8[0]

return result
