// 函数: sub_142928de0
// 地址: 0x142928de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x20)
int32_t rsi = 1
int32_t* result = nullptr

if (arg1 != 0)
    if (strcmp(arg1, "TRUSTED CERTIFICATE") != 0)
        if (strcmp(arg1, "X509 CERTIFICATE") != 0 && strcmp(arg1, "CERTIFICATE") != 0)
            return nullptr
    else
        rsi = 0
    
    *arg5 = 1

void* rax_2 = sub_1428a2d20(nullptr, &arg_18, arg4)
void* rbx_1 = rax_2

if (rax_2 != 0)
label_142928e63:
    *arg5 = 1
    int32_t* result_1 = sub_142969280(rbx_1)
    result = result_1
    
    if (result_1 == 0)
        sub_1428a2c50(rbx_1)
else if (rsi == 0)
    sub_1428a2c50(rbx_1)
else
    void* rax_3 = sub_1428a2d00(nullptr, &arg_18, arg4)
    rbx_1 = rax_3
    
    if (rax_3 != 0)
        goto label_142928e63
    
    sub_1428a2c50(rbx_1)

return result
