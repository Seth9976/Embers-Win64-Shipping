// 函数: sub_1427b8ff0
// 地址: 0x1427b8ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = *arg1
int64_t rbp = 0
void* result = &r14[arg1[1]]
uint64_t r15_1 = sx.q(arg1[1].d) << 2 u>> 2

if (r14 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rdi_1 = sx.q(*r14)
        int32_t* rbx_3
        
        if (arg1[3].d == *(arg1 + 0x44))
        label_1427b90a1:
            rbx_3 = nullptr
        else
            void* rcx = arg1[0xa]
            void* r8 = &arg1[9]
            
            if (rcx != 0)
                r8 = rcx
            
            int32_t rax_2 = *(r8 + (((sx.q(arg1[0xb].d) - 1) & rdi_1) << 2))
            
            if (rax_2 == 0xffffffff)
            label_1427b90a1_1:
                rbx_3 = nullptr
            else
                while (true)
                    rbx_3 = sx.q(rax_2) * 0x60 + arg1[2]
                    
                    if (*rbx_3 == rdi_1.d)
                        break
                    
                    rax_2 = rbx_3[0x14]
                    
                    if (rax_2 == 0xffffffff)
                        goto label_1427b90a1_2
                
                if (rax_2 == 0xffffffff)
                label_1427b90a1_2:
                    rbx_3 = nullptr
        
        void* rax_3 = *(rbx_3 + 0x20)
        void* rcx_2 = &rbx_3[0xc]
        
        if (rax_3 != 0)
            rcx_2 = rax_3
        
        char rax_6 = (*(rbx_3 + 0x10))((*(*rcx_2 + 8))(rcx_2), arg2)
        int64_t r9_1 = *arg3
        result = (*(r9_1 + 8))(arg3, zx.q(rdi_1.d), zx.q(rax_6), r9_1)
        r14 = &r14[1]
        rbp += 1
    while (rbp != r15_1)

return result
