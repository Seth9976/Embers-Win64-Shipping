// 函数: sub_141b3d500
// 地址: 0x141b3d500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg2
*(arg1 + 8) = *(arg2 + 8)
sub_14086c240(arg1 + 0x10, arg2 + 0x10)

if (arg1 + 0x20 != r15 + 0x20)
    int32_t i_2 = *(arg1 + 0x28)
    
    if (i_2 != 0)
        int64_t* rbx_2 = *(arg1 + 0x20) + 0x18
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_2 = &rbx_2[6]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(r15 + 0x28)
    void* rbx_3 = *(r15 + 0x20)
    int32_t r8_1 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_1405a4b40(arg1 + 0x20, i_3, r8_1)
        int32_t* rbp_1 = *(arg1 + 0x20)
        
        if (i_3 != 0)
            void* r15_1 = rbx_3 + 8
            int64_t arg_8 = 0
            void* rdi_1 = &rbp_1[8]
            int32_t i_1
            
            do
                *(rdi_1 - 8) = 0
                *rdi_1 = 0
                *rbp_1 = 0xffffffff
                *(rdi_1 - 0x1c) = 0
                *(rdi_1 - 0x10) = 0
                *rdi_1 = 0
                
                if (*(rdi_1 + 4) s<= 0xffffffff)
                    sub_1405947f0(rdi_1 - 8, 0)
                
                int16_t* rax_1 = *(rdi_1 - 8)
                
                if (rax_1 != 0)
                    *rax_1 = 0
                
                *(rdi_1 - 0x18) = 0
                *rbp_1 = *(r15_1 - 8)
                *(rdi_1 - 0x18) = *r15_1
                *(rdi_1 - 0x10) = *(r15_1 + 8)
                sub_140597df0(rdi_1 - 8, r15_1 + 0x10)
                rbp_1 = &rbp_1[0xc]
                *(rdi_1 + 8) = *(r15_1 + 0x20)
                r15_1 += 0x30
                rdi_1 += 0x30
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            r15 = arg2
    else
        *(arg1 + 0x2c) = 0

*(arg1 + 0x30) = *(r15 + 0x30)
*(arg1 + 0x38) = *(r15 + 0x38)
*(arg1 + 0x40) = *(r15 + 0x40)
sub_140597df0(arg1 + 0x48, r15 + 0x48)
*(arg1 + 0x58) = *(r15 + 0x58)
sub_141f98dc0(arg1 + 0x60)
return arg1
