// 函数: sub_1429844d0
// 地址: 0x1429844d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_30 = -2
void** var_38 = nullptr

if (arg1[1] == 0)
    int64_t var_40_1 = arg5
    arg3.b = 1
    sub_142984250(arg1, arg2, arg3.b, *arg1, arg4)
    return arg2

int64_t* r13_1 = *arg1

if (arg3 == *r13_1)
    void** rax_2 = arg4
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_2)
        i = zx.d(*(rax_2 + &arg3[4] - arg4))
        
        if (rdx != i)
            break
        
        rax_2 += 1
    while (i != 0)
    
    if (rdx - i s< 0)
        int64_t var_40_2 = arg5
        void* r8_1
        r8_1.b = 1
        sub_142984250(arg1, arg2, r8_1.b, arg3, arg4)
        return arg2
else if (arg3 != r13_1)
    void* rdi_1 = &arg3[4]
    void** rax_6 = arg4
    uint32_t i_1
    uint32_t rdx_6
    
    do
        rdx_6 = zx.d(*rax_6)
        i_1 = zx.d(*(rax_6 + rdi_1 - arg4))
        
        if (rdx_6 != i_1)
            break
        
        rax_6 += 1
    while (i_1 != 0)
    
    if (rdx_6 - i_1 s< 0)
        var_38 = arg3
        void* rcx_4 = *sub_14297bb70(&var_38) + 0x20
        void* r8_7 = arg4 - rcx_4
        uint32_t i_2
        uint32_t rdx_8
        
        do
            rdx_8 = zx.d(*rcx_4)
            i_2 = zx.d(*(rcx_4 + r8_7))
            
            if (rdx_8 != i_2)
                break
            
            rcx_4 += 1
        while (i_2 != 0)
        
        if (rdx_8 - i_2 s< 0)
            void** r9_3 = var_38
            int64_t var_40_4 = arg5
            
            if (*(r9_3[2] + 0x19) != 0)
                sub_142984250(arg1, arg2, 0, r9_3, arg4)
                return arg2
            
            r8_7.b = 1
            sub_142984250(arg1, arg2, r8_7.b, arg3, arg4)
            return arg2
    
    void* rdx_12 = arg4 - rdi_1
    uint32_t i_3
    uint32_t rcx_6
    
    do
        rcx_6 = zx.d(*rdi_1)
        i_3 = zx.d(*(rdi_1 + rdx_12))
        
        if (rcx_6 != i_3)
            break
        
        rdi_1 += 1
    while (i_3 != 0)
    
    if (rcx_6 - i_3 s< 0)
        var_38 = arg3
        int64_t* rax_10
        void* r8_8
        rax_10, r8_8 = sub_14297bb00(&var_38)
        void** r9_5 = var_38
        uint32_t i_4
        uint32_t rdx_13
        
        if (*rax_10 != r13_1)
            void* rax_11 = arg4
            
            do
                rdx_13 = zx.d(*rax_11)
                i_4 = zx.d(*(rax_11 + &r9_5[4] - arg4))
                
                if (rdx_13 != i_4)
                    break
                
                rax_11 += 1
            while (i_4 != 0)
        
        if (*rax_10 == r13_1 || rdx_13 - i_4 s< 0)
            int64_t var_40_5 = arg5
            
            if (*(arg3[2] + 0x19) != 0)
                sub_142984250(arg1, arg2, 0, arg3, arg4)
                return arg2
            
            r8_8.b = 1
            sub_142984250(arg1, arg2, r8_8.b, r9_5, arg4)
            return arg2
else
    void** r9_2 = r13_1[2]
    void* rax_4 = &r9_2[4]
    void* r8_3 = arg4 - rax_4
    uint32_t i_5
    uint32_t rdx_3
    
    do
        rdx_3 = zx.d(*rax_4)
        i_5 = zx.d(*(rax_4 + r8_3))
        
        if (rdx_3 != i_5)
            break
        
        rax_4 += 1
    while (i_5 != 0)
    
    if (rdx_3 - i_5 s< 0)
        int64_t var_40_3 = arg5
        sub_142984250(arg1, arg2, 0, r9_2, arg4)
        return arg2

void* var_28
*arg2 = *sub_142984780(arg1, &var_28, 0, arg4, arg5)
return arg2
