// 函数: sub_140a59900
// 地址: 0x140a59900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = 0x10

if (arg3 u>= 0x10)
    r15 = zx.q(arg3)

if (arg2 u<= 1)
    arg2 = 1

int64_t rbp_2 = (arg2 - 1 + zx.q(r15.d)) & not.q(r15 - 1)
uint64_t rax_3 = zx.q(data_143db71c0)
uint64_t r14_2 = (rax_3 - 1 + rbp_2) & not.q(rax_3 - 1)
EnterCriticalSection(arg1 + 0x888)
void* result = sub_140a3f110(arg1 + 0x478, r14_2, 0x4000000, arg1 + 0x478, 
    (zx.q(*(arg1 + 0x880)) << 4) + arg1 + 0x478, arg1 + 0x880, arg1 + 0x878)

if (result == 0)
    sub_140a4c430(r14_2, 0)

void* rax_7 = sub_140a59140(arg1, result, 0x17ea, 0)

if (arg1 != -0x888)
    LeaveCriticalSection(arg1 + 0x888)

void* result_1

if ((result & (r15 - 1)) != 0)
    result_1 = result
    sub_140af98a0("Unknown", 0x326, 
        FMallocBinned2 alignment was too large for OS. Alignment=%d   Ptr=%p", zx.q(r15.d))
    sub_140afbb40()

int16_t rax_8 = *(rax_7 + 2)

if (rax_8 != 0x17ea)
    result_1.d = 0x17ea
    sub_140af98a0("Unknown", 0x93, MallocBinned2 Corruption Canary was 0x%x, should be 0x%x", 
        zx.q(rax_8))
    sub_140afbb40()

*(rax_7 + 4) = (rbp_2 u>> 4).d
*(rax_7 + 8) = r14_2
return result
