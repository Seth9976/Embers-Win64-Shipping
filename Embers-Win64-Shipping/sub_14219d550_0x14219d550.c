// 函数: sub_14219d550
// 地址: 0x14219d550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]
int64_t rdi = sx.q(arg2)
int128_t zmm6 = arg3
int512_t zmm1

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        float zmm0_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        uint64_t rax
        rax, zmm1, zmm6 = sub_14218e220(arg1, zmm0_1)

if (rdi.d s< 0 || rdi.d s>= arg1[0xc1].d)
    return 

int64_t* rcx_4 = *(arg1[0xc0] + (rdi << 3))

if (rcx_4 != 0)
    zmm1.o = zmm6
    (*(*rcx_4 + 0x1a8))(rcx_4, zmm1, zx.q(arg4))
