// 函数: sub_1406bca40
// 地址: 0x1406bca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
void* arg_8 = arg1 + 0x98
EnterCriticalSection(arg1 + 0x98)

if (arg3 == 0)
    if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x50))
    label_1406bcb47:
        *arg2 = zx.o(0)
        *arg2 = 0
        arg2[1] = 0
    else
        sub_140596d10(arg2, rdi * 0xa8 + 0x90 + *(arg1 + 0x48))
else if (arg3 == 1)
    if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x90))
        goto label_1406bcb47
    
    sub_140596d10(arg2, rdi * 0xa8 + 0x90 + *(arg1 + 0x88))
else if (arg3 == 2)
    if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x130))
        goto label_1406bcb47
    
    sub_140596d10(arg2, rdi * 0xa8 + 0x90 + *(arg1 + 0x128))
else
    if (arg3 != 6 || rdi.d s< 0 || rdi.d s>= *(arg1 + 0x190))
        goto label_1406bcb47
    
    sub_140596d10(arg2, rdi * 0xa8 + 0x90 + *(arg1 + 0x188))

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return arg2
