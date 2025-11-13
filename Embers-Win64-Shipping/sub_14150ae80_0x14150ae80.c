// 函数: sub_14150ae80
// 地址: 0x14150ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
*(arg1 + 0x90) = rbp.d
int64_t rdi = sx.q(*(arg1 + 0x78))
int32_t rax = (rdi + rbp).d
*(arg1 + 0x78) = rax

if (rax s> *(arg1 + 0x7c))
    sub_1405a4d70(arg1 + 0x70)

memset(*(arg1 + 0x70) + (rdi << 3), 0, rbp << 3)
sub_140a30d10(arg1 + 0x50, rbp.d)

if (rbp.d != *(arg1 + 0x2c))
    sub_141512980(arg1 + 0x28, rbp.d)

if (rbp.d != *(arg1 + 0x30))
    sub_141512a20(arg1 + 0x28, rbp.d)

int32_t i_1 = 0
int32_t i = 0

if (rbp.d != 0)
    do
        int32_t rdx_4 = *(arg1 + 0x2c)
        
        if (*(arg1 + 0x28) == rdx_4)
            int32_t rdx_5 = rdx_4 * 2
            
            if (rdx_5 u<= 0x20)
                rdx_5 = 0x20
            
            sub_141512980(arg1 + 0x28, rdx_5)
        
        uint64_t rsi_1 = zx.q(i.w)
        int32_t temp0_1 = *(arg1 + 0x30)
        
        if (rsi_1.d u>= temp0_1)
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse((rsi_1 + 1).d)
            int32_t rcx_6
            
            if (rsi_1.d == temp0_1)
                rcx_6 = 0x20
            else
                rcx_6 = 0x1f - temp0_2
            
            int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rsi_1.d)
            char rdx_7
            
            if (rcx_8 == 0)
                rdx_7 = 0x20
            else
                rdx_7 = 0x1f - temp0_3
            
            int32_t rdx_8 = 1 << ((not.d(rcx_8)).b & (0x20 - rdx_7))
            
            if (rdx_8 u<= 0x20)
                rdx_8 = 0x20
            
            sub_141512a20(arg1 + 0x28, rdx_8)
        
        uint64_t rdx_9 = zx.q(*(arg1 + 0x28))
        int64_t rax_5 = *(arg1 + 0x38)
        *(arg1 + 0x28) += 1
        *(rax_5 + (rdx_9 << 1)) = rsi_1.w
        *(*(arg1 + 0x40) + (rsi_1 << 2)) = 0
        *(*(arg1 + 0x48) + (rsi_1 << 1)) = rdx_9.w
        sub_14151c590(arg1 + 0x28, rdx_9.w)
        i += 1
    while (i u< rbp.d)

int32_t rax_9 = (rbp + 1).d + *(arg1 + 0x88)
*(arg1 + 0x88) = rax_9

if (rax_9 s> *(arg1 + 0x8c))
    sub_14083a7e0(arg1 + 0x80)

int32_t result

do
    int64_t rcx_14 = sx.q(i_1) * 3
    int64_t rax_11 = *(arg1 + 0x80)
    *(rax_11 + (rcx_14 << 2)) = 0xffffffff
    void* rdx_11 = rax_11 + (rcx_14 << 2)
    int32_t rax_13 = i_1 | 0xff000000
    i_1 += 1
    *(rdx_11 + 8) = rax_13
    result = rax_13 & 0xffffff
    *(rdx_11 + 4) = result
while (i_1 u<= rbp.d)

return result
