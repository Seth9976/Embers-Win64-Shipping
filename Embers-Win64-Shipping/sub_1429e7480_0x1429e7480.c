// 函数: sub_1429e7480
// 地址: 0x1429e7480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(arg2 + 0xc8) s>= arg3 && *(arg2 + 0xb8) != 1))
    return 

void* r15_1 = *(arg2 + 0xc0)
int64_t* r14_1 = *(r15_1 + 0x18)
void* rsi_1 = *r14_1
EnterCriticalSection(&r14_1[9])

if (*(arg2 + 0xc8) s< arg3)
    while (*(rsi_1 + 0x4820) == arg2)
        if (*(arg2 + 0xb8) == 1)
            break
        
        SleepConditionVariableCS(&r14_1[0xe], &r14_1[9], 0xffffffff)
        
        if (*(arg2 + 0xc8) s>= arg3)
            break

if (*(arg2 + 0xb8) == 1)
    int64_t* rbx_2 = *(arg1 + 0x18)
    LeaveCriticalSection(*(r15_1 + 0x18) + 0x48)
    sub_1429da010(*rbx_2 + 0x270, 7, "Worker %p failed to decode frame", arg1)

LeaveCriticalSection(*(r15_1 + 0x18) + 0x48)
