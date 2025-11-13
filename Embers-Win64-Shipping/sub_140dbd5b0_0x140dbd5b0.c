// 函数: sub_140dbd5b0
// 地址: 0x140dbd5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
uint64_t result
int512_t zmm1
result, zmm1 = sub_140b4e7c0(arg2, &data_1439a93f8)

if (result.d s>= 9)
    int64_t* rcx_2 = arg2[1]
    int64_t rdx = *rcx_2
    int32_t var_1b8
    bool cond:1_1
    
    if (rdx + 4 u> rcx_2[1])
        int32_t rax_5
        rax_5.b = arg2[0xe] != 0
        var_1b8 = rax_5
        (*(*arg2 + 0x150))(arg2, &var_1b8, 4)
        cond:1_1 = var_1b8 != 0
    else
        cond:1_1 = *rdx != 0
        *rcx_2 = rdx + 4
    
    if (cond:1_1 == 0)
        int64_t* rax_21 = sub_140e2d530()
        char rax_22 = sub_140ca8fe0(rax_21, arg2)
        int64_t rbp_1 = *rax_21
        void** var_1b0
        void*** rcx_13 = &var_1b0
        
        if (rax_22 == 0)
            (*(rbp_1 + 0x290))(rax_21, *SymBuffer::end(sub_140b4cb20(rcx_13, arg2), &var_1b8), 
                arg1, rax_21, 0, 0)
        else
            (*(rbp_1 + 0x280))(rax_21, *SymBuffer::end(sub_140b4cb20(rcx_13, arg2), &var_1b8), arg1)
        
        sub_140b4cbb0(&var_1b0)
    else
        var_1b8.q = arg1[3]
        (*(*arg2 + 0x130))(arg2, &var_1b8, cond:1_1)
        int64_t rax_9 = var_1b8.q
        arg1[3] = rax_9
        
        if (rax_9 == 0)
            zmm1 = sub_140a1d9d0(arg2, arg1, zmm1)
            int64_t* rcx_6 = arg2[1]
            char* r8_2 = *rcx_6
            
            if (&r8_2[1] u> rcx_6[1])
                (*(*arg2 + 0x150))(arg2, &arg1[2], 1)
            else
                arg1[2].b = *r8_2
                int64_t* rax_12 = arg2[1]
                *rax_12 += 1
            
            int64_t* rcx_8 = arg2[1]
            char* r8_3 = *rcx_8
            
            if (&r8_3[1] u> rcx_8[1])
                (*(*arg2 + 0x150))(arg2, arg1 + 0x11, 1)
            else
                *(arg1 + 0x11) = *r8_3
                int64_t* rax_16 = arg2[1]
                *rax_16 += 1
        
        int64_t* rcx_10 = arg2[1]
        int32_t* r8_4 = *rcx_10
        
        if (&r8_4[1] u<= rcx_10[1])
            *(arg1 + 0x14) = *r8_4
            result = arg2[1]
            *result += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, arg1 + 0x14, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, arg1 + 0x14, 4)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_1e8)
return result
