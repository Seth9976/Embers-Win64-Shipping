// 函数: sub_140e54e20
// 地址: 0x140e54e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_18 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != arg1)
    var_18.o = *arg1
    *arg1 = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[3]
var_18 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_18 != &arg1[1])
    var_18.o = arg1[1]
    arg1[1] = var_18.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_1 = *rbx_1
            (*(r8_1 + 8))(rbx_1, 1, r8_1)

sub_1407473e0(&arg1[2], &arg2[4])
arg1[3].b = arg2[6].b
return arg1
