// 函数: sub_14298cc80
// 地址: 0x14298cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
TEB* gsbase

if (data_143fed220 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143fed220)
    
    if (data_143fed220 == 0xffffffff)
        _Mtx_init_in_situ(&data_143fed1d0, 2)
        atexit(sub_142d15190)
        _Init_thread_footer(&data_143fed220)

void* var_20 = &data_143fed1d0
int32_t code = _Mtx_lock(&data_143fed1d0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_18 = 1
int64_t* result = data_143fed228

if (result == 0)
    int64_t* result_1 = j_sub_140a82f30(zx.q((&result[0xc]).d))
    result = result_1
    int64_t* result_2 = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        memset(result_1, 0, 0x60)
        *result = 0
        result[1] = 0
        *result = sub_14298c760()
        _Mtx_init_in_situ(&result[2], 2)
    
    data_143fed228 = result

int32_t code_1 = _Mtx_unlock(&data_143fed1d0)

if (code_1 == 0)
    return result

std::_Throw_C_error(code_1)
noreturn
