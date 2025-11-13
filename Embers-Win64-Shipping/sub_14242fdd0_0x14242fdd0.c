// 函数: sub_14242fdd0
// 地址: 0x14242fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x48)

if (rax != 0 && rax != -0xd0)
    void* rcx = *(rax + 0xd0)
    
    if (rcx != 0)
        int32_t rax_2 = *(arg1 + 0x40)
        void* r14 = *(rcx + 0x28)
        int32_t rbx
        
        if (rax_2 s>= 0)
            rbx = 6
            
            if (rax_2 s< 6)
                rbx = rax_2
        else
            rbx = 0
        
        int32_t rax_3 = sub_1423c1c80(rcx)
        
        if (rbx s<= rax_3)
            rax_3 = rbx
        
        int32_t rdi_1 = arg3 - rax_3
        int32_t rax_4 = 0
        
        if (rdi_1 + 1 s>= 0)
            rax_4 = rdi_1 + 1
        
        *arg4 = rax_4
        void*** rax_5 = j_sub_140a82f30(0x60)
        void*** rbx_1
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            rbx_1 = sub_1424284b0(rax_5, r14, 0)
        
        void*** rax_7 = j_sub_140a82f30(0x20)
        
        if (rax_7 == 0)
            return rax_7
        
        int32_t rcx_2 = *arg4
        rax_7[2] = rbx_1
        *rax_7 = &data_14334b170
        rax_7[1] = arg2
        rax_7[3].d = rcx_2
        return rax_7

*arg4 = arg3
return arg2
