// 函数: sub_1426c3260
// 地址: 0x1426c3260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = nullptr
void*** result_2 = sub_140a84c80(0, 0x30, 0)
result_1 = result_2

if (result_2 != 0)
    *result_2 = &data_142e33878
    sub_140d3a3a0(&result_2[1], arg1)
    result_2[2] = sub_1426a7efc
    result_2[4] = sub_140a387b0()
    *result_2 = &data_142e338d0

void var_18
int64_t* rax_1 = sub_1426ce840(&var_18, *(arg1 + 0x48), arg2, arg3, &result_1)
int64_t rsi_1 = sx.q(*(arg1 + 0x58))
int32_t rcx_2 = (rsi_1 + 1).d
*(arg1 + 0x58) = rcx_2

if (rcx_2 s> *(arg1 + 0x5c))
    sub_1405a4f90(arg1 + 0x50)

int64_t* rcx_6 = (rsi_1 << 4) + *(arg1 + 0x50)
*rcx_6 = *rax_1
int64_t* result = rax_1[1]
rcx_6[1] = result
rax_1[1] = 0
*rax_1 = 0
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

if (3 == 0)
    result = result_1
label_1426c33aa:
    
    if (result != 0)
        return sub_140a74f90(result)
else
    int64_t* result_3 = result_1
    
    if (result_3 != 0)
        (*(*result_3 + 0x38))(result_3, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_20_1 = 0
        goto label_1426c33aa

return result
