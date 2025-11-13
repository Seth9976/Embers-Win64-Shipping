// 函数: sub_142004670
// 地址: 0x142004670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t r9 = EnterCriticalSection(&arg1[0x14])

if (arg2 != 0)
    if ((*(arg2 + 0x18c) & 1) != 0)
        sub_140af98a0("Unknown", 0x44, 
            FMaterialRenderProxy was already marked for garbage collection", r9)
        sub_140afbb40()
    
    void arg_8
    
    if (*(arg2 + 8) != 0xffffffff)
        sub_140946410(&arg1[0xa], &arg_8, &arg_10, nullptr)

int64_t* rdi

if ((*(arg3 + 0xc) | arg3[1].d | *(arg3 + 4) | *arg3) != 0)
    sub_142002e20(arg1, &arg_10, arg3)
    int64_t rax_4 = sx.q(arg_10.d)
    void* const rcx_3
    
    if (rax_4.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = *arg1 + rax_4 * 0x48
    
    rdi = rcx_3 + 0x10
    
    if (rcx_3 == 0)
        rdi = nullptr

if ((*(arg3 + 0xc) | arg3[1].d | *(arg3 + 4) | *arg3) == 0 || rdi == 0)
    rdi.b = 0
else
    sub_1408c8cf0(arg4, *rdi)
    sub_1405d16e0(arg5, rdi[1])
    rdi.b = 1

if (arg1 != -0xa0)
    LeaveCriticalSection(&arg1[0x14])

return zx.q(rdi.b)
