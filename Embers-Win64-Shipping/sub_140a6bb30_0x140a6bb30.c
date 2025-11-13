// 函数: sub_140a6bb30
// 地址: 0x140a6bb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int32_t i_2 = 0
int32_t r15 = 0
int32_t i = 0
int64_t* var_48 = nullptr
int64_t var_40 = 0

for (; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x10))
        break
    
    int64_t* rcx_2 = *(*(arg1 + 8) + sx.q(i) * 0x10)
    void var_38
    int64_t* rax_3 = (*(*rcx_2 + 0x30))(rcx_2, &var_38)
    void* r14_1 = rax_3[1]
    int64_t r12_1 = *rax_3
    
    if (r14_1 != 0)
        *(r14_1 + 8) += 1
    
    int64_t i_3 = sx.q(i_2)
    i_2 = (i_3 + 1).d
    var_40.d = i_2
    
    if (i_2 s> r15)
        sub_140a89230(&var_48)
        r15 = var_40:4.d
        i_2 = var_40.d
        rsi = var_48
    
    int64_t rax_5 = i_3 * 2
    rsi[rax_5] = r12_1
    rsi[rax_5 + 1] = r14_1
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp2_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

void*** rax_8 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_8

if (rax_8 == 0)
    rbx_2 = nullptr
else
    *rbx_2 = &data_142e62660
    rbx_2[1] = 0
    rbx_2[2].d = i_2
    
    if (i_2 != 0)
        sub_140a88790(&rbx_2[1], i_2, 0)
        int64_t* rcx_7 = rbx_2[1]
        int32_t i_1
        
        do
            *rcx_7 = *rsi
            void* rax_10 = rsi[1]
            rcx_7[1] = rax_10
            
            if (rax_10 != 0)
                *(rax_10 + 8) += 1
            
            rcx_7 = &rcx_7[2]
            rsi = &rsi[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    else
        *(rbx_2 + 0x14) = i_2

void*** rax_11 = j_sub_140a82f30(0x18)

if (rax_11 != 0)
    rax_11[1].d = 1
    *rax_11 = &data_142d42ea8
    *(rax_11 + 0xc) = 1
    rax_11[2] = rbx_2

*arg2 = rbx_2
arg2[1] = rax_11
sub_140a61d30(&var_48, rbx_2, rbx_2)
return arg2
