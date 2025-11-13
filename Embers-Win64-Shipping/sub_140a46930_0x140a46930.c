// 函数: sub_140a46930
// 地址: 0x140a46930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140a46220()
AcquireSRWLockShared(rax + 0x20)
void* rax_1 = sub_140a46220()
*arg1 = 0
int32_t i_1 = *(rax_1 + 0x18)
void* rdi = *(rax_1 + 0x10)
arg1[1].d = i_1

if (i_1 != 0)
    sub_1405a4be0(arg1, i_1, 0)
    int64_t* rbx_1 = *arg1
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r14_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r14_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

ReleaseSRWLockShared(rax + 0x20)
return arg1
