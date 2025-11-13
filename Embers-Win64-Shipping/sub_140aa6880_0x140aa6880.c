// 函数: sub_140aa6880
// 地址: 0x140aa6880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
AcquireSRWLockShared(rbx + 0xa8)
int64_t* rdi = *(rbx + 0xb0)
void* rsi = &rdi[sx.q(*(rbx + 0xb8))]
int64_t result

if (rdi == rsi)
label_140aa691a:
    ReleaseSRWLockShared(rbx + 0xa8)
    result.b = 0
else
    while (true)
        void* rbx_1 = *rdi
        int32_t arg_8
        sub_140aaae20(rbx_1 + 8, &arg_8, arg2)
        int64_t rax_1 = sx.q(arg_8)
        int64_t rcx_4
        
        if (rax_1.d == 0xffffffff)
            rcx_4 = 0
        else
            rcx_4 = (rax_1 << 5) + *(rbx_1 + 8)
        
        int64_t rax_2 = rcx_4 + 0xc
        
        if (rcx_4 == 0)
            rax_2 = 0
        
        if (rax_2 != 0)
            ReleaseSRWLockShared(rbx + 0xa8)
            result.b = 1
            break
        
        rdi = &rdi[1]
        
        if (rdi == rsi)
            goto label_140aa691a

return result
