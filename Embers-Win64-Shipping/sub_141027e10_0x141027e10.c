// 函数: sub_141027e10
// 地址: 0x141027e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (*(arg1 + 0x135) == 0 || *(arg1[0x25] + 0x838) == 0)
    rax.b = 0
else
    rax.b = 1

*(arg1 + 0x134) = rax.b
sub_1419800d0()
int32_t i_1 = arg1[0x26].d

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t r14_1 = temp0_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            void* rdi_1 = *(arg1[0x25] + (zx.q(r14_1) << 3) + 0x9d8)
            void* rax_3 = (*(*arg1 + 0x300))(arg1, zx.q(r14_1))
            
            if (rax_3 != 0)
                sub_14101f080(rdi_1 + 0x5e8, rax_3)
            
            if (*(rdi_1 + 0x3f8) != 0 && sub_1410181f0(rdi_1 + 0x3a8) != 0)
                sub_141031e40(rdi_1 + 0x3a8)
            
            int32_t rsi_1 = *(rdi_1 + 0x6e0)
            int32_t rbx_1 = 0
            
            if (rsi_1 != 0)
                do
                    sub_141014440(*(*(rdi_1 + 0x6d8) + (sx.q(rbx_1) << 3)) + 0x3270)
                    rbx_1 += 1
                while (rbx_1 u< rsi_1)
            
            int32_t rsi_2 = *(rdi_1 + 0x728)
            int32_t rbx_2 = 0
            
            if (rsi_2 != 0)
                do
                    sub_141014440(*(*(rdi_1 + 0x720) + (sx.q(rbx_2) << 3)) + 0x3270)
                    rbx_2 += 1
                while (rbx_2 u< rsi_2)
            
            char rcx_10 = r14_1.b
            *(rdi_1 + 0x3f8) = 0
            r14_1 = 0x20
            i = not.d(1 << rcx_10) & i_1
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(i)
                r14_1 = temp0_2
        while (i != 0)

void* rdx_4 = arg1[0x25]
return sub_141044420(rdx_4 + 0x830, *(rdx_4 + 0x10)) __tailcall
