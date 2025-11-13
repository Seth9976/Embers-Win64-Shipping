// 函数: sub_140bd01d0
// 地址: 0x140bd01d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg2[5].b & 1) == 0
int32_t arg_10 = 0
uint64_t result
uint64_t result_1

if (cond:0)
    int64_t* i = *arg1
    
    for (void* rdi_4 = &i[sx.q(arg1[1].d) * 2]; i != rdi_4; i = &i[2])
        for (int64_t* j = *arg4; j != &j[sx.q(arg4[1].d)]; j = &j[1])
            if (*j == *i)
                int64_t rax_15
                rax_15, arg5 = sub_140bc7f20(i[1])
                
                if (rax_15 s> 0)
                    arg_10 += 1
                
                break
    
    int64_t* rcx_16 = arg2[1]
    int32_t* rdx_6 = *rcx_16
    
    if (&rdx_6[1] u> rcx_16[1])
        int32_t* rdx_7 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_7, arg5)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_7, 4)
    else
        result = zx.q(*rdx_6)
        arg_10 = result.d
        *rcx_16 += 4
    
    void* i_1 = *arg1
    
    for (void* r15_3 = (sx.q(arg1[1].d) << 4) + i_1; i_1 != r15_3; i_1 += 0x10)
        int64_t* j_1 = *arg4
        int64_t rcx_18 = sx.q(arg4[1].d)
        result = *i_1
        int64_t* rbx_1 = *(i_1 + 8)
        result_1 = result
        
        for (; j_1 != &j_1[rcx_18]; j_1 = &j_1[1])
            if (*j_1 == result)
                int512_t zmm1
                result, zmm1 = sub_140bc7f20(rbx_1)
                
                if (result s> 0)
                    int64_t rax_18 = *arg2
                    arg_10 -= 1
                    (*(rax_18 + 0x140))(arg2, &result_1)
                    int32_t rsi_1 = rbx_1[3].d
                    int32_t rax_21
                    
                    if (arg7 == 0)
                        int32_t rax_22 = rsi_1 | 0x501
                        
                        if (arg8 != 0)
                            rax_22 |= 0x1000
                        
                        rax_21 = rax_22 & 0xffffffbf
                    else
                        rax_21 = (rsi_1 & 0xffffeafe) | 0x40
                    
                    rbx_1[3].d = rax_21
                    
                    if (arg6 != 0)
                        rbx_1[3].d = rax_21 | 8
                    
                    int32_t var_60_2 = 1
                    result = sub_140bcfa90(rbx_1, arg2, arg3, zmm1, 0xff, 0)
                    rbx_1[3].d = rsi_1
                
                break
else
    int64_t* r9 = arg2[1]
    int32_t* r10_1 = *r9
    
    if (&r10_1[1] u<= r9[1])
        result = zx.q(*r10_1)
        arg_10 = result.d
        *r9 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, &arg_10, arg5)
    else
        result = (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    
    int32_t r14_1 = 0
    
    if (arg_10 s> 0)
        do
            int64_t rax_3 = *arg2
            uint64_t result_3 = 0
            (*(rax_3 + 0x140))(arg2, &result_3)
            uint64_t result_2 = result_3
            int32_t r8 = 0
            int32_t i_4 = arg1[1].d
            int32_t r9_1 = result_2.d
            int64_t rdi_1 = *arg1
            int32_t i_2 = i_4
            int32_t r11_1 = result_3:4.d
            result_1 = result_2
            
            if (i_4 s> 0)
                do
                    int32_t rcx_3 = i_2 & 0x80000001
                    
                    if (rcx_3 s< 0)
                        rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(i_2)
                    int32_t i_3 = (temp3_1 - temp2_1) s>> 1
                    i_2 = i_3
                    int32_t rax_7 = i_3 + r8
                    int64_t rcx_7 = sx.q(rax_7) * 2
                    int32_t rax_8 = *(rdi_1 + (rcx_7 << 3))
                    int32_t rax_9 = rax_8 - r9_1
                    
                    if (rax_8 == r9_1)
                        rax_9 = *(rdi_1 + (rcx_7 << 3) + 4) - r11_1
                    
                    if (rax_9 s< 0)
                        r8 = rax_7 + rcx_3
                while (i_2 s> 0)
            
            int64_t rcx_8
            int32_t r9_2
            
            if (r8 s< i_4)
                rcx_8 = sx.q(r8)
                int64_t rax_12 = rcx_8 << 4
                r9_2 = r9_1 - *(rax_12 + rdi_1)
                
                if (r9_1 == *(rax_12 + rdi_1))
                    r9_2 = r11_1 - *(rax_12 + rdi_1 + 4)
            
            int64_t* rcx_12
            
            if (r8 s>= i_4 || r9_2 s< 0 || r8 == 0xffffffff || (rcx_8 << 4) + 8 == neg.q(rdi_1))
                rcx_12 = nullptr
            else
                rcx_12 = *((rcx_8 << 4) + 8 + rdi_1)
            
            if (rcx_12 == 0)
                int64_t* rax_13 = j_sub_140a82f30(0x20)
                
                if (rax_13 == 0)
                    rax_13 = nullptr
                else
                    rax_13[2] = 0
                    rax_13[3].d = 0
                    *(rax_13 + 0x1c) = 0
                    *rax_13 = 0
                    rax_13[1].d = 0xffffffff
                
                int64_t* var_50 = rax_13
                sub_140625300(arg1, &result_1, &var_50)
                rcx_12 = var_50
            
            int32_t var_60_1 = 1
            result, arg5 = sub_140bcfa90(rcx_12, arg2, arg3, arg5, 0xff, 0)
            r14_1 += 1
        while (r14_1 s< arg_10)
return result
