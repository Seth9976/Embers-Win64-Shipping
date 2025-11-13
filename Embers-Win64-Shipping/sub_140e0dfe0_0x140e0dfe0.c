// 函数: sub_140e0dfe0
// 地址: 0x140e0dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) = *arg2
void* rbx = arg2[1]
int64_t* rcx = *(arg1 + 0x70)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x70)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x70) = rbx

*(arg1 + 0x88) = *arg3
int64_t* rbx_1 = arg3[2]
int64_t var_28 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_28 != arg1 + 0x90)
    arg4 = var_28.o
    var_28.o = *(arg1 + 0x90)
    *(arg1 + 0x90) = arg4

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        int64_t r8 = *rbx_2
        (*r8)(rbx_2, arg4, r8)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_1 = *rbx_2
            (*(r8_1 + 8))(rbx_2, 1, r8_1)

return arg1
