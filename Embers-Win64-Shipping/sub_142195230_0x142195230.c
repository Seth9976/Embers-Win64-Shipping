// 函数: sub_142195230
// 地址: 0x142195230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]
int64_t performanceCount

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        float zmm0_1 = sub_14218eae0(&data_143a2edd8)
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0_1)

if ((arg1[0x11].b & 1) != 0 && arg1[0xb1] != 0)
    if (data_143a2ed00 != 0 && zx.d(arg1[0x2a].b) s<= data_143a30368:4.d
            && sub_140d23dc0(arg1, 0x30) != 1)
        void* rcx_5 = arg1[0x81]
        
        if (rcx_5 != 0)
            *(arg1 + 0x4fc) = *(rcx_5 + 0xa8)
            
            if ((*(rcx_5 + 0xb1) & 1) != 0)
                int32_t rax_6 = *(arg1 + 0x614) * 0xbb38435 + 0x3619636b
                *(arg1 + 0x614) = rax_6
                float zmm1 = *(rcx_5 + 0xac)
                performanceCount.d = rax_6 u>> 9 | 0x3f800000
                *(arg1 + 0x4fc) = (*(rcx_5 + 0xa8) - zmm1) * (performanceCount.d - 1f) + zmm1
        
        uint8_t rax
        int64_t rdx_1
        rax, rdx_1 = (*(*arg1 + 0x998))(arg1)
        
        if ((arg1[0x11].b & 1) != 0)
            bool cond:0_1 = (*(arg1 + 0x8a) & 1) != 0
            *(arg1 + 0x4c4) = 0
            
            if (not(cond:0_1) && (*(arg1 + 0x89) & 0x80) != 0 && (arg1[0x86].b & 0x10) == 0)
                rdx_1.b = 1
                (*(*arg1 + 0x278))(arg1, rdx_1, 0)
else if (data_143de5426 == 0 && arg1[0x15] == 0)
    return sub_141ee69e0(arg1) __tailcall
