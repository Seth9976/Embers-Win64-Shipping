// 函数: sub_1405ec5c0
// 地址: 0x1405ec5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
uint64_t result = zx.q(arg1[1].d)
int64_t* rcx

if (result.d == 0)
    rcx = nullptr
else
    rcx = *arg1

if (rcx != 0)
    (*(*rcx + 0x38))(rcx, 0)
    int64_t rcx_1 = *arg1
    
    if (rcx_1 != 0)
        *arg1 = sub_140a84c80(rcx_1, 0, 0)
    
    arg1[1].d = 0
    result = 0

if (result.d != 0)
    int64_t* rcx_2 = *arg1
    
    if (rcx_2 != 0)
        result = (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = *arg1
        
        if (rcx_3 != 0)
            result = sub_140a84c80(rcx_3, 0, 0)
            *arg1 = result
        
        arg1[1].d = 0

int64_t rcx_4 = *arg1

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
