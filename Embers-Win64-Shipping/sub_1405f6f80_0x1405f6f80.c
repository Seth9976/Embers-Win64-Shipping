// 函数: sub_1405f6f80
// 地址: 0x1405f6f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t rdi = sx.q(arg3)
int64_t rsi = sx.q(arg2)
CRITICAL_SECTION* arg_8 = arg1 + 0x98
EnterCriticalSection(arg1 + 0x98)

if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x50))
    rdi.b = 0
else
    void* rcx_2 = rsi * 0x68 + *(arg1 + 0x48)
    
    if (rdi.d s< 0 || rdi.d s>= *(rcx_2 + 0x28))
        rdi.b = 0
    else
        int64_t rdx = rdi * 0x70
        void* rdx_1 = rdx + *(rcx_2 + 0x20)
        
        if (rdx == neg.q(*(rcx_2 + 0x20)))
            rdi.b = 0
        else
            *arg4 = *(rdx_1 + 0x20)
            arg4[1] = *(rdx_1 + 0x24)
            arg4[2] = *(rdx_1 + 0x28)
            sub_140597df0(&arg4[4], rdx_1 + 0x10)
            rdi.b = 1

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi.b)
