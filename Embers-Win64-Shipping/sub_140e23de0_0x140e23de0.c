// 函数: sub_140e23de0
// 地址: 0x140e23de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0xef].b & 2) != 0 || *(arg1 + 0x734) == 4)
    sub_140de1b90(&arg1[0x57], arg2)
else
    int64_t var_18 = *arg2
    void* rax_2 = arg2[1]
    void* var_10_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    sub_140693860(arg1[0x10e], &var_18)

int64_t result = sub_140e19ef0(arg1, 8)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
