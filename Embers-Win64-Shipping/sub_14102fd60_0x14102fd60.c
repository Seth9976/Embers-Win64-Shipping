// 函数: sub_14102fd60
// 地址: 0x14102fd60
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
    void* rdx = arg4
    void* rcx = *(arg1 + (zx.q(rbx_1) << 3) + 0x140)
    
    if (arg4 != 0 && data_1439c7a34 u> 1)
        while (*(rdx + 0x20) != *(rcx + 0x138))
            rdx = *(rdx + 0x90)
            
            if (rdx == 0)
                break
    
    sub_14103d8c0(rcx + 0x250, rdx, arg3)
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
