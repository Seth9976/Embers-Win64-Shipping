// 函数: sub_14106d2e0
// 地址: 0x14106d2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int64_t rax = sx.q(arg1->__offset(0x30).d)
int64_t result = 0
int32_t r9 = 0

if (rax.d s<= 0)
label_14106d345:
    void arg_8
    int64_t* rax_3 = sub_140b3dbe0(*sub_140b58170(&arg_8, "ImageWrapper", 1))
    
    if (rax_3 != 0)
        int64_t result_1
        (*(*rax_3 + 0x40))(rax_3, &result_1, zx.q(arg2))
        int64_t result_2 = result_1
        int64_t* var_30
        
        if (result_2 != 0)
            if (var_30 != 0)
                var_30[1].d += 1
                var_30[1].d += 1
            
            int64_t r15_1 = sx.q(arg1->__offset(0x40).d)
            int32_t rax_5 = (r15_1 + 1).d
            arg1->__offset(0x40).d = rax_5
            
            if (rax_5 s> arg1->__offset(0x44).d)
                sub_1405a4df0(arg1 + 0x38)
            
            int64_t rax_6 = arg1->__offset(0x38).q
            int64_t rcx_5 = r15_1 * 3
            *(rax_6 + (rcx_5 << 3)) = arg2
            *(rax_6 + (rcx_5 << 3) + 8) = result_2
            *(rax_6 + (rcx_5 << 3) + 0x10) = var_30
            
            if (var_30 != 0)
                var_30[1].d += 1
                
                if (var_30 != 0)
                    var_30[1].d -= 1
                    
                    if (var_30[1].d == 1)
                        (**var_30)(var_30)
                        int32_t temp3_1 = *(var_30 + 0xc)
                        *(var_30 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_30 + 8))(var_30, 1)
                    
                    if (var_30 != 0)
                        var_30[1].d -= 1
                        
                        if (var_30[1].d == 1)
                            (**var_30)(var_30)
                            int32_t temp5_1 = *(var_30 + 0xc)
                            *(var_30 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*var_30 + 8))(var_30, 1)
            
            result = result_1
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp1_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_4 = *var_30
                    (*(r8_4 + 8))(var_30, 1, r8_4)
else
    char* r10_1 = arg1->__offset(0x28).q
    char* rax_1 = r10_1
    int64_t r8_1 = 0
    
    while (*rax_1 != arg2)
        r9 += 1
        r8_1 += 1
        rax_1 = &rax_1[0x10]
        
        if (r8_1 s>= rax)
            goto label_14106d345
    
    int32_t rax_12 = arg1->__offset(0x30).d
    int32_t rdx_4 = rax_12 - r9 - 1
    void* rcx_15 = &r10_1[sx.q(r9) << 4]
    
    if (rdx_4 s>= 1)
        rdx_4 = 1
    
    result = *(rcx_15 + 8)
    
    if (rdx_4 != 0)
        memcpy(rcx_15, &r10_1[sx.q(rax_12 - rdx_4) << 4], rdx_4 << 4)
        rax_12 = arg1->__offset(0x30).d
    
    arg1->__offset(0x30).d = rax_12 - 1

LeaveCriticalSection(arg1)
return result
