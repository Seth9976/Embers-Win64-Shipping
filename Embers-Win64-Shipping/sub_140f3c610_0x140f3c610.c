// 函数: sub_140f3c610
// 地址: 0x140f3c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x1a8)
int64_t var_18 = *(arg2 + 0x1a0)
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

sub_140f2ce90(arg1 + 0x2a8, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*(arg1 + 0x2e) &= 0xfb
char result = sub_140db3510(arg1 + 0x18)

if (result == 0)
    return result

return sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))
