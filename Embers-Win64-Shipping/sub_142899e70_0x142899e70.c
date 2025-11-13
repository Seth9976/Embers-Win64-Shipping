// 函数: sub_142899e70
// 地址: 0x142899e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg1 == 0)
    return 0

arg1[0xa].d -= 1

if (arg1[0xa].d s<= 1)
    int64_t rax_3 = arg1[1]
    
    if (rax_3 != 0 || arg1[2] != rax_3)
        int64_t r10_1 = arg1[2]
        int32_t result
        
        if (r10_1 == 0)
            result = rax_3(arg1, 1, 0, 0, 0, 1)
        else
            result = r10_1(arg1, 1, 0, 0, 0, 0, 1, 0)
        
        if (result s<= 0)
            return result
    
    void* rax_4 = *arg1
    
    if (rax_4 != 0)
        int64_t rdx_1 = *(rax_4 + 0x50)
        
        if (rdx_1 != 0)
            rdx_1(arg1)
    
    sub_1428a5f50(0xc, arg1, &arg1[0xd])
    sub_1428a5ba0(arg1[0xe])
    sub_1428a6780(arg1)

return 1
