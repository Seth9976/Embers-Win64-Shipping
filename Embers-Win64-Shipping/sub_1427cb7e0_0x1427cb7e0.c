// 函数: sub_1427cb7e0
// 地址: 0x1427cb7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(*arg1 + 0x28))()
int32_t var_18

switch (result)
    case 0, 1, 4
        int32_t rdi_1 = 0
        result = (*(*arg1 + 0xc8))(arg1, &__dos_header)
        
        if (result != 0)
            do
                int64_t* arg_8
                (*(*arg1 + 0xd0))(arg1, &arg_8, 1, zx.q(rdi_1))
                int64_t* rcx_4 = arg_8
                (*(*rcx_4 + 0xa0))(rcx_4, &var_18)
                int64_t* rcx_5 = arg_8
                var_18 = *arg2
                (*(*rcx_5 + 0x98))(rcx_5, &var_18)
                rdi_1 += 1
                result = (*(*arg1 + 0xc8))(arg1)
            while (rdi_1 u< result)
    case 2, 3
        (*(*arg1 + 0x160))(arg1, &var_18)
        var_18 = *arg2
        return (*(*arg1 + 0x158))(arg1, &var_18)
    case 5
        (*(*arg1 + 0x388))(arg1, &var_18)
        var_18 = *arg2
        return (*(*arg1 + 0x380))(arg1, &var_18)

return result
