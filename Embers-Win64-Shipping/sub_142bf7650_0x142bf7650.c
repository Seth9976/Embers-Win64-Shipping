// 函数: sub_142bf7650
// 地址: 0x142bf7650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
EnterCriticalSection(arg1)
int32_t r9 = arg1->__offset(0x28).d
int32_t r8 = 0
int64_t* rdx = arg1->__offset(0x30).q
void* rbx_1

if (r9 == 0)
label_142bf7698:
    rbx_1 = nullptr
else
    int64_t* rax_1 = rdx
    
    while (*rax_1 != arg2)
        r8 += 1
        rax_1 = &rax_1[3]
        
        if (r8 u>= r9)
            goto label_142bf7698
    
    rbx_1 = &rdx[zx.q(r8) * 3]
    
    if (rbx_1 != 0)
        result = (*rbx_1):8.q

LeaveCriticalSection(arg1)

if (rbx_1 != 0)
    return result

return 0
