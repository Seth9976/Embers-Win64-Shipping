// 函数: sub_140e78fc0
// 地址: 0x140e78fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *arg2
int64_t* r13 = arg3
int32_t result_1 = 0
int32_t result_3 = 0

if (i != 0)
    int64_t* r11_1 = *(arg1 + 0x50)
    int64_t* rax_1 = r11_1
    void* r9_2 = &r11_1[sx.q(*(arg1 + 0x58)) * 2]
    int32_t rax_2
    
    if (r11_1 == r9_2)
    label_140e79022:
        rax_2 = -1
    else
        while (*rax_1 != i)
            rax_1 = &rax_1[2]
            
            if (rax_1 == r9_2)
                goto label_140e79022
        
        rax_2 = ((rax_1 - r11_1) s>> 4).d
    
    result_1 = rax_2 + 1
    result_3 = result_1

uint64_t result = zx.q(result_1)
int64_t* var_90
int64_t* var_80
int64_t* var_70
void var_60
int64_t* var_58

if (arg5 == 0)
    void* rsi_1 = arg3[1]
    int64_t r12_1 = *arg3
    
    if (rsi_1 != 0)
        *(rsi_1 + 8) += 1
    
    int32_t r14_1 = *(arg1 + 0x58)
    *(arg1 + 0x58) = r14_1 + 1
    
    if (r14_1 + 1 s> *(arg1 + 0x5c))
        sub_1405a4f90(arg1 + 0x50)
        result_1 = result_3
    
    int64_t rbx_2 = sx.q(result_1) << 4
    int64_t rdx_2 = *(arg1 + 0x50) + rbx_2
    memmove(rdx_2 + 0x10, rdx_2, (r14_1 - result_1) << 4)
    int64_t rax_4 = *(arg1 + 0x50)
    *(rbx_2 + rax_4) = r12_1
    *(rbx_2 + rax_4 + 8) = rsi_1
    int64_t* rax_5 = r13[1]
    int64_t* rcx_2 = *r13
    var_80 = rcx_2
    
    if (rax_5 != 0)
        rax_5[1].d += 1
        rcx_2 = *r13
    
    int64_t* rax_7 = (*(*rcx_2 + 0x20))(rcx_2, &var_60)
    var_90 = *rax_7
    int64_t* rcx_4 = rax_7[1]
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    var_70 = &var_90
    int64_t* var_68_1 = &var_80
    int32_t var_98
    sub_140e474d0(arg1 + 0x60, &var_98, &var_70, nullptr)
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4)
            int32_t temp8_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t temp10_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_58 + 8))(var_58, 1)
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp13_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rax_5 + 8))(rax_5, 1)
    
    result = zx.q(result_3 + 1)

if (*(arg1 + 0x58) s> result.d)
    int64_t r12_2 = sx.q(result.d)
    int64_t* rax_17 = (r12_2 << 4) + *(arg1 + 0x50)
    int64_t* rbx_6 = rax_17[1]
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1
    
    uint64_t result_2 = *(arg1 + 0x50)
    result = result_2
    int64_t rcx_14 = (sx.q(*(arg1 + 0x58)) << 4) + result_2
    
    if (result_2 != rcx_14)
        do
            if (*result == *rax_17)
                result = (result - result_2) s>> 4
                
                if (result.d != 0xffffffff)
                    result = sub_140e5ecc0(arg1, result.d)
                
                break
            
            result += 0x10
        while (result != rcx_14)
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            result = (**rbx_6)(rbx_6)
            int32_t temp4_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rbx_6 + 8))(rbx_6, 1)
    
    int32_t rdi_2 = *(arg1 + 0x58) - 1
    int64_t rsi_2 = sx.q(rdi_2)
    
    if (rsi_2 s>= r12_2)
        int64_t r14_4 = rsi_2 << 4
        int64_t i_2 = rsi_2 - r12_2 + 1
        int64_t i_1
        
        do
            int64_t* rcx_18 = *(r14_4 + *(arg1 + 0x50))
            int64_t* rax_24 = (*(*rcx_18 + 0x20))(rcx_18, &var_60)
            int64_t* rbx_7 = rax_24[1]
            var_70 = *rax_24
            int64_t* var_68_2 = rbx_7
            
            if (rbx_7 != 0)
                rbx_7[1].d += 1
            
            sub_140e85c90(arg1 + 0x60, &var_70)
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    (**rbx_7)(rbx_7)
                    int32_t temp18_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
            
            if (var_58 != 0)
                var_58[1].d -= 1
                
                if (var_58[1].d == 1)
                    (**var_58)(var_58)
                    int32_t temp21_1 = *(var_58 + 0xc)
                    *(var_58 + 0xc) -= 1
                    
                    if (temp21_1 == 1)
                        (*(*var_58 + 8))(var_58, 1)
            
            result = sub_140dbae50(arg1 + 0x50, rdi_2, 1, 1)
            rdi_2 -= 1
            r14_4 -= 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    r13 = arg3

