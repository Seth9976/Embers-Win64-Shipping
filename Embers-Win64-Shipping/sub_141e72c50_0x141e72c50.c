// 函数: sub_141e72c50
// 地址: 0x141e72c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t rbp = arg1[1].d
void* rsi = *(rbx + 0x48)
int64_t rax_1 = (*(*arg3 + 0x18))(arg3)

if (rax_1 != 0)
    int64_t* rax_2 = j_sub_140a82f30(0x18)
    rax_2[1] = rbx
    *rax_2 = rax_1
    rax_2[2].d = rbp
    EnterCriticalSection(rsi + 0xd0)
    int64_t rsi_1 = sx.q(*(rsi + 0xc8))
    int32_t rcx_2 = (rsi_1 + 1).d
    *(rsi + 0xc8) = rcx_2
    
    if (rcx_2 s> *(rsi + 0xcc))
        sub_1405a4d70(rsi + 0xc0)
    
    *(*(rsi + 0xc0) + (rsi_1 << 3)) = rax_2
    
    if (rsi != -0xd0)
        LeaveCriticalSection(rsi + 0xd0)

void* result = *arg1
*(result + 8) -= 1
return result
