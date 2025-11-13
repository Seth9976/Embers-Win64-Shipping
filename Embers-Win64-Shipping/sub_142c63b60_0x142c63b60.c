// 函数: sub_142c63b60
// 地址: 0x142c63b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0x40001b)
    *arg3 = j_sub_140592360()
else if (arg2 == 0x40001c)
    *arg3 = sub_142c588e0(arg1)
else if (arg2 == 0x400022)
    *arg3 = arg1 + 0x4fa0
else
    if (arg2 != 0x40002b && arg2 != 0x40002d)
        return 0x30
    
    void* rdi_1 = *(arg1 + 0x10)
    *arg3 = arg1 + 0x4fb0
    int32_t i = 0
    *(arg1 + 0x4fb0) = 1
    *(arg1 + 0x4fb8) = 0
    
    if (rdi_1 != 0)
        char* rax_2 = rdi_1 + 0x2c0
        
        do
            if (*rax_2 != 0)
                uint64_t i_1 = zx.q(i)
                
                if (arg2 != 0x40002b)
                    *(arg1 + 0x4fb8) = *(rdi_1 + i_1 * 0x28 + 0x2d8)
                else
                    *(arg1 + 0x4fb8) = *(rdi_1 + (i_1 + 0x12) * 0x28)
                
                break
            
            i += 1
            rax_2 = &rax_2[0x28]
        while (i u< 2)

return 0
