// 函数: sub_141d67330
// 地址: 0x141d67330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142452380()
void* rdx = *(arg2 + 0x10)
int64_t rax_1 = sx.q(*(rax + 0x38))
int64_t result

if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
    void* rax_2 = sub_142459c10()
    void* rdx_1 = *(arg2 + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
        void* rax_4 = sub_14245f6d0()
        void* rdx_2 = *(arg2 + 0x10)
        result = sx.q(*(rax_4 + 0x38))
        int64_t result_1
        
        if (result.d s<= *(rdx_2 + 0x38))
            result_1 = result
        
        if (result.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (result_1 << 3)) != rax_4 + 0x30)
            result.b = 0
            return result

result.b = 1
return result
