// 函数: sub_141e04d40
// 地址: 0x141e04d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[4]

if (rsi != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rsi + 0x10)
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

void* rsi_1 = arg1[0x48]

if (rsi_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rsi_1 = rax_6

int64_t* rcx_3 = *(rsi_1 + 0xa8)
int32_t rcx_4

if (rcx_3 == 0)
    rcx_4 = -1
else
    rcx_4 = (*(*rcx_3 + 0xa0))(rcx_3, arg2)

int64_t rdx_3 = sx.q(1 - *(rsi_1 + 0x208)) << 4
uint64_t result

if (rcx_4 s< 0 || rcx_4 s>= *(rdx_3 + rsi_1 + 0x160))
    result.b = 0
else
    result.b = 1

if (result.b == 0)
    result.b = 0
else
    int64_t* rcx_6 = sx.q(rcx_4) * 0x70 + *(rdx_3 + rsi_1 + 0x158)
    
    if (rcx_6[5].b == 0)
        result.b = 0
    else
        result = sx.q(rcx_6[2].d)
        
        if (result.d s< 0 || result.d s>= rcx_6[1].d)
            rdx_3.b = 0
        else
            rdx_3.b = 1
        
        if (rdx_3.b == 0)
            result.b = 0
        else
            result *= 9
            int64_t rdx_4 = *rcx_6
            
            if (*(rcx_6 + 0x54) == arg3)
                int32_t rcx_7 = *(*(rdx_4 + (result << 3) + 0x38) + 4)
                result.b = 1
                *arg4 = rcx_7
            else if (*(rcx_6 + 0x5c) != arg3)
                result.b = 0
            else
                int32_t rcx_8 = *(*(rdx_4 + (result << 3) + 0x38) + 0xc)
                result.b = 1
                *arg4 = rcx_8

return result
