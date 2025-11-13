// 函数: sub_140f5d870
// 地址: 0x140f5d870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x2d0)

if (rbx != 0)
    rbx[1].d += 1

sub_140e0dfc0(arg1 + 0x2b8)
int64_t* rdi_1 = arg2[1]
int64_t var_18 = *arg2

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (&var_18 != arg1 + 0x2c8)
    var_18.o = *(arg1 + 0x2c8)
    *(arg1 + 0x2c8) = var_18.o

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t result = sub_140de7bf0(arg1 + 0x2b8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
