// 函数: sub_141031350
// 地址: 0x141031350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x20)
int32_t rsi = 1 << (data_1439c7a34).b
int64_t rbp = *result
int32_t rsi_1 = rsi - 1

if (rsi != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rsi_1)
    int32_t rbx_1 = temp0_1
    int32_t arg_8 = rbx_1
    
    do
        void* rdi_1 = **(*(rbp + (zx.q(rbx_1) << 3) + 0x9d8) + 0x6d8)
        sub_14101f080(*(rdi_1 + 0x138) + 0x5e8, rdi_1)
        void** var_38
        sub_141022330(rdi_1, &var_38, 0)
        var_38 = &data_142efcd90
        int64_t* var_30
        
        if (var_30 != 0)
            int32_t rax_2 = *(var_30 + 0x14)
            *(var_30 + 0x14) -= 1
            
            if (rax_2 == 1)
                sub_141011360(var_30, rax_2.b)
        
        result = zx.q(not.d(1 << rbx_1.b)) & zx.q(rsi_1)
        rsi_1 = result.d
        
        if (result.d != 0)
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_forward(result.d)
            rbx_1 = temp0_3
            int32_t arg_18 = rbx_1
        else
            rbx_1 = 0x20
    while (result.d != 0)

return result
