// 函数: sub_14192d730
// 地址: 0x14192d730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
void* rbx = arg1[3]
void* rsi = *arg1

if (*(rdi + 0x61) == 0)
    arg2.d = fconvert.s(arg2)
    (*(*rdi + 8))(rdi, arg2)
    
    if (*(rdi + 0x61) == 0)
        int64_t rax_2
        rax_2.b = 0
        return rax_2

EnterCriticalSection(&data_143eff810)

if (*(rsi + 0xa4) == 2)
    *(rsi + 0xa4) = 3
    EnterCriticalSection(&data_143eff838)
    int64_t rdi_1 = sx.q(*(rbx + 0x138))
    int32_t rax_3 = (rdi_1 + 1).d
    *(rbx + 0x138) = rax_3
    
    if (rax_3 s> *(rbx + 0x13c))
        sub_1405a4d70(rbx + 0x130)
    
    *(*(rbx + 0x130) + (rdi_1 << 3)) = rsi
    LeaveCriticalSection(&data_143eff838)

LeaveCriticalSection(&data_143eff810)
int64_t rax_5
rax_5.b = 1
return rax_5
