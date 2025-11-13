// 函数: sub_142389d40
// 地址: 0x142389d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]

if (rbx[0xb].d != 0)
    EnterCriticalSection(&rbx[2])
    rbx[0xb].d = 3
    int64_t rsi
    rsi.b = rbx[0xb].d == 3
    int32_t i
    
    do
        int64_t r8_1
        
        if (rsi.b != 0 || *(rbx + 0x54) != rsi.b)
            r8_1 = 0
        else
            r8_1.b = 1
        
        i, r8_1 = (*(*rbx + 0x30))(rbx, 2, r8_1)
    while (i == 3)
    
    if (rsi.b == 0)
        rbx[0xb].d = i
    
    LeaveCriticalSection(&rbx[2])

void* result = arg1[1]
*(result + 0x40) -= 1

if (arg1 == 0)
    return result

jump(*(*arg1 + 0x10))
