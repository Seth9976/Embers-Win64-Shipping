// 函数: sub_141f12820
// 地址: 0x141f12820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x120)
void* rdx_1 = sx.q(*(arg1 + 0x128)) * 0x70 + rbx
void* const result

if (rbx == rdx_1)
label_141f12875:
    sub_141f0ce20(arg1, arg2)
    int64_t var_38 = *arg3
    int64_t var_30_1 = arg3[1]
    void* rax_3 = arg3[2]
    void* var_28_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    result = sub_141f12820(arg1, arg2, &var_38, arg4)
else
    while (*rbx != arg2)
        rbx = &rbx[0xe]
        
        if (rbx == rdx_1)
            goto label_141f12875
    
    int32_t arg_8
    sub_140d446e0(&rbx[2], &arg_8, arg3)
    int64_t rax_6 = sx.q(arg_8)
    
    if (rax_6.d == 0xffffffff)
        result = nullptr
    else
        result = rax_6 * 0x30 + rbx[2]
    
    int64_t* rcx_4 = result + 0x18
    
    if (result == 0)
        rcx_4 = nullptr
    
    if (rcx_4 != 0)
        int64_t* i = *rcx_4
        
        for (void* rsi_3 = &i[sx.q(rcx_4[1].d) * 2]; i != rsi_3; i = &i[2])
            result = sub_140b76600(arg4, i)
    
    int64_t* i_1 = rbx[0xc]
    
    for (void* rbx_4 = &i_1[sx.q(rbx[0xd].d) * 2]; i_1 != rbx_4; i_1 = &i_1[2])
        result = sub_140b76600(arg4, i_1)

int64_t* rbx_1 = arg3[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
