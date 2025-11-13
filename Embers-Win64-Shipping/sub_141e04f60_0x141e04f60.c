// 函数: sub_141e04f60
// 地址: 0x141e04f60
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
int32_t rdx_2

if (rcx_3 == 0)
    rdx_2 = -1
else
    rdx_2 = (*(*rcx_3 + 0xa0))(rcx_3, arg2)

int64_t r8_2 = sx.q(1 - *(rsi_1 + 0x208)) * 2
uint64_t result

if (rdx_2 s< 0 || rdx_2 s>= *(rsi_1 + (r8_2 << 3) + 0x160))
    result.b = 0
else
    result.b = 1

void* rcx_5

if (result.b != 0)
    rcx_5 = sx.q(rdx_2) * 0x70 + *(rsi_1 + (r8_2 << 3) + 0x158)

if (result.b == 0 || *(rcx_5 + 0x28) == 0)
    result.b = 0
else
    int64_t* rdx_3 = *(rcx_5 + 0x30)
    result = rdx_3 + sx.q(*(rcx_5 + 0x38)) * 0xc
    
    if (rdx_3 == result)
    label_141e05084:
        rdx_3 = nullptr
    else
        while (*rdx_3 != arg3)
            rdx_3 += 0xc
            
            if (rdx_3 == result)
                goto label_141e05084
    
    result.b = rdx_3 != 0

return result
