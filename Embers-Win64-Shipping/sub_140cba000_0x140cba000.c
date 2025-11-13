// 函数: sub_140cba000
// 地址: 0x140cba000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi_1 = sx.q(arg2) * 0x38 + *(arg1 + 8)
int64_t rax_1 = *(rdi_1 + 0x28)

if (rax_1 == 0)
    void* rcx = *(rdi_1 + 0x20)
    
    if (rcx != 0)
        rax_1 = sub_140d3cb50(rcx)
    
    if (rcx == 0 || rax_1 == 0)
        int64_t rsi_1 = 0
        char rax_2
        int32_t rbx_1
        
        if (rdi_1[2] == 0)
            rbx_1 = rdi_1[6]
            rax_2 = sub_140b5b8a0(rdi_1[5], 0xcf)
        
        if (rdi_1[2] != 0 || (rbx_1 == 0 & rax_2) == 0)
            int32_t rdx_2 = rdi_1[2]
            
            if (rdx_2 s< 0)
                return sub_140cba000(arg1, zx.q(not.d(rdx_2)))
        else
            int16_t* var_18
            sub_140b63b70(rdi_1, &var_18)
            int16_t* rbx_2 = &data_142d40450
            int32_t var_10
            
            if (var_10 != 0)
                rbx_2 = var_18
            
            void* rax_4 = sub_140d2ee50(sub_140cddea0(), nullptr, rbx_2, 0)
            
            if (rax_4 != 0)
                rsi_1 = *(rax_4 + 0x68)
            
            int16_t* rcx_4 = var_18
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
        
        return rsi_1

return rax_1
