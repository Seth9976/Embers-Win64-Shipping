// 函数: sub_1406bbf50
// 地址: 0x1406bbf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143cde100

if (result != 0)
    return result

int32_t code = _Mtx_lock(&data_143cde460)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

if (data_143cde100 == 0)
    int64_t rax = j_sub_140a82f30(zx.q(code + 0x58))
    
    if (rax != 0)
        __builtin_memset(rax, 0, 0x58)
    
    data_143cde100 = rax
    av_init_packet(rax)
    void* rax_1 = data_143cde100
    *(rax_1 + 0x18) = rax_1

_Mtx_unlock(&data_143cde460)
return data_143cde100
