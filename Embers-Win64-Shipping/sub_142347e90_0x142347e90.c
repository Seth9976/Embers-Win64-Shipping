// 函数: sub_142347e90
// 地址: 0x142347e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x27c)

if (arg2 == 0)
    if (rax != 0)
        rax = (*(*arg1 + 0x130))()
        *(arg1 + 0x27c) = 0
else if (rax == 0)
    void* rcx_1
    int32_t* rdx_2
    
    if (arg1[0x46].b == rax)
        rdx_2 = &arg1[0x44]
        rcx_1 = &arg1[0x1b]
    else
        int32_t rax_1 = 0
        arg5 = 1f f/ arg1[0x3e].d
        int32_t rdx = int.d(arg5 f* arg1[0x45].d)
        int32_t rcx
        
        if (rdx s>= 0)
            rcx = arg1[0x15].d
            
            if (rdx s< rcx)
                rcx = rdx
        else
            rcx = 0
        
        int32_t rdx_1 = int.d(arg5 f* *(arg1 + 0x22c))
        
        if (rdx_1 s>= 0)
            rax_1 = *(arg1 + 0xac)
            
            if (rdx_1 s< rax_1)
                rax_1 = rdx_1
        
        float zmm0 = *(arg1 + 0x214)
        int32_t arg_18
        rdx_2 = &arg_18
        float zmm4 = float.s(rcx)
        rcx_1 = &arg1[0x1b]
        arg4 = float.s(rax_1)
        arg5 = arg4 f* *(arg1 + 0x20c)
        arg4 = arg4 f* arg1[0x42].d
        arg3 = (zmm4 + zmm4) f* *(arg1 + 0x204) + arg5 + zmm0 + arg5 + zmm0
        zmm0 = arg1[0x43].d
        arg3 = arg3 + 0.5f
        zmm4 = (zmm4 + zmm4) f* arg1[0x41].d + arg4 + zmm0 + arg4 + zmm0
        arg_18 = int.d(arg3) s>> 1
        int32_t arg_1c = int.d(zmm4 + 0.5f) s>> 1
    
    sub_140dbda80(rcx_1, rdx_2)
    int64_t rax_7 = (*(*arg1 + 0x130))(arg1, arg5, arg3, arg4)
    *(arg1 + 0x27c) = 1
    return rax_7

return rax
