// 函数: sub_141384b60
// 地址: 0x141384b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
void*** result

for (int32_t i = 0; i u< 2; )
    result = sub_1419a5030(&data_1439c9260, arg2 + (sx.q(i) << 3))
    int64_t* rdi_1 = *rsi
    *rsi = result
    
    if (result != 0)
        void** rdx_1 = *result
        result = rdx_1[6](result, rdx_1)
    
    if (rdi_1 != 0)
        result = (*(*rdi_1 + 0x38))(rdi_1)
    
    i += 1
    rsi = &rsi[1]

return result
