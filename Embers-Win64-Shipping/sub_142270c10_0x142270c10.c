// 函数: sub_142270c10
// 地址: 0x142270c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
rdi.b = 0
void* rcx = *(arg1 + 0x348)

if (rcx != 0)
    int64_t var_28 = *arg2
    int64_t var_20_1 = arg2[1]
    void* rax_3 = arg2[2]
    void* var_18_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
        rcx = *(arg1 + 0x348)
    
    char var_30_1 = arg6
    int32_t var_38_1 = arg5
    rdi = zx.q(sub_142413a00(rcx, &var_28, arg3, arg4))

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_2 = *rbx_1
        (*rdx_2)(rbx_1, rdx_2)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return zx.q(rdi.b)
