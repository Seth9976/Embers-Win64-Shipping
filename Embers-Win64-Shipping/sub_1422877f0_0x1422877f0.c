// 函数: sub_1422877f0
// 地址: 0x1422877f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
*arg1 = &data_1433155a8
__builtin_memset(&arg1[1], 0, 0xd8)

if (arg1[0x1a] != arg2)
    int32_t rbx_2
    
    if (arg2 == 0 || *arg2 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    if (0 != rbx_2)
        sub_1405947f0(&arg1[0x1a], rbx_2)
        rdx = arg1[0x1b].d
    
    int32_t rax_1 = rdx + rbx_2
    arg1[0x1b].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xdc))
        sub_140594770(&arg1[0x1a])
    
    if (rbx_2 != 0)
        memcpy(arg1[0x1a], arg2, rbx_2 * 2)

sub_142293280(arg1)
return arg1
