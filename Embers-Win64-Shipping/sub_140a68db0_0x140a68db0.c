// 函数: sub_140a68db0
// 地址: 0x140a68db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(neg.d((*(*arg1 + 8))()))
int32_t arg_18 = result.d
int32_t* var_88
int32_t var_80
int32_t result_1
uint64_t var_78
int32_t var_70

if (*(arg2 + 0x10) s<= 1)
    sub_140ab1680(&var_88, *arg2)
    int32_t rcx_3 = var_80
    
    if (rcx_3 s<= 1 && var_88 != &data_142e5c258)
        int32_t result_2 = result_1
        int32_t rdx_3 = 0
        int32_t var_80_1 = 0
        
        if (result_2 != 3)
            sub_1405947f0(&var_88, 3)
            result_2 = result_1
            rdx_3 = var_80_1
        
        if (rdx_3 + 3 s> result_2)
            sub_140594770(&var_88)
        
        int32_t* rcx_6 = var_88
        *rcx_6 = 0x6e0065
        rcx_6[1].w = 0
        rcx_3 = rdx_3 + 3
    
    var_78 = var_88
    result = zx.q(result_1)
    int32_t var_6c_2 = result.d
    var_70 = rcx_3
else
    int32_t rdi_1 = *(arg2 + 0x10)
    int64_t rsi_1 = *(arg2 + 8)
    var_78 = 0
    var_70 = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_78, rdi_1, 0)
        result = memcpy(var_78, rsi_1, rdi_1 * 2)
    else
        int32_t var_6c_1 = 0

void var_68
void var_58
int16_t* var_48
int32_t arg_8

if ((arg3 & 1) != 0)
    int64_t* i = *arg4
    
    for (void* rsi_4 = &i[sx.q(arg4[1].d) * 2]; i != rsi_4; i = &i[2])
        int16_t* const rdx_4 = &data_142d40450
        
        if (var_70 != 0)
            rdx_4 = var_78
        
        int16_t* const rcx_7
        
        if (i[1].d == 0)
            rcx_7 = &data_142d40450
        else
            rcx_7 = *i
        
        result = sub_140a54510(rcx_7, rdx_4)
        
        if (result.d == 0)
            goto label_140a69091
    
    var_88 = nullptr
    int32_t rdi_2 = 0
    var_80.q = 0
    
    while (true)
        sub_14062d6e0(&arg2[0x48], &arg_8, &(&var_78)[sx.q(rdi_2) * 2])
        int64_t rax_6 = sx.q(arg_8)
        int64_t rcx_9
        
        if (rax_6.d == 0xffffffff)
            rcx_9 = 0
        else
            rcx_9 = *(arg2 + 0x48) + rax_6 * 0x28
        
        result = rcx_9 + 0x10
        
        if (rcx_9 == 0)
            result = 0
        
        void* rdi_3
        
        if (result != 0)
            if (&var_88 != result)
                int32_t rdi_4 = *(result + 8)
                int64_t rsi_6 = *result
                var_80 = rdi_4
                
                if (rdi_4 != 0 || result_1 != 0)
                    sub_1405a4c70(&var_88, rdi_4, result_1)
                    memcpy(var_88, rsi_6, rdi_4 * 2)
                else
                    result_1 = 0
            
            rdi_3 = &arg2[0x38]
        else
            rdi_2 += 1
            
            if (rdi_2 s< 1)
                continue
            else
                if (arg2[0x98] != result.b)
                    break
                
                rdi_3 = &arg2[0x38]
                
                if (&var_88 != rdi_3)
                    int32_t rsi_5 = *(rdi_3 + 8)
                    int64_t r12_1 = *rdi_3
                    var_80 = rsi_5
                    
                    if (rsi_5 != 0 || result_1 != 0)
                        sub_1405a4c70(&var_88, rsi_5, result_1)
                        memcpy(var_88, r12_1, rsi_5 * 2)
                    else
                        result_1 = 0
        
        sub_140a97b20(&var_68, &arg2[0x28])
        sub_140a97b20(&var_58, &arg2[0x18])
        int16_t** var_98_1 = objf::ObjectCode::ObjectCode(&var_48)
        result = sub_140a9e3d0(arg5, &var_58, &var_68, rdi_3, &var_88, arg_18)
        break
    
    int32_t* rdi_5 = var_88
    
    if (rdi_5 != 0)
        int64_t* rcx_18 = data_143ddb3f0
        
        if (rcx_18 == 0)
            sub_140a750a0()
            rcx_18 = data_143ddb3f0
        
        result = (*(*rcx_18 + 0x30))(rcx_18, rdi_5)

