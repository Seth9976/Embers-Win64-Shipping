// 函数: sub_140d30a00
// 地址: 0x140d30a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
void* i = nullptr

if (rax != 0)
    int16_t* rcx_2
    
    if (arg1[2].d s<= 1)
        int16_t* var_38
        sub_140d30800(arg1, &var_38)
        int16_t* rdi_1 = &data_142d40450
        int32_t var_30
        
        if (var_30 != 0)
            rdi_1 = var_38
        
        for (i = sub_140d2f6f0(sub_140d41340(), 0, rdi_1, 0, 0, 0, 1, arg2); i != 0; 
                i = *(i + 0x28))
            void* rax_4 = sub_140cdddf0()
            void* rdx_1 = *(i + 0x10)
            int64_t rcx_4 = sx.q(*(rax_4 + 0x38))
            
            if (rcx_4.d s> *(rdx_1 + 0x38))
                break
            
            if (*(*(rdx_1 + 0x30) + (rcx_4 << 3)) != rax_4 + 0x30)
                break
        
        rcx_2 = var_38
    else
        int64_t var_28 = rax
        int16_t* var_20_1 = nullptr
        int64_t var_18_1 = 0
        sub_140d30a00(&var_28)
        rcx_2 = var_20_1
        i = sub_140d2bce0(arg1)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return i
