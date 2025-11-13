// 函数: sub_140978350
// 地址: 0x140978350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = 0
int64_t* var_18
int64_t* result = sub_1409633d0(&var_18, arg2, 0)
int64_t* rdi = var_18

if (rdi != 0)
    result = (*(*rdi + 0x2d8))(rdi, *arg3)
    int64_t* result_1 = result
    
    if (result != 0)
        result[2].b = arg3[1].b
        *(result + 0x15) = *(arg3 + 9)
        
        if (*(arg3 + 0xa) == 0 || *(arg3 + 0xb) != 0)
            result.b = 0
        else
            result.b = 1
        
        *(result_1 + 0x17) = result.b
        result_1[3].b = *(arg3 + 0xb)
        result_1[1].d = *(arg3 + 0xc)
        result = (*(*rdi + 0x98))(rdi, *arg3, result_1, 0)

int64_t* var_10

if (var_10 != 0)
    result = zx.q(var_10[1].d)
    var_10[1].d -= 1
    
    if (result.d == 1)
        result = (**var_10)(var_10)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return result
