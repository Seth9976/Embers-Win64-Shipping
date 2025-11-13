// 函数: sub_140b6bf70
// 地址: 0x140b6bf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b6e120(GetCurrentProcess())
int64_t rcx_1 = data_1439a9620
int32_t arg_10 = 0
char rax_1 = data_143e18618(rcx_1, 0, 0, &arg_10)
uint64_t rcx_3 = zx.q(arg_10 u>> 3)

if (rax_1 == 0)
    rcx_3 = 0

uint32_t rsi = (rcx_3 << 3).d
int64_t result = sub_140a82f30(zx.q(rsi) + 8, 0)
int32_t arg_18 = 0

if (data_143e18618(arg1, result, zx.q(rsi), &arg_18) != 0)
    uint64_t rax_4 = zx.q(arg_18)
    
    if (rax_4.d u<= rsi)
        *(result + (rax_4 u>> 3 << 3)) = 0
        return result
else
    sub_140a74f90(result)

return 0
