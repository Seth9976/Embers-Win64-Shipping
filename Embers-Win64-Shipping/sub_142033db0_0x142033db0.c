// 函数: sub_142033db0
// 地址: 0x142033db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = arg1[0x4f]

if (rcx != 0)
    int64_t var_28
    int64_t* rax_4 = (*(*rcx + 0x640))(rcx, &var_28, arg5)
    
    if (arg7 != rax_4)
        int64_t rcx_4 = *arg7
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        *arg7 = *rax_4
        *rax_4 = 0
        arg7[1].d = rax_4[1].d
        *(arg7 + 0xc) = *(rax_4 + 0xc)
        rax_4[1] = 0
    
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (arg7[1].d s<= 1)
        int64_t* result
        int64_t r8_2
        result, r8_2 = (*(*arg1 + 0x760))(arg1, zx.q(arg3), arg5)
        
        if (result != 0)
            sub_140597da0(arg7, (*(*arg1 + 0x7c0))(arg1, &var_28, result, arg6, arg5, arg4))
            int64_t rcx_13 = var_28
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            if (arg7[1].d s<= 1)
                return result
            
            sub_141dbe590(result, 0, 1)
        else
            sub_140a2e390(&var_28, u"Failed to spawn player controller", r8_2)
            
            if (arg7 == &var_28)
                int64_t rcx_10 = var_28
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
            else
                int64_t rcx_9 = *arg7
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                *arg7 = var_28
                int32_t var_20
                arg7[1].d = var_20
                int32_t var_1c
                *(arg7 + 0xc) = var_1c
else if (*arg7 != u"Failed to spawn player controller, GameSession is null")
    arg7[1].d = rcx.d
    
    if (*(arg7 + 0xc) != 0x37)
        sub_1405947f0(arg7, (rcx + 0x37).d)
        rcx = zx.q(arg7[1].d)
    
    int32_t rax_1 = (rcx + 0x37).d
    arg7[1].d = rax_1
    
    if (rax_1 s> *(arg7 + 0xc))
        sub_140594770(arg7)
    
    int64_t rcx_3 = *arg7
    __builtin_memcpy(rcx_3, u"Failed to spawn player controller, GameSession i", 0x60)
    *(rcx_3 + 0x60) = 0x75006e00200073
    *(rcx_3 + 0x68) = 0x6c006c
    *(rcx_3 + 0x6c) = 0

return nullptr
