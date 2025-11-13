// 函数: sub_142666c80
// 地址: 0x142666c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

int64_t var_38 = *arg2

if (rbx != 0)
    *(rbx + 0xc) += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t result = sub_142652280(arg1 + 0x320, &var_38)

if (result == 0xffffffff)
    int64_t rsi_1 = sx.q(*(arg1 + 0x328))
    int32_t rax_5 = (rsi_1 + 1).d
    *(arg1 + 0x328) = rax_5
    
    if (rax_5 s> *(arg1 + 0x32c))
        sub_1405a4df0(arg1 + 0x320)
    
    int64_t* rdx_2 = *(arg1 + 0x320) + rsi_1 * 0x18
    *rdx_2 = var_38
    rdx_2[1] = rbx
    result = arg3
    rdx_2[2].d = result
else if (rbx != 0)
    result = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (result == 1)
        result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
