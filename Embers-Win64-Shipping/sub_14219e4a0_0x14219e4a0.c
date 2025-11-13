// 函数: sub_14219e4a0
// 地址: 0x14219e4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]
int128_t zmm6 = zx.o(0)

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        float zmm0
        float zmm6_1
        zmm0, zmm6_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0 = sub_140b732d0(zmm6_1)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        arg3, zmm6 = sub_14218e220(arg1, zmm0)

if (data_143a2ed00 != 0)
    *(arg1 + 0x432) |= 0x40
    char rax_5 = sub_140d23dc0(arg1, 0x30)
    char rcx_5 = arg1[0x86].b
    char rdx
    
    if ((*(arg1 + 0x8a) & 1) == 0 || (rcx_5 & 0x10) != 0)
        rdx = 0
    else
        rdx = 0x20
    
    int64_t rsi
    rsi.b = 0
    rcx_5 = (rcx_5 & 0xde) | rdx
    arg1[0x86].b = rcx_5
    
    if (arg2 != arg1[0x81])
        rsi.b = 1
        arg1[0x86].b = rcx_5 & 0xf3
    
    if (rax_5 == 0)
        zmm6 = sub_142199780(arg1, rsi.b, arg3)
    
    arg1[0x81] = arg2
    
    if (arg2 != 0)
        zmm6 = *(arg2 + 0x38)
    
    *(arg1 + 0x4ac) = zmm6.d
    *(arg1 + 0x4b4) = 0
    
    if (arg2 != 0 && (arg1[0x11].b & 1) != 0)
        if (*(arg1 + 0x89) s< 0)
            if (rax_5 != 0)
                sub_142195230(arg1)
            else
                sub_142185b40(arg1, 0)
        else if ((arg1[0x86].b & 0x20) == 0 || rax_5 != 0)
            sub_142195230(arg1)
        else
            sub_142185b40(arg1, 0)
        
        if (arg1[0x7d] == 0 || rsi.b != 0)
            sub_141ee8490(arg1)
else
    arg1[0x81] = 0

if ((arg1[0x11].b & 0x20) == 0 && arg1[0x83].d != 0)
    sub_141ee8490(arg1)

arg1[0x83].d = 0

if (*(arg1 + 0x41c) != 0)
    sub_1405c5570(&arg1[0x82], 0)

int32_t i = 0

if (arg1[0xc1].d s> 0)
    int64_t* rdx_2 = nullptr
    
    do
        void* r8_1 = *(rdx_2 + arg1[0xc0])
        
        if (r8_1 != 0)
            *(r8_1 + 0x20) = 0
        
        i += 1
        rdx_2 = &rdx_2[1]
    while (i s< arg1[0xc1].d)

void* result = arg1[0x7d]

if (result != 0)
    *(result + 0x168) |= 4

if (data_143a2ef90 != 0)
    result = arg1[0x81]
    
    if (result != 0 && (*(result + 0xb1) & 2) != 0 && arg1[9].d s<= 1 && arg1[0x1b].d == 0)
        *(arg1 + 0x3a) &= 0xfb

return result
