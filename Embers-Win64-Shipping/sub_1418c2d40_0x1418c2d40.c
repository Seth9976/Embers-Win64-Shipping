// 函数: sub_1418c2d40
// 地址: 0x1418c2d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x1a50)
void* rsi = *(rdi + 0x240)

if (*(rsi + 0x78) != 0)
    sub_1418c86c0(rsi, 0, 0)

void* rsi_1 = *(rsi + 0x70)

if (rsi_1 == 0)
    return 

char rcx_1 = *(rsi_1 + 0x2c)

if (rcx_1 - 1 u> 1)
    return 

if (rcx_1 == 2)
    sub_1418e06b0(rdi + 0x248, rsi_1)

sub_1418c8030(*(rdi + 0x240), nullptr)

if (data_143efb314 != 0)
    return 

int64_t* rdi_1 = *(rdi + 0x240)
EnterCriticalSection(&rdi_1[6])
int64_t rdx_2 = 0
double zmm0_1 = 10000000000.0
double zmm1_1 = 9.2233720368547758e+18
void* rbp_1 = *(rsi_1 + 0x90)

if (not(zmm0_1 < zmm1_1))
    zmm0_1 = zmm0_1 - zmm1_1
    
    if (not(zmm0_1 >= zmm1_1))
        rdx_2 = -0x8000000000000000

int32_t rax_4 = data_143efb7a8(*(*(*rdi_1 + 0x438) + 8), 1, rbp_1, 1, int.q(zmm0_1) + rdx_2)

if (rax_4 == 0)
    *(rbp_1 + 8) = 1
else if (rax_4 != 2)
    sub_141903f80(rax_4, "Result", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")

sub_1418c4d80(rsi_1)

if (rdi_1 != -0x30)
    LeaveCriticalSection(&rdi_1[6])
