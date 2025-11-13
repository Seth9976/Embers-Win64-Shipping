// 函数: sub_1428b9160
// 地址: 0x1428b9160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 0

if (arg1 != 0 && arg2 != 0)
    int64_t* rax_1 = sub_1428d8d60()
    
    if (rax_1 != 0)
        int64_t* rax_2 = sub_142890500()
        
        if (rax_2 != 0 && sub_1429084c0(rax_2, arg1, arg2, rax_1) != 0)
            rbx.b = sub_142890300(rax_2) == 0
        
        sub_1428d8ae0(rax_1)
        sub_1428901a0(rax_2)
        return zx.q(rbx)

return 0
