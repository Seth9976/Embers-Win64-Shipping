// 函数: sub_14089a360
// 地址: 0x14089a360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg1[1]
int64_t* rbx = *arg1
free(arg1)
int64_t rbp = *rbx
int64_t r14 = rbx[1]
void* rsi = rbx[2]
*rbx[2] = GetCurrentThreadId()
int64_t* rbx_1 = rbx[3]

if (rbx_1 != 0)
    rbx_1[1].d += 1
    
    if (ReleaseSemaphore(*rbx_1, 1, nullptr) == 0)
        rbx_1[1].d -= 1

*(rsi + 0x10) = rbp(r14)

if (rdi != 0)
    rdi(0)

return 0
