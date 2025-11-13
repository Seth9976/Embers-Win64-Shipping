// 函数: sub_142820d30
// 地址: 0x142820d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = arg2
int64_t* rbx = arg1

if (arg1[3] u>= 0x10)
    arg1 = *arg1

int64_t rax = sub_14058e700(arg1)
int64_t rdi_1 = rbx[2] + rax

if (rbx[3] u>= 0x10)
    rbx = *rbx

char* result = sub_14058e700(rbx)
int64_t* rcx

if (result != rdi_1)
    rcx.b = 0
    
    do
        if (rsi.b != 0 && *result u>= 0x80)
            goto label_142820d92
        
        if (*result == 0xa)
            goto label_142820d92
        
        result = &result[1]
    while (result != rdi_1)

rcx.b = 1
label_142820d92:
result.b = rcx.b
return result
