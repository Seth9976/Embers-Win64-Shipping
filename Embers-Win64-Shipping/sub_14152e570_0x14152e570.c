// 函数: sub_14152e570
// 地址: 0x14152e570
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
    sub_140775d60(arg2, rdx_1)
    rdx_1 = arg_8

int64_t rsi = sx.q(arg2[1].d)

if (rdx_1 s> rsi.d)
    arg2[1].d = rdx_1
    int32_t i_5 = rdx_1 - rsi.d
    
    if (rdx_1 s> *(arg2 + 0xc))
        sub_1407756d0(arg2)
        rdx_1 = arg_8
    
    int32_t* rcx_5 = rsi * 0x34 + *arg2
    
    if (i_5 != 0)
        void* rax_4 = &rcx_5[5]
        int32_t i
        
        do
            *rcx_5 = 0x7f7fffff
            rcx_5 = &rcx_5[0xd]
            *(rax_4 - 0x10) = 0x7f7fffff
            *(rax_4 - 0xc) = 0x7f7fffff
            *(rax_4 - 8) = 0xff7fffff
            *(rax_4 - 4) = 0xff7fffff
            *rax_4 = 0xff7fffff
            rax_4 += 0x34
            i = i_5
            i_5 -= 1
        while (i != 1)
        rdx_1 = arg_8
else if (rdx_1 s< rsi.d)
    int32_t rax_5 = rsi.d
    
    if (rax_5 != rdx_1)
        arg2[1].d = rsi.d - (rax_5 - rdx_1)
        sub_1417503b0(arg2)
        rdx_1 = arg_8

int32_t r14 = 0

if (rdx_1 s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rbp_2 = *arg2 + r15_1
        int512_t zmm1 = sub_1417558e0(arg1, rbp_2)
        int64_t* rcx_8 = arg1[1]
        int32_t* r8_1 = *rcx_8
        
        if (&r8_1[1] u<= rcx_8[1])
            rbp_2[3].d = *r8_1
            int64_t* rax_9 = arg1[1]
            *rax_9 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rbp_2[3], zmm1)
        else
            (*(*arg1 + 0x150))(arg1, &rbp_2[3], 4)
        
        void* rdi_2 = rbp_2 + 0x1c
        int64_t i_3 = 3
        int64_t i_1
        
        do
            int64_t* rcx_10 = arg1[1]
            int32_t* rdx_5 = *rcx_10
            
            if (&rdx_5[1] u<= rcx_10[1])
                *rdi_2 = *rdx_5
                int64_t* rax_13 = arg1[1]
                *rax_13 += 4
            else if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdi_2, zmm1)
            else
                (*(*arg1 + 0x150))(arg1, rdi_2, 4)
            
            rdi_2 += 4
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        int32_t* rdi_3 = &rbp_2[5]
        int64_t i_4 = 3
        int64_t i_2
        
        do
            int64_t* rcx_12 = arg1[1]
            int32_t* rdx_7 = *rcx_12
            
            if (&rdx_7[1] u<= rcx_12[1])
                *rdi_3 = *rdx_7
                int64_t* rax_17 = arg1[1]
                *rax_17 += 4
            else if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdi_3, zmm1)
            else
                (*(*arg1 + 0x150))(arg1, rdi_3, 4)
            
            rdi_3 = &rdi_3[1]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        r14 += 1
        r15_1 += 0x34
    while (r14 s< arg_8)

return arg1
