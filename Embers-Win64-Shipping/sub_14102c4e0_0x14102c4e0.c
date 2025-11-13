// 函数: sub_14102c4e0
// 地址: 0x14102c4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)

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
    void* rbx_1 = arg2
    void* r9_1 = *(arg1 + (zx.q(rdi_1) << 3) + 0x140)
    
    if (arg2 != 0 && data_1439c7a34 u> 1)
        while (*(rbx_1 + 0x18) != *(r9_1 + 0x138))
            rbx_1 = *(rbx_1 + 0x20)
            
            if (rbx_1 == 0)
                break
    
    int32_t rdx = *(rbx_1 + 0x48)
    int64_t* rcx = nullptr
    
    if (rdx == 1)
        rcx = *(r9_1 + 0x138) + 0x520
    else if (rdx == 2)
        rcx = *(r9_1 + 0x138) + 0x5e8
    
    sub_14101efc0(rcx, r9_1, rbx_1)
    char rcx_3 = rdi_1.b
    *(rbx_1 + 0x40) = data_14399fa54
    rdi_1 = 0x20
    i = not.d(1 << rcx_3) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_forward(i)
        rdi_1 = temp0_3
while (i != 0)
