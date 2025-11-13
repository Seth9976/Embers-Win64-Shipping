// 函数: sub_140932680
// 地址: 0x140932680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    (*(*arg2 + 0x18))(arg2)

(*(*arg2 + 0x60))(arg2, u"items", arg1 + 8)
(*(*arg2 + 0x60))(arg2, u"offerId", arg1 + 0x18)
(*(*arg2 + 0x80))(arg2, u"quantity", arg1 + 0x28)
char rax_6 = (**arg2)(arg2)
int32_t i = 0
int64_t var_68
int64_t* rcx_5 = &var_68
var_68 = 0
int32_t var_60 = 0
int64_t* result
int32_t var_5c

if (rax_6 == 0)
    sub_1405947f0(rcx_5, 6)
    int32_t rax_23 = var_60 + 6
    var_60 = rax_23
    
    if (rax_23 s> var_5c)
        sub_140594770(&var_68)
    
    sub_1405a7220(var_68, 6, "items", 6, 0x3f)
    (*(*arg2 + 0x28))(arg2, &var_68)
    int64_t rcx_33 = var_68
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    for (; i s>= 0; i += 1)
        if (i s>= *(arg1 + 0x38))
            break
        
        int64_t* rcx_35 = sx.q(i) * 0x38 + *(arg1 + 0x30)
        (*(*rcx_35 + 0x38))(rcx_35, arg2, 0)
    
    result = (*(*arg2 + 0x38))(arg2)
else
    sub_1405947f0(rcx_5, 6)
    int32_t rax_7 = var_60 + 6
    var_60 = rax_7
    
    if (rax_7 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t r15_1 = var_68
    sub_1405a7220(r15_1, 6, "items", 6, 0x3f)
    int64_t var_58
    int64_t* rdi_1 = *(*(*arg2 + 0xd0))(arg2, &var_58)
    int32_t arg_8
    sub_14062d6e0(rdi_1, &arg_8, &var_68)
    int64_t rax_10 = sx.q(arg_8)
    void* const rcx_10
    
    if (rax_10.d == 0xffffffff)
        rcx_10 = nullptr
    else
        rcx_10 = *rdi_1 + rax_10 * 0x28
    
    result = rcx_10 + 0x10
    
    if (rcx_10 == 0)
        result = nullptr
    
    void* rcx_11
    
    if (result != 0)
        rcx_11 = *result
    
    int64_t rsi
    
    if (result == 0 || rcx_11 == 0 || *(rcx_11 + 8) != 5)
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
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)
    
    if (rsi.b != 0)
        var_68 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 6)
        int32_t rax_14 = var_60_1 + 6
        var_60_1 = rax_14
        
        if (rax_14 s> var_5c)
            sub_140594770(&var_68)
        
        sub_1405a7220(var_68, 6, "items", 6, 0x3f)
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
        
        int64_t rcx_22 = var_68
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
        
        for (; i_1 s>= 0; i_1 += 1)
            if (i_1 s>= result_1[1].d)
                break
            
            int64_t r15_2 = sx.q(*(arg1 + 0x38))
            int32_t rax_18 = (r15_2 + 1).d
            *(arg1 + 0x38) = rax_18
            
            if (rax_18 s> *(arg1 + 0x3c))
                sub_1407c3b60(arg1 + 0x30)
            
            void* rdi_4 = *(arg1 + 0x30)
            int64_t rcx_24 = r15_2 * 0x38
            void*** rdi_5 = rdi_4 + rcx_24
            
            if (rdi_4 == neg.q(rcx_24))
                rdi_5 = nullptr
            else
                *rdi_5 = &data_142e20618
                __builtin_memset(&rdi_5[1], 0, 0x30)
            
            int64_t* rcx_27 = *(*result_1 + sx.q(i_1) * 0x10)
            int64_t* rax_21 = (**rcx_27)(rcx_27)
            var_58 = *rax_21
            void* rcx_28 = rax_21[1]
            void* var_50_1 = rcx_28
            
            if (rcx_28 != 0)
                *(rcx_28 + 8) += 1
            
            result = (*rdi_5)[4](rdi_5, &var_58)

if (arg3 != 0)
    return result

return (*(*arg2 + 0x20))(arg2)
