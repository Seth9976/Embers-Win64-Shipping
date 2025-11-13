// 函数: sub_1418a6e80
// 地址: 0x1418a6e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg3.d

if (arg3.d == 0)
    *(arg1 + 0x38) += 1
else if (r10 == 2)
    arg4 = 0
label_1418a6ed8:
    *(arg1 + 0x40) += 1
    void* rcx_2
    
    if (*(arg1 + 0x50) == *(arg1 + 0x7c))
    labelid_6:
        rcx_2 = nullptr
    else
        arg3 = arg1 + 0x80
        void* rcx = *(arg3 + 8)
        
        if (rcx != 0)
            arg3 = rcx
        
        int32_t rax_7 = *(arg3 + (((sx.q(*(arg1 + 0x90)) - 1) & zx.q(arg4)) << 2))
        
        if (rax_7 == 0xffffffff)
        label_1418a6f40:
            rcx_2 = nullptr
        else
            arg3 = *(arg1 + 0x48)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_7) * 3
                rcx_2 = arg3 + (rdx_3 << 3)
                
                if (*(arg3 + (rdx_3 << 3)) == arg4)
                    break
                
                rax_7 = *(rcx_2 + 0x10)
                
                if (rax_7 == 0xffffffff)
                    goto label_1418a6f40_1
            
            if (rax_7 == 0xffffffff)
            label_1418a6f40_1:
                rcx_2 = nullptr
    
    *(rcx_2 + 8) += 1
else
    if (r10 == 3)
        arg4 = 1
        goto label_1418a6ed8
    
    if (r10 == 4)
        arg4 = 2
        goto label_1418a6ed8
    
    if (r10 == 5)
        arg4 = r10 - 2
        goto label_1418a6ed8

int64_t* rcx_3 = *(arg1 + 0x18)
(*(*rcx_3 + 0x40))(rcx_3, arg2, zx.q(sbb.d(arg3.d, arg3.d, r10 != 0) + 0xe), arg4)
*(arg1 + 0x98)
*(arg1 + 0x98) = 0
int64_t arg_8 = _Query_perf_frequency()

if (arg1 + 0xa0 == &arg_8)
    return &arg_8

int32_t result = *(arg1 + 0xa0)
*(arg1 + 0xa0) = arg_8
return result
