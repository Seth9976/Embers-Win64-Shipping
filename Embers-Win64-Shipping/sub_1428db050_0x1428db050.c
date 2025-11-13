// 函数: sub_1428db050
// 地址: 0x1428db050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi_1 = *(arg2 + 0xc) & 8
int32_t rsi = -1

if (rdi_1 == 0)
    rsi = 5

void* result = sub_1428a9570(sub_1406938b0(arg2))
void* result_1 = result

if (arg1 != 0)
    if (rdi_1 == 0 && arg1[1] == 0)
        result = sub_1428c3640()
        arg1[1] = result
    
    if (rdi_1 != 0 || arg1[1] != 0 || result != 0)
        sub_1428cd400(*arg1)
        int32_t* rcx_3 = arg1[1]
        *arg1 = result_1
        
        if (rdi_1 == 0)
            return sub_1428cd2e0(rcx_3, rsi, 0)
        
        result = sub_1428c3620(rcx_3)
        arg1[1] = 0

return result
