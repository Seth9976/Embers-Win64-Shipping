// 函数: sub_141d83ed0
// 地址: 0x141d83ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(*arg1 + 0x150)

if (arg1[0x11].b != 0)
    sub_141c6d5f0(rdx(), 0)
else
    if (rdx() != 0 && sub_142436920((*(*arg1 + 0x150))(arg1)) != 0)
        void* rax_7 = sub_142436920((*(*arg1 + 0x150))(arg1))
        *(rax_7 + 0x6c) |= 4
    
    int64_t* rcx_4 = arg1[9]
    (*(*rcx_4 + 0x28))(rcx_4)
    int128_t zmm6
    zmm6.d = fconvert.s(arg2)
    int64_t* rax_10
    int64_t rdx_1
    rax_10, rdx_1 = (*(*arg1 + 0x150))(arg1)
    int512_t zmm1
    zmm1.o = zmm6
    sub_141c709f0(rax_10, rdx_1, 0, zmm6)
    arg1[0x11].b = 1

arg1[0xf] = _mm_cvtps_pd(*((*(*arg1 + 0x150))(arg1) + 0x520))
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t result
result.b = 1
arg1[0x10] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
return result
