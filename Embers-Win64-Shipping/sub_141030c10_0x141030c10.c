// 函数: sub_141030c10
// 地址: 0x141030c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)
uint64_t r14 = zx.q(arg2)

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
    void* rdx = *(arg1 + (zx.q(rbx_1) << 3) + 0x140)
    void* rax_1 = arg3
    
    if (arg3 != 0 && data_1439c7a34 u> 1)
        while (*(rax_1 + 0x28) != *(rdx + 0x138))
            rax_1 = *(rax_1 + 0xd8)
            
            if (rax_1 == 0)
                break
    
    void* rdx_1 = rax_1 + 0x68
    
    if (rax_1 == 0)
        rdx_1 = nullptr
    
    sub_14104d4d0(rdx + 0x250, rdx_1, r14.d, zx.d(*((r14 << 1) + 0x75c + rdx + 0x250)), arg4)
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
