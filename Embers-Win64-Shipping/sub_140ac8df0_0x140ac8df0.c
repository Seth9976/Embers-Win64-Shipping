// 函数: sub_140ac8df0
// 地址: 0x140ac8df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
void* var_30 = &arg_18
int64_t (* var_38)(int64_t arg1, int64_t* arg2, int64_t arg3) = j_sub_140a9b850
sub_140a951b0(arg1, u"SetAlwaysSign", arg2, &data_14399eb60, &var_38)
var_38 = j_sub_140a9b850
void* var_30_1 = &arg_18
sub_140a951b0(arg1, u"SetUseGrouping", &arg2[1], &data_14399eb61, &var_38)

if (*(arg2 + 4) != data_14399eb64)
    int32_t rdx = arg1[1].d
    
    if (rdx s> 1)
        int32_t rdi_1 = rdx - 1
        int32_t rax_1
        rax_1.b = rdx s<= 0
        
        if (rdx s<= 0)
            rdi_1 = 0
        
        int32_t rax_3 = rax_1 + 1 + rdx
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        int64_t rcx_2 = sx.q(rdi_1)
        *(*arg1 + (rcx_2 << 1)) = 0x2e
        *(*arg1 + (rcx_2 << 1) + 2) = 0
    
    sub_140a20ba0(arg1, u"SetRoundingMode", 0xf)
    int32_t rdx_1 = arg1[1].d
    int32_t rax_6
    rax_6.b = rdx_1 s<= 0
    int32_t rdi_2 = rdx_1 - 1
    
    if (rdx_1 s<= 0)
        rdi_2 = 0
    
    int32_t rax_8 = rax_6 + 1 + rdx_1
    arg1[1].d = rax_8
    
    if (rax_8 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    int64_t rcx_5 = sx.q(rdi_2)
    *(*arg1 + (rcx_5 << 1)) = 0x28
    *(*arg1 + (rcx_5 << 1) + 2) = 0
    void arg_20
    j_sub_140a9b950(&arg_20, arg1, &arg2[4])
    int32_t rdx_3 = arg1[1].d
    int32_t rax_11
    rax_11.b = rdx_3 s<= 0
    int32_t rdi_3 = rdx_3 - 1
    
    if (rdx_3 s<= 0)
        rdi_3 = 0
    
    int32_t rax_13 = rax_11 + 1 + rdx_3
    arg1[1].d = rax_13
    
    if (rax_13 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    int64_t rcx_8 = sx.q(rdi_3)
    *(*arg1 + (rcx_8 << 1)) = 0x29
    *(*arg1 + (rcx_8 << 1) + 2) = 0

void arg_10
void* var_30_2 = &arg_10
var_38 = sub_140aa3b30
sub_140a95070(arg1, u"SetMinimumIntegralDigits", &arg2[8], &data_14399eb68, &var_38)
var_38 = sub_140aa3b30
void* var_30_3 = &arg_10
sub_140a95070(arg1, u"SetMaximumIntegralDigits", &arg2[0xc], &data_14399eb6c, &var_38)
var_38 = sub_140aa3b30
void* var_30_4 = &arg_10
sub_140a95070(arg1, u"SetMinimumFractionalDigits", &arg2[0x10], &data_14399eb70, &var_38)
var_38 = sub_140aa3b30
void* var_30_5 = &arg_10
return sub_140a95070(arg1, u"SetMaximumFractionalDigits", &arg2[0x14], &data_14399eb74, &var_38)
