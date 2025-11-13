// 函数: sub_14211b700
// 地址: 0x14211b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x68, sx.q(*(arg2 + 0xc)) * 0x68, r9)
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
        sub_140b54070(arg1, rdx_2, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_2, 4)
else
    arg_8 = *rdx_1
    *rcx += 4

int32_t rax_6 = arg_8

if (rax_6 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_6 s<= 0)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x27627)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        int512_t zmm1 = sub_142123400(arg2, rax_6)
        int32_t r12 = 0
        
        if (arg_8 s<= 0)
            return arg1
        
        do
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_8 = (rbp_1 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_1405fde00(arg2)
            
            int64_t r14_1 = rbp_1 * 0x68
            int64_t* r14_2 = r14_1 + *arg2
            
            if (r14_1 == neg.q(*arg2))
                r14_2 = nullptr
            else
                *r14_2 = 0
                r14_2[1].b = 2
                *(r14_2 + 0xc) = 0xffffffff
                r14_2[2].b = 0
                *(r14_2 + 0x14) = 0
                *(r14_2 + 0x1c) = 0
                __builtin_memset(&r14_2[5], 0, 0x40)
                int64_t r13_1 = sx.q(r14_2[6].d)
                int64_t arg_10 = 0
                int32_t rax_9 = (r13_1 + 1).d
                r14_2[6].d = rax_9
                
                if (rax_9 s> *(r14_2 + 0x34))
                    sub_1405a4d70(&r14_2[5])
                
                *(r14_2[5] + (r13_1 << 3)) = 0
                int64_t r15_1 = sx.q(r14_2[0xa].d)
                int32_t rax_11 = (r15_1 + 1).d
                r14_2[0xa].d = rax_11
                
                if (rax_11 s> *(r14_2 + 0x54))
                    sub_140679a80(&r14_2[9])
                
                *(r15_1 + r14_2[9]) = 1
            
            zmm1 = sub_14211b1a0(arg1, r14_2, zmm1)
            r12 += 1
        while (r12 s< arg_8)
        
        return arg1
    
    arg2[1].d = rax_6
    
    if (rax_6 s> 0)
        do
            arg3 = sub_14211b1a0(arg1, sx.q(i) * 0x68 + *arg2, arg3)
            i += 1
        while (i s< arg2[1].d)
else if ((arg1[5].b & 1) != 0)
    sub_142123400(arg2, 0)

return arg1
