// 函数: sub_140853260
// 地址: 0x140853260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x6bc) != 0)
    sub_1408622c0(arg1)
    arg3 = sub_14084fd50(arg1)

int32_t rax_2 = *(arg1 + 0x6b8) & 0xfffffffd
*(arg1 + 0x6e8) = 1
*(arg1 + 0x6e4) = 1
*(arg1 + 0x6b8) = ((zx.d(arg2) * 2) | rax_2) & 0xfffffbff
sub_140859420(arg1, 2, arg3)
int64_t rbp
rbp.b = 0
*(arg1 + 0xc4) += 1
int32_t rax_3 = *(arg1 + 0xb8)
int32_t rcx_6 = *(arg1 + 0xc4)
int64_t rdi = sx.q(rax_3 - 1)

if (rax_3 - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_5 = *(arg1 + 0xb0)
        
        if (*(rbx_2 + rax_5 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_7 = *(rbx_2 + rax_5)
            
            if (rcx_7 == 0)
                rbp.b = 1
            else if ((*(*rcx_7 + 0x50))(rcx_7) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_6 = *(arg1 + 0xc4)

int32_t result = rcx_6 - 1
*(arg1 + 0xc4) = result

if (rbp.b == 0)
    return result

return sub_140599630(arg1 + 0xb0, 0)
