// 函数: sub_142276ff0
// 地址: 0x142276ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141dcdc50(arg1)

if (result != 3)
    int32_t arg_1c = 0
    void arg_10
    int64_t rdx_2 = (*sub_140b5e500(&arg_10, 0x145)).q
    char rax_1 = sub_141f8dba0(arg1, rdx_2)
    
    if (rax_1 == 0)
        arg_1c = 0
        rdx_2 = (*sub_140b5e500(&arg_10, 0x142)).q
        result = sub_141f8dba0(arg1, rdx_2)
    
    if (rax_1 == 0 && (result.b == 0 || (arg1[0x7a].b & 0x10) == 0))
        int64_t rdx_3 = arg1[0x4a]
        
        if (rdx_3 != 0)
            return sub_1425696d0(arg1, rdx_3) __tailcall
    else
        int64_t* rdi_1 = *((*(*arg1 + 0x150))(arg1, rdx_2) + 0x128)
        result = sub_1424b2b60(rdi_1, arg1)
        
        if (result.b != 0)
            if (arg1[0x4a] != 0)
                sub_141f9ecf0(arg1)
            
            return (*(*rdi_1 + 0x778))(rdi_1, arg1)

return result
