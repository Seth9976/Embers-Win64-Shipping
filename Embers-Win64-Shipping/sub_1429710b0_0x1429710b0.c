// 函数: sub_1429710b0
// 地址: 0x1429710b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t result_2 = 0
int64_t* result_1 = arg3
int32_t rdi = 0

if (arg2[5].d == 0 && sub_1428bf8a0(arg1, arg2) == 0)
    if (result_1 == 0)
        uint64_t result = sub_1428d8d60()
        result_2 = result
        result_1 = result
        
        if (result == 0)
            return result
    
    sub_1428d8e50(result_1)
    int64_t* rax_2 = sub_1428d8ba0(result_1)
    int64_t* rax_3 = sub_1428d8ba0(result_1)
    
    if (rax_3 != 0 && sub_1428bf6e0(arg1, arg2, rax_2, rax_3, result_1) != 0
            && sub_1428bfc10(arg1, arg2, rax_2) != 0)
        if (arg2[5].d != 0)
            rdi = 1
        else
            sub_1428a5670(0x10, 0x66, 0x44, "crypto\ec\ecp_smpl.c", 0x4a5)
    
    sub_1428d8a60(result_1)
    sub_1428d8ae0(result_2)
    return zx.q(rdi)

return 1
