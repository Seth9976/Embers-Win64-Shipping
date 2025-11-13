// 函数: sub_1426eac60
// 地址: 0x1426eac60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
(*(*arg2 + 0x1d8))(arg2, &data_1439a93e8)
int64_t* rax_3 = sub_142726c10()
int64_t var_1b8

if ((arg2[5].b & 3) != 0)
    void** var_1b0
    (*(*rax_3 + 0x290))(rax_3, *SymBuffer::end(sub_140b4cb20(&var_1b0, arg2), &var_1b8), arg1, 
        rax_3, 0, 0)
    sub_140b4cbb0(&var_1b0)

if (sub_140b4e7c0(arg2, &data_1439a93e8).d s>= 4)
    sub_140cadbe0(arg2, arg1 + 0x28)
else if ((arg2[5].b & 1) != 0)
    void* rbx_2 = *(arg1 + 0x20)
    
    if (rbx_2 == 0)
        *(arg1 + 0x28) = 0
    else
        int64_t rbx_3 = *(rbx_2 + 0x18)
        var_1b8 = rbx_3
        sub_140cbcdf0()
        
        if (data_143e1b278.d == data_143e1b2a4)
        label_1426eadaa:
            *(arg1 + 0x20) = 0
            *(arg1 + 0x28) = 0
        else
            int32_t rax_7 = sub_140b5ead0(rbx_3.d) + var_1b8:4.d
            void* r8_2 = &data_143e1b2a8
            void* rcx_9 = data_143e1b2b0
            
            if (rcx_9 != 0)
                r8_2 = rcx_9
            
            int32_t rax_9 = *(r8_2 + (((sx.q(data_143e1b2b8) - 1) & sx.q(rax_7)) << 2))
            
            if (rax_9 == 0xffffffff)
                goto label_1426eadaa
            
            int64_t r8_3 = data_143e1b270
            int64_t rdx_7
            
            while (true)
                rdx_7 = sx.q(rax_9)
                int64_t rcx_10 = rdx_7 * 3
                
                if (*(r8_3 + (rcx_10 << 3)) == rbx_3)
                    break
                
                rax_9 = *(r8_3 + (rcx_10 << 3) + 0x10)
                
                if (rax_9 == 0xffffffff)
                    goto label_1426eadaa
            
            if (rax_9 == 0xffffffff)
                goto label_1426eadaa
            
            void* rax_11 = r8_3 + rdx_7 * 0x18
            
            if (rax_11 == 0)
                goto label_1426eadaa
            
            *(arg1 + 0x28) = *(rax_11 + 8)
            *(arg1 + 0x20) = 0

int64_t* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_1e8)
return result
