// 函数: sub_140b795c0
// 地址: 0x140b795c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140597df0(&arg1[2], &arg2[2])
sub_140597df0(&arg1[6], &arg2[6])
sub_140597df0(&arg1[0xa], &arg2[0xa])
sub_140597df0(&arg1[0xe], &arg2[0xe])
sub_140597df0(&arg1[0x12], &arg2[0x12])
sub_140597df0(&arg1[0x16], &arg2[0x16])
sub_140597df0(&arg1[0x1a], &arg2[0x1a])
sub_140597df0(&arg1[0x1e], &arg2[0x1e])
sub_140597df0(&arg1[0x22], &arg2[0x22])
sub_140597df0(&arg1[0x26], &arg2[0x26])
sub_140597970(&arg1[0x2a], &arg2[0x2a])
sub_140597970(&arg1[0x2e], &arg2[0x2e])
sub_140597df0(&arg1[0x32], &arg2[0x32])
sub_140b78f10(&arg1[0x36], &arg2[0x36])

if (&arg1[0x3a] != &arg2[0x3a])
    int64_t* rbx_1 = *(arg1 + 0xe8)
    int32_t i_3 = arg1[0x3c]
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_14 = *rbx_1
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rbx_1 = &rbx_1[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[0x3c]
    void* rbx_2 = *(arg2 + 0xe8)
    int32_t r8_1 = arg1[0x3d]
    arg1[0x3c] = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808f70(&arg1[0x3a], i_2, r8_1)
        void* rdi_1 = *(arg1 + 0xe8)
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                sub_140596d10(rdi_1, rbx_2)
                int32_t rax_1 = *(rbx_2 + 0x10)
                rbx_2 += 0x18
                *(rdi_1 + 0x10) = rax_1
                rdi_1 += 0x18
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        arg1[0x3d] = i_2

arg1[0x3e].b = arg2[0x3e].b
*(arg1 + 0xf9) = *(arg2 + 0xf9)
*(arg1 + 0xfa) = *(arg2 + 0xfa)
*(arg1 + 0xfb) = *(arg2 + 0xfb)
arg1[0x3f].b = arg2[0x3f].b
*(arg1 + 0xfd) = *(arg2 + 0xfd)
*(arg1 + 0xfe) = *(arg2 + 0xfe)
*(arg1 + 0xff) = *(arg2 + 0xff)
arg1[0x40].b = arg2[0x40].b
sub_140b792e0(&arg1[0x42], &arg2[0x42])
sub_140b792e0(&arg1[0x56], &arg2[0x56])
sub_140b79110(&arg1[0x6a], &arg2[0x6a])
return arg1
