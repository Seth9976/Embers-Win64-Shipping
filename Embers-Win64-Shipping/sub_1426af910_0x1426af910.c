// 函数: sub_1426af910
// 地址: 0x1426af910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x260))

if (result.d s< *(arg1 + 0x118))
    void* rcx_1 = result * 0x58 + *(arg1 + 0x110)
    int64_t rbp_1 = 0
    int32_t i = 0
    void* arg_8 = rcx_1
    
    if (arg2[0xc].d s> 0)
        int64_t* r12_1 = nullptr
        int64_t* r15_1 = rcx_1 + 0x10
        
        do
            int64_t rbp_2 = sx.q(r15_1[1].d)
            int64_t* rbx_1 = *(r12_1 + arg2[0xb])
            int32_t rax_1 = (rbp_2 + 1).d
            int64_t r13_2 = zx.q(*(rbx_1 + 0x52)) + *(rcx_1 + 0x30)
            r15_1[1].d = rax_1
            
            if (rax_1 s> *(r15_1 + 0xc))
                sub_1405a4d70(r15_1)
            
            result = *r15_1
            *(result + (rbp_2 << 3)) = rbx_1
            
            if ((rbx_1[0xb].b & 1) != 0)
                if ((*(rbx_1 + 0x55) & 4) == 0)
                    goto label_1426af9fe
                
                result = zx.q((*(*rbx_1 + 0x298))(rbx_1))
                
                if (result.d != 0)
                    int64_t rcx_5 = zx.q((result + 3).d) & 0xfffffffffffffffc
                    result = r13_2 - rcx_5
                    
                    if (r13_2 != rcx_5)
                        result = sx.q(*result)
                        
                        if (result.d s>= 0 && result.d s< *(arg1 + 0x138))
                            uint64_t result_1 = result
                            result = *(arg1 + 0x130)
                            rbx_1 = *(result + (result_1 << 3))
                        label_1426af9fe:
                            
                            if (rbx_1 != 0)
                                result = (*(*rbx_1 + 0x2b0))(rbx_1, arg1, r13_2)
            
            rcx_1 = arg_8
            i += 1
            r12_1 = &r12_1[1]
        while (i s< arg2[0xc].d)
        
        rbp_1 = 0
    
    *(rcx_1 + 8) = arg2
    *(rcx_1 + 0x41) = 1
    int64_t rbx_3 = zx.q(*(arg2 + 0x52)) + *(rcx_1 + 0x30)
    int64_t* rcx_7 = arg2
    
    if ((*(arg2 + 0x55) & 4) == 0)
        goto label_1426afa96
    
    result = zx.q((*(*arg2 + 0x298))(rcx_7))
    int32_t r8_3
    
    if (result.d == 0)
        r8_3 = 1
    else
        int64_t rcx_9 = zx.q((result + 3).d) & 0xfffffffffffffffc
        result = rbx_3 - rcx_9
        
        if (rbx_3 == rcx_9)
            r8_3 = 1
        else
            result = sx.q(*result)
            
            if (result.d s< 0 || result.d s>= *(arg1 + 0x138))
                r8_3 = 1
            else
                uint64_t result_2 = result
                result = *(arg1 + 0x130)
                rcx_7 = *(result + (result_2 << 3))
            label_1426afa96:
                
                if (rcx_7 == 0)
                    r8_3 = 1
                else
                    result = (*(*rcx_7 + 0x2b0))(rcx_7, arg1, rbx_3)
                    r8_3 = result.d
    
    if (*(arg1 + 0x118) != 0)
        result = *(arg1 + 0x110)
        rbp_1 = *(zx.q(*(arg1 + 0x260)) * 0x58 + result + 8)
    
    if (rbp_1 == arg2)
        return sub_1426b8c80(arg1, arg2, r8_3, arg3)

return result