label_140a69091:
uint32_t rcx_19 = zx.d(*arg2)
uint8_t r14

if (rcx_19 == 0)
    r14 = (arg3 & 0x24) != 0
label_140a690c1:
    
    if (r14 != 0)
        int32_t r14_1 = arg4[1].d
        int32_t* rsi_7 = nullptr
        int64_t r12_2 = *arg4
        int32_t result_3 = 0
        var_88 = nullptr
        int32_t rdi_6 = 0
        var_80.q = 0
        void* rsi_8
        
        if (r14_1 s> 0)
            while (true)
                sub_14062d6e0(&arg2[0x48], &arg_8, (sx.q(rdi_6) << 4) + r12_2)
                int64_t rax_11 = sx.q(arg_8)
                int64_t rcx_22
                
                if (rax_11.d == 0xffffffff)
                    rcx_22 = 0
                else
                    rcx_22 = *(arg2 + 0x48) + rax_11 * 0x28
                
                result = rcx_22 + 0x10
                
                if (rcx_22 == 0)
                    result = 0
                
                if (result != 0)
                    if (&var_88 == result)
                        rsi_8 = &arg2[0x38]
                    else
                        int32_t rsi_9 = *(result + 8)
                        int64_t r14_3 = *result
                        int32_t var_80_3 = rsi_9
                        
                        if (rsi_9 != 0 || result_1 != 0)
                            sub_1405a4c70(&var_88, rsi_9, result_1)
                            memcpy(var_88, r14_3, rsi_9 * 2)
                            rsi_8 = &arg2[0x38]
                        else
                            int32_t var_7c_1 = 0
                            rsi_8 = &arg2[0x38]
                    
                    break
                
                rdi_6 += 1
                
                if (rdi_6 s>= r14_1)
                    result_3 = result_1
                    rsi_7 = var_88
                    goto label_140a69140
            
            goto label_140a691ec
        
    label_140a69140:
        
        if (arg2[0x98] == 0)
            rsi_8 = &arg2[0x38]
            rdi_6 = 0
            
            if (&var_88 != rsi_8)
                int32_t rdi_7 = *(rsi_8 + 8)
                int64_t r14_2 = *rsi_8
                int32_t var_80_2 = rdi_7
                
                if (rdi_7 != 0 || result_3 != 0)
                    sub_1405a4c70(&var_88, rdi_7, result_3)
                    memcpy(var_88, r14_2, rdi_7 * 2)
                else
                    int32_t var_7c = 0
                
                rdi_6 = 0
            
        label_140a691ec:
            sub_140a97b20(&var_58, &arg2[0x28])
            sub_140a97b20(&var_68, &arg2[0x18])
            int16_t** var_98_2 = objf::ObjectCode::ObjectCode(&var_48)
            result = sub_140a9e3d0(arg6, &var_68, &var_58, rsi_8, &var_88, arg_18 + rdi_6)
            rsi_7 = var_88
        
        if (rsi_7 != 0)
            int64_t* rcx_33 = data_143ddb3f0
            
            if (rcx_33 == 0)
                sub_140a750a0()
                rcx_33 = data_143ddb3f0
            
            result = (*(*rcx_33 + 0x30))(rcx_33, rsi_7)
else
    if (rcx_19 == 1)
        r14 = arg3 u>> 3 & 1
        goto label_140a690c1
    
    if (rcx_19 == 2)
        r14 = arg3 u>> 1 & (rcx_19 - 1).b
        goto label_140a690c1
uint64_t rbx = var_78

if (rbx == 0)
    return result

int64_t* rcx_34 = data_143ddb3f0

if (rcx_34 != 0)
    return (*(*rcx_34 + 0x30))(rcx_34, var_78)

sub_140a750a0()
int64_t* rcx_35 = data_143ddb3f0
return (*(*rcx_35 + 0x30))(rcx_35, rbx)
