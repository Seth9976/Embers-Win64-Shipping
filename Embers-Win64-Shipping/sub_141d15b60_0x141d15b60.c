// 函数: sub_141d15b60
// 地址: 0x141d15b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* r8 = *rcx

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_8 = *r8
    *rcx += 4

int32_t rdx_1 = arg_8

if (rdx_1 s> *(arg2 + 0xc))
    sub_14090a730(arg2, rdx_1)
    rdx_1 = arg_8

r8.b = 1
int512_t zmm1 = sub_141d287c0(arg2, rdx_1, r8.b)
int32_t rbp = 0

if (arg_8 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rcx_4 = arg1[1]
        void* rsi_2 = *arg2 + r14_1
        int32_t* rdx_2 = *rcx_4
        
        if (&rdx_2[1] u<= rcx_4[1])
            *rsi_2 = *rdx_2
            int64_t* rax_6 = arg1[1]
            *rax_6 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rsi_2, zmm1)
        else
            (*(*arg1 + 0x150))(arg1, rsi_2, 4)
        
        int64_t* rcx_6 = arg1[1]
        int32_t* r8_1 = *rcx_6
        
        if (&r8_1[1] u<= rcx_6[1])
            *(rsi_2 + 4) = *r8_1
            int64_t* rax_10 = arg1[1]
            *rax_10 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rsi_2 + 4, zmm1)
        else
            (*(*arg1 + 0x150))(arg1, rsi_2 + 4, 4)
        
        zmm1 = sub_141964790(arg1, rsi_2 + 8, zmm1)
        
        if ((arg1[5].b & 1) != 0)
            int64_t rcx_9 = *(rsi_2 + 0x48)
            
            if (rcx_9 != 0)
                *(rsi_2 + 0x48) = sub_140a84c80(rcx_9, 0, 0)
            
            *(rsi_2 + 0x50) = 0
            zmm1 = sub_14090a260(rsi_2 + 8, *(rsi_2 + 0x10) - *(rsi_2 + 0x3c), 0)
        
        int64_t* rcx_11 = arg1[1]
        int32_t* r8_2 = *rcx_11
        
        if (&r8_2[1] u<= rcx_11[1])
            *(rsi_2 + 0x58) = *r8_2
            int64_t* rax_15 = arg1[1]
            *rax_15 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rsi_2 + 0x58, zmm1)
        else
            (*(*arg1 + 0x150))(arg1, rsi_2 + 0x58, 4)
        
        rbp += 1
        r14_1 += 0x60
    while (rbp s< arg_8)

return arg1
