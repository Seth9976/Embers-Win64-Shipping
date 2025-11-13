// 函数: sub_14228b800
// 地址: 0x14228b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0xb0, sx.q(*(arg2 + 0xc)) * 0xb0, r9)
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

int32_t rax_7 = arg_8

if (rax_7 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_7 s<= 0)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_7 s> 0x1745d)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != rax_7)
            sub_140a05f70(arg2, rax_7)
            rax_7 = arg_8
        
        int32_t rbp = 0
        
        if (rax_7 s<= 0)
            return arg1
        
        do
            int64_t rdi_1 = sx.q(arg2[1].d)
            int32_t rax_8 = (rdi_1 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_140a05e50(arg2)
            
            int64_t rdi_2 = rdi_1 * 0xb0
            int32_t* rdi_3 = rdi_2 + *arg2
            
            if (rdi_2 == neg.q(*arg2))
                rdi_3 = nullptr
            else
                *rdi_3 = 0
                *(rdi_3 + 8) = 0
                memset(&rdi_3[4], 0, 0x90)
                rdi_3[0x28] = 0xff7f7fff
                rdi_3[0x29] = 0x3f800000
            
            sub_14228bd70(arg1, rdi_3, arg3)
            rbp += 1
        while (rbp s< arg_8)
        
        return arg1
    
    arg2[1].d = rax_7
    
    if (rax_7 s> 0)
        do
            sub_14228bd70(arg1, sx.q(i) * 0xb0 + *arg2, arg3)
            i += 1
        while (i s< arg2[1].d)
else if ((arg1[5].b & 1) != 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_140a05f70(arg2, 0)

return arg1
