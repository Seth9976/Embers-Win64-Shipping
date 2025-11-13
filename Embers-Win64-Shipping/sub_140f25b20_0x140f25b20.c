// 函数: sub_140f25b20
// 地址: 0x140f25b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x18)

if (rbx != 0)
    rbx[1].d += 1

sub_140e0dfc0(arg1)
int64_t* rdi_1 = arg2[1]
int64_t var_18 = *arg2

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (&var_18 != arg1 + 0x10)
    var_18.o = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_18.o

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140de7bf0(arg1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (arg1 == 0)
    return nullptr

return arg1 - 0x10
