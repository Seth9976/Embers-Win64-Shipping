// 函数: sub_1406154a0
// 地址: 0x1406154a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd0) != 0)
    return 

sub_140615620(arg1)
*(arg1 + 0x230) = arg2
*(arg1 + 0x231) = arg3
int64_t* rax
double zmm0_1

if (arg3 == 0)
    *(arg1 + 0x138) = sub_140610b90
    
    if (arg2 == 0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        if (*(arg1 + 0xd0) == arg2 && *(arg1 + 0xc8) != 0)
            zmm0_1 = float.d(zx.q(performanceCount.d))
        label_140615573:
            *(arg1 + 0x170) = zmm0_1
            *(arg1 + 0xd0) = 1
            *(arg1 + 0xd8)
            (***(arg1 + 0x178))()
else
    *(arg1 + 0x138) = 0
    
    if (arg2 == 0)
        rax = *(arg1 + 0xa8)
        
        if (rax == 0)
            rax = sub_141ee69e0(arg1)
        
        if (*(arg1 + 0xd0) == 0 && *(arg1 + 0xc8) != 0)
            zmm0_1.d = rax[0xa4].d.d f* 1000f
            zmm0_1 = _mm_cvtps_pd(zmm0_1)
            goto label_140615573

if (*(arg1 + 0x230) == 0)
    return 

rax = j_sub_140a82f30(0x20)
void*** rdi_1 = rax

if (rax == 0)
    rdi_1 = nullptr
else
    char rdx = *(arg1 + 0x231)
    rdi_1[2] = arg1 + 0xc8
    rdi_1[3].b = rdx
    *rdi_1 = &data_142d642d8
    rdi_1[1] = sub_140a6e140(rdi_1, u"FMidiProcessorWorker", 0, 2, -1, 0)

*(arg1 + 0x228) = rdi_1
