// 函数: sub_140cae5c0
// 地址: 0x140cae5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 2, sx.q(*(arg2 + 0xc)) << 2)
int32_t i = 0
int32_t rax_3 = 0

if ((arg1[5].b & 1) == 0)
    rax_3 = arg2[1].d

int64_t* rcx = arg1[1]
int32_t var_1d8 = rax_3
int32_t* rdx_2 = *rcx

if (&rdx_2[1] u> rcx[1])
    int32_t* rdx_3 = &var_1d8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    var_1d8 = *rdx_2
    *rcx += 4

int32_t rax_7 = var_1d8
int64_t* result

if (rax_7 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_7 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rax_7 s> 0x400000))
        result = arg1
        *(arg1 + 0x29) = rcx_3 | 1
    else
        void var_1d0
        void** var_1c8
        
        if ((arg1[5].b & 1) == 0)
            arg2[1].d = rax_7
            
            if (rax_7 s<= 0)
                result = arg1
            else
                int64_t r15_1 = 0
                
                do
                    int32_t* rdx_12 = r15_1 + *arg2
                    int64_t* r9_2 = *(**SymBuffer::end(sub_140b4cb20(&var_1c8, arg1), &var_1d0) + 8)
                    int64_t* rcx_17 = r9_2[1]
                    int32_t* r8_2 = *rcx_17
                    
                    if (&r8_2[1] u<= rcx_17[1])
                        *rdx_12 = *r8_2
                        int64_t* rax_22 = r9_2[1]
                        *rax_22 += 4
                    else if ((*(r9_2 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_2, rdx_12, arg3)
                    else
                        (*(*r9_2 + 0x150))(r9_2, rdx_12, 4)
                    
                    sub_140b4cbb0(&var_1c8)
                    i += 1
                    r15_1 += 4
                while (i s< arg2[1].d)
                
                result = arg1
        else
            arg2[1].d = 0
            
            if (*(arg2 + 0xc) != rax_7)
                sub_1405dadb0(arg2, rax_7)
                rax_7 = var_1d8
            
            int32_t rbp_1 = 0
            
            if (rax_7 s> 0)
                do
                    int64_t rbx_1 = sx.q(arg2[1].d)
                    int32_t rax_8 = (rbx_1 + 1).d
                    arg2[1].d = rax_8
                    
                    if (rax_8 s> *(arg2 + 0xc))
                        sub_1405a4cf0(arg2)
                    
                    int64_t rbx_2 = *arg2 + (rbx_1 << 2)
                    
                    if (rbx_2 == 0)
                        rbx_2 = 0
                    else
                        *rbx_2 = 0
                    
                    int64_t* r9_1 = *(**SymBuffer::end(sub_140b4cb20(&var_1c8, arg1), &var_1d0) + 8)
                    int64_t* rcx_9 = r9_1[1]
                    int32_t* rdx_8 = *rcx_9
                    
                    if (&rdx_8[1] u<= rcx_9[1])
                        *rbx_2 = *rdx_8
                        int64_t* rax_15 = r9_1[1]
                        *rax_15 += 4
                    else if ((*(r9_1 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_1, rbx_2, arg3)
                    else
                        (*(*r9_1 + 0x150))(r9_1, rbx_2, 4)
                    
                    sub_140b4cbb0(&var_1c8)
                    rbp_1 += 1
                while (rbp_1 s< var_1d8)
            
            result = arg1
else
    if ((arg1[5].b & 1) != 0)
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != 0)
            sub_1405dadb0(arg2, 0)
    
    result = arg1

__security_check_cookie(rax_1 ^ &var_1f8)
return result
