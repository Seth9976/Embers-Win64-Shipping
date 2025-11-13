// 函数: sub_140ba8e10
// 地址: 0x140ba8e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140bbdae0(arg1, zx.o(0))
sub_140bbdcf0(arg1, zx.o(0))
int512_t zmm1_2

if (*(arg1 + 0xc0) != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t* rcx_2 = *(arg1 + 0xc0)
    
    if (*(rcx_2 + 0x61) == 0)
        zmm1_2.o = zx.o(0)
        (*(*rcx_2 + 8))(rcx_2, zmm1_2)
        rcx_2 = *(arg1 + 0xc0)
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    *(arg1 + 0xc0) = 0

int64_t* rcx_3 = *(arg1 + 8)
int64_t result = *rcx_3 - rcx_3[2]
*(arg1 + 0xd8) += result
__builtin_memset(rcx_3, 0, 0x18)
int64_t rcx_4 = *(arg1 + 0xc8)

if (rcx_4 != 0)
    result, zmm1_2 = sub_140a74f90(rcx_4)

int64_t* rcx_5 = *(arg1 + 0xa0)
*(arg1 + 0xc8) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe8) = 0

if (rcx_5 != 0)
    if (*(rcx_5 + 0x61) == 0)
        zmm1_2.o = zx.o(0)
        result = (*(*rcx_5 + 8))(rcx_5, zmm1_2)
        rcx_5 = *(arg1 + 0xa0)
    
    if (rcx_5 != 0)
        result = (**rcx_5)(rcx_5, 1)
    
    *(arg1 + 0xa0) = 0

return result
