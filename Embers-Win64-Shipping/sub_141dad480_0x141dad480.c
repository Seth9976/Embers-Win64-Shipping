// 函数: sub_141dad480
// 地址: 0x141dad480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x60]
int64_t r15 = arg1[0x5f]

if (rbx != 0)
    rbx[1].d += 1

int64_t var_48 = *arg2
void* rax_1 = arg2[1]
void* var_40 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 1, 0xa, &var_48)
int32_t result

if (arg4 == 0)
label_141dad525:
    int64_t var_38 = *arg3
    void* rax_6 = arg3[1]
    void* var_30_1 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    int64_t var_28 = r15
    int64_t* var_20_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    result = sub_141daeec0(arg1, &var_28, &var_38, 0, arg5)
    
    if (result.b == 0)
        result = (*(*arg1 + 0x198))(arg1)
        *(arg1 + 0x29c) = 1
else
    int64_t* rcx = *arg3
    result = (*(*rcx + 0x40))(rcx)
    
    if (result != 0xc8)
        int64_t* rcx_1 = *arg3
        result = (*(*rcx_1 + 0x40))(rcx_1)
        
        if (result != 0xcc)
            goto label_141dad525
    
    int64_t* rcx_2 = *arg2
    
    if (rcx_2 != 0)
        result = (*(*rcx_2 + 0x28))(rcx_2)
        arg1[0x6b].d += result

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    result = rdi_1[1].d
    rdi_1[1].d -= 1
    
    if (result == 1)
        result = (**rdi_1)(rdi_1)
        int32_t rbx_2 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rbx_2 == 1)
            return (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))

return result
