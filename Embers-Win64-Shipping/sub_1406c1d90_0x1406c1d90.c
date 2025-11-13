// 函数: sub_1406c1d90
// 地址: 0x1406c1d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x40)
int64_t result = EnterCriticalSection(rdi + 0xa0)
char rbp = *(rdi + 0xf0)
char rdi_1 = *(rdi + 0x150)

if (rdi != -0xa0)
    result = LeaveCriticalSection(rdi + 0xa0)

if (rbp != 0)
    int64_t* rcx_2 = *(arg1 + 0x18)
    (**rcx_2)(rcx_2, 9)
label_1406c1df1:
    void* rdi_2 = *(arg1 + 0x40)
    result = EnterCriticalSection(rdi_2 + 0xa0)
    *(rdi_2 + 0xf0) = 0
    *(rdi_2 + 0x150) = 0
    
    if (rdi_2 != -0xa0)
        return LeaveCriticalSection(rdi_2 + 0xa0)
else if (rdi_1 != 0)
    goto label_1406c1df1

return result
