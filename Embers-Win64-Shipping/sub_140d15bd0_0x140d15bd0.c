// 函数: sub_140d15bd0
// 地址: 0x140d15bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = -1
*arg1 = 0

if ((arg3[5].b & 1) != 0)
    int64_t* r8 = arg3[1]
    int32_t* rcx = *r8
    
    if (&rcx[1] u> r8[1])
        int32_t* rdx = arg1
        
        if ((*(arg3 + 0x29) & 0x20) != 0)
            sub_140b54070(arg3, rdx, arg4)
        else
            (*(*arg3 + 0x150))(arg3, rdx, 4)
    else
        *arg1 = *rcx
        int64_t* rax_3 = arg3[1]
        *rax_3 += 4
    
    int64_t* rcx_2 = arg3[1]
    int32_t* rdx_1 = *rcx_2
    
    if (&rdx_1[1] u<= rcx_2[1])
        *(arg1 + 4) = *rdx_1
        int64_t* rax_7 = arg3[1]
        *rax_7 += 4
    else if ((*(arg3 + 0x29) & 0x20) != 0)
        sub_140b54070(arg3, arg1 + 4, arg4)
    else
        (*(*arg3 + 0x150))(arg3, arg1 + 4, 4)
    
    if (*(arg1 + 4) s> 0)
        arg1[1] = (*(*arg3 + 0x20))(arg3)
    
    int32_t rdx_3 = *arg1
    *(arg2 + 0x68) = 0
    
    if (*(arg2 + 0x6c) != rdx_3)
        sub_1405c5510(arg2 + 0x60, rdx_3)
    
    *(arg2 + 0x98) = 0
    
    if (*(arg2 + 0x9c) != 0)
        sub_1405c5570(arg2 + 0x90, 0)

return arg1
