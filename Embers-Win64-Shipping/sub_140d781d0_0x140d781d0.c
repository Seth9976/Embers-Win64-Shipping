// 函数: sub_140d781d0
// 地址: 0x140d781d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = arg3 * arg4
void* lpBits_2 = nullptr
int32_t var_4c = 0
void* lpBits_1 = nullptr
int32_t i_2 = i_3

if (i_3 s> 0)
    sub_1406105e0(&lpBits_2)
    i_2 = i_3
    lpBits_1 = lpBits_2

lpBits_2 = nullptr
void* lpBits = nullptr
int32_t var_4c_1 = 0
int32_t i_4 = i_3

if (i_3 s> 0)
    sub_1405daba0(&lpBits_2)
    lpBits = lpBits_2

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    char* rcx_2 = arg2 + 1
    void* lpBits_3 = lpBits
    uint64_t i
    
    do
        char rax_1 = rcx_2[1]
        lpBits_3 += 1
        char rax_2 = *rcx_2
        rcx_2 = &rcx_2[4]
        char arg_19 = rax_2
        char arg_1a = rcx_2[-5]
        char arg_1b = rcx_2[-2]
        *(lpBits_1 - arg2 + rcx_2 - 5) = rax_1.d
        *(lpBits_3 - 1) = 0xff
        i = i_1
        i_1 -= 1
    while (i != 1)

HBITMAP ho = CreateBitmap(arg3, arg4, 1, 0x20, lpBits_1)
HBITMAP ho_1 = CreateBitmap(arg3, arg4, 1, 8, lpBits)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg3))
ICONINFO piconinfo
piconinfo.__offset(0xc).d = 0
piconinfo.fIcon = 0
piconinfo.hbmColor = ho
piconinfo.hbmMask = ho
zmm1.d = zmm1.d f* arg5
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t rax_6 = int.d(zmm1.d)
zmm1 = _mm_cvtepi32_ps(zx.o(arg4))
piconinfo.xHotspot = rax_6 s>> 1
zmm1.d = zmm1.d f* arg6
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
piconinfo.yHotspot = int.d(zmm1.d) s>> 1
HICON result = CreateIconIndirect(&piconinfo)
DeleteObject(ho)
DeleteObject(ho_1)

if (lpBits != 0)
    sub_140a74f90(lpBits)

if (lpBits_1 != 0)
    sub_140a74f90(lpBits_1)

return result
