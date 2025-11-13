// 函数: sub_140f15ea0
// 地址: 0x140f15ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_18 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != arg1 + 0xd0)
    var_18.o = *(arg1 + 0xd0)
    *(arg1 + 0xd0) = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*(arg1 + 0x88) |= 1
void* i = *(arg1 + 0x18)
int64_t result = sx.q(*(arg1 + 0x20))

for (void* rdx_1 = result * 0x70 + i; i != rdx_1; i += 0x70)
    *(i + 0x68) |= 1

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
