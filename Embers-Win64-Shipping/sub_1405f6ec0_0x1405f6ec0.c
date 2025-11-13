// 函数: sub_1405f6ec0
// 地址: 0x1405f6ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = -2
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rbx = 0
struct IMFAttributes ppMFAttributes = 0

if (MFCreateAttributes(&ppMFAttributes, 1) s< 0)
    rbx = -0x7fffbfff
else
    int32_t var_28 = 0x206b4fc8
    int32_t var_24_1 = 0x4c51fcf9
    int32_t var_20_1 = 0x6497e3af
    int32_t var_1c_1 = 0xa0339e36
    struct IMFAttributes ppMFAttributes_1 = ppMFAttributes
    (*(*ppMFAttributes_1 + 0xa8))(ppMFAttributes_1, &var_28, 1)
    struct IMFAttributes ppMFAttributes_2 = ppMFAttributes
    arg2->vtable = ppMFAttributes_2
    (*(*ppMFAttributes_2 + 8))()

struct IMFAttributes ppMFAttributes_3 = ppMFAttributes

if (ppMFAttributes_3 != 0)
    int64_t rdx_1 = *ppMFAttributes_3
    (*(rdx_1 + 0x10))(ppMFAttributes_3, rdx_1)

__security_check_cookie(rax_1 ^ &var_58)
return zx.q(rbx)
