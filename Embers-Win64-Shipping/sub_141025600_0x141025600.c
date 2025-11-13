// 函数: sub_141025600
// 地址: 0x141025600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* r9 = *(arg1 + 0x10)
char rcx = (data_1439c7a34).b
void* var_68 = r9
bool cond:0 = data_143f0f160 != 0
int64_t* result = *(r9 + 0x18)
int64_t* result_1 = result

if (not(cond:0))
    result = sub_141015f40(r9)
    r9 = var_68
    data_143f0f161 = data_143f0f168 != 0
    data_143f0f160 = 1

*(arg1 + 0x1c) = 0
*(arg1 + 0x48) = 0

if (data_143f0f161 != 0)
    int32_t rax_3 = *(arg1 + 0x18) * 2
    int32_t rdx_1 = 1 << (data_1439c7a34).b
    int32_t var_38
    int32_t* var_50 = &var_38
    int64_t** var_48_1 = &result_1
    void** var_40_1 = &var_68
    int32_t var_30_1 = 0
    var_38 = 1
    *(arg1 + 0x28) = sub_140fff6c0(r9, rdx_1 - 1, &var_50)
    int64_t* rcx_4 = *(arg1 + 0x40)
    *(arg1 + 0x40) = 0
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4, 1)
    
    int32_t var_78_1 = 0
    sub_1410481a0(var_68, 3, 1, (1 << rcx) - 1, 0x400, zx.q(rax_3) << 3, arg1 + 0x40, 0x42effa80)
    int64_t rbx_1 = sx.q(*(arg1 + 0x38))
    int64_t rsi_3 = sx.q(rax_3)
    int32_t rax_7 = (rbx_1 + rsi_3).d
    *(arg1 + 0x38) = rax_7
    
    if (rax_7 s> *(arg1 + 0x3c))
        sub_1405a4df0(arg1 + 0x30)
    
    result = memset(*(arg1 + 0x30) + rbx_1 * 0x18, 0, rsi_3 * 0x18)

__security_check_cookie(rax_1 ^ &var_b8)
return result
