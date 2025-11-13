// 函数: sub_14226da50
// 地址: 0x14226da50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x348)
int64_t* rax_3
void var_38

if (rcx == 0)
    rax_3 = &var_38
else
    int64_t var_28 = *arg3
    int64_t var_20_1 = arg3[1]
    void* rax_2 = arg3[2]
    void* var_18_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
        rcx = *(arg1 + 0x348)
    
    rax_3 = sub_142411db0(rcx, &var_38, &var_28)
int64_t* rbx_1 = arg3[2]
int32_t rax_4 = rax_3[1].d
*arg2 = *rax_3
arg2[1].d = rax_4

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
