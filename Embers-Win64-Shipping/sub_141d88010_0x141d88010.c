// 函数: sub_141d88010
// 地址: 0x141d88010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

int64_t rax = *(arg1 + 8)
int64_t var_38 = *arg2
int64_t* var_30 = rbx
int96_t zmm0 = (*(arg1 + 0x10)).12

if (rbx != 0)
    rbx[1].d += 1

zmm0.q(sx.q(zmm0:8.d) + rax, &var_38)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t result
result.b = 1
return result
