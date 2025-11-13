// 函数: sub_140cf0df0
// 地址: 0x140cf0df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* r14 = *(*arg1 + 8)
int32_t rbp = r14[8].d
int64_t* result = (*(*r14 + 0x140))(r14, arg2 + 0x14)

if (*(arg2 + 0x14) != 0)
    int64_t* rcx_1 = *(*arg1 + 8)
    (*(*rcx_1 + 0x140))(rcx_1, &arg2[1])
    
    if ((r14[5].b & 2) != 0)
        arg2[9] = (*(*r14 + 0x20))(r14)
    
    int64_t* r9_1 = *(*arg1 + 8)
    int64_t* rcx_3 = r9_1[1]
    int32_t* r8_1 = *rcx_3
    
    if (&r8_1[1] u<= rcx_3[1])
        *(arg2 + 0x3c) = *r8_1
        int64_t* rax_11 = r9_1[1]
        *rax_11 += 4
    else if ((*(r9_1 + 0x29) & 0x20) != 0)
        sub_140b54070(r9_1, arg2 + 0x3c, arg3)
    else
        (*(*r9_1 + 0x150))(r9_1, arg2 + 0x3c, 4)
    
    int64_t* r9_2 = *(*arg1 + 8)
    int64_t* rcx_5 = r9_2[1]
    int32_t* r8_2 = *rcx_5
    
    if (&r8_2[1] u<= rcx_5[1])
        arg2[8].d = *r8_2
        result = r9_2[1]
        *result += 4
    else if ((*(r9_2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(r9_2, &arg2[8], arg3)
    else
        result = (*(*r9_2 + 0x150))(r9_2, &arg2[8], 4)
    
    if (*(arg2 + 0xc) == 0)
        int32_t rdi_1 = arg2[1].d
        
        if (sub_140b5b8a0(rdi_1, 0xa) == 0)
            if (sub_140b5b8a0(rdi_1, 3) == 0)
                int64_t* rcx_24
                
                if (sub_140b5b8a0(rdi_1, 1) == 0)
                    if (sub_140b5b8a0(rdi_1, 0x22) == 0)
                        result = sub_140b5b8a0(rdi_1, 9)
                        
                        if (result.b == 0)
                            if (rbp s>= 0x1fd)
                                if (sub_140b5b8a0(rdi_1, 0x1d) == 0)
                                    result = sub_140b5b8a0(rdi_1, 0x1c)
                                    
                                    if (result.b != 0)
                                        int64_t* rcx_23 = *(*arg1 + 8)
                                        (*(*rcx_23 + 0x140))(rcx_23, arg2 + 0x2c)
                                        rcx_24 = *(*arg1 + 8)
                                        result = (*(*rcx_24 + 0x140))(rcx_24, arg2 + 0x34)
                                else
                                    rcx_24 = *(*arg1 + 8)
                                    result = (*(*rcx_24 + 0x140))(rcx_24, arg2 + 0x2c)
                        else if (rbp s>= 0x11a)
                            rcx_24 = *(*arg1 + 8)
                            result = (*(*rcx_24 + 0x140))(rcx_24, arg2 + 0x2c)
                    else
                        rcx_24 = *(*arg1 + 8)
                        result = (*(*rcx_24 + 0x140))(rcx_24, arg2 + 0x24)
                else
                    rcx_24 = *(*arg1 + 8)
                    result = (*(*rcx_24 + 0x140))(rcx_24, arg2 + 0x24)
            else if ((r14[5].b & 2) == 0)
                int64_t* r9_4 = *(*arg1 + 8)
                int64_t* rcx_16 = r9_4[1]
                char* rdx_8 = *rcx_16
                
                if (&rdx_8[1] u> rcx_16[1])
                    result = (*(*r9_4 + 0x150))(r9_4, &arg2[2], 1)
                else
                    arg2[2].b = *rdx_8
                    result = r9_4[1]
                    *result += 1
            else
                int64_t var_30_1 = *arg2
                int64_t* var_38 = r14
                sub_140bb37e0(&var_38)
                int64_t* r9_3 = *(*arg1 + 8)
                int64_t* rcx_12 = r9_3[1]
                char* rdx_6 = *rcx_12
                
                if (&rdx_6[1] u> rcx_12[1])
                    (*(*r9_3 + 0x150))(r9_3, &arg2[2], 1)
                    result = sub_140bafac0(&var_38)
                else
                    arg2[2].b = *rdx_6
                    int64_t* rax_25 = r9_3[1]
                    *rax_25 += 1
                    result = sub_140bafac0(&var_38)
        else
            int64_t* rcx_8 = *(*arg1 + 8)
            result = (*(*rcx_8 + 0x140))(rcx_8, arg2 + 0x1c)
            
            if (rbp s>= 0x1b9)
                result = sub_140b0c350(arg1, &arg2[0xa], arg3)
    
    if (rbp s>= 0x1f7)
        int64_t* r9_5 = *(*arg1 + 8)
        int64_t* rcx_25 = r9_5[1]
        char* rdx_12 = *rcx_25
        
        if (&rdx_12[1] u> rcx_25[1])
            result = (*(*r9_5 + 0x150))(r9_5, &arg2[0xc], 1)
        else
            arg2[0xc].b = *rdx_12
            result = r9_5[1]
            *result += 1
        
        if (arg2[0xc].b != 0)
            result = sub_140b0c350(arg1, arg2 + 0x64, arg3)

__security_check_cookie(rax_1 ^ &var_58)
return result
