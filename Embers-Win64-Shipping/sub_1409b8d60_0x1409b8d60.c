// 函数: sub_1409b8d60
// 地址: 0x1409b8d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char result = (*(*arg1 + 0x260))()

if (result != 0)
    if (arg1[0x9a].d - *(arg1 + 0x4fc) s> 0)
        sub_1409cb870(arg1)
    
    char r12_1 = arg1[0x75].b
    arg1[0x75].b = 0
    
    if (arg1[0x90].d - *(arg1 + 0x4ac) s> 0)
        sub_1409dac70(arg1)
    
    if (arg1[0x7c].d - *(arg1 + 0x40c) s> 0)
        sub_1409c1900(arg1)
    
    int64_t var_88
    int64_t* rax_9 = sub_1409b76e0(&arg1[0x85], &var_88, &arg1[0x7b])
    
    if (&arg1[0x85] != rax_9)
        sub_140780e10(&arg1[0x85], rax_9)
        
        if (rax_9[8] == 0)
            memmove(&arg1[0x8c], &rax_9[7], 4)
        
        int64_t rcx_6 = arg1[0x8d]
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        arg1[0x8d] = rax_9[8]
        rax_9[8] = 0
        arg1[0x8e].d = rax_9[9].d
        rax_9[9].d = 0
    
    int32_t var_40_1 = 0
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int32_t var_80_1 = 0
    int32_t var_7c
    
    if (var_7c != 0)
        sub_140638cc0(&var_88, 0)
    
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    void var_78
    sub_14059a8e0(&var_78, 0)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_11 = var_88
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (arg1[0x86].d - *(arg1 + 0x45c) s> 0)
        sub_1409be9a0(arg1)
    
    arg1[0x75].b = r12_1
    
    if (*(arg1 + 0x519) == 2 || arg2 == 0)
        if (*(arg1 + 0x51a) != 1)
            sub_1409bf2b0(arg1)
        else
            sub_1409d55c0(arg1)
    
    if (arg1[0xa4].d s> 0 && (*(arg1 + 0x519) == 2 || arg2 == 0))
        int64_t rsi_2 = 0
        int64_t* rdi_2 = arg1[0x77]
        uint64_t r14_2 = sx.q(arg1[0x78].d) << 3 u>> 3
        
        if (rdi_2 u> &rdi_2[arg1[0x78]])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t* rcx_14 = *rdi_2
                (*(*rcx_14 + 0x270))(rcx_14, arg1)
                rsi_2 += 1
                rdi_2 = &rdi_2[1]
            while (rsi_2 != r14_2)
    
    int64_t* rdi_3 = arg1[0x77]
    int64_t rsi_3 = 0
    uint64_t rcx_15 = sx.q(arg1[0x78].d)
    uint64_t r14_4 = rcx_15 << 3 u>> 3
    
    if (rdi_3 u> &rdi_3[rcx_15])
        r14_4 = 0
    
    if (r14_4 != 0)
        do
            int64_t* rcx_16 = *rdi_3
            int64_t r8_2
            r8_2.b = *(arg1 + 0x519) == 2
            (*(*rcx_16 + 0x278))(rcx_16, arg1)
            rdi_3 = &rdi_3[1]
            rsi_3 += 1
        while (rsi_3 != r14_4)
        
        rcx_15 = zx.q(arg1[0x78].d)
    
    int64_t* rdi_4 = arg1[0x77]
    int64_t rsi_4 = 0
    uint64_t r14_6 = sx.q(rcx_15.d) << 3 u>> 3
    
    if (rdi_4 u> &rdi_4[sx.q(rcx_15.d)])
        r14_6 = 0
    
    if (r14_6 != 0)
        do
            int64_t* rcx_17 = *rdi_4
            (*(*rcx_17 + 0x288))(rcx_17, arg1)
            rdi_4 = &rdi_4[1]
            rsi_4 += 1
        while (rsi_4 != r14_6)
    
    char rax_22 = *(arg1 + 0x519)
    
    if (rax_22 == 2)
        sub_1409e6f00(arg1)
        rax_22 = *(arg1 + 0x519)
    
    char rdi_5 = *(arg1 + 0x51a)
    char var_98_1 = 1
    char var_97_1 = rax_22
    void*** rax_23 = j_sub_140a82f30(0x10)
    
    if (rax_23 == 0)
        rax_23 = nullptr
    else
        *rax_23 = &data_142e3f8f8
        rax_23[1].w = var_98_1.w
        *(rax_23 + 0xa) = rdi_5
    
    void*** var_90 = rax_23
    result = sub_1409afc10(arg1, &var_90)
    arg1[0xa3].b = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
