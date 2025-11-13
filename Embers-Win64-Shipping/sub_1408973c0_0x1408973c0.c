// 函数: sub_1408973c0
// 地址: 0x1408973c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg1)
uint64_t rsi = zx.q(rbx.d)

if (rbx u>= 0x10)
    __report_rangecheckfailure()
    noreturn

CRITICAL_SECTION* rcx = data_143cea5c8
*(rbx + &data_143ce9d28) = 0
sub_14089ad80(rcx)
int32_t i = 0

if (*(rbx + &data_143cea540) u> 0)
    void* rbx_2 = (rbx << 7) + &data_143ce9d40
    
    do
        sub_142832370(data_143cea5b8, rbx.d, zx.d(*rbx_2))
        rbx_2 += 1
        i += 1
    while (i s< zx.d(*(rsi + &data_143cea540)))

int64_t result = sub_14089b030(data_143cea5c8)
*(rsi + &data_143cea540) = 0
return result
