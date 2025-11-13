// 函数: sub_1419ba450
// 地址: 0x1419ba450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1419ba990(arg1)
*(arg1 + 0x38) = 0

if (*(arg1 + 0x3c) s<= 0xffffffff)
    result = sub_1405c5570(arg1 + 0x30, 0)

int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t r14_1 = 0
    
    do
        result = *(arg1 + 0x10)
        int64_t* rbx_1 = *(r14_1 + result)
        
        if (rbx_1 != 0)
            result = (*(*rbx_1 + 0x10))(rbx_1)
            
            if (*(result + 0x48) != 0)
                int64_t r15_1 = rbx_1[1]
                
                if (r15_1 != 0)
                    int64_t rbx_2 = sx.q(*(arg1 + 0x38))
                    int32_t rax_1 = (rbx_2 + 1).d
                    *(arg1 + 0x38) = rax_1
                    
                    if (rax_1 s> *(arg1 + 0x3c))
                        sub_1405a4d70(arg1 + 0x30)
                    
                    result = *(arg1 + 0x30)
                    *(result + (rbx_2 << 3)) = r15_1
        
        i += 1
        r14_1 += 8
    while (i s< *(arg1 + 0x18))

if (*(arg1 + 0x38) s> 0)
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_5[4]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x28)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_5[4]
    
    *(arg2 + 0x30) = rax_2
    void**** rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_3 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    result = &data_143009be0
    *rcx_5 = &data_143009be0
    rcx_5[2] = arg1 + 0x30
    rcx_5[3].d = 1
    
    if (data_143f01c92 != 0)
        int64_t* arg_18
        result = sub_141980430(arg2, &arg_18, 0)
        
        if (arg1 + 0x58 != result)
            int64_t* rcx_10 = *(arg1 + 0x58)
            *(arg1 + 0x58) = *result
            *result = 0
            
            if (rcx_10 != 0)
                result = zx.q(rcx_10[9].d)
                rcx_10[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_10)
        
        int64_t* rcx_11 = arg_18
        
        if (rcx_11 != 0)
            rcx_11[9].d -= 1
            
            if (rcx_11[9].d == 1)
                return sub_140a2f6e0(rcx_11)

return result