if (arg5 != 0)
    if (result_3 != *(arg1 + 0x58) && data_143e29ea0 != 0)
        int64_t* rcx_26 = data_143e29e98
        
        if (rcx_26 != 0 && (*(*rcx_26 + 0x28))(rcx_26) != 0)
            int64_t* rcx_27 = nullptr
            
            if (data_143e29ea0 != 0)
                rcx_27 = data_143e29e98
            
            (*(*rcx_27 + 0x50))(rcx_27)
    
    void* rdi_3 = r13[1]
    int64_t r14_5 = *r13
    
    if (rdi_3 != 0)
        *(rdi_3 + 8) += 1
    
    int64_t rsi_4 = sx.q(*(arg1 + 0x58))
    int32_t rax_33 = (rsi_4 + 1).d
    *(arg1 + 0x58) = rax_33
    
    if (rax_33 s> *(arg1 + 0x5c))
        sub_1405a4f90(arg1 + 0x50)
    
    int64_t* rax_36 = (rsi_4 << 4) + *(arg1 + 0x50)
    *rax_36 = r14_5
    rax_36[1] = rdi_3
    int64_t* rax_37 = r13[1]
    int64_t* rcx_29 = *r13
    var_90 = rcx_29
    
    if (rax_37 != 0)
        rax_37[1].d += 1
        rcx_29 = *r13
    
    int64_t** rax_39 = (*(*rcx_29 + 0x20))(rcx_29, &var_60)
    var_80 = *rax_39
    int64_t* rcx_31 = rax_39[1]
    
    if (rcx_31 != 0)
        rcx_31[1].d += 1
    
    var_70 = &var_80
    int64_t** var_68_3 = &var_90
    result = sub_140e474d0(arg1 + 0x60, &arg5, &var_70, nullptr)
    
    if (rcx_31 != 0)
        rcx_31[1].d -= 1
        
        if (rcx_31[1].d == 1)
            result = (**rcx_31)(rcx_31)
            int32_t temp15_1 = *(rcx_31 + 0xc)
            *(rcx_31 + 0xc) -= 1
            
            if (temp15_1 == 1)
                result = (*(*rcx_31 + 8))(rcx_31, 1)
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            result = (**var_58)(var_58)
            int32_t temp20_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (temp20_1 == 1)
                result = (*(*var_58 + 8))(var_58, 1)
    
    if (rax_37 != 0)
        rax_37[1].d -= 1
        
        if (rax_37[1].d == 1)
            result = (**rax_37)(rax_37)
            int32_t temp22_1 = *(rax_37 + 0xc)
            *(rax_37 + 0xc) -= 1
            
            if (temp22_1 == 1)
                result = (*(*rax_37 + 8))(rax_37, 1)

if (*(arg1 + 0xb0) == 0xffffffff && arg4 == 1)
    result = sub_140d9f590(sub_140da2c00(), &arg5)
    *(arg1 + 0xb0) = *result

int64_t* rbx_13 = arg2[1]

if (rbx_13 != 0)
    rbx_13[1].d -= 1
    
    if (rbx_13[1].d == 1)
        result = (**rbx_13)(rbx_13)
        int32_t temp3_1 = *(rbx_13 + 0xc)
        *(rbx_13 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_13 + 8))(rbx_13, 1)

int64_t* rbx_14 = r13[1]

if (rbx_14 != 0)
    rbx_14[1].d -= 1
    
    if (rbx_14[1].d == 1)
        result = (**rbx_14)(rbx_14)
        int32_t temp6_1 = *(rbx_14 + 0xc)
        *(rbx_14 + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*(*rbx_14 + 8))(rbx_14, 1)

return result
