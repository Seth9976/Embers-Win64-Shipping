// 函数: sub_14100f340
// 地址: 0x14100f340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efcb00
sub_141017370(arg1)
void* r14 = &arg1[0x31]

for (int64_t i = 2; i != 0; )
    int64_t rax_1 = sx.q(*(r14 - 8))
    r14 -= 0x60
    int64_t* rbx_1 = *(r14 + 0x50)
    i -= 1
    int64_t rdi_1 = 0
    uint64_t rsi_2 = rax_1 << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[rax_1])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != rsi_2)
        
        rbx_1 = *(r14 + 0x50)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    int64_t rcx_2 = *r14
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

sub_14100e0e0(&arg1[0xc])
return sub_14100e160(&arg1[2]) __tailcall
