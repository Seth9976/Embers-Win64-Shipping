// 函数: sub_142476330
// 地址: 0x142476330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140597df0(arg1, arg2)
sub_142476260(&arg1[2], &arg2[2])
sub_140597df0(&arg1[4], &arg2[4])
sub_142476260(&arg1[6], &arg2[6])
sub_140597df0(&arg1[8], &arg2[8])
sub_142476260(&arg1[0xa], &arg2[0xa])
sub_140597df0(&arg1[0xc], &arg2[0xc])
sub_142476260(&arg1[0xe], &arg2[0xe])
sub_140597df0(&arg1[0x10], &arg2[0x10])
sub_142476260(&arg1[0x12], &arg2[0x12])
sub_140597df0(&arg1[0x14], &arg2[0x14])
sub_142476260(&arg1[0x16], &arg2[0x16])
sub_140597df0(&arg1[0x18], &arg2[0x18])
sub_142476260(&arg1[0x1a], &arg2[0x1a])
sub_140597df0(&arg1[0x1c], &arg2[0x1c])
sub_142476260(&arg1[0x1e], &arg2[0x1e])
sub_140597df0(&arg1[0x20], &arg2[0x20])
sub_142476260(&arg1[0x22], &arg2[0x22])
sub_140597df0(&arg1[0x24], &arg2[0x24])
sub_142476260(&arg1[0x26], &arg2[0x26])

if (&arg1[0x28] != &arg2[0x28])
    int32_t i_2 = arg1[0x29].d
    int64_t* rbx_1 = arg1[0x28]
    
    if (i_2 != 0)
        int32_t i
        
        do
            sub_140846380(&rbx_1[2])
            int64_t rcx_20 = *rbx_1
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            rbx_1 = &rbx_1[4]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[0x29].d
    void* r14_1 = arg2[0x28]
    int32_t r8_1 = *(arg1 + 0x14c)
    arg1[0x29].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_14083a1f0(&arg1[0x28], i_3, r8_1)
        void* rbp_1 = arg1[0x28]
        
        if (i_3 != 0)
            void* r14_2 = r14_1 + 0x10
            int32_t i_1
            
            do
                sub_140596d10(rbp_1, r14_2 - 0x10)
                *(rbp_1 + 0x10) = 0
                int32_t j_1 = *(r14_2 + 8)
                int64_t* rbx_2 = *r14_2
                *(rbp_1 + 0x18) = j_1
                
                if (j_1 != 0)
                    sub_14083a1f0(rbp_1 + 0x10, j_1, 0)
                    void* rdi_1 = *(rbp_1 + 0x10)
                    int32_t j
                    
                    do
                        sub_140596d10(rdi_1, rbx_2)
                        sub_140596d10(rdi_1 + 0x10, &rbx_2[2])
                        rdi_1 += 0x20
                        rbx_2 = &rbx_2[4]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                else
                    *(rbp_1 + 0x1c) = 0
                
                rbp_1 += 0x20
                r14_2 += 0x20
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x14c) = 0

return arg1
