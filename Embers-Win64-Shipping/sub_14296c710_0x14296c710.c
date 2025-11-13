// 函数: sub_14296c710
// 地址: 0x14296c710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r10 = sx.q(sub_142890e90(arg5))
void* rdi_1 = arg4 + 3 + r10
void* rdi_2 = rdi_1 - modu.dp.q(0:rdi_1, r10)

if (rdi_2 u>= r10 * 2 && arg4 u<= 0xff)
    if (arg1 == 0)
        *arg2 = rdi_2
        return 1
    
    *arg1 = arg4.b
    arg1[1] = not.b(*arg3)
    arg1[2] = not.b(arg3[1])
    arg1[3] = not.b(arg3[2])
    memcpy(&arg1[4], arg3, arg4.d)
    int32_t rbp_1 = rdi_2.d
    int32_t rax_7
    
    if (rdi_2 u> arg4 + 4)
        rax_7 = sub_142897af0(arg4 + 4 + arg1, zx.q(rdi_2.d - arg4.d - 4))
    
    void arg_20
    
    if ((rdi_2 u<= arg4 + 4 || rax_7 s> 0) && sub_142892db0(arg5, arg1, &arg_20, arg1, rbp_1) != 0
            && sub_142892db0(arg5, arg1, &arg_20, arg1, rbp_1) != 0)
        *arg2 = rdi_2
        return 1

return 0
