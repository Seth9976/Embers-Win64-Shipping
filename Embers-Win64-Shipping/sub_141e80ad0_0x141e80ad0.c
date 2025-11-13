// 函数: sub_141e80ad0
// 地址: 0x141e80ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xf8)
int32_t arg_8
sub_140865c40(arg1 + 0x10, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t* rdi_1

if (rax.d == 0xffffffff)
    rdi_1.b = 0
else
    void* rcx_2 = *(arg1 + 0x10) + rax * 0x18
    
    if (rcx_2 == 0)
        rdi_1.b = 0
    else
        int64_t* rcx_3 = *(rcx_2 + 8)
        
        if (rcx_3 == 0)
            rdi_1.b = 0
        else
            rdi_1 = zx.q(sub_141e8cb60(rcx_3))

if (arg1 != -0xf8)
    LeaveCriticalSection(arg1 + 0xf8)

return zx.q(rdi_1.b)
