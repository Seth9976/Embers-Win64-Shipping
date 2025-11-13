// 函数: sub_1427abb00
// 地址: 0x1427abb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void*** var_58 = nullptr
int64_t (* var_40)(int64_t arg1) = sub_1427a2dc0
void** const var_48 = &data_142e347e8
int64_t (* var_68)(int64_t arg1, int64_t* arg2) = sub_1418f6830
void* const rdi = sub_1427a6d50(arg3, &var_68)

if (var_68 != 0)
    void** const* rcx_1 = &var_48
    
    if (var_58 != 0)
        rcx_1 = var_58
    
    (*rcx_1)[2](rcx_1)

void* rax_5
int64_t rax_6
void* rdx_1

if (rdi != 0)
    rax_5 = sub_142577430()
    rdx_1 = *(rdi + 0x10)
    rax_6 = sx.q(*(rax_5 + 0x38))

if (rdi == 0 || rax_6.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
    rdi = nullptr

(*(*arg2 + 0x310))(arg2, *(arg1 + 0x28))
int64_t* rbx_1 = data_143f88a80
void* rsi = &rbx_1[sx.q(data_143f88a88)]
int64_t* var_78
int64_t* rcx_5

if (rbx_1 == rsi)
label_1427abbeb:
    rcx_5 = nullptr
    var_78 = nullptr
else
    while (true)
        int64_t* rcx_4 = *rbx_1
        
        if ((*(*rcx_4 + 8))(rcx_4, rdi) != 0)
            int64_t* rcx_9 = *rbx_1
            (*(*rcx_9 + 0x10))(rcx_9, &var_78, rdi)
            rcx_5 = var_78
            break
        
        rbx_1 = &rbx_1[1]
        
        if (rbx_1 == rsi)
            goto label_1427abbeb

void* result = &arg2[0x10]

if (result == &var_78)
    goto label_1427abc29

int64_t* r8_1 = *result
*result = rcx_5
var_78 = nullptr

if (r8_1 != 0)
    result = (**r8_1)(r8_1, 1)
    rcx_5 = var_78
label_1427abc29:
    
    if (rcx_5 != 0)
        result = (**rcx_5)(rcx_5, 1)

__security_check_cookie(rax_1 ^ &var_98)
return result
