// 函数: sub_141e73d10
// 地址: 0x141e73d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x18))
void* rsi = nullptr
int32_t r8 = 0

if (rax.d s> 0)
    int32_t* r11_1 = *(arg1 + 0x10)
    int32_t* rax_1 = r11_1
    int64_t rcx = 0
    
    do
        if (*(arg2 + 8) u<= *rax_1)
            rsi = &r11_1[sx.q(r8) * 0x24]
            break
        
        r8 += 1
        rcx += 1
        rax_1 = &rax_1[0x24]
    while (rcx s< rax)

int64_t rdi = *(arg2 + 0x18)
int32_t rbp = *(arg2 + 0x20)
int64_t result = EnterCriticalSection(rsi + 0x48)
void* rsi_3 = *(rsi + 0x18)

if (rsi_3 != 0)
    while (rdi != *(rsi_3 + 8) || rbp != *(rsi_3 + 0x10))
        rsi_3 = *(rsi_3 + 0x38)
        
        if (rsi_3 == 0)
            break

if (rsi != -0x48)
    result = LeaveCriticalSection(rsi + 0x48)

*(rsi_3 + 0x48) += 1
return result
