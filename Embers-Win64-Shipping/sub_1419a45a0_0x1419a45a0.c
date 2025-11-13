// 函数: sub_1419a45a0
// 地址: 0x1419a45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f138f4 != 0)
    sub_1419987f0()
    void* rcx = *arg1
    
    if (rcx != 0)
        int64_t rax_1 = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax_1 = *(rcx + 8)
        
        if (((rax_1 u>> 0x1a).b & 1) == 0)
            return 0
    
    int64_t* rcx_1 = *arg1
    *arg1 = 0
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)

return 1
