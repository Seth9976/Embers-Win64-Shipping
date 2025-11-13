// 函数: sub_1420bc8b0
// 地址: 0x1420bc8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8_1
char r9_1

if (*arg1 == *arg2)
    r8_1 = (arg2[3].d).b
    r9_1 = (arg1[3].d).b

int64_t rdi

if (*arg1 != *arg2 || ((r8_1 ^ r9_1) & 1) != 0 || ((r8_1 ^ r9_1) & 2) != 0
        || ((r8_1 ^ r9_1) & 4) != 0 || ((r8_1 ^ r9_1) & 8) != 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t* rbx = arg1[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_3 = *rbx_1
        (*r8_3)(rbx_1, arg3, r8_3)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_4 = *rbx_1
            (*(r8_4 + 8))(rbx_1, 1, r8_4)

return zx.q(rdi.b)
