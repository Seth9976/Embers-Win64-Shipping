// 函数: sub_142c8f450
// 地址: 0x142c8f450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg2
int64_t arg_8 = 0
int32_t* rcx = 0x314
int32_t rdx = *(arg2 + 0x164)
int32_t r12 = 0x10
int32_t* rax_1

if (rdx == 2)
    rax_1 = 0x314
    
    if (arg2[0x48] != -1)
        rax_1 = 0x33c

int64_t r10

if (rdx != 2 || *(rax_1 + arg2) == rdx)
    r10 = arg2[0x1a]
else
    r10 = arg2[0x2a]

if (rdx == 2 && arg2[0x48] != -1)
    rcx = 0x33c

int32_t r9

if (rdx != 2 || *(rcx + arg2) == rdx)
    r9 = *(arg2 + 0x17c)
else
    r9 = arg2[0x2f].d

int64_t* rax_2 = r14 + 0x7b0
char* var_48 = nullptr
int64_t var_40 = 0

if (*rax_2 == 0)
    rax_2 = *arg1

int64_t r13 = *rax_2
int32_t result_1 = 1
*arg4 = 1
int64_t rcx_1 = sx.q(arg1[1].d)
int64_t arg_10 = 0
uint64_t result

if (rcx_1.d == 0x10)
    result = 0x43
    bool cond:1_1 = arg3.d == *(*arg1 + 0xc)
    *arg4 = 2
    
    if (cond:1_1)
        result = 0
    
    arg1[1].d = 0
else if ((rcx_1 - 0xe).d u> 1 && arg3.d != (*arg1)[1].d)
label_142c8f53c:
    *arg4 = 2
    result = 0x43
    arg1[1].d = 0
else
    char* arg_20
    int32_t result_2
    char const* const rcx_15
    int64_t rcx_16
    
    if (rcx_1.d u> 0xf)
    label_142c8f854:
        sub_142c64760(r14, "Unsupported SASL authentication mechanism", arg3, arg6)
    label_142c8f859:
        rcx_16 = arg_8
    label_142c8f85d:
        r12 = 0
        *arg4 = 2
    label_142c8f867:
        data_143ccb8a0(rcx_16)
        result = zx.q(result_1)
        arg1[1].d = r12
    else
        switch (rcx_1)
            case 0
                *arg4 = 2
                return 0
            case 1
                result_2 = sub_142c92070(r14, arg2[0x3e], arg2[0x3f], &arg_8, arg6, &arg_10)
            label_142c8f804:
                result_1 = result_2
            label_142c8f806:
                
                if (result_1 != 0)
                    goto label_142c8f80a
                
                rcx_16 = arg_8
                
                if (rcx_16 == 0)
                    goto label_142c8f867
                
                goto label_142c8f83f
            case 2
                result_2 = sub_142c91ff0(r14, arg2[0x3e], &arg_8, &arg_10, arg6)
                r12 = 3
                goto label_142c8f804
            case 3
                result_2 = sub_142c91ff0(r14, arg2[0x3f], &arg_8, &arg_10, arg6)
                goto label_142c8f804
            case 4
                result_2 = j_sub_142c91ff0(r14, arg2[0x3e], &arg_8, &arg_10, arg6)
                goto label_142c8f804
            case 5
                (*arg1)[5](*(r14 + 0xa80), &arg_20)
                int32_t result_3 = sub_142c92400(arg_20, &var_48, &var_40)
                result_1 = result_3
                
                if (result_3 == 0)
                    result_1 =
                        sub_142c921a0(r14, var_48, arg2[0x3e], arg2[0x3f], arg6, &arg_8, &arg_10)
                
                data_143ccb8a0(var_48)
                goto label_142c8f806
            case 6
                (*arg1)[5](*(r14 + 0xa80), &arg_20)
                result_2 = sub_142c8b390(r14, arg_20, arg2[0x3e], arg2[0x3f], r13, &arg_8, &arg_10)
                r12 = 7
                goto label_142c8f804
            case 7
                rcx_15 = &data_1434cce10
            label_142c8f6b6:
                int64_t rax_8 = data_143ccb8b0(rcx_15)
                arg_8 = rax_8
                rcx_16 = rax_8
                
                if (rax_8 == 0)
                    result_1 = (rax_8 + 0x1b).d
                    goto label_142c8f85d
                
            label_142c8f83f:
                int32_t result_6 = (*arg1)[4](arg2, rcx_16)
                rcx_16 = arg_8
                result_1 = result_6
                goto label_142c8f867
            case 8
                result_2 = sub_142c8c110(arg2[0x3e], arg2[0x3f], &arg2[0xa4], &arg_8, arg6, &arg_10)
                r12 = 9
                goto label_142c8f804
            case 9
                (*arg1)[5](*(r14 + 0xa80), &arg_20)
                int32_t result_4
                int512_t zmm2
                result_4, zmm2 = sub_142c8c990(r14, arg_20, &arg2[0xa4], arg6)
                result_1 = result_4
                
                if (result_4 == 0)
                    result_2 = sub_142c8c270(r14, arg2[0x3e], arg2[0x3f], &arg2[0xa4], arg5, zmm2, 
                        &arg_8, &arg_10)
                    goto label_142c8f804
                
            label_142c8f80a:
                
                if (result_1 != 0x3d)
                    goto label_142c8f859
                
                int32_t result_5 = (*arg1)[4](arg2, &data_1434d2d58)
                rcx_16 = arg_8
                r12 = 0xf
                result_1 = result_5
                goto label_142c8f867
            case 0xa, 0xb, 0xc
                goto label_142c8f854
            case 0xd
                int64_t rdx_14 = arg2[0x3e]
                int64_t* var_58_2 = &arg_10
                int64_t* var_60_4 = &arg_8
                int64_t rax_10 = arg2[0x41]
                
                if (*(arg1 + 0x14) != 0x100)
                    result_2 = sub_142c92430(r14, rdx_14, 0, 0, arg6, rax_10, var_60_4, var_58_2)
                else
                    result_2 = sub_142c92430(r14, rdx_14, r10, r9, arg6, rax_10, var_60_4, var_58_2)
                    r12 = 0xe
                
                goto label_142c8f804
            case 0xe
                int64_t* rax_11 = *arg1
                
                if (arg3.d != *(rax_11 + 0xc))
                    if (arg3.d != rax_11[1].d)
                        goto label_142c8f53c
                    
                    rcx_15 = "AQ=="
                    goto label_142c8f6b6
                
                *arg4 = 2
                result = 0
                arg1[1].d = 0
            case 0xf
                *(arg1 + 0xc) ^= *(arg1 + 0x14)
                result_2 = sub_142c8fa60(arg1, arg2, *(arg1 + 0x1a), arg4, arg6)
                r12 = arg1[1].d
                goto label_142c8f804

return result
