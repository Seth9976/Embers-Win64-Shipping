// 函数: sub_14219adb0
// 地址: 0x14219adb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
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
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0_1)

if (arg1[0xc1].d s<= 0)
    return 

int64_t rsi_1 = 0

do
    int64_t* rcx_4 = *(rsi_1 + arg1[0xc0])
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x58))(rcx_4)
    
    i += 1
    rsi_1 += 8
while (i s< arg1[0xc1].d)
