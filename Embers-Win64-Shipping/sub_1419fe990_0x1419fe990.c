// 函数: sub_1419fe990
// 地址: 0x1419fe990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x30, sx.q(*(arg2 + 0xc)) * 0x30, r9)
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
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx += 4

int32_t rax_7 = arg_8

if (rax_7 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_7 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rax_7 s> 0x55555))
        *(arg1 + 0x29) = rcx_3 | 1
    else if ((arg1[5].b & 1) == 0)
        arg2[1].d = rax_7
        
        if (rax_7 s> 0)
            do
                void* rcx_10 = *arg2
                
                if ((rcx_10.b & 1) != 0)
                    rcx_10 = (rcx_10 s>> 1) + arg2
                
                sub_1419fdde0(arg1, sx.q(i) * 0x30 + rcx_10, arg3)
                i += 1
            while (i s< arg2[1].d)
    else
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != rax_7)
            sub_141a147e0(arg2, rax_7)
            rax_7 = arg_8
        
        if (rax_7 s> 0)
            do
                int64_t rbp_1 = sx.q(arg2[1].d)
                int32_t rax_8 = (rbp_1 + 1).d
                arg2[1].d = rax_8
                
                if (rax_8 s> *(arg2 + 0xc))
                    sub_141a144e0(arg2, rbp_1.d)
                
                void* rcx_7 = *arg2
                
                if ((rcx_7.b & 1) != 0)
                    rcx_7 = (rcx_7 s>> 1) + arg2
                
                sub_1419fdde0(arg1, rbp_1 * 0x30 + rcx_7, arg3)
                i += 1
            while (i s< arg_8)
else if ((arg1[5].b & 1) != 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_141a147e0(arg2, 0)

return arg1
