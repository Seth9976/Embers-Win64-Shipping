// 函数: sub_142118950
// 地址: 0x142118950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
char result
int512_t zmm1
result, zmm1 = sub_142130d30(arg1, arg2)

if (result == 0)
    result = 0
else
    int64_t* rcx = arg1[1]
    int64_t rax_3 = *rcx + 4
    int32_t var_1a8
    
    if (rax_3 u> rcx[1])
        int64_t rax_4 = *arg1
        var_1a8 = 0
        (*(rax_4 + 0x150))(arg1, &var_1a8, 4)
    else
        *rcx = rax_3
    
    void** var_1a0
    sub_140b4cb20(&var_1a0, arg1)
    int64_t* rbx_1 = *SymBuffer::end(&var_1a0, &var_1a8)
    int64_t* r9_1 = *(*rbx_1 + 8)
    int64_t* rcx_4 = r9_1[1]
    int32_t* rdx_3 = *rcx_4
    int32_t var_1b8
    
    if (&rdx_3[1] u> rcx_4[1])
        int32_t* rdx_4 = &var_1b8
        
        if ((*(r9_1 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_1, rdx_4, zmm1)
        else
            (*(*r9_1 + 0x150))(r9_1, rdx_4, 4)
    else
        var_1b8 = *rdx_3
        int64_t* rax_9 = r9_1[1]
        *rax_9 += 4
    int64_t* r9_2 = *(*rbx_1 + 8)
    int64_t* rcx_6 = r9_2[1]
    int32_t* rdx_5 = *rcx_6
    int32_t var_1b4
    
    if (&rdx_5[1] u> rcx_6[1])
        int32_t* rdx_6 = &var_1b4
        
        if ((*(r9_2 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_2, rdx_6, zmm1)
        else
            (*(*r9_2 + 0x150))(r9_2, rdx_6, 4)
    else
        var_1b4 = *rdx_5
        int64_t* rax_14 = r9_2[1]
        *rax_14 += 4
    int64_t* r9_3 = *(*rbx_1 + 8)
    int64_t* rcx_8 = r9_3[1]
    int32_t* rdx_7 = *rcx_8
    int32_t var_1b0
    
    if (&rdx_7[1] u> rcx_8[1])
        int32_t* rdx_8 = &var_1b0
        
        if ((*(r9_3 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_3, rdx_8, zmm1)
            sub_140b4cbb0(&var_1a0)
            result = 1
        else
            (*(*r9_3 + 0x150))(r9_3, rdx_8, 4)
            sub_140b4cbb0(&var_1a0)
            result = 1
    else
        var_1b0 = *rdx_7
        int64_t* rax_19 = r9_3[1]
        *rax_19 += 4
        sub_140b4cbb0(&var_1a0)
        result = 1

__security_check_cookie(rax_1 ^ &var_1d8)
return result
