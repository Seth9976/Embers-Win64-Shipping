// 函数: sub_1419cdd40
// 地址: 0x1419cdd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(*arg1 + 0x50))()

if (result != 0)
    result = (*(*arg1 + 0x38))(arg1)
    
    if (result != 0)
        int64_t var_18
        int64_t* rax_3 = (*(*arg1 + 0x18))(arg1, &var_18)
        int64_t rdx_2 = *arg1
        sub_1419d3d50((*(rdx_2 + 8))(arg1, rdx_2), rax_3)
        int64_t rcx_4 = var_18
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t* rax_6 = (*(*arg1 + 0x20))(arg1, &var_18)
        int64_t rdx_5 = *arg1
        result = sub_1419d3d50((*(rdx_5 + 8))(arg1, rdx_5), rax_6)
        int64_t rcx_8 = var_18
        
        if (rcx_8 != 0)
            return sub_140a74f90(rcx_8)

return result
