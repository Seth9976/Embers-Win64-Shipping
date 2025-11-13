// 函数: sub_141dc8a90
// 地址: 0x141dc8a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xf8)

if (rcx != 0)
    int64_t var_28 = *arg3
    int64_t var_20_1 = arg3[1]
    void* rax_3 = arg3[2]
    void* var_18_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
        rcx = *(arg1 + 0xf8)
    
    void var_38
    int64_t* rax_4 = sub_141f1bee0(rcx, &var_38, &var_28)
    int32_t rax_5 = rax_4[1].d
    *arg2 = *rax_4
    arg2[1].d = rax_5

int64_t* rbx_1 = arg3[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
