// 函数: sub_1417d8680
// 地址: 0x1417d8680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x150))()
void* const rbx

if (result == 0)
    rbx = nullptr
else
    rbx = *(result + 0x130)

if (data_143de542a == 0)
    *(rbx + 0x2b0) = 0
    *(rbx + 0x2b8) = 0
    
    if (arg2 s> 0 && arg3 s> 0)
        *(rbx + 0x298) = 0
        
        if (arg2 s> *(rbx + 0x29c))
            sub_1405c5510(rbx + 0x290, arg2)
        
        int32_t rax_1 = *(rbx + 0x298) + arg2
        *(rbx + 0x298) = rax_1
        
        if (rax_1 s> *(rbx + 0x29c))
            sub_1405daba0(rbx + 0x290)
        
        *(rbx + 0x2b0) = arg2
        *(rbx + 0x2a8) = 0
        
        if (arg3 s> *(rbx + 0x2ac))
            sub_1405c5510(rbx + 0x2a0, arg3)
        
        result = zx.q(*(rbx + 0x2a8) + arg3)
        *(rbx + 0x2a8) = result.d
        
        if (result.d s> *(rbx + 0x2ac))
            result = sub_1405daba0(rbx + 0x2a0)
        
        *(rbx + 0x2b4) = arg3

return result
