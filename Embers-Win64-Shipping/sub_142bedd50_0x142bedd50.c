// 函数: sub_142bedd50
// 地址: 0x142bedd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0xe8)

if (rdi != 0 && *(rdi + 0x58) != 0 && arg2 != 0 && *arg2 != 0)
    int64_t* rax_1 = sub_142b993e0(arg2, *(rdi + 0x78))
    
    if (rax_1 != 0)
        void* rdx_1 = *(rdi + 0x60) + *rax_1 * 0x18
        
        if (rdx_1 != 0)
            int32_t rcx_2 = *(rdx_1 + 8)
            
            if (rcx_2 == 1)
                *arg3 = 1
                *(arg3 + 8) = *(rdx_1 + 0x10)
                return 0
            
            if (rcx_2 == 2)
                *arg3 = 2
                arg3[2] = *(rdx_1 + 0x10)
                return 0
            
            if (rcx_2 == 3)
                *arg3 = 3
                arg3[2] = *(rdx_1 + 0x10)
                return 0

return 6
