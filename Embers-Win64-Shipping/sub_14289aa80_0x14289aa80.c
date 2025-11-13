// 函数: sub_14289aa80
// 地址: 0x14289aa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t r11 = *(arg1 + 0x10)

if (r11 != 0)
    jump(r11)

int32_t rbx_1 = arg2 & 0xffffff7f

if (((rbx_1 - 2) & 0xfffffffc) != 0 || rbx_1 == 4 || arg4 u<= 0x7fffffff)
    uint64_t rax_1 = zx.q(arg6)
    
    if (rax_1.d == 0 || arg2.b s>= 0 || rbx_1 == 6)
    label_14289ab0e:
        int32_t var_20 = rax_1.d
        int32_t var_28 = arg5
        int32_t result = (*(arg1 + 8))()
        
        if (result s< 0 || arg2.b s>= 0 || rbx_1 == 6)
            return result
        
        *arg7 = sx.q(result)
        return 1
    
    rax_1 = *arg7
    
    if (rax_1 u<= 0x7fffffff)
        goto label_14289ab0e

return 0xffffffff
