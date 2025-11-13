// 函数: sub_14102faf0
// 地址: 0x14102faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t rsi_1 = temp0_1

if (i_1 == 0)
    return 

uint32_t rbp_2 = zx.d(arg4) + zx.d(arg5)
int32_t i

do
    void* rdi_2 = *(arg1 + (zx.q(rsi_1) << 3) + 0x140) + 0x8ce0
    memcpy(zx.q(arg4) + 0x20 + rdi_2, arg6, zx.d(arg5))
    uint32_t rax_3 = *(rdi_2 + 0x1020)
    char rcx_2 = rsi_1.b
    *(rdi_2 + 0x1028) = 1
    rsi_1 = 0x20
    
    if (rbp_2 u>= rax_3)
        rax_3 = rbp_2
    
    *(rdi_2 + 0x1020) = rax_3
    i = not.d(1 << rcx_2) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rsi_1 = temp0_2
while (i != 0)
