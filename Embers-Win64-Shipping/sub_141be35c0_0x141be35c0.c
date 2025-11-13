// 函数: sub_141be35c0
// 地址: 0x141be35c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x6e0)

if (rcx != 0)
    int64_t var_28 = *arg2
    void* rax_2 = arg2[1]
    void* var_20_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
        rcx = *(arg1 + 0x6e0)
    
    int32_t var_18_1 = arg2[2].d
    sub_141be3540(rcx, &var_28)

int64_t rcx_1 = *(arg1 + 0x678)
*(arg1 + 0x678) = *arg2
*arg2 = rcx_1
int64_t rcx_2 = *(arg1 + 0x680)
*(arg1 + 0x680) = arg2[1]
arg2[1] = rcx_2
int32_t result = arg2[2].d
*(arg1 + 0x688) = result
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
