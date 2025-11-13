// 函数: sub_140cdbf60
// 地址: 0x140cdbf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68
(*(*arg1 + 0x190))(arg1, &var_68)
int64_t r12 = 0
int64_t arg_8 = 0

if (var_68 != 0)
    int32_t var_60
    int32_t rcx
    rcx.b = sub_140b5b8a0(var_60, 0) == 0
    int32_t var_5c
    
    if ((var_5c != 0 | rcx.b) != 0)
        int64_t var_58
        sub_140b63b70(&var_68, &var_58)
        int32_t var_50
        int32_t rsi_1 = var_50
        int64_t rbx_1 = data_143e1b438
        int64_t r15_1 = var_58
        int64_t var_40 = 0
        int32_t var_38_1 = rsi_1
        int32_t var_34
        int32_t r13_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_40, rsi_1, 0)
            r12 = var_40
            memcpy(r12, r15_1, rsi_1 * 2)
            r13_1 = var_34
            rsi_1 = var_38_1
        else
            r13_1 = 0
        
        int64_t r15_2 = sx.q(arg2[1].d)
        int32_t rax_2 = (r15_2 + 1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_1405c4e40(arg2)
        
        int64_t* rax_5 = (r15_2 << 5) + *arg2
        *rax_5 = rbx_1
        rax_5[1] = r12
        *(rax_5 + 0x14) = r13_1
        rax_5[2].d = rsi_1
        rax_5[3] = 1
        int64_t rcx_5 = var_58
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t* rax_6 = sub_140b63b70(&var_60, &var_58)
        int64_t rcx_7 = data_143e1b5a8
        sub_140596d10(&var_40, rax_6)
        int64_t rbx_2 = sx.q(arg2[1].d)
        int32_t rax_7 = (rbx_2 + 1).d
        arg2[1].d = rax_7
        
        if (rax_7 s> *(arg2 + 0xc))
            sub_1405c4e40(arg2)
        
        int64_t* rcx_12 = (rbx_2 << 5) + *arg2
        *rcx_12 = rcx_7
        rcx_12[1] = var_40
        rcx_12[2].d = var_38_1
        *(rcx_12 + 0x14) = var_34
        rcx_12[3] = 1
        int64_t rcx_13 = var_58
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)

return sub_140cdc310(arg1, arg2)
