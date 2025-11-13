// 函数: sub_141e39070
// 地址: 0x141e39070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a94c8)
sub_141e395c0(arg1, arg2, arg3)
int32_t rax_1

if ((arg1[5].b & 1) != 0)
    rax_1, arg3 = sub_140b4e7c0(arg1, &data_1439a94c8)

int32_t i_3
char rax_6

if ((arg1[5].b & 1) == 0 || rax_1 s>= 4)
    (*(*arg1 + 8))(arg1, sx.q(arg2[3].d) << 2, sx.q(*(arg2 + 0x1c)) << 2)
    int32_t i_4 = 0
    
    if ((arg1[5].b & 1) == 0)
        i_4 = arg2[3].d
    
    int64_t* rcx_9 = arg1[1]
    i_3 = i_4
    int32_t* rdx_11 = *rcx_9
    
    if (&rdx_11[1] u> rcx_9[1])
        int32_t* rdx_12 = &i_3
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_12, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_12, 4)
    else
        i_3 = *rdx_11
        *rcx_9 += 4
    
    int32_t i_5 = i_3
    
    if (i_5 != 0)
        rax_6 = *(arg1 + 0x29)
        
        if ((rax_6 & 1) != 0 || i_5 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && i_5 s> 0x400000))
            *(arg1 + 0x29) = rax_6 | 1
        else
            arg2[3].d = i_5
            
            if ((arg1[5].b & 1) != 0)
                sub_1405c4a90(&arg2[2], i_5, *(arg2 + 0x1c))
                i_5 = arg2[3].d
            
            (*(*arg1 + 0x150))(arg1, arg2[2], sx.q(i_5) << 2)
    else if ((arg1[5].b & 1) != 0)
        arg2[3].d = 0
        
        if (*(arg2 + 0x1c) != 0)
            sub_1405dadb0(&arg2[2], 0)
else
    int64_t rax_2 = *arg1
    int64_t rsi_1 = 0
    uint64_t var_28 = 0
    int32_t var_1c_1 = 0
    uint64_t rbp_1 = 0
    (*(rax_2 + 8))(arg1, 0, 0)
    int64_t* rcx_3 = arg1[1]
    i_3 = 0
    int32_t* rdx_1 = *rcx_3
    
    if (&rdx_1[1] u> rcx_3[1])
        int32_t* rdx_2 = &i_3
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_2, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_2, 4)
    else
        i_3 = *rdx_1
        *rcx_3 += 4
    
    int32_t i_2 = i_3
    
    if (i_2 != 0)
        rax_6 = *(arg1 + 0x29)
        
        if ((rax_6 & 1) != 0 || i_2 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && i_2 s> 0x800000))
            *(arg1 + 0x29) = rax_6 | 1
        else
            if ((arg1[5].b & 1) != 0)
                sub_1405a4c70(&var_28, i_2, 0)
                rbp_1 = var_28
            
            (*(*arg1 + 0x150))(arg1, rbp_1, sx.q(i_2) * 2)
            
            if (i_2 s> 0)
                uint64_t r8_3 = rbp_1
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    uint32_t rax_8 = zx.d(*r8_3)
                    rsi_1 += 4
                    r8_3 += 2
                    *(rsi_1 + arg2[2] - 4) = rax_8 u>> 8 << 0x10 | zx.d(rax_8.b)
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (rbp_1 != 0)
                arg3 = sub_140a74f90(rbp_1)
sub_141e39b30(arg1, &arg2[4], arg3)
return arg1
