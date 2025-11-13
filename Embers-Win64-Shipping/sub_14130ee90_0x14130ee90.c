// 函数: sub_14130ee90
// 地址: 0x14130ee90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143eb6308 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eb6308)
    
    if (data_143eb6308 == 0xffffffff)
        int64_t* rcx = data_143db18d0
        
        if (rcx == 0)
            sub_140a53c40()
            rcx = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_7 = (*(*rcx + 0xb0))(rcx, u"r.DepthOfFieldQuality", r8_1)
        
        if (rax_7 != 0)
            int64_t rdx = *rax_7
            rax_7 = (*(rdx + 0x58))(rax_7, rdx)
        
        data_143eb6300 = rax_7
        _Init_thread_footer(&data_143eb6308)

int32_t _X

if ((*(*arg2 + 0x28) & 0x4000) != 0 && *(data_143eb6300 + 4) s> 0)
    _X = (zx.o(0)).d

void* rax_2

if ((*(*arg2 + 0x28) & 0x4000) == 0 || *(data_143eb6300 + 4) s<= 0 || _X f>= arg2[0x21c].d
        || _X f>= *(arg2 + 0x1254))
    rax_2.b = 0
else
    rax_2.b = 1

*arg1 = 0
*(arg1 + 4) = 0x3f800000
arg1[3] = 0

if (rax_2.b != 0)
    _X = 1f f/ arg2[0x50].d
    float zmm6[0x4] = arg2[0x24a].d
    zmm6[0] = zmm6[0] * 0.5f
    float zmm0_1 = tanf(atanf(_X))
    int32_t rax_4 = arg2[0x2b4].d - arg2[0x2b3].d
    float zmm1 = 9.99999975e-06f f/ arg2[0x24b].d
    zmm6[0] = zmm6[0] / zmm0_1
    zmm0_1 = *(arg2 + 0x1254) * 10f
    zmm6[0] = zmm6[0] * zmm6[0]
    int32_t zmm3 = float.s(rax_4)
    int32_t zmm2 = zmm3 f* *(arg2 + 0x125c)
    zmm6[0] = zmm6[0] / ((zmm0_1 - zmm6[0]) f* arg2[0x21c].d)
    zmm6[0] = zmm6[0] f* zmm3
    zmm6[0] = zmm6[0] f/ arg2[0x24a].d
    zmm6[0] = zmm6[0] * 0.25f
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    temp0_1[0] = zmm1
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2 f* 0.00052083336f
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = zmm3 f* 0.00052083336f
    *arg1 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)

return arg1
