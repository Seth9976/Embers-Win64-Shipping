// 函数: sub_141056b90
// 地址: 0x141056b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t i_2 = arg2
int64_t r12_1 = **(arg1 + 0x20)
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(arg2)
int32_t rsi_1 = temp0_1
int32_t i

do
    sub_141031440(**(*(r12_1 + (zx.q(rsi_1) << 3) + 0x9d8) + 0x6d8))
    int32_t rax_2 = 1 << rsi_1.b
    rsi_1 = 0x20
    i = not.d(rax_2) & i_2
    i_2 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rsi_1 = temp0_2
while (i != 0)
int32_t i_3 = arg2
uint64_t rflags_3
int32_t temp0_3
temp0_3, rflags_3 = _bit_scan_forward(arg2)
int32_t rbp_1 = temp0_3
int32_t i_1

do
    int32_t j_1 = arg2
    uint64_t rflags_4
    int32_t temp0_4
    temp0_4, rflags_4 = _bit_scan_forward(arg2)
    int32_t rdi_1 = temp0_4
    void* r14_1 = *(*(*(r12_1 + (zx.q(rbp_1) << 3) + 0x9d8) + 0x38) + 0xe8)
    int32_t j
    
    do
        if (rbp_1 != rdi_1)
            sub_141024a20(r14_1, rdi_1, 0, *(r14_1 + 0x40), rbp_1)
        
        int32_t rax_6 = 1 << rdi_1.b
        rdi_1 = 0x20
        j = not.d(rax_6) & j_1
        j_1 = j
        
        if (j != 0)
            uint64_t rflags_5
            int32_t temp0_5
            temp0_5, rflags_5 = _bit_scan_forward(j)
            rdi_1 = temp0_5
    while (j != 0)
    int32_t rax_8 = 1 << rbp_1.b
    rbp_1 = 0x20
    i_1 = not.d(rax_8) & i_3
    i_3 = i_1
    
    if (i_1 != 0)
        uint64_t rflags_6
        int32_t temp0_6
        temp0_6, rflags_6 = _bit_scan_forward(i_1)
        rbp_1 = temp0_6
while (i_1 != 0)
