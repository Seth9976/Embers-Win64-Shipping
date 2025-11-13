// 函数: sub_141d885e0
// 地址: 0x141d885e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = nullptr
int64_t* rbx = *(arg1 + 0x50)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 0x48)

int64_t arg_8
int64_t zmm0 = sub_140e12930(rcx, &arg_8, arg3)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (*(arg1 + 0x30) s> 0 && *(arg1 + 0xc8) s> 0)
    int64_t* rcx_3 = *(arg1 + 0x38)
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x20))(rcx_3)
        float zmm2 = arg_8.d
        float zmm3 = arg_8:4.d
        
        if (zmm0.d f>= zmm2 / zmm3)
            *arg2 = zmm2
            arg2[1] = zmm2 f/ zmm0.d
            return arg2
        
        arg2[1] = zmm3
        *arg2 = zmm3 f* zmm0.d
        return arg2

*arg2 = arg_8
return arg2
