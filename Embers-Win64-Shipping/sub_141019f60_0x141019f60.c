// 函数: sub_141019f60
// 地址: 0x141019f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x30)
int64_t rdx = 0
*(arg1 + 0x40) = 0
int32_t r14 = 0x20
int64_t var_48
int64_t arg_8

if ((i_1 & (i_1 - 1)) == 0)
    if (i_1 != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(i_1)
        r14 = temp0_1
    
    int64_t* rax_1 = sub_141027930(*(arg1 + 0x28) + 0x430, r14)
    uint64_t rcx_2 = zx.q(r14)
    void* rdi = arg1 + (rcx_2 << 3)
    *(arg1 + (rcx_2 << 3) + 0x98) = rax_1
    *(rdi + 0x78) = rax_1[1]
    arg_8 = *(arg1 + 0x18)
    int64_t* rax_2 = sub_140b63b70(&arg_8, &var_48)
    
    if (rax_2[1].d != 0)
        *rax_2
    
    rax_1[3]
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *(arg1 + 0x48) = *(rdi + 0x78)
    int64_t result = *(rdi + 0x78) + 1
    *(arg1 + 0x38) = result
    return result

*(arg1 + 0x38) = 0
*(arg1 + 0x48) = -1

if (i_1 != 0)
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_forward(i_1)
    int32_t rsi_2 = temp0_2
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rax_5 = sub_141027930(*(arg1 + 0x28) + 0x430, rsi_2)
            uint64_t rcx_10 = zx.q(rsi_2)
            void* r12_1 = arg1 + (rcx_10 << 3)
            *(arg1 + (rcx_10 << 3) + 0x98) = rax_5
            *(r12_1 + 0x78) = rax_5[1]
            arg_8 = *(arg1 + 0x18)
            int64_t var_38
            int64_t* rax_6 = sub_140b63b70(&arg_8, &var_38)
            int16_t* const r8_1
            
            if (rax_6[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *rax_6
            
            sub_140a2e390(&var_48, u"%s%u", r8_1)
            rax_5[3]
            int64_t rcx_16 = var_48
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            int64_t rcx_17 = var_38
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            int64_t rdx_8 = *(r12_1 + 0x78)
            char rcx_18 = rsi_2.b
            rsi_2 = 0x20
            
            if (*(arg1 + 0x48) u<= rdx_8)
                rdx_8 = *(arg1 + 0x48)
            
            *(arg1 + 0x48) = rdx_8
            rdx = *(r12_1 + 0x78)
            
            if (*(arg1 + 0x38) u>= rdx)
                rdx = *(arg1 + 0x38)
            
            *(arg1 + 0x38) = rdx
            i = not.d(1 << rcx_18) & i_1
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_3
                int32_t temp0_3
                temp0_3, rflags_3 = _bit_scan_forward(i)
                rsi_2 = temp0_3
        while (i != 0)

*(arg1 + 0x38) = rdx + 1
return rdx + 1
