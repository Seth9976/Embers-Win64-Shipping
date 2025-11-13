// 函数: sub_1422f5a40
// 地址: 0x1422f5a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* _String = arg1
int64_t r8
r8.b = 1

if (sub_140b0f6c0(&_String, &data_143322a58) == 0)
    return 0

int64_t* rax_1
int64_t r8_1
rax_1, r8_1 = sub_1422e4da0()
r8_1.b = 1
char rax_2
int64_t r8_2
rax_2, r8_2 = sub_140b0f6c0(&_String, u"Show")

if (rax_2 != 0)
    int32_t rax_3
    int64_t rdx
    rax_3, rdx = _wtoi(_String)
    int64_t r8_3 = *rax_1
    rdx.b = rax_3 != 0
    (*(r8_3 + 0x278))(rax_1, rdx, r8_3)
    int64_t rax_4
    rax_4.b = 1
    return rax_4

r8_2.b = 1
char rax_5
int64_t r8_4
rax_5, r8_4 = sub_140b0f6c0(&_String, u"Hide")

if (rax_5 != 0)
    (*(*rax_1 + 0x280))(rax_1)
    int64_t rax_7
    rax_7.b = 1
    return rax_7

r8_4.b = 1

if (sub_140b0f6c0(&_String, u"Close") != 0)
    (*(*rax_1 + 0x288))(rax_1)

return 1
