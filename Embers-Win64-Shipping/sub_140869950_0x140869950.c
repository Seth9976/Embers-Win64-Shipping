// 函数: sub_140869950
// 地址: 0x140869950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_14396ff58
int32_t result = 0
__builtin_memset(&data_14396ff40, 0, 0x20)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        if (rbx[2].b != 0)
            jump(**rbx)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            jump(**rbx)
        
        result = 0
        bool z_1
        
        if (0 == *(rbx + 0xc))
            *(rbx + 0xc) = 1
            z_1 = true
        else
            result = *(rbx + 0xc)
            z_1 = false
        
        if (z_1)
            return sub_1405dcc10(&data_143f02390, rbx) __tailcall

return result
