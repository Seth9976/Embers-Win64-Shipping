// 函数: sub_140aaac10
// 地址: 0x140aaac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi_1 = *(arg1 + 8) + 0x1d0
EnterCriticalSection(&rsi_1[3])

if (rsi_1[2].d == 0)
    void* i = *rsi_1
    
    while (i != 0)
        void* i_2 = i
        i = *(i + 0x1b0000)
        j_sub_140a74f90(i_2)
    
    __builtin_memset(rsi_1, 0, 0x14)

if (rsi_1 != -0x18)
    LeaveCriticalSection(&rsi_1[3])

int64_t* rsi_3 = *(arg1 + 8) + 0x210
EnterCriticalSection(&rsi_3[3])

if (rsi_3[2].d == 0)
    void* i_1 = *rsi_3
    
    while (i_1 != 0)
        void* i_3 = i_1
        i_1 = *(i_1 + 0x10000)
        j_sub_140a74f90(i_3)
    
    __builtin_memset(rsi_3, 0, 0x14)

if (rsi_3 != -0x18)
    LeaveCriticalSection(&rsi_3[3])

int64_t result
result.b = 1
return result
