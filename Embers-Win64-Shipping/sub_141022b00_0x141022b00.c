// 函数: sub_141022b00
// 地址: 0x141022b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x20)

if ((rcx & (rcx - 1)) == 0)
    int32_t r15 = 0x20
    
    if (rcx != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(rcx)
        r15 = temp0_1
    
    void* rax_2 = sub_141027700(*(*(arg1 + 8) + (zx.q(r15) << 3) + 0x9d8))
    *(arg1 + 0x10) = rax_2
    sub_1410177f0(rax_2)
    sub_141027b40(*(arg1 + 0x10))
    return *(arg1 + 0x10)

void*** rax_4 = j_sub_140a82f30(0x160)
void*** rcx_6

if (rax_4 == 0)
    rcx_6 = nullptr
else
    rcx_6 = sub_141009f90(rax_4, *(arg1 + 8), 0, 0)

int32_t rax_6 = *(arg1 + 0x20)
*(arg1 + 0x18) = rcx_6
rcx_6[0x27].d = rax_6
int32_t i_1 = *(arg1 + 0x20)

if (i_1 != 0)
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_forward(i_1)
    int32_t r14_1 = temp0_2
    
    if (i_1 != 0)
        int32_t i
        
        do
            void* rsi_1 = *(*(arg1 + 8) + (zx.q(r14_1) << 3) + 0x9d8)
            EnterCriticalSection(rsi_1 + 0x6f8)
            int64_t r8_1 = sx.q(*(rsi_1 + 0x6f0))
            void* rsi_2 = *(*(rsi_1 + 0x6e8) + (r8_1 << 3) - 8)
            *(rsi_1 + 0x6f0) = (r8_1 - 1).d
            sub_1405c53d0(rsi_1 + 0x6e8)
            
            if (rsi_1 != -0x6f8)
                LeaveCriticalSection(rsi_1 + 0x6f8)
            
            *(arg1 + 0x10) = rsi_2
            sub_141027b40(rsi_2)
            sub_1410177f0(*(arg1 + 0x10))
            void* rcx_13 = *(arg1 + 0x10)
            int64_t rdx_2 = *(arg1 + 0x18)
            int32_t rax_10 = *(rcx_13 + 0x130)
            uint64_t rax_11
            
            if (rax_10 != 0)
                uint64_t rflags_3
                int32_t temp0_3
                temp0_3, rflags_3 = _bit_scan_forward(rax_10)
                rax_11 = zx.q(temp0_3)
            else
                rax_11 = 0x20
            
            *(rdx_2 + (rax_11 << 3) + 0x140) = rcx_13
            *(arg1 + 0x10) = 0
            int32_t rax_12 = 1 << r14_1.b
            r14_1 = 0x20
            i = not.d(rax_12) & i_1
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_4
                int32_t temp0_4
                temp0_4, rflags_4 = _bit_scan_forward(i)
                r14_1 = temp0_4
        while (i != 0)

return *(arg1 + 0x18)
