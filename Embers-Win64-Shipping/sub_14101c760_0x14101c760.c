// 函数: sub_14101c760
// 地址: 0x14101c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x30)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t rdi_1 = temp0_1

if (i_1 == 0)
    return 

int32_t i

do
    uint64_t rax = zx.q(rdi_1)
    void* r14_1 = arg1 + (rax << 3)
    void* rdx_1 = *(r14_1 + 0x98)
    
    if (rdx_1 != 0)
        int64_t r8_1 = *(arg1 + 0x40)
        
        if (r8_1 == 0)
            r8_1 = *(arg1 + (rax << 3) + 0x78)
        
        sub_141032f20(*(arg1 + 0x28) + 0x430, rdx_1, r8_1)
        *(r14_1 + 0x98) = 0
    
    int32_t rax_1 = 1 << rdi_1.b
    rdi_1 = 0x20
    i = not.d(rax_1) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rdi_1 = temp0_2
while (i != 0)
