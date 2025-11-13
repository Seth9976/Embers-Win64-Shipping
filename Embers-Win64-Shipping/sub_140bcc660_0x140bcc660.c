// 函数: sub_140bcc660
// 地址: 0x140bcc660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x320) == 0)
    return 

int64_t* r8_1 = *(arg1 + 0x318)
int64_t r9_1 = 0
uint64_t r10_2 = sx.q(*(arg1 + 0x320)) << 3 u>> 3

if (r8_1 u> &r8_1[sx.q(*(arg1 + 0x320))])
    r10_2 = 0

if (r10_2 != 0)
    do
        int32_t rax_3 = *(*r8_1 + 0xc)
        void* rax
        
        if (rax_3 s>= data_143e1d9b4)
            rax = nullptr
        else
            uint32_t rdx_1 = zx.d(rax_3.w)
            
            if (rax_3 s< 0)
                rax_3 += 0xffff
                rdx_1 -= 0x10000
            
            rax = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
        
        *(rax + 8) &= 0xfbffffff
        r8_1 = &r8_1[1]
        r9_1 += 1
    while (r9_1 != r10_2)

*(arg1 + 0x320) = 0

if (*(arg1 + 0x324) s<= 0xffffffff)
    return sub_1405c5570(arg1 + 0x318, 0) __tailcall
