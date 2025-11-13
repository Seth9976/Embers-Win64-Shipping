// 函数: sub_140be4c40
// 地址: 0x140be4c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
*arg2 = *arg3
int64_t rcx = *(arg1 + 0x1c)
void* arg_8 = &arg3[1]
arg2[1] = arg3[1]
arg2[2] = arg3[2]
int64_t var_78
int64_t var_68
int64_t var_58
int64_t var_48
void arg_18

if (*(arg1 + 4) != rcx)
    if (((*arg1 u>> 0x12).b & 1) == 0)
        *arg2 = rcx
    else
        int64_t* rax_7 = sub_140b63b70(&arg1[7], &var_48)
        int16_t* const r15_1
        
        if (rax_7[1].d == 0)
            r15_1 = &data_142d40450
        else
            r15_1 = *rax_7
        
        int64_t* rax_8 = sub_140b63b70(&arg1[1], &var_58)
        int16_t* r14_1
        
        if (rax_8[1].d == 0)
            r14_1 = &data_142d40450
        else
            r14_1 = *rax_8
        
        int64_t* rax_10 = sub_140a300d0(sub_140b63b70(arg3, &var_68), &var_78, r14_1, r15_1, 1)
        int16_t* rdx_4
        
        if (rax_10[1].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *rax_10
        
        *arg2 = *sub_140b58260(&arg_18, rdx_4, 1)
        int64_t rcx_7 = var_78
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = var_68
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = var_58
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = var_48
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)

if (*(arg1 + 0xc) != *(arg1 + 0x24))
label_140be4db3:
    
    if (((*arg1 u>> 0x12).b & 1) == 0)
        arg2[1] = *(arg1 + 0x24)
    else
        int64_t* rax_17 = sub_140b63b70(&arg1[9], &var_78)
        int16_t* const r15_2
        
        if (rax_17[1].d == 0)
            r15_2 = &data_142d40450
        else
            r15_2 = *rax_17
        
        int64_t* rax_18 = sub_140b63b70(&arg1[3], &var_68)
        int16_t* r14_2
        
        if (rax_18[1].d == 0)
            r14_2 = &data_142d40450
        else
            r14_2 = *rax_18
        
        int64_t* rax_20 = sub_140a300d0(sub_140b63b70(arg_8, &var_58), &var_48, r14_2, r15_2, 1)
        int16_t* rdx_10
        
        if (rax_20[1].d == 0)
            rdx_10 = &data_142d40450
        else
            rdx_10 = *rax_20
        
        arg2[1] = *sub_140b58260(&arg_18, rdx_10, 1)
        int64_t rcx_19 = var_48
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t rcx_20 = var_58
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = var_68
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        int64_t rcx_22 = var_78
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
else
    int32_t rcx_11
    rcx_11.b = sub_140b5b8a0(arg1[0xb], 0) == 0
    
    if ((arg1[0xc] != 0 | rcx_11.b) != 0)
        bool rdx_5 = sub_140b5b8a0(arg1[7], 0) == 0
        
        if ((arg1[8] != 0 | rdx_5) != 0)
            goto label_140be4db3

int64_t rdx_11 = *(arg1 + 0x2c)

if (*(arg1 + 0x14) != rdx_11)
    if (((*arg1 u>> 0x12).b & 1) == 0)
        arg2[2] = rdx_11
    else
        int64_t* rax_25 = sub_140b63b70(&arg1[0xb], &var_78)
        int16_t* const r15_3
        
        if (rax_25[1].d == 0)
            r15_3 = &data_142d40450
        else
            r15_3 = *rax_25
        
        int64_t* rax_26 = sub_140b63b70(&arg1[5], &var_68)
        int16_t* rsi_1
        
        if (rax_26[1].d == 0)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *rax_26
        
        int64_t* rax_28 = sub_140a300d0(sub_140b63b70(&arg3[2], &var_58), &var_48, rsi_1, r15_3, 1)
        
        if (rax_28[1].d != 0)
            rdi = *rax_28
        
        arg2[2] = *sub_140b58260(&arg_8, rdi, 1)
        int64_t rcx_29 = var_48
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        int64_t rcx_30 = var_58
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int64_t rcx_31 = var_68
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        int64_t rcx_32 = var_78
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)

return arg2
