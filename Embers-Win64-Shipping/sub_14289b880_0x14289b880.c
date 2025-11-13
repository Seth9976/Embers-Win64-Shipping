// 函数: sub_14289b880
// 地址: 0x14289b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = sub_1428a9620(*arg1)

if (sub_1428afa00(rax, 1, arg1) != 0)
    int32_t result = sub_1428afa00(sub_1428a94b0(*arg1), 1, arg1)
    
    if (result != 0)
        int32_t rcx_4 = arg1[1]
        
        if (rcx_4 == 0 || *arg1 == rcx_4)
            return result
        
        if (sub_1428afa00(sub_1428a9620(rcx_4), 0x8001, rax) != 0)
            return sub_1428afa00(sub_1428a94b0(arg1[1]), 0x8001, rax) __tailcall

return 0
