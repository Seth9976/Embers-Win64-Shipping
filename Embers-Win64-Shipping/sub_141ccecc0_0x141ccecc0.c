// 函数: sub_141ccecc0
// 地址: 0x141ccecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_28 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_28 != arg1 + 0x298)
    var_28.o = *(arg1 + 0x298)
    *(arg1 + 0x298) = var_28.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg3[1]
var_28 = *arg3

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* result = &var_28

if (&var_28 != arg1 + 0x2a8)
    var_28.o = *(arg1 + 0x2a8)
    *(arg1 + 0x2a8) = var_28.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (*(arg1 + 0x21c) != 0)
    int64_t* i = *(arg1 + 0x1f8)
    
    for (void* rdi_3 = &i[sx.q(*(arg1 + 0x200)) * 2]; i != rdi_3; i = &i[2])
        int64_t* rcx_6 = *i
        
        if (*(rcx_6 + 0x1b) != 0)
            result = (*(*rcx_6 + 0x90))(rcx_6)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp7_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
