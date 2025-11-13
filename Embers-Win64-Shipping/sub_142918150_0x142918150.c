// 函数: sub_142918150
// 地址: 0x142918150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
int32_t rax_1 = *(arg1 + 0x30)
*(arg1 + 0x30) -= 1

if (rax_1 s> 1)
    return 

int64_t* rbx_1 = *(arg1 + 0x20)

if (rbx_1 != 0)
    int64_t* i = *rbx_1
    
    if (i != 0)
        do
            sub_1428bf6a0(i)
            i = rbx_1[1]
            rbx_1 = &rbx_1[1]
        while (i != 0)
        
        rbx_1 = *(arg1 + 0x20)
    
    sub_1428a6780(rbx_1)

sub_1428a5ba0(*(arg1 + 0x38))
sub_1428a6780(arg1)
