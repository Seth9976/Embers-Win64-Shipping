// 函数: sub_141b54020
// 地址: 0x141b54020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419a21e0(0)
void* rbx = *arg2
void arg_8
int32_t* result = sub_140865c40(arg1 + 0xb8, &arg_8, rbx)

if (*result == 0xffffffff)
    float* rax = rbx + 0x7a8
    
    if (not(0f != *rax))
        rax = rbx + 0x7a0
    
    float zmm1_1 = *rax
    float zmm3_1 = rax[1]
    int32_t rcx_1 = 0x4000
    int32_t rsi_3 = neg.d(int.d(-0.5f - (zmm1_1 + zmm1_1)) s>> 1)
    
    if (rsi_3 s<= 8)
        rsi_3 = 8
    
    int32_t rdi_3 = neg.d(int.d(-0.5f - (zmm3_1 + zmm3_1)) s>> 1)
    
    if (rdi_3 s<= 8)
        rdi_3 = 8
    
    if (rsi_3 s> 0x4000 || rdi_3 s> 0x4000)
        if (rsi_3 s>= 8)
            int32_t rax_1 = 0x4000
            
            if (rsi_3 s< 0x4000)
                rax_1 = rsi_3
            
            rsi_3 = rax_1
        else
            rsi_3 = 8
        
        if (rdi_3 s>= 8)
            if (rdi_3 s< 0x4000)
                rcx_1 = rdi_3
            
            rdi_3 = rcx_1
        else
            rdi_3 = 8
    
    int64_t* rax_2 = j_sub_140a82f30(0xd0)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        rax_2[1].d = 0xffffffff
        *(rax_2 + 0xc) = 4
        *rax_2 = &data_14306c540
        __builtin_memset(&rax_2[0xa], 0, 0x5a)
        *(rax_2 + 0xac) = 0
        rax_2[0x18] = 0
        rax_2[0x19].b = 0
    
    void* rcx_2 = *arg2
    int64_t* arg_10 = rax_2
    int64_t* var_88
    int64_t* rax_3 = sub_140e152a0(rcx_2, &var_88)
    int64_t* r12_1 = *rax_3
    int64_t* r14_1 = rax_3[1]
    rax_3[1] = 0
    *rax_3 = 0
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t temp3_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_80 + 8))(var_80, 1)
    
    arg_10[0x12] = (*(*r12_1 + 0xc0))(r12_1)
    arg_10[0x13].d = rsi_3
    *(arg_10 + 0x9c) = rdi_3
    arg_10[0x14].d = rsi_3
    *(arg_10 + 0xa4) = rdi_3
    void var_78
    int128_t* rax_12 = sub_141b51d30(&var_78, rsi_3, rdi_3)
    int64_t* rcx_8 = arg_10
    *(rcx_8 + 0x10) = *rax_12
    *(rcx_8 + 0x20) = rax_12[1]
    *(rcx_8 + 0x30) = rax_12[2]
    *(rcx_8 + 0x40) = rax_12[3]
    int64_t* rcx_9 = arg_10
    rcx_9[0x16].d = *(rcx_9 + 0xac)
    
    if (sub_1419a4730() != 0)
        *(arg_10 + 0xac) = data_1439c7a4c
    
    *arg2
    char rax_16 = sub_140e1abc0()
    int64_t* r8_2 = arg_10
    int64_t* rcx_12 = data_143f0f180
    (*(*rcx_12 + 0x3b0))(rcx_12, &arg_8, r8_2[0x12], zx.q(rsi_3), rdi_3, rax_16, *(r8_2 + 0xac))
    sub_1405d1600(&arg_10[0xa], &arg_8)
    sub_1405d1550(&arg_8)
    *(arg_10 + 0xa9) = rax_16
    int64_t* rcx_16 = data_143f0f180
    int64_t r8_4 = *rcx_16
    bool cond:2_1 = (*(r8_4 + 0x3c8))(rcx_16, arg_10[0xa], r8_4) != 0x21
    arg_10[0x19].b = cond:2_1
    void* rax_21 = *arg2
    *(rax_21 + 0x77a) ^= ((cond:2_1 * 2) ^ *(rax_21 + 0x77a)) & 2
    int64_t arg_18 = *arg2
    var_88 = &arg_18
    int64_t** var_80_1 = &arg_10
    sub_140bbe6a0(arg1 + 0xb8, &arg_8, &var_88, nullptr)
    result = sub_141997e80(arg_10)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            result = (**r14_1)(r14_1)
            int32_t temp5_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*r14_1 + 8))(r14_1, 1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
