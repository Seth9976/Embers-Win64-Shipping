// 函数: sub_142953800
// 地址: 0x142953800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t result_1 = 0
int64_t* result_2 = arg3
int32_t rbp = 0

if (arg2[5].d == 0 && sub_1428bf8a0(arg1, arg2) == 0)
    if (result_2 == 0)
        uint64_t result = sub_1428d8d60()
        result_1 = result
        result_2 = result
        
        if (result == 0)
            return result
    
    sub_1428d8e50(result_2)
    int64_t* rax_2 = sub_1428d8ba0(result_2)
    int64_t* rax_3 = sub_1428d8ba0(result_2)
    
    if (rax_3 != 0 && sub_1428bf6e0(arg1, arg2, rax_2, rax_3, result_2) != 0
            && sub_142890040(arg2[2], rax_2) != 0 && sub_142890040(arg2[3], rax_3) != 0
            && sub_142890900(arg2[4], 1) != 0)
        arg2[5].d = 1
        rbp = 1
    
    sub_1428d8a60(result_2)
    sub_1428d8ae0(result_1)
    return zx.q(rbp)

return 1
