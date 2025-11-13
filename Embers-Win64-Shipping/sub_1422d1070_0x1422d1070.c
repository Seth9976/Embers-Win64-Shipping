// 函数: sub_1422d1070
// 地址: 0x1422d1070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_143a2fec8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94c8)
int32_t rax_2

if ((arg2[5].b & 1) != 0)
    rax_2, arg3 = sub_140b4e7c0(arg2, &data_1439a94c8)

int32_t arg_10

if ((arg2[5].b & 1) == 0 || rax_2 s>= 5)
    int64_t* rcx_11 = arg2[1]
    int32_t* rdx_8 = *rcx_11
    
    if (&rdx_8[1] u> rcx_11[1])
        int32_t rax_21
        rax_21.b = *(arg1 + 0x21) != 0
        arg_10 = rax_21
        (*(*arg2 + 0x150))(arg2, &arg_10, 4)
        *(arg1 + 0x21) = arg_10 != 0
    else
        void* rax_19
        rax_19.b = *rdx_8 != 0
        *(arg1 + 0x21) = rax_19.b
        int64_t* rax_20 = arg2[1]
        *rax_20 += 4
    
    int64_t* rcx_13 = arg2[1]
    int32_t* r8_1 = *rcx_13
    
    if (&r8_1[1] u<= rcx_13[1])
        *(arg1 + 0x24) = *r8_1
        int64_t* rax_26 = arg2[1]
        *rax_26 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x24, arg3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x24, 4)
    
    int64_t* rcx_15 = arg2[1]
    int32_t* r8_2 = *rcx_15
    
    if (&r8_2[1] u<= rcx_15[1])
        *(arg1 + 0x44) = *r8_2
        int64_t* rax_30 = arg2[1]
        *rax_30 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x44, arg3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x44, 4)
    
    int64_t* rcx_17 = arg2[1]
    int32_t* r8_3 = *rcx_17
    
    if (&r8_3[1] u<= rcx_17[1])
        *(arg1 + 0x40) = *r8_3
        int64_t* rax_34 = arg2[1]
        *rax_34 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x40, arg3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x40, 4)
else
    int32_t rax_3
    int512_t zmm1
    rax_3, zmm1 = sub_140b4e7c0(arg2, &data_143a2fec8)
    int64_t* rcx_4 = arg2[1]
    int64_t r14
    
    if (rax_3 s>= 0xc)
        arg_10 = 0
        int64_t rdx_2 = *rcx_4
        bool cond:5_1
        
        if (rdx_2 + 4 u> rcx_4[1])
            int64_t rax_9 = *arg2
            int32_t arg_18 = 0
            (*(rax_9 + 0x150))(arg2, &arg_18, 4)
            cond:5_1 = arg_18 != 0
        else
            cond:5_1 = *rdx_2 != 0
            *rcx_4 = rdx_2 + 4
        
        int64_t* rcx_7 = arg2[1]
        r14.b = cond:5_1
        int32_t* rdx_4 = *rcx_7
        
        if (&rdx_4[1] u> rcx_7[1])
            int32_t* rdx_5 = &arg_10
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_5, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_5, 4)
        else
            arg_10 = *rdx_4
            *rcx_7 += 4
    else
        int64_t rdx = *rcx_4
        
        if (rdx + 4 u> rcx_4[1])
            int64_t rax_6 = *arg2
            arg_10 = 0
            (*(rax_6 + 0x150))(arg2, &arg_10, 4)
            r14.b = arg_10 != 0
        else
            bool cond:2_1 = *rdx != 0
            *rcx_4 = rdx + 4
            r14.b = cond:2_1
    
    int64_t* rcx_9 = arg2[1]
    int32_t* rdx_6 = *rcx_9
    
    if (&rdx_6[1] u<= rcx_9[1])
        *(arg1 + 0x40) = *rdx_6
        int64_t* rax_15 = arg2[1]
        *rax_15 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x40, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x40, 4)
    
    *(arg1 + 0x21) = 0
    int32_t rax_17 = 4
    
    if (r14.b != 0)
        rax_17 = 8
    
    *(arg1 + 0x24) = rax_17
    *(arg1 + 0x44) = rax_17 * *(arg1 + 0x40)

int32_t rax_36 = sub_140b4e7c0(arg2, &data_1439a94c8)

if (rax_36 s>= 4)
    int64_t* rcx_20 = arg2[1]
    int32_t* rdx_13 = *rcx_20
    
    if (&rdx_13[1] u<= rcx_20[1])
        void* rax_37
        rax_37.b = *rdx_13 != 0
        *(arg1 + 0x28) = rax_37.b
        int64_t* rax_38 = arg2[1]
        *rax_38 += 4
        return rax_38
    
    int64_t rax_39 = *arg2
    int32_t rbp
    rbp.b = *(arg1 + 0x28) != 0
    arg_10 = rbp
    (*(rax_39 + 0x150))(arg2, &arg_10, 4)
    rax_36.b = arg_10 != 0
    *(arg1 + 0x28) = rax_36.b

return rax_36
