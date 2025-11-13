// 函数: sub_14219d410
// 地址: 0x14219d410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
void* rcx = arg1[0xca]

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
        
        int64_t performanceCount_1[0x2]
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0_1)

if (rdi.d s< 0 || rdi.d s>= arg1[0xc1].d)
    return 

int64_t* rcx_4 = *(arg1[0xc0] + (rdi << 3))

if (rcx_4 == 0)
    return 

int64_t zmm0 = *arg3
int32_t var_40_1 = arg3[1].d
int64_t rax_5 = *rcx_4
int64_t var_48 = zmm0
(*(rax_5 + 0x198))(zmm0, &var_48, zx.q(arg4))
