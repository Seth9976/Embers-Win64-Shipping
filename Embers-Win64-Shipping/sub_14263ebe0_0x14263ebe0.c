// 函数: sub_14263ebe0
// 地址: 0x14263ebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg5
int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 != 0 || result != 0 || arg4 != 0)
    result = sub_141ae1da0(arg1, arg3 + result, arg4)
    void* rsi_1 = *arg1
    
    if (i_1 != 0)
        void* rbx_1 = arg2 + 0xb0
        void* rdi_1 = rsi_1 + 0xb0
        int32_t i
        
        do
            sub_142642440(rsi_1, rbx_1 - 0xb0)
            *(rdi_1 - 0x28) = *(rbx_1 - 0x28)
            *(rdi_1 - 0x20) = 0
            *(rdi_1 - 0x18) = 0
            
            if (rbx_1 - 0x20 != rdi_1 - 0x20 && *(rbx_1 - 0x18) != 0)
                int64_t* rcx_2 = *(rbx_1 - 0x20)
                
                if (rcx_2 != 0)
                    (*(*rcx_2 + 0x40))(rcx_2)
            
            *(rdi_1 - 0x10) = *(rbx_1 - 0x10)
            *(rdi_1 - 8) = *(rbx_1 - 8)
            void* rax_4 = *rbx_1
            *rdi_1 = rax_4
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            result = *(rbx_1 + 8)
            rsi_1 += 0xc0
            *(rdi_1 + 8) = result
            rbx_1 += 0xc0
            rdi_1 += 0xc0
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg1 + 0xc) = 0

return result
