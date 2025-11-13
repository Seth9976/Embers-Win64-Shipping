// 函数: sub_1427de280
// 地址: 0x1427de280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[9].b == 0
char* _String_1 = nullptr

if (cond:0)
    return 

void* rcx = *arg1
char const* const rdx_1

if (*(rcx + 0x10) == 0)
    rdx_1 = "bad__repx__name"
else
    rdx_1 = *(*(rcx + 8) + zx.q(*(rcx + 0x10) - 1) * 0x18)

int64_t* rcx_1 = arg1[5]

if ((*(*rcx_1 + 0x10))(rcx_1, rdx_1, &_String_1).b == 0)
    return 

char* _String = _String_1

if (_String == 0 || *_String == 0)
    return 

char* _EndPtr = _String
char rax_5 = strtoul(_String, &_EndPtr, 0xa)
int64_t* rcx_2 = arg1[6]
int64_t r8_1 = *rcx_2

if ((*(*(r8_1 + 0x178))(rcx_2, &_String_1, r8_1) & 1) == 0 || *(arg3 + 0x10) - 0x2b u> 1)
    (*(arg3 + 0x20))(arg1[6], zx.q(rax_5))
