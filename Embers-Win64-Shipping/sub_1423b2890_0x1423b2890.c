// 函数: sub_1423b2890
// 地址: 0x1423b2890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t** var_38 = arg3
void* rcx = data_143ddb400
uint64_t var_18 = 0
int32_t var_10 = 0
char rax
int64_t r9_1
rax, r9_1 = sub_140af5b90(rcx, arg2, u"BasedOn", &var_18, var_38)

if (rax != 0)
    int16_t* const rdx = &data_142d40450
    r9_1.b = 1
    
    if (var_10 != 0)
        rdx = var_18
    
    var_38 = arg4
    sub_1423b2890(arg1, rdx, arg3, r9_1, var_38)

int16_t** arg_18 = arg3
int64_t* result_1 = nullptr
int32_t var_20 = 0
int64_t* rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    *rax_2 = &data_142d3fe58
    rax_2[1] = &arg_18
    rax_2[2] = sub_1423b2f00
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_142d3feb0
    sub_1405964f0(rax_2, &result_1)
else if (var_20 != 0)
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        (*(*result_2 + 0x38))(result_2, 0)
        int64_t* result_3 = result_1
        
        if (result_3 != 0)
            result_1 = sub_140a84c80(result_3, 0, 0)

if (rax_2 != 0)
    (*(*rax_2 + 0x38))(rax_2, 0)
    int64_t rax_7 = sub_140a84c80(rax_2, 0, 0)
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)

int64_t* rcx_6 = data_143ddb400
(*(*rcx_6 + 0x40))(rcx_6, &result_1, arg2, arg3, var_38)
int64_t* rcx_7 = data_143db18d0

if (rcx_7 == 0)
    sub_140a53c40()
    rcx_7 = data_143db18d0

int64_t* result = (*(*rcx_7 + 0x50))(rcx_7)

if (var_20 == 0)
    result = result_1
label_1423b2a34:
    
    if (result != 0)
        result = sub_140a74f90(result)
else
    int64_t* result_4 = result_1
    
    if (result_4 != 0)
        (*(*result_4 + 0x38))(result_4, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_20_1 = 0
        goto label_1423b2a34

uint64_t rcx_10 = var_18

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
