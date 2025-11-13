// 函数: sub_140f1b620
// 地址: 0x140f1b620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = arg5
int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 != 0 || result != 0 || arg4 != 0)
    result = sub_140809010(arg1, arg3 + result, arg4)
    int64_t* rsi_1 = *arg1
    
    if (i_1 != 0)
        void* rbx_1 = arg2 + 0x28
        void* rdi_1 = &rsi_1[5]
        int32_t i
        
        do
            *rsi_1 = *(rbx_1 - 0x28)
            void* rax_1 = *(rbx_1 - 0x20)
            *(rdi_1 - 0x20) = rax_1
            
            if (rax_1 != 0)
                *(rax_1 + 8) += 1
            
            *(rdi_1 - 0x18) = *(rbx_1 - 0x18)
            *(rdi_1 - 0x10) = *(rbx_1 - 0x10)
            void* rax_4 = *(rbx_1 - 8)
            *(rdi_1 - 8) = rax_4
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            *rdi_1 = *rbx_1
            *(rdi_1 + 8) = 0
            *(rdi_1 + 0x10) = 0
            sub_1407473e0(rdi_1 + 8, rbx_1 + 8)
            rsi_1 = &rsi_1[9]
            *(rdi_1 + 0x18) = *(rbx_1 + 0x18)
            *(rdi_1 + 0x19) = *(rbx_1 + 0x19)
            *(rdi_1 + 0x1a) = *(rbx_1 + 0x1a)
            result = zx.d(*(rbx_1 + 0x1b))
            rbx_1 += 0x48
            *(rdi_1 + 0x1b) = result.b
            rdi_1 += 0x48
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg1 + 0xc) = 0

return result
