// 函数: sub_14152e7d0
// 地址: 0x14152e7d0
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

int32_t rcx_3 = arg_8

if (rcx_3 s> *(arg2 + 0xc))
    sub_140775cf0(arg2, rcx_3)
    rcx_3 = arg_8

int64_t rsi = sx.q(arg2[1].d)
int32_t rbp = 0

if (rcx_3 s> rsi.d)
    arg2[1].d = rcx_3
    int32_t i_5 = rcx_3 - rsi.d
    
    if (rcx_3 s> *(arg2 + 0xc))
        sub_1407755b0(arg2)
        rcx_3 = arg_8
    
    int32_t* rdx_4 = rsi * 0x58 + *arg2
    
    if (i_5 != 0)
        void* rax_4 = &rdx_4[0xd]
        int32_t i
        
        do
            *rdx_4 = 0x7f7fffff
            rdx_4 = &rdx_4[0x16]
            __builtin_memcpy(rax_4 - 0x30, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
                0x14)
            *(rax_4 - 0x1c) = 0
            *(rax_4 - 0x14) = 0
            *(rax_4 - 0xc) = 0xffffffff
            *rax_4 = 0
            *(rax_4 - 8) = 0
            *(rax_4 + 8) = 0
            rax_4 += 0x58
            i = i_5
            i_5 -= 1
        while (i != 1)
        rcx_3 = arg_8
else if (rcx_3 s< rsi.d)
    int32_t rax_5 = rsi.d
    
    if (rax_5 != rcx_3)
        arg2[1].d = rsi.d - (rax_5 - rcx_3)
        sub_14083ac10(arg2)
        rcx_3 = arg_8

if (rcx_3 s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* r14_2 = *arg2 + r15_1
        int512_t zmm1_1 = sub_14152e190(arg1, &r14_2[3], sub_1417558e0(arg1, r14_2))
        void* rdi_2 = &r14_2[8]
        int64_t i_3 = 3
        int64_t i_1
        
        do
            int64_t* rcx_8 = arg1[1]
            int32_t* rdx_7 = *rcx_8
            
            if (&rdx_7[1] u<= rcx_8[1])
                *rdi_2 = *rdx_7
                int64_t* rax_9 = arg1[1]
                *rax_9 += 4
            else if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdi_2, zmm1_1)
            else
                (*(*arg1 + 0x150))(arg1, rdi_2, 4)
            
            rdi_2 += 4
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        int32_t* rdi_3 = r14_2 + 0x4c
        int64_t i_4 = 3
        int64_t i_2
        
        do
            int64_t* rcx_10 = arg1[1]
            int32_t* rdx_9 = *rcx_10
            
            if (&rdx_9[1] u<= rcx_10[1])
                *rdi_3 = *rdx_9
                int64_t* rax_13 = arg1[1]
                *rax_13 += 4
            else if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdi_3, zmm1_1)
            else
                (*(*arg1 + 0x150))(arg1, rdi_3, 4)
            
            rdi_3 = &rdi_3[1]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        rbp += 1
        r15_1 += 0x58
    while (rbp s< arg_8)

return arg1
