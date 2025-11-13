// 函数: sub_140a67b40
// 地址: 0x140a67b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
void* rax = sub_140b19de0()
*arg2 = 0
int32_t i_3 = *(rax + 8)
void* rsi = *rax
arg2[1].d = i_3

if (i_3 != 0)
    sub_1405a4be0(arg2, i_3, 0)
    int64_t* rbx_1 = *arg2
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rdi_1 = *(rsi + 8)
        int64_t r12_1 = *rsi
        rbx_1[1].d = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(rbx_1, rdi_1, 0)
            memcpy(*rbx_1, r12_1, rdi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rsi += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)
    rbx = arg1
else
    *(arg2 + 0xc) = 0

if (*(*rbx + 0x10) s> 0)
    int64_t* var_68
    sub_140a77ef0(&var_68)
    int64_t* rsi_1 = var_68
    int32_t i_4
    int32_t i_2 = i_4
    void* r13_3 = &rsi_1[sx.q(i_2) * 2]
    void* arg_10 = r13_3
    
    if (rsi_1 != r13_3)
        do
            void* rax_2 = *rbx
            int64_t rdi_2 = 0
            int32_t* r14 = *(rax_2 + 8)
            uint64_t r12_3 = sx.q(*(rax_2 + 0x10)) << 2 u>> 2
            
            if (r14 u> &r14[sx.q(*(rax_2 + 0x10))])
                r12_3 = 0
            
            if (r12_3 != 0)
                do
                    int16_t* var_58
                    sub_140ab0c60(&var_58, rsi_1, *r14)
                    int64_t var_48
                    int64_t* rax_5 = sub_140b25050(&var_48)
                    bool cond:0_1 = rax_5[1].d == 0
                    int64_t var_88 = 0
                    var_88 = *rax_5
                    *rax_5 = 0
                    int32_t rcx_7 = rax_5[1].d
                    int32_t rcx_8 = *(rax_5 + 0xc)
                    int32_t rcx_9
                    rcx_9.b = cond:0_1
                    rax_5[1] = 0
                    int32_t rdx_7 = rcx_7 + 0xd + rcx_9
                    
                    if (rdx_7 s> rcx_8)
                        sub_1405947f0(&var_88, rdx_7)
                    
                    sub_140a2cf70(&var_88, u"Localization", 0xc)
                    int32_t var_50
                    int32_t rbx_3
                    
                    if (var_50 == 0)
                        rbx_3 = 0
                    else
                        rbx_3 = var_50 - 1
                    
                    int32_t r8_4
                    
                    if (rcx_7 == 0)
                        r8_4 = rcx_7 + 2
                    
                    if (rcx_7 != 0 || rbx_3 == 0xffffffff)
                        r8_4 = 1
                    
                    int64_t var_78 = var_88
                    int32_t rdx_9 = rcx_7 + rbx_3 + r8_4
                    var_88 = 0
                    int32_t var_80_1
                    var_80_1.q = 0
                    
                    if (rdx_9 s> rcx_8)
                        sub_1405947f0(&var_78, rdx_9)
                    
                    sub_140a2cf70(&var_78, var_58, rbx_3)
                    int64_t rbx_4 = sx.q(arg2[1].d)
                    int32_t rax_9 = (rbx_4 + 1).d
                    arg2[1].d = rax_9
                    
                    if (rax_9 s> *(arg2 + 0xc))
                        sub_1405a4f90(arg2)
                    
                    int64_t* rcx_18 = (rbx_4 << 4) + *arg2
                    *rcx_18 = 0
                    *rcx_18 = var_78
                    var_78 = 0
                    rcx_18[1].d = rcx_7
                    *(rcx_18 + 0xc) = rcx_8
                    int64_t rbx_5 = var_78
                    int32_t var_70_1
                    var_70_1.q = 0
                    
                    if (rbx_5 != 0)
                        int64_t* rcx_19 = data_143ddb3f0
                        
                        if (rcx_19 == 0)
                            sub_140a750a0()
                            rcx_19 = data_143ddb3f0
                        
                        (*(*rcx_19 + 0x30))(rcx_19, rbx_5)
                    
                    int64_t rbx_6 = var_88
                    
                    if (rbx_6 != 0)
                        int64_t* rcx_20 = data_143ddb3f0
                        
                        if (rcx_20 == 0)
                            sub_140a750a0()
                            rcx_20 = data_143ddb3f0
                        
                        (*(*rcx_20 + 0x30))(rcx_20, rbx_6)
                    
                    int64_t rbx_7 = var_48
                    
                    if (rbx_7 != 0)
                        int64_t* rcx_21 = data_143ddb3f0
                        
                        if (rcx_21 == 0)
                            sub_140a750a0()
                            rcx_21 = data_143ddb3f0
                        
                        (*(*rcx_21 + 0x30))(rcx_21, rbx_7)
                    
                    int16_t* rbx_8 = var_58
                    
                    if (rbx_8 != 0)
                        int64_t* rcx_22 = data_143ddb3f0
                        
                        if (rcx_22 == 0)
                            sub_140a750a0()
                            rcx_22 = data_143ddb3f0
                        
                        (*(*rcx_22 + 0x30))(rcx_22, rbx_8)
                    
                    r14 = &r14[1]
                    rdi_2 += 1
                while (rdi_2 != r12_3)
                
                r13_3 = arg_10
                rbx = arg1
            
            rsi_1 = &rsi_1[2]
        while (rsi_1 != r13_3)
        
        i_2 = i_4
        rsi_1 = var_68
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rbx_9 = *rsi_1
            
            if (rbx_9 != 0)
                int64_t* rcx_23 = data_143ddb3f0
                
                if (rcx_23 == 0)
                    sub_140a750a0()
                    rcx_23 = data_143ddb3f0
                
                (*(*rcx_23 + 0x30))(rcx_23, rbx_9)
            
            rsi_1 = &rsi_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rsi_1 = var_68
    
    if (rsi_1 != 0)
        int64_t* rcx_24 = data_143ddb3f0
        
        if (rcx_24 == 0)
            sub_140a750a0()
            rcx_24 = data_143ddb3f0
        
        (*(*rcx_24 + 0x30))(rcx_24, rsi_1)

return arg2
