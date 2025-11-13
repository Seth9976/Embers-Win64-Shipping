// 函数: sub_14265ad90
// 地址: 0x14265ad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    *arg1 = 0
    arg1[1] = 0
else
    void* rax_1 = sub_14269cf80()
    
    if (rax_1 == 0)
        *arg1 = 0
        arg1[1] = 0
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> arg4[7].d || *(arg4[6] + (rax_2 << 3)) != rax_1 + 0x30)
            *arg1 = 0
            arg1[1] = 0
        else
            int64_t* rcx_1 = arg4[0x23]
            
            if (rcx_1 == 0)
                (*(*arg4 + 0x390))(arg4)
                rcx_1 = arg4[0x23]
            
            sub_14265a960(rcx_1, arg1, arg2, arg3)

return arg1
