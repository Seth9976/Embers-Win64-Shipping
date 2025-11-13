// 函数: sub_1428f78c0
// 地址: 0x1428f78c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax_1 = sub_1428a96d0(sub_142891580(arg1))

if (rax_1 != 0)
    void* rax_2 = sub_1428f79a0(rax_1)
    
    if (rax_2 != 0)
        char* rax_3 = sub_1428e74e0(arg1)
        int64_t arg_10 = sub_14060aa50(rax_3)
        int32_t rax_5 = sub_1406938b0(rax_3)
        int64_t rax_6 = *(rax_2 + 8)
        
        if (rax_6 == 0)
            return (*(rax_2 + 0x20))(0, &arg_10, zx.q(rax_5))
        
        return sub_1428c41c0(nullptr, &arg_10, rax_5, rax_6())

return 0
