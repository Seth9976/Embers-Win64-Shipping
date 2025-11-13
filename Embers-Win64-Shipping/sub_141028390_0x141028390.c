// 函数: sub_141028390
// 地址: 0x141028390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t rbx_1 = temp0_1

if (i_1 == 0)
    return 

int32_t i

do
    void* r8_1 = arg2
    void* rdx = *(arg1 + (zx.q(rbx_1) << 3) + 0x140)
    
    if (arg2 != 0 && data_1439c7a34 u> 1)
        while (*(r8_1 + 0x18) != *(rdx + 0x138))
            r8_1 = *(r8_1 + 0x20)
            
            if (r8_1 == 0)
                break
    
    sub_141014620(*(rdx + 0x138) + 0x520, rdx, r8_1)
    int32_t rax_2 = 1 << rbx_1.b
    rbx_1 = 0x20
    i = not.d(rax_2) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rbx_1 = temp0_2
while (i != 0)
