// 函数: sub_1421693f0
// 地址: 0x1421693f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18
int64_t r15

if (arg4 == 0)
    sub_140d3a3a0(&arg_18, arg3)
    r15 = arg_18
else
    r15 = *arg4

arg_18 = r15
char rax_1

if (arg3 != 0)
    rax_1 = sub_14217c860(arg1, arg3, &arg_18)

if (arg3 == 0 || rax_1 == 0)
    *arg2 = 0
else
    int64_t* rcx_2 = arg1[0x29]
    char rax_3
    
    if (rcx_2 != 0)
        rax_3 = (*(*rcx_2 + 0x368))(rcx_2)
    
    int64_t r13
    
    if (rcx_2 == 0 || rax_3 != 0)
        r13.b = 1
    else
        r13.b = 0
    
    sub_141f87aa0(&arg1[0xa], &arg_18, r15)
    int64_t rax_4 = sx.q(arg_18.d)
    
    if (rax_4.d == 0xffffffff)
        goto label_142169583
    
    void* rcx_4 = arg1[0xa] + rax_4 * 0x14
    
    if (rcx_4 == 0)
        goto label_142169583
    
    int64_t rcx_5 = sx.q(*(rcx_4 + 8))
    
    if (rcx_5.d == 0)
        goto label_142169583
    
    int32_t* rdx_7
    
    if (arg1[1].d == *(arg1 + 0x34))
    label_14216951d:
        rdx_7 = nullptr
    else
        void* rdx_4 = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx_4 != 0)
            r9 = rdx_4
        
        int32_t rax_7 = *(r9 + (((sx.q(arg1[9].d) - 1) & rcx_5) << 2))
        
        if (rax_7 == 0xffffffff)
        label_14216951d_1:
            rdx_7 = nullptr
        else
            while (true)
                rdx_7 = sx.q(rax_7) * 0x38 + *arg1
                
                if (*rdx_7 == rcx_5.d)
                    break
                
                rax_7 = rdx_7[0xc]
                
                if (rax_7 == 0xffffffff)
                    goto label_14216951d_2
            
            if (rax_7 == 0xffffffff)
            label_14216951d_2:
                rdx_7 = nullptr
    
    void* rax_8 = &rdx_7[2]
    
    if (rdx_7 == 0)
        rax_8 = nullptr
    
    if (rax_8 == 0 || 0.0 f>= *(rax_8 + 0x18))
        *arg2 = rcx_5.d
    else if (r13.b != 0 || data_143f4d268 == 0)
        sub_141fc3620(&arg1[0xa], r15)
    label_142169583:
        
        if (r13.b != 0)
            int64_t var_50_1 = (zx.o(0)).q
            int32_t rsi_1
            rsi_1.b = (*(*arg3 + 0x1c0))(arg3) != 0
            uint64_t rcx_8 = zx.q(rsi_1)
            *(arg1 + (rcx_8 << 2) + 0xa0) += 1
            *arg2 = (*(arg1 + (rcx_8 << 2) + 0xa0) * 2) | rsi_1
            sub_140d3a3a0(&arg_18, arg3)
            int64_t r8_5 = arg3[4]
            int64_t var_68 = arg_18
            int32_t var_60_1 = *sub_1421693f0(arg1, &arg_18, r8_5, 0)
            int64_t var_5c_1 = arg3[3]
            int32_t var_54_1 = sub_142168a70(arg1, arg3)
            int32_t rax_20 = *arg2
            uint8_t rdx_12
            
            if (rax_20 == 0 || (rax_20.b & 1) == 0)
                rdx_12 = 1
            else
                rdx_12 = (*(sub_140d21d80(arg3) + 0x50) u>> 0x11).b & 1
            
            int32_t* var_78 = arg2
            char var_48
            char rcx_14 = (((var_48 & 0xf0) | 0x10) & 0xfe) | rdx_12
            char var_48_2 = (((rcx_14 * 2) ^ rcx_14) & 2) ^ rcx_14
            int64_t* var_70_1 = &var_68
            sub_14215a980(arg1, &arg_18, &var_78, nullptr)
            
            if (j_sub_140d3e110(&var_68) != 0)
                sub_141fa1990(&arg1[0xa], &var_68, arg2)
        else
            *arg2 = 1
    else
        *(rax_8 + 0x18) = 0
        *arg2 = rcx_5.d

return arg2
