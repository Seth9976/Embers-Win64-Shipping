// 函数: sub_142307e40
// 地址: 0x142307e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a93f8)
(*(*arg1 + 0x1d8))(arg1, &data_1439a93e8)
(*(*arg1 + 0x130))(arg1, arg2)
int32_t rax_3
int512_t zmm1
rax_3, zmm1 = sub_140b4e7c0(arg1, &data_1439a93f8)
int32_t arg_8

if (rax_3 s>= 8)
    (*(*arg1 + 0x140))(arg1, arg2 + 8)
    int64_t* rcx_4 = arg1[0xe]
    char rax_6
    int32_t rbp_1
    
    if (rcx_4 != 0)
        rax_6 = (*(*rcx_4 + 0x78))(rcx_4)
        rbp_1 = 0
    
    if (rcx_4 == 0 || rax_6 != 0)
        rbp_1 = 1
    
    int32_t rax_7
    rax_7, zmm1 = sub_140b4e7c0(arg1, &data_1439a93e8)
    
    if (rax_7 s>= 3)
        int64_t* rcx_6 = arg1[1]
        int64_t rdx_2 = *rcx_6
        bool cond:3_1
        
        if (rdx_2 + 4 u> rcx_6[1])
            int64_t rax_10 = *arg1
            arg_8 = rbp_1
            (*(rax_10 + 0x150))(arg1, &arg_8, 4)
            cond:3_1 = arg_8 != 0
        else
            cond:3_1 = *rdx_2 != 0
            *rcx_6 = rdx_2 + 4
        
        if (cond:3_1 != 0)
            arg_8.q = 0
            (*(*arg1 + 0x140))(arg1, &arg_8, cond:3_1)

int32_t rax_12

if ((arg1[5].b & 1) != 0)
    rax_12, zmm1 = sub_140b4e7c0(arg1, &data_1439a9478)

if ((arg1[5].b & 1) == 0 || rax_12 s>= 0xa)
    int64_t* rcx_10 = arg1[1]
    int32_t* rdx_5 = *rcx_10
    
    if (&rdx_5[1] u> rcx_10[1])
        int32_t rax_15
        rax_15.b = *(arg2 + 0x10) != 0
        arg_8 = rax_15
        (*(*arg1 + 0x150))(arg1, &arg_8, 4)
        *(arg2 + 0x10) = arg_8 != 0
    else
        void* rax_13
        rax_13.b = *rdx_5 != 0
        *(arg2 + 0x10) = rax_13.b
        int64_t* rax_14 = arg1[1]
        *rax_14 += 4
    
    int64_t* rcx_12 = arg1[1]
    int32_t* rdx_7 = *rcx_12
    
    if (&rdx_7[1] u> rcx_12[1])
        int64_t rax_20 = *arg1
        int32_t rsi
        rsi.b = *(arg2 + 0x11) != 0
        arg_8 = rsi
        (*(rax_20 + 0x150))(arg1, &arg_8, 4)
        *(arg2 + 0x11) = arg_8 != 0
    else
        void* rax_18
        rax_18.b = *rdx_7 != 0
        *(arg2 + 0x11) = rax_18.b
        int64_t* rax_19 = arg1[1]
        *rax_19 += 4
    
    int32_t* rdi_1 = arg2 + 0x14
    int64_t i_1 = 4
    int64_t i
    
    do
        int64_t* rcx_14 = arg1[1]
        int32_t* rdx_9 = *rcx_14
        
        if (&rdx_9[1] u<= rcx_14[1])
            *rdi_1 = *rdx_9
            int64_t* rax_24 = arg1[1]
            *rax_24 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_1, zmm1)
        else
            (*(*arg1 + 0x150))(arg1, rdi_1, 4)
        
        rdi_1 = &rdi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
