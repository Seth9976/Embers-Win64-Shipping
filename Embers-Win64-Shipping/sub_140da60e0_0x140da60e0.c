// 函数: sub_140da60e0
// 地址: 0x140da60e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e20f9c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20f9c)
    
    if (data_143e20f9c == 0xffffffff)
        atexit(sub_142cca190)
        _Init_thread_footer(&data_143e20f9c)

void* var_18
sub_140da6800(arg1, &var_18, arg2, arg3)
void* rdi_1 = var_18
int64_t* result

if (rdi_1 == 0)
    result = &data_1439ae650
else
    result = rdi_1 + 0xb0

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_1 = *var_10
        (*rdx_1)(var_10, rdx_1)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *var_10
            (*(r8_3 + 8))(var_10, 1, r8_3)

return result
