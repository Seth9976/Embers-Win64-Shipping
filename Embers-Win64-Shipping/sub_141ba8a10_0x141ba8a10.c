// 函数: sub_141ba8a10
// 地址: 0x141ba8a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* r14 = *(arg1 + 0x10)
int64_t* rax = r14

if (r14 != 0)
    int32_t rax_1 = r14[1].d
    
    if (rax_1 == 0)
        r14 = nullptr
        rax = nullptr
    else
        r14[1].d = rax_1 + 1
        rax = r14

if (rax != 0)
    int64_t* r15_1 = *(arg1 + 8)
    
    if (r15_1 != 0)
        int64_t var_28
        (*(*r15_1 + 0xc8))(r15_1, &var_28)
        int64_t rsi_1 = var_28
        int32_t var_20
        int64_t rbp_1 = rsi_1 + (sx.q(var_20) << 3)
        
        if (rsi_1 != rbp_1)
            do
                int64_t var_38
                (*(*r15_1 + 0xd0))(r15_1, &var_38, rsi_1)
                int64_t rdx_2 = var_38
                
                if (rdx_2 == 0)
                    goto label_141ba8b04
                
                int64_t rbx_1 = sx.q(arg2[1].d)
                int32_t rax_6 = (rbx_1 + 1).d
                arg2[1].d = rax_6
                
                if (rax_6 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                    rdx_2 = var_38
                
                int64_t* rcx_5 = (rbx_1 << 4) + *arg2
                *rcx_5 = rdx_2
                int64_t* var_30
                rcx_5[1] = var_30
                
                if (var_30 != 0)
                    var_30[1].d += 1
                label_141ba8b04:
                    
                    if (var_30 != 0)
                        var_30[1].d -= 1
                        
                        if (var_30[1].d == 1)
                            (**var_30)(var_30)
                            int32_t temp3_1 = *(var_30 + 0xc)
                            *(var_30 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*var_30 + 8))(var_30, 1)
                
                rsi_1 += 8
            while (rsi_1 != rbp_1)
            
            rsi_1 = var_28
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp1_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*r14 + 8))(r14, 1)

return arg2
