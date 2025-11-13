// 函数: sub_141f59870
// 地址: 0x141f59870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c7a08 s<= 1 && *(arg1 + 0x14f) == 2)
    TEB* gsbase
    
    if (data_143f3bc28
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3bc28)
        
        if (data_143f3bc28 == 0xffffffff)
            int64_t* rcx_6 = data_143db18d0
            
            if (rcx_6 == 0)
                sub_140a53c40()
                rcx_6 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_11 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.MobileNumDynamicPointLights", r8_1)
            
            if (rax_11 != 0)
                int64_t rdx_4 = *rax_11
                rax_11 = (*(rdx_4 + 0x58))(rax_11, rdx_4)
            
            data_143f3bc20 = rax_11
            _Init_thread_footer(&data_143f3bc28)
    
    int64_t rbx_1 = data_143f3bc20
    int64_t rcx
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_1 + (rcx << 2)) s<= 0)
        return 0

void*** result = j_sub_140a82f30(0x1c0)

if (result == 0)
    return 0

sub_1420f35b0(result, arg1)
*result = &data_14326e390
result[0x30].d = *(arg1 + 0x33c)
*(result + 0x184) = arg1[0x68].d
result[0x31].d = *(arg1 + 0x344)
*(result + 0x18c) = arg1[0x69].d
result[0x32].d ^= (arg1[0x67].d ^ result[0x32].d) & 1
sub_142103d90(result, arg1[0x65].d)
float zmm9[0x4] = zx.o(0)
int32_t rax_8

if (0f f!= *(result + 0x18c))
    rax_8.b = 0
else
    rax_8.b = 0x40

*(result + 0x13a) &= 0xbf
*(result + 0x13a) |= rax_8.b
*result = &data_143280250
float zmm0[0x4] = arg1[0x6a].d

if (not(zmm0[0] < 0f))
    zmm9 = __minss_xmmss_memss(zmm0[0], 0x42b20000)

zmm9[0] = zmm9[0] * 0.0174532924f
zmm0 = *(arg1 + 0x354)
zmm0[0] = zmm0[0] * 0.0174532924f
float zmm8[0x4] = zmm9
zmm8[0] = zmm8[0] + 0.00100000005f

if (not(zmm0[0] < zmm8[0]))
    zmm8 = __minss_xmmss_memss(zmm0[0], 0x3fc6f4b7)

result[0x33].d = zmm8[0]
float zmm0_1[0x4]
float zmm7[0x4]
float _X
float zmm9_1[0x4]
zmm0_1, zmm7, _X, zmm9_1 = __libm_sse2_sincosf_(zmm8)
result[0x35].d = zmm0_1[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
result[0x34].d = temp0_3[0]
float zmm0_2 = cosf(zmm9_1[0])
zmm9_1 = 0x3f800000
*(result + 0x19c) = zmm0_2
*(result + 0x1a4) = 1f / (zmm0_2 - temp0_3[0])
*(result + 0x1ac) = 1f / tanf(_X)
float zmm2[0x4] = arg1[0x6b].d
zmm2[0] = zmm2[0] * 0.0174532924f

if (not(zmm2[0] < zmm7[0]))
    zmm7 = __minss_xmmss_memss(zmm2[0], 0x3fc6f4b7)

float zmm0_4[0x4] = cosf(zmm7[0])
zmm7[0] = zmm7[0] * 0.5f
result[0x36].d = zmm0_4[0]
zmm9_1[0] = 1f / (cosf(zmm7[0]) - zmm0_4[0])
*(result + 0x1b4) = zmm9_1[0]
return result
