// 函数: sub_140980180
// 地址: 0x140980180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20
int64_t* result = sub_1409633d0(&var_20, arg2, 0)
int64_t* rdi = var_20

if (rdi != 0)
    int64_t r9
    result, r9 = (*(*rdi + 0x2d8))(rdi, arg3)
    int64_t* result_1 = result
    
    if (result != 0)
        *(result + 0x15) = arg5
        result[2].b = arg4
        
        if (arg6 == 0 || arg7 != 0)
            result.b = 0
        else
            result.b = 1
        
        result_1[3].b = arg7
        r9.b = 1
        *(result_1 + 0x17) = result.b
        result = (*(*rdi + 0x98))(rdi, arg3, result_1, r9, 0)

int64_t* var_18

if (var_18 != 0)
    result = zx.q(var_18[1].d)
    var_18[1].d -= 1
    
    if (result.d == 1)
        result = (**var_18)(var_18)
        int32_t rdi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_18 + 8))(var_18, zx.q(rdi_1))

return result
