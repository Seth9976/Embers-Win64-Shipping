// 函数: sub_140bb90e0
// 地址: 0x140bb90e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce1120(arg2 + 0x28)
int64_t* rsi = *(arg2 + 0xd8)
int64_t rdi = 0
uint64_t result = &rsi[sx.q(*(arg2 + 0xe0))]
uint64_t r14_1 = sx.q(*(arg2 + 0xe0)) << 3 u>> 3

if (rsi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        void* r15_1 = *rsi
        int32_t rbx_2 = *(r15_1 + 0x30) - 1
        double zmm2_1[0x2] = sub_140d3e8d0(r15_1, nullptr, 0xffffffff, 1)
        sub_140ce4c20((sx.q(rbx_2) << 7) + *(arg1 + 0x18))
        uint64_t rax_1 = sub_140cb4600(arg1, rbx_2, zmm2_1)
        int64_t r8_1 = *(r15_1 + 0x28)
        (*(r8_1 + 0x10))(r15_1 + 0x28, rax_1, r8_1)
        int32_t rcx_7 = *(r15_1 + 0xc)
        void* const rax_4
        
        if (rcx_7 s>= data_143e1d9b4)
            rax_4 = nullptr
        else
            uint32_t rdx_2 = zx.d(rcx_7.w)
            
            if (rcx_7 s< 0)
                rcx_7 += 0xffff
                rdx_2 -= 0x10000
            
            rax_4 = *(data_143e1d9a0 + (sx.q(rcx_7 s>> 0x10) << 3)) + sx.q(rdx_2) * 0x18
        
        *(rax_4 + 8) |= 0x20000000
        result = sub_140bb90e0(arg1, r15_1)
        
        if (rax_1 != 0)
            result = sub_140cc45a0(arg1 + 0x200, rax_1)
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != r14_1)

return result
