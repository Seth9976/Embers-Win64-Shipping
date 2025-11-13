// 函数: sub_140f39410
// 地址: 0x140f39410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int64_t (* result_1)(void* arg1) = *(arg2 + 0x1d0)
void* rax_3 = *(arg2 + 0x1d8)
int32_t var_2e0 = rax_3.d

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int32_t rbx = *(arg2 + 0x1a0)
void var_2c8
int64_t* rax_4
int128_t zmm1
rax_4, zmm1 = sub_14068c940(&var_2c8)
rax_4[0x34].d = rbx
*(rax_4 + 0x1a4) = *(arg2 + 0x1a4)
sub_140f33ac0(arg1, sub_1406937a0(rax_4, &result_1, zmm1))
sub_140690290(&var_2c8)
*(arg1 + 0x3c8) = *(arg2 + 0x1a8)
*(arg1 + 0x3d8) = *(arg2 + 0x1b8)
sub_140692f90(arg1 + 0x3e0, arg2 + 0x1c0)
*(arg1 + 0x3f0) = *(arg2 + 0x1e4)
*(arg1 + 0x400) = *(arg2 + 0x1e0)
*(arg1 + 0x401) = *(arg2 + 0x1f4)
*(arg1 + 0x402) = *(arg2 + 0x1f5)
*(arg1 + 0x403) = *(arg2 + 0x1f6)
*(arg1 + 0x404) = *(arg2 + 0x1f7)
*(arg1 + 0x405) = 1
sub_140f636c0(arg1)
result_1 = sub_140f636c0
var_2e0 = 0
int128_t var_2d8 = result_1.o
int64_t* result = sub_140e8edc0(&result_1, arg1, &var_2d8)
int64_t rbx_1 = 0
int64_t* result_2 = result

if (result[1].d != 0 && *result != 0)
    sub_140599630(&data_14399fb68, 1)
    
    if (result_2[1].d != 0)
        int64_t* rcx_8 = *result_2
        
        if (rcx_8 != 0)
            rbx_1 = *(*(*rcx_8 + 0x30))(rcx_8, &var_2d8)
    
    int64_t rbp_1 = sx.q(data_14399fb70)
    int32_t rax_14 = (rbp_1 + 1).d
    bool cond:0_1 = rax_14 s<= data_14399fb74
    data_14399fb70 = rax_14
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fb68)
    
    int64_t* rcx_11 = (rbp_1 << 4) + data_14399fb68
    *rcx_11 = 0
    *rcx_11 = *result_2
    *result_2 = 0
    result = zx.q(result_2[1].d)
    rcx_11[1].d = result.d
    result_2[1].d = 0

if (var_2e0 == 0)
    result = result_1
label_140f39641:
    
    if (result != 0)
        result = sub_140a74f90(result)
else
    int64_t (* result_3)(void* arg1) = result_1
    
    if (result_3 != 0)
        (*(*result_3 + 0x38))(result_3, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        var_2e0 = 0
        goto label_140f39641

*(arg1 + 0x418) = rbx_1
__security_check_cookie(rax_1 ^ &var_308)
return result
