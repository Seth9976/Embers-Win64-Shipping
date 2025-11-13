// 函数: sub_142772f50
// 地址: 0x142772f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = data_143f879f0
int64_t* rsi = arg2

if (rbp == 0)
    uint64_t result
    result.b = 0
    return result

arg1[0x19] = 0
arg1[0x1a] = 0
TEB* gsbase
void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f87a20 s> *(rbx_1 + 0x14))
    int64_t r8_1
    r8_1, arg5 = _Init_thread_header(&data_143f87a20)
    
    if (data_143f87a20 == 0xffffffff)
        int64_t* rcx_9 = data_143db18d0
        
        if (rcx_9 == 0)
            sub_140a53c40()
            rcx_9 = data_143db18d0
        
        r8_1.b = 1
        data_143f87a18 = (*(*rcx_9 + 0xb0))(rcx_9, u"voice.SilenceDetectionAttackTime", r8_1)
        arg5 = _Init_thread_footer(&data_143f87a20)

if (data_143f87a30 s> *(rbx_1 + 0x14))
    int64_t r8_2
    r8_2, arg5 = _Init_thread_header(&data_143f87a30)
    
    if (data_143f87a30 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        r8_2.b = 1
        data_143f87a28 = (*(*rcx_10 + 0xb0))(rcx_10, u"voice.SilenceDetectionReleaseTime", r8_2)
        arg5 = _Init_thread_footer(&data_143f87a30)

int64_t* rcx_1 = data_143f87a28
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(arg3))
(*(*rcx_1 + 0x98))(rcx_1)
int64_t* rcx_2 = data_143f87a18
(*(*rcx_2 + 0x98))(rcx_2)
float zmm0
float zmm7_1
zmm0, zmm7_1 = sub_141c3ad50(&arg1[0x28], zmm7, arg5.d, arg5, 2, 0)
int64_t* rcx_4 = data_143f87a18
(*(*rcx_4 + 0x98))(rcx_4)
int32_t rbx_2 = int.d(zmm0 * zmm7_1 * 0.00100000005f)
sub_142772a90(&arg1[0x22], rbx_2 + 1)
int32_t rcx_6 = arg1[0x24].d
int32_t rcx_7 = rcx_6 - rbx_2

if (rcx_6 - rbx_2 s< 0)
    rcx_7 += arg1[0x23].d

*(arg1 + 0x124) = rcx_7
arg1[0x2f].d = zmm7_1
arg1[0x31].b = 1
arg1[0x2d].b = 0

if (rsi[1].d s<= 1)
    rsi = rbp + 0x30

return sub_1427711b0(arg1, rsi, arg3, arg4)
