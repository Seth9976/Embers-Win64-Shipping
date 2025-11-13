// 函数: sub_140613080
// 地址: 0x140613080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
int32_t rax = std::istream::get()
data_14395fb28 = rax
int32_t r8_1 = rax s>> 4
int32_t r10 = rax
int32_t r9_2

if (r8_1 - 8 u<= 6)
    data_14395fb2c = r8_1
    r9_2 = rax & 0xf
    data_14395fb30 = r9_2
else if (rax == 0xff)
    r9_2 = -1
    r8_1 = -1
    data_14395fb2c = 0xffffffff
    data_14395fb30 = 0xffffffff
else if (r8_1 != 0xf)
    std::istream::unget(arg3)
    r8_1 = data_14395fb2c
    rdi.b = 1
    r9_2 = data_14395fb30
    r10 = data_14395fb28
else
    r9_2 = -1
    data_14395fb2c = r8_1
    data_14395fb30 = 0xffffffff

if (r8_1 - 8 u<= 6)
    class std::istream* var_38_1 = arg3
    return sub_140612b50(arg1, arg2, r8_1, r9_2)

if (r10 == 0xff)
    return sub_140613300(arg1, arg2, arg3)

if (r10 != 0xf0 && r10 != 0xf7)
    std::ostream::operator<<(sub_14058b120(std::cout, "Unknown Status Type: "))
    
    if (rdi.b != 0)
        std::istream::ignore(arg3, 1, 0xffffffff)
    
    return nullptr

int32_t _Count_1
sub_14060d350(&_Count_1)
int64_t* _Str_2 = j_sub_140a82f30(0x20)
int64_t _Count = sx.q(_Count_1)
int64_t* _Str_1 = _Str_2

if (_Str_2 == 0)
    _Str_1 = nullptr
else
    _Str_2[2] = 0
    _Str_2[3] = 0xf
    *_Str_2 = 0
    sub_140610c40(_Str_2, _Count, 0x20)

char* _Str = _Str_1

if (_Str_1[3] u>= 0x10)
    _Str = *_Str_1

std::istream::read(arg3, _Str, _Count)
void*** result_1 = j_sub_140a82f30(0x28)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    char rbx_1 = (data_14395fb28).b
    sub_14060ca80(result_1, arg1, arg2)
    result[3] = 0
    *result = &data_142d637a0
    uint32_t rax_4 = zx.d(rbx_1)
    result[4] = 0
    result[1].d = rax_4
    
    if (rax_4 != 0xf0 && rax_4 != 0xf7)
        result[1].d = 0xf0
    
    int32_t* rax_5 = j_sub_140a82f30(0x18)
    
    if (rax_5 == 0)
        result[4] = _Str_1
        result[3] = 0
    else
        int32_t rdx_5 = _Str_1[2].d
        *(rax_5 + 8) = 0
        sub_140615390(rax_5, rdx_5)
        result[3] = rax_5
        result[4] = _Str_1

int64_t var_20

if (var_20 != 0)
    j_sub_140a74f90(var_20)

return result
