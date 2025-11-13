// 函数: sub_14232c830
// 地址: 0x14232c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
char r8_1 = (*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0xe8, sx.q(*(arg2 + 0xc)) * 0xe8, r9)
int32_t i = 0
int32_t rax_2 = 0

if ((arg1[5].b & 1) == 0)
    rax_2 = arg2[1].d

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_2
int32_t* rdx_1 = *rcx

if (&rdx_1[1] u> rcx[1])
    int32_t* rdx_2 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        r8_1 = sub_140b54070(arg1, rdx_2, arg3)
    else
        r8_1 = (*(*arg1 + 0x150))(arg1, rdx_2, 4)
else
    arg_8 = *rdx_1
    *rcx += 4

int32_t rax_6 = arg_8

if (rax_6 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_6 s<= 0)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x11a7b)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        char r8_2
        int512_t zmm1
        r8_2, zmm1 = sub_142334a90(arg2, rax_6)
        int32_t r14 = 0
        
        if (arg_8 s<= 0)
            return arg1
        
        do
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_8 = (rbp_1 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                r8_2 = sub_14092f860(arg2)
            
            int64_t rcx_6 = rbp_1 * 0xe8
            int16_t* rax_9
            
            if (rcx_6 == neg.q(*arg2))
                rax_9 = nullptr
            else
                rax_9 = sub_14232a610(rcx_6 + *arg2)
            
            r8_2 = sub_14232c140(arg1, rax_9, zmm1, r8_2)
            r14 += 1
        while (r14 s< arg_8)
        
        return arg1
    
    arg2[1].d = rax_6
    
    if (rax_6 s> 0)
        do
            r8_1 = sub_14232c140(arg1, sx.q(i) * 0xe8 + *arg2, arg3, r8_1)
            i += 1
        while (i s< arg2[1].d)
else if ((arg1[5].b & 1) != 0)
    sub_142334a90(arg2, 0)

return arg1
