// 函数: sub_141f52180
// 地址: 0x141f52180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
char r8_2 = (*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x90, sx.q(*(arg2 + 0xc)) * 0x90, r9)
int32_t i = 0
int32_t rax_2 = 0

if ((arg1[5].b & 1) == 0)
    rax_2 = arg2[1].d

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_2
int32_t* rdx_2 = *rcx

if (&rdx_2[1] u> rcx[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        r8_2 = sub_140b54070(arg1, rdx_3, arg3)
    else
        r8_2 = (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx += 4

int32_t rax_6 = arg_8

if (rax_6 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_6 s<= 0)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x1c71c)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        char r8_3
        int512_t zmm1
        r8_3, zmm1 = sub_141f5bc20(arg2, rax_6)
        int32_t rbp = 0
        
        if (arg_8 s<= 0)
            return arg1
        
        do
            int64_t rbx_1 = sx.q(arg2[1].d)
            int32_t rax_8 = (rbx_1 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                r8_3 = sub_140dbc660(arg2)
            
            int64_t rbx_3 = rbx_1 * 0x90
            int128_t* rbx_4 = rbx_3 + *arg2
            
            if (rbx_3 == neg.q(*arg2))
                rbx_4 = nullptr
            else
                __builtin_memset(rbx_4, 0, 0x48)
                r8_3 = sub_1422891d0(rbx_4 + 0x48, 0)
                *(rbx_4 + 0x88) = 0
            
            r8_3, zmm1 = sub_141f51c20(arg1, rbx_4, zmm1, r8_3)
            rbp += 1
        while (rbp s< arg_8)
        
        return arg1
    
    arg2[1].d = rax_6
    
    if (rax_6 s> 0)
        do
            r8_2, arg3 = sub_141f51c20(arg1, sx.q(i) * 0x90 + *arg2, arg3, r8_2)
            i += 1
        while (i s< arg2[1].d)
else if ((arg1[5].b & 1) != 0)
    sub_141f5bc20(arg2, 0)

return arg1
