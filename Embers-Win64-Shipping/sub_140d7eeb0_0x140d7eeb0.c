// 函数: sub_140d7eeb0
// 地址: 0x140d7eeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

POINT point

if (GetCursorPos(&point) == 0)
    BOOL result
    result.b = 0
    return result

POINT Point
Point.x = point.x
Point.y = point.y
void* var_18
sub_140d7ac60(&var_18, arg1 + 0xc8, WindowFromPoint(Point))
int64_t rdi
rdi.b = var_18 != 0
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_1 = *var_10
        (*rdx_1)(var_10, rdx_1)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_10
            (*(r8_1 + 8))(var_10, 1, r8_1)

return zx.q(rdi.b)
