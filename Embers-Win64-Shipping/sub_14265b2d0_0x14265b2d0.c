// 函数: sub_14265b2d0
// 地址: 0x14265b2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg3
int64_t rdi

if (rcx != 0)
label_14265b2f8:
    int64_t var_18 = *arg4
    void* rax_2 = arg4[1]
    void* var_10_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    int64_t var_20_1 = 0
    int64_t* var_28_1 = &var_18
    
    if ((*(*rcx + 0x6f8))(rcx, arg2, &var_18) == 0)
        rdi.b = 0
    else
        rdi.b = 1
else
    rcx = *(arg1 + 0x28)
    
    if (rcx != 0)
        goto label_14265b2f8
    
    rdi.b = 0

int64_t* rbx_1 = arg4[1]

if (rbx_1 == 0)
    return zx.q(rdi.b)

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    int64_t rdx = *rbx_1
    (*rdx)(rbx_1, rdx)
    int32_t rsi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8_2 = *rbx_1
        (*(r8_2 + 8))(rbx_1, zx.q(rsi_1), r8_2)

return zx.q(rdi.b)
