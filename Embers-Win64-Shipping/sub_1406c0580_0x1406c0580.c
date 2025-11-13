// 函数: sub_1406c0580
// 地址: 0x1406c0580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x98)
int32_t rdi
int32_t* rax_1

if (arg2 == 0)
    rax_1 = 0x50
label_1406c05d9:
    
    if (arg3 s< 0 || arg3 s>= *(rax_1 + arg1))
        rdi.b = 0
    else
        rdi.b = 1
else
    if (arg2 == 1)
        rax_1 = 0x90
        goto label_1406c05d9
    
    if (arg2 == 2)
        rax_1 = 0x130
        goto label_1406c05d9
    
    if (arg2 == 6)
        rax_1 = 0x190
        goto label_1406c05d9
    
    rdi.b = 0

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi.b)
