// 函数: sub_14292b900
// 地址: 0x14292b900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* rdi = *arg2

if ((*(arg1 + 0x18) & 0x400) != 0 || (*rdi & 3) == 0)
    if (sub_1428f6490(*(rdi + 8), arg3) == 0)
        return 1
else
    int32_t rbx_1 = 0
    
    if (sub_142898c70(*(rdi + 0x18)) s> 0)
        while (true)
            if (sub_1428f6490(sub_142898ea0(*(rdi + 0x18), rbx_1), arg3) == 0)
                return 1
            
            rbx_1 += 1
            
            if (rbx_1 s>= sub_142898c70(*(rdi + 0x18)))
                return 0

return 0
