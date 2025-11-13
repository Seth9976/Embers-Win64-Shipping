// 函数: sub_1421d18b0
// 地址: 0x1421d18b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (*(arg1 + 8) == 0)
    int32_t rbp_1 = *(arg1 + 0x88)
    int64_t* rsi_1 = *(arg2 + 0x58)
    int32_t rdi_1 = data_143f4d2c0
    int32_t var_38_1 = rdi_1
    int32_t var_28_1 = rbp_1
    uint128_t zmm6
    
    if (sub_140a80f40() != 0)
        void* r11_1 = *(arg1 + 0x80)
        int64_t r10_1 = sx.q(*(r11_1 + 0xb0))
        int64_t rcx_2 = r10_1 ^ 1
        
        if (*(data_143f4dd68 + 4) f<= 0f)
            rcx_2 = r10_1
        
        return sub_1421d1a60(&data_143f02b98, rbp_1, rdi_1, rsi_1, zmm6, rcx_2 * 0x38 + r11_1, 
            data_143a2ee58)
    
    if (data_143f138f4 == 0)
        uint32_t rax_1
        
        if (data_143de5480 != 0)
            rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_1.b != 0)
            void* r8_1 = *(arg1 + 0x80)
            int64_t rdx = sx.q(*(r8_1 + 0xb0))
            int64_t rcx_6 = rdx ^ 1
            
            if (*(data_143f4dd68 + 4) f<= 0f)
                rcx_6 = rdx
            
            return sub_1421d1a60(&data_143f02b98, rbp_1, rdi_1, rsi_1, zmm6, rcx_6 * 0x38 + r8_1, 
                data_143a2ee58)
    
    void var_58
    int64_t* rax_2 = sub_1421b1930(&var_58, nullptr, 0xff)
    void* rcx_9 = *rax_2
    *(rcx_9 + 0x10) = arg1.o
    *(rcx_9 + 0x20) = rsi_1.o
    void* rcx_10 = *rax_2
    int32_t r8_3 = rax_2[2].d
    int64_t* rdx_4 = rax_2[1]
    int64_t* rbx_1 = *(rcx_10 + 0x38)
    int64_t* arg_18 = rbx_1
    int32_t* rdi_2 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_2 += 1
        rbx_1 = arg_18
    
    result = sub_1407c96b0(rcx_10, rdx_4, r8_3, 1)
    
    if (rbx_1 != 0)
        result = *rdi_2
        *rdi_2 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_18)

return result
