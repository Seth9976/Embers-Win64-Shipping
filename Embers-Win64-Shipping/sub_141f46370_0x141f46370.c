// 函数: sub_141f46370
// 地址: 0x141f46370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
uint64_t rdi = *(arg1 + 0x6c0)
int64_t r14 = sx.q(*(arg1 + 0x6c8)) << 3
int64_t result = r14 + rdi
uint64_t r14_1 = r14 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0 && (*(rbx_1 + 0x31) & 8) != 0)
            sub_141df7ec0(rbx_1)
            int32_t rax_1 = *(rbx_1 + 0xc)
            
            if (rax_1 s>= data_143e1d9b4)
                result = 0
            else
                uint32_t rdx_1 = zx.d(rax_1.w)
                
                if (rax_1 s< 0)
                    rax_1 += 0xffff
                    rdx_1 -= 0x10000
                
                result = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
            
            *(result + 8) |= 0x20000000
        
        rdi += 8
        rsi += 1
    while (rsi != r14_1)

*(arg1 + 0x6c8) = 0

if (*(arg1 + 0x6cc) s> 0xffffffff)
    return result

return sub_1405c5570(arg1 + 0x6c0, 0) __tailcall
