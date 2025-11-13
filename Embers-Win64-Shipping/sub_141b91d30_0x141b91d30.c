// 函数: sub_141b91d30
// 地址: 0x141b91d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = nullptr
int32_t* var_18 = nullptr
int32_t var_c = 0
int32_t result_1 = 0

if (&var_18 != arg1 + 0x798)
    var_18.o = *(arg1 + 0x798)
    result_1 = 0
    rsi = var_18
    *(arg1 + 0x798) = var_18.o

int64_t result = sx.q(result_1)
int32_t* rbx = rsi
void* rbp = &rsi[result]

if (rsi != rbp)
    do
        int32_t rcx_1 = *rbx
        
        if (rcx_1 == 0)
            result = sub_141be8cc0(arg1)
        else if (rcx_1 == 1)
            result = sub_141bc6960(arg1)
        
        rbx = &rbx[1]
    while (rbx != rbp)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
