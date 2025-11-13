// 函数: sub_1429081f0
// 地址: 0x1429081f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = arg3

if (arg1 != arg2 && sub_142890040(arg1, arg2) == 0)
    return 0

if (rbx s<= 0)
    return 1

while (true)
    int32_t rax_2 = sub_142890560(arg1)
    int32_t rax_3 = sub_142890560(arg4)
    int32_t rax_4 = rax_3 - rax_2
    
    if (rax_3 - rax_2 s< 0)
        sub_1428a5670(3, 0x77, 0x6e, "crypto\bn\bn_mod.c", 0x126)
        return 0
    
    int32_t rdi_2 = rbx
    
    if (rax_4 s<= rbx)
        rdi_2 = rax_4
    
    if (rdi_2 == 0)
        if (sub_1428f56a0(arg1, arg1) == 0)
            return 0
        
        rbx -= 1
    else
        if (sub_1428f5510(arg1, arg1, rdi_2) == 0)
            return 0
        
        rbx -= rdi_2
    
    if (sub_14288fc80(arg1, arg4) s>= 0 && sub_1428d9010(arg1, arg1, arg4) == 0)
        return 0
    
    if (rbx s<= 0)
        return 1
