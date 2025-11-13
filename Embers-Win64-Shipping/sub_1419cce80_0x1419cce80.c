// 函数: sub_1419cce80
// 地址: 0x1419cce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockShared(&arg1[4])
ReleaseSRWLockShared(&arg1[4])
int64_t* rbx = *arg1
void* rdi_1 = &rbx[sx.q(arg1[1].d)]

if (rbx == rdi_1)
label_1419ccede:
    *arg2 = 0
else
    int32_t rax_3
    
    while (true)
        int64_t* rcx_2 = **rbx
        rax_3 = (*(*rcx_2 + 0x38))(rcx_2, arg4)
        
        if (rax_3 != 0xffffffff)
            break
        
        rbx = &rbx[1]
        
        if (rbx == rdi_1)
            goto label_1419ccede_1
    
    int64_t* rcx_3 = *rbx
    
    if (rcx_3 == 0)
    label_1419ccede_1:
        *arg2 = 0
    else
        int64_t arg_8
        sub_1419cea00(rcx_3, &arg_8, rax_3)
        *arg2 = arg_8
        arg_8 = 0
        sub_1405d1550(&arg_8)

return arg2
