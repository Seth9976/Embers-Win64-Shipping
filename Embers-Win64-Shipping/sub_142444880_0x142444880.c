// 函数: sub_142444880
// 地址: 0x142444880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x128)
int64_t* result

if (rdi != 0)
    result = (*(*rdi + 0x6f0))(rdi)

if (rdi == 0 || result.b != 0)
    result.b = arg3 ^ 1
    result.b *= 2
    bool cond:0_1 = *(arg1 + 0x578) s> 1
    *(arg1 + 0x569) = result.b
    
    if (not(cond:0_1) && (sub_1423ef4c0(data_143f5b298, arg1)[0x12].b == 0 || arg4 != 0))
        sub_140597df0(arg1 + 0x570, arg2)
        
        if (rdi == 0)
            *(arg1 + 0x55c) = 0
        else if (arg4 == 0)
            (*(*rdi + 0x6f8))(rdi, arg2, zx.q(arg3))
    
    result.b = 1

return result
