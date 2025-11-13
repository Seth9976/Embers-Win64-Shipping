// 函数: sub_14219de40
// 地址: 0x14219de40
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
        int32_t zmm0_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0_1)

int64_t* rcx_4 = arg1[0x81]

if (rcx_4 == 0 || rcx_4[0xe].d == 0)
    return 

int32_t rsi_1 = (*(*rcx_4 + 0x270))(rcx_4) - 1
int32_t rax_6 = data_143f4d300
uint64_t rax = zx.q(rax_6 + arg2)

if (rax_6 + arg2 s< 0)
    rsi_1 = 0
else if (rax.d s< rsi_1)
    rsi_1 = rax.d

if (*(arg1 + 0x4b4) == rsi_1)
    return 

int64_t r8_1
rax, r8_1 = sub_141ee8490(arg1)
*(arg1 + 0x4b4) = rsi_1

if (arg1[0xc1].d s<= 0)
    return 

int64_t rsi_2 = 0

do
    int64_t* rcx_6 = *(rsi_2 + arg1[0xc0])
    
    if (rcx_6 != 0)
        r8_1.b = 1
        rax, r8_1 = (*(*rcx_6 + 0x50))(rcx_6, zx.q(*(arg1 + 0x4b4)), r8_1)
    
    i += 1
    rsi_2 += 8
while (i s< arg1[0xc1].d)
