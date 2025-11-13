// 函数: sub_14091f600
// 地址: 0x14091f600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t* result = arg2
*arg2 = 0

if (arg3 u<= 3)
    void* rsi_1 = arg1 + sx.q(arg3) * 0x18
    
    if (arg4[1].d != 0)
        int64_t* rcx = *arg4
        
        if (rcx != 0)
            int64_t* var_28 = nullptr
            int32_t var_20_1 = 0
            
            if (arg4 != &var_28)
                (*(*rcx + 0x40))(rcx, &var_28)
            
            arg2.b = 1
            sub_140599630(rsi_1 + 0x20, arg2.b)
            int64_t rdi_1 = 0
            
            if (var_20_1 != 0)
                int64_t* rcx_2 = var_28
                void arg_10
                
                if (rcx_2 != 0)
                    rdi_1 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_10)
            
            int64_t rbp_1 = sx.q(*(rsi_1 + 0x28))
            int32_t rax_5 = (rbp_1 + 1).d
            *(rsi_1 + 0x28) = rax_5
            
            if (rax_5 s> *(rsi_1 + 0x2c))
                sub_1405a4f90(rsi_1 + 0x20)
            
            int64_t** rcx_6 = (rbp_1 << 4) + *(rsi_1 + 0x20)
            *rcx_6 = nullptr
            *rcx_6 = var_28
            var_28 = nullptr
            rcx_6[1].d = var_20_1
            int64_t* rcx_7 = var_28
            int32_t var_20_2 = 0
            rbx = rdi_1
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
    
    *result = rbx

return result
