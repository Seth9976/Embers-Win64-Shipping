// 函数: sub_140f1a950
// 地址: 0x140f1a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = *arg4
int64_t* var_38
int64_t* rax_1 = sub_140e45a60(&var_38, arg3, &var_28)
*arg2 = 0

if (rax_1[1].d != 0 && *rax_1 != 0)
    sub_140599630(arg1, 1)
    int64_t rbx_1 = 0
    
    if (rax_1[1].d != 0)
        int64_t* rcx_2 = *rax_1
        void arg_10
        
        if (rcx_2 != 0)
            rbx_1 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_10)
    
    int64_t rbp_1 = sx.q(arg1[1].d)
    int32_t rax_4 = (rbp_1 + 1).d
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    *arg2 = rbx_1
    int64_t rcx_6 = (rbp_1 << 4) + *arg1
    *rcx_6 = 0
    *rcx_6 = *rax_1
    *rax_1 = 0
    *(rcx_6 + 8) = rax_1[1].d
    rax_1[1].d = 0

int32_t var_30
int64_t* rax_8

if (var_30 == 0)
    rax_8 = var_38
label_140f1aa5d:
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)
else
    int64_t* rcx_7 = var_38
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7, 0)
        rax_8 = var_38
        
        if (rax_8 != 0)
            rax_8 = sub_140a84c80(rax_8, 0, 0)
            var_38 = rax_8
        
        int32_t var_30_1 = 0
        goto label_140f1aa5d
return arg2
