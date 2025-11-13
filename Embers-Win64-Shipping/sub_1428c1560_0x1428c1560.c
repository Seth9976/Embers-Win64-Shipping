// 函数: sub_1428c1560
// 地址: 0x1428c1560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = sub_1428bf110(*(arg1 + 0x18))
int64_t* rcx_1 = *(arg1 + 0x28)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax + 7)
int32_t result_1 = (temp1 + (temp0 & 7)) s>> 3
int64_t result = sx.q(result_1)

if (rcx_1 != 0)
    if (arg2 == 0)
        return result
    
    if (arg3 u>= result)
        int32_t rax_4 = sub_14288fbc0(rcx_1, arg2, result_1)
        
        if (rax_4 != 0xffffffff)
            return result
        
        sub_1428a5670(rax_4 + 0x11, 0x104, rax_4 + 0x65, "crypto\ec\ec_key.c", 0x22d)

return 0
