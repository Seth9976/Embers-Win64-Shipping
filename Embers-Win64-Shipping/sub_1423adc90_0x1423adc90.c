// 函数: sub_1423adc90
// 地址: 0x1423adc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg2 + 8)

if (result != 0)
    int64_t rbx_1 = sx.q(*(arg1 + 8))
    
    if (rbx_1.d s< *(result + 0x60))
        int64_t rdi_1 = rbx_1 << 3
        
        do
            int64_t* rax = *(arg1 + 0x178)
            int64_t* rcx = arg1 + 0x108
            
            if (rax != 0)
                rcx = rax
            
            int64_t rcx_1 = *(rcx + rdi_1)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
                void* rax_1 = *(arg1 + 0x178)
                void* rcx_2 = arg1 + 0x108
                
                if (rax_1 != 0)
                    rcx_2 = rax_1
                
                *(rcx_2 + rdi_1) = 0
            
            result = *(arg2 + 8)
            rbx_1 = zx.q(rbx_1.d + 1)
            rdi_1 += 8
        while (rbx_1.d s< *(result + 0x60))

return result
