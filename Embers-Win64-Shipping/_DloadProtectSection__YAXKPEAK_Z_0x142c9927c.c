// 函数: ?DloadProtectSection@@YAXKPEAK@Z
// 地址: 0x142c9927c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_18
int32_t arg_20
void* lpAddress = DloadObtainSection(&arg_18, &arg_20)

if (lpAddress != 0)
    if (data_14401b780 == 0)
        bool cond:0_1 = (arg_20 & 0x80000000) != 0
        data_14401b780 = 1
        
        if (not(cond:0_1))
            trap(0xd)
        
        DloadMakePermanentImageCommit(lpAddress, zx.q(arg_18))
    
    lpAddress = VirtualProtect(lpAddress, zx.q(arg_18), arg1, arg2)
    
    if (lpAddress.d == 0)
        trap(0xd)
else
    *arg2 = 4

return lpAddress
