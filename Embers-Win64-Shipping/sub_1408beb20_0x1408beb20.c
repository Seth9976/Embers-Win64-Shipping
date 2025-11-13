// 函数: sub_1408beb20
// 地址: 0x1408beb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*(arg1 + 0x80))
void* rcx_2

if (rcx == 0)
    rcx_2 = arg1
else
    void var_48
    int32_t arg_8
    float zmm0[0x4]
    
    if (rcx == 1)
        rcx_2 = arg1
        
        if (*(arg1 + 0x81) == 0)
            arg2 = arg3
        else
            sub_141f8ba60(rcx_2, &var_48, &arg_8)
            arg2 = arg_8
            
            if (arg2[0] <= 0f)
                arg2 = zx.o(0)
                rcx_2 = arg1
            else
                zmm0 = arg3
            label_1408beb85:
                arg2 = sub_140a454f0(zmm0, arg2)
                rcx_2 = arg1
    else
        if (rcx != 2)
            int512_t result
            result.o = zx.o(0)
            return result
        
        rcx_2 = arg1
        
        if (*(arg1 + 0x81) == 0)
            arg2 = arg4
        else
            sub_141f8ba60(rcx_2, &var_48, &arg_8)
            arg2 = arg_8
            
            if (not(arg2[0] <= 0f))
                zmm0 = arg4
                goto label_1408beb85
            
            arg2 = zx.o(0)
            rcx_2 = arg1

return sub_141f86ef0(rcx_2, arg2, zx.o(0))
