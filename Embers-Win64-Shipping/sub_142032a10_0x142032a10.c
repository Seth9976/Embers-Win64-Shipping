// 函数: sub_142032a10
// 地址: 0x142032a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x2e8))()
uint64_t rsi = zx.q(arg1[0xe].b)
void* rcx = nullptr

if (((arg1[1].d u>> 4).b & 1) == 0)
    rcx = arg1[4]

uint64_t result = sub_1423dd310(rcx, arg1)
int64_t* result_1 = result
int32_t i = 0

if (*(result + 8) s> 0)
    void** r8_1 = nullptr
    int32_t* rdi_1 = nullptr
    
    do
        int64_t rdx_1
        uint64_t r10_2
        
        if (rsi.d s< arg1[0xc].d)
            rdx_1 = arg1[0xb]
            r10_2 = rsi * 2
        
        if (rsi.d s>= arg1[0xc].d || i s>= *(rdx_1 + (r10_2 << 3) + 8))
            *(*(r8_1 + *result_1) + 0x80) = 0
            *(*(r8_1 + *result_1) + 0x84) = 0
            *(*(r8_1 + *result_1) + 0x78) = 0
            result = *result_1
            *(*(r8_1 + result) + 0x7c) = 0
        else
            *(*(r8_1 + *result_1) + 0x80) = *(rdi_1 + *(rdx_1 + (r10_2 << 3)))
            *(*(r8_1 + *result_1) + 0x84) = *(*(arg1[0xb] + (r10_2 << 3)) + rdi_1 + 4)
            *(*(r8_1 + *result_1) + 0x78) = *(*(arg1[0xb] + (r10_2 << 3)) + rdi_1 + 8)
            result = zx.q(*(*(arg1[0xb] + (r10_2 << 3)) + rdi_1 + 0xc))
            *(*(r8_1 + *result_1) + 0x7c) = result.d
        
        i += 1
        rdi_1 = &rdi_1[4]
        r8_1 = &r8_1[1]
    while (i s< result_1[1].d)

return result
