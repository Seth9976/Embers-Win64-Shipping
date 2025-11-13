// 函数: sub_14096ca70
// 地址: 0x14096ca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x4c].b = 0

if (arg1[0x4e].d != 0)
    int64_t* rcx = arg1[0x4d]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x4e].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x4d]
        
        (*(*rcx_1 + 0x50))(rcx_1)

uint64_t result = sub_1405c2d80(data_143f5b298 + 0x9f0, arg1[0x48])

if (arg1[0x46] != 0)
    int64_t rax_5 = (*(*arg1 + 0x150))(arg1)
    result = sub_1423d84f0(data_143f5b298, rax_5, arg1[0x1d])
    arg1[0x46] = 0

return result
