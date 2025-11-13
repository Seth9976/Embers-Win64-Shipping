// 函数: sub_141c5c610
// 地址: 0x141c5c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = 0
bool z

if (0 == *(arg1 + 0x1bc))
    *(arg1 + 0x1bc) = 0
    z = true
else
    result = (*(arg1 + 0x1bc)).b
    z = false

if (not(z))
    int64_t* rcx = *(arg1 + 0x78)
    int64_t rdi
    rdi.b = 0
    
    if ((*(*rcx + 0x20))(rcx, zx.q(data_143a13c14), 0) == 0)
        int64_t* rcx_1 = *(arg1 + 0x78)
        (*(*rcx_1 + 0x10))(rcx_1)
        rdi.b = 1
    
    sub_141c738c0(arg1)
    
    if (arg2 != 0)
        sub_141c698b0(arg1)
    
    int64_t* rcx_4 = *(arg1 + 0x78)
    result = (*(*rcx_4 + 0x20))(rcx_4, 0x3e8, 0)
    
    if (result == 0)
        int64_t* rcx_5 = *(arg1 + 0x78)
        return (*(*rcx_5 + 0x10))(rcx_5)

return result
