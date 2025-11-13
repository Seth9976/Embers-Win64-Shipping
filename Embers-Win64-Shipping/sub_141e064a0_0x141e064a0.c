// 函数: sub_141e064a0
// 地址: 0x141e064a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1[4]

if (rbp != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rbp + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8
        
        if (data_143de5480 != 0)
            rax_4, r8 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8.b = 1
            sub_141f3e990(arg1[4], 1, r8.b)

void* rbp_1 = arg1[0x48]

if (rbp_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rbp_1 = rax_6

int64_t* rcx_3 = *(rbp_1 + 0xa8)
int32_t rcx_4

if (rcx_3 == 0)
    rcx_4 = -1
else
    rcx_4 = (*(*rcx_3 + 0xa0))(rcx_3, arg2)

int64_t rdx_3 = sx.q(1 - *(rbp_1 + 0x208)) * 2
int32_t rax_9

if (rcx_4 s< 0 || rcx_4 s>= *(rbp_1 + (rdx_3 << 3) + 0x160))
    rax_9.b = 0
else
    rax_9.b = 1

int64_t var_28
int64_t var_20

if (rax_9.b == 0)
    var_28 = 0
    var_20 = 0
else
    void* rsi_2 = sx.q(rcx_4) * 0x70 + *(rbp_1 + (rdx_3 << 3) + 0x158)
    
    if (*(rsi_2 + 0x28) == 0)
        var_28 = 0
        var_20 = 0
    else if (sub_141e06280(rsi_2 + 0x30) == 0)
        var_28 = 0
        var_20 = 0
    else
        var_28.o = *(rsi_2 + 0x54)

int64_t result

if ((var_28 != arg3 || var_20 != arg4) && (arg5 != 0 || var_28 != arg4 || var_20 != arg3))
    result.b = 0
else
    result.b = 1

return result
