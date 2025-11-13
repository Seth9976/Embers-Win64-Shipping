// 函数: sub_1409322f0
// 地址: 0x1409322f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    (*(*arg2 + 0x18))(arg2)

(*(*arg2 + 0x60))(arg2, u"transactionId", arg1 + 8)
char rax_4 = (**arg2)(arg2)
int32_t i = 0
int64_t var_68
int64_t* rcx_3 = &var_68
var_68 = 0
int32_t var_60 = 0
int64_t* result
int32_t var_5c

if (rax_4 == 0)
    sub_1405947f0(rcx_3, 0xc)
    int32_t rax_21 = var_60 + 0xc
    var_60 = rax_21
    
    if (rax_21 s> var_5c)
        sub_140594770(&var_68)
    
    sub_1405a7220(var_68, 0xc, "receiptList", 0xc, 0x3f)
    (*(*arg2 + 0x28))(arg2, &var_68)
    int64_t rcx_30 = var_68
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    for (; i s>= 0; i += 1)
        if (i s>= *(arg1 + 0x28))
            break
        
        int64_t* rcx_33 = (sx.q(i) << 6) + *(arg1 + 0x20)
        (*(*rcx_33 + 0x38))(rcx_33, arg2, 0)
    
    result = (*(*arg2 + 0x38))(arg2)
else
    sub_1405947f0(rcx_3, 0xc)
    int32_t rax_5 = var_60 + 0xc
    var_60 = rax_5
    
    if (rax_5 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t r14_1 = var_68
    sub_1405a7220(r14_1, 0xc, "receiptList", 0xc, 0x3f)
    int64_t var_58
    int64_t* rdi_1 = *(*(*arg2 + 0xd0))(arg2, &var_58)
    int32_t arg_8
    sub_14062d6e0(rdi_1, &arg_8, &var_68)
    int64_t rax_8 = sx.q(arg_8)
    void* const rcx_8
    
    if (rax_8.d == 0xffffffff)
        rcx_8 = nullptr
    else
        rcx_8 = *rdi_1 + rax_8 * 0x28
    
    result = rcx_8 + 0x10
    
    if (rcx_8 == 0)
        result = nullptr
    
    void* rcx_9
    
    if (result != 0)
        rcx_9 = *result
    
    int64_t rsi
    
    if (result == 0 || rcx_9 == 0 || *(rcx_9 + 8) != 5)
        rsi.b = 0
    else
        rsi.b = 1
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            result = (**var_50)(var_50)
            int32_t temp1_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*var_50 + 8))(var_50, 1)
    
    if (r14_1 != 0)
        result = sub_140a74f90(r14_1)
    
    if (rsi.b != 0)
        var_68 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 0xc)
        int32_t rax_12 = var_60_1 + 0xc
        var_60_1 = rax_12
        
        if (rax_12 s> var_5c)
            sub_140594770(&var_68)
        
        sub_1405a7220(var_68, 0xc, "receiptList", 0xc, 0x3f)
        void var_48
        result = sub_140b750d0(*(*(*arg2 + 0xd0))(arg2, &var_48), &var_68)
        int64_t* result_1 = result
        int32_t i_1 = 0
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                result = (**var_40)(var_40)
                int32_t temp3_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*var_40 + 8))(var_40, 1)
        
        int64_t rcx_20 = var_68
        
        if (rcx_20 != 0)
            result = sub_140a74f90(rcx_20)
        
        for (; i_1 s>= 0; i_1 += 1)
            if (i_1 s>= result_1[1].d)
                break
            
            int64_t rdi_4 = sx.q(*(arg1 + 0x28))
            int32_t rax_16 = (rdi_4 + 1).d
            *(arg1 + 0x28) = rax_16
            
            if (rax_16 s> *(arg1 + 0x2c))
                sub_1405c4fe0(arg1 + 0x20)
            
            int64_t rdi_5 = rdi_4 << 6
            void*** rdi_6 = rdi_5 + *(arg1 + 0x20)
            
            if (rdi_5 == neg.q(*(arg1 + 0x20)))
                rdi_6 = nullptr
            else
                *rdi_6 = &data_142e20658
                __builtin_memset(&rdi_6[1], 0, 0x24)
                rdi_6[6] = 0
                rdi_6[7] = 0
            
            int64_t* rcx_24 = *(*result_1 + sx.q(i_1) * 0x10)
            int64_t* rax_19 = (**rcx_24)(rcx_24)
            var_58 = *rax_19
            void* rcx_25 = rax_19[1]
            void* var_50_1 = rcx_25
            
            if (rcx_25 != 0)
                *(rcx_25 + 8) += 1
            
            result = (*rdi_6)[4](rdi_6, &var_58)

if (arg3 != 0)
    return result

return (*(*arg2 + 0x20))(arg2)
