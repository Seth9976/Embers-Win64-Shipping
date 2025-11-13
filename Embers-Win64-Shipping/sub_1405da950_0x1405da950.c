// 函数: sub_1405da950
// 地址: 0x1405da950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xf9) != 0 && *arg2 != 0)
    if (arg3 != 0)
        int32_t rax_1 = 0
        
        if (0 == *(arg1 + 0xfc))
            *(arg1 + 0xfc) = 0
        else
            rax_1 = *(arg1 + 0xfc)
        
        if (rax_1 s> 0)
            sub_1419a21e0(0)
    
    sub_1423465b0(*arg2, 0, 0)
    *(arg1 + 0xf9) = 0

int64_t* rbx_1 = arg2[1]

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
