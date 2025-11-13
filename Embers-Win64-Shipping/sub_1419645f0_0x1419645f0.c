// 函数: sub_1419645f0
// 地址: 0x1419645f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(*(arg2 + 0x80)) << 3, sx.q(*(arg2 + 0x84)) << 3)
int32_t i = 0
int32_t rax_1 = 0

if ((arg1[5].b & 1) == 0)
    rax_1 = *(arg2 + 0x80)

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_1
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

int32_t rbp = arg_8

if (rbp != 0)
    char rax_5 = *(arg1 + 0x29)
    
    if ((rax_5 & 1) != 0 || rbp s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rbp s> 0x200000))
        *(arg1 + 0x29) = rax_5 | 1
    else if ((arg1[5].b & 1) == 0)
        *(arg2 + 0x80) = rbp
        
        if (rbp s> 0)
            do
                sub_141964450(arg1, arg2 + (sx.q(i) << 3), arg3)
                i += 1
            while (i s< *(arg2 + 0x80))
    else
        *(arg2 + 0x80) = 0
        
        if (*(arg2 + 0x84) != rbp)
            sub_141068ea0(arg2, rbp)
        
        if (rbp s> 0)
            do
                int64_t rbp_1 = sx.q(*(arg2 + 0x80))
                int32_t rax_6 = (rbp_1 + 1).d
                *(arg2 + 0x80) = rax_6
                
                if (rax_6 s> *(arg2 + 0x84))
                    sub_14088f7f0(arg2)
                
                sub_141964450(arg1, arg2 + (rbp_1 << 3), arg3)
                i += 1
            while (i s< arg_8)
else if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x80) = 0
    
    if (*(arg2 + 0x84) != 0)
        sub_141068ea0(arg2, 0)

return arg1
