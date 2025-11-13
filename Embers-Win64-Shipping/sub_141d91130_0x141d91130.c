// 函数: sub_141d91130
// 地址: 0x141d91130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    (*(*arg2 + 0x18))(arg2)

char rax_3 = (**arg2)(arg2)
int32_t i = 0
int64_t var_68
int64_t* rcx_2 = &var_68
var_68 = 0
int32_t var_60 = 0
int64_t* result
int32_t var_5c

if (rax_3 == 0)
    sub_1405947f0(rcx_2, 7)
    int32_t rax_20 = var_60 + 7
    var_60 = rax_20
    
    if (rax_20 s> var_5c)
        sub_140594770(&var_68)
    
    sub_1405a7220(var_68, 7, "events", 7, 0x3f)
    (*(*arg2 + 0x28))(arg2, &var_68)
    int64_t rcx_29 = var_68
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    for (; i s>= 0; i += 1)
        if (i s>= *(arg1 + 0x10))
            break
        
        int64_t* rcx_32 = (sx.q(i) << 6) + *(arg1 + 8)
        (*(*rcx_32 + 0x38))(rcx_32, arg2, 0)
    
    result = (*(*arg2 + 0x38))(arg2)
else
    sub_1405947f0(rcx_2, 7)
    int32_t rax_4 = var_60 + 7
    var_60 = rax_4
    
    if (rax_4 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t r14_1 = var_68
    sub_1405a7220(r14_1, 7, "events", 7, 0x3f)
    int64_t var_58
    int64_t* rdi_1 = *(*(*arg2 + 0xd0))(arg2, &var_58)
    int32_t arg_10
    sub_14062d6e0(rdi_1, &arg_10, &var_68)
    int64_t rax_7 = sx.q(arg_10)
    void* const rcx_7
    
    if (rax_7.d == 0xffffffff)
        rcx_7 = nullptr
    else
        rcx_7 = *rdi_1 + rax_7 * 0x28
    
    result = rcx_7 + 0x10
    
    if (rcx_7 == 0)
        result = nullptr
    
    void* rcx_8
    
    if (result != 0)
        rcx_8 = *result
    
    int64_t rsi
    
    if (result == 0 || rcx_8 == 0 || *(rcx_8 + 8) != 5)
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
        sub_1405947f0(&var_68, 7)
        int32_t rax_11 = var_60_1 + 7
        var_60_1 = rax_11
        
        if (rax_11 s> var_5c)
            sub_140594770(&var_68)
        
        sub_1405a7220(var_68, 7, "events", 7, 0x3f)
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
        
        int64_t rcx_19 = var_68
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        for (; i_1 s>= 0; i_1 += 1)
            if (i_1 s>= result_1[1].d)
                break
            
            int64_t rdi_4 = sx.q(*(arg1 + 0x10))
            int32_t rax_15 = (rdi_4 + 1).d
            *(arg1 + 0x10) = rax_15
            
            if (rax_15 s> *(arg1 + 0x14))
                sub_1405c4fe0(arg1 + 8)
            
            int64_t rdi_5 = rdi_4 << 6
            void*** rdi_6 = rdi_5 + *(arg1 + 8)
            
            if (rdi_5 == neg.q(*(arg1 + 8)))
                rdi_6 = nullptr
            else
                *rdi_6 = &data_143238800
                __builtin_memset(&rdi_6[1], 0, 0x30)
            
            int64_t* rcx_23 = *(*result_1 + sx.q(i_1) * 0x10)
            int64_t* rax_18 = (**rcx_23)(rcx_23)
            var_58 = *rax_18
            void* rcx_24 = rax_18[1]
            void* var_50_1 = rcx_24
            
            if (rcx_24 != 0)
                *(rcx_24 + 8) += 1
            
            result = (*rdi_6)[4](rdi_6, &var_58)

if (arg3 != 0)
    return result

return (*(*arg2 + 0x20))(arg2)
