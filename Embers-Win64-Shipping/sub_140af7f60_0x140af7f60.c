// 函数: sub_140af7f60
// 地址: 0x140af7f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1d8) = 0

if (*(arg1 + 0x1dc) != 0)
    sub_1405947f0(arg1 + 0x1d0, 0)

int64_t var_48
__builtin_memset(&var_48, 0, 0x1c)
int64_t var_38
sub_1405947f0(&var_38, 2)
int32_t var_30
int32_t rax = var_30 + 2
var_30 = rax

if (rax s> 0)
    sub_140594770(&var_38)

int64_t rdi = var_38
UnDecorator::getReferenceType(rdi, &data_142d404d4, 4)
int64_t r15
r15.b = sub_14060a620(arg2, &var_38, &var_48, arg1 + 0x1d0, 0, 0) == 0

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t rdi_2

if (r15.b == 0 || &var_48 == arg2)
    rdi_2 = var_48
else
    int32_t rdi_1 = arg2[1].d
    int64_t rbx_1 = *arg2
    int64_t var_40
    int32_t r8_1 = var_40:4.d
    var_40.d = rdi_1
    
    if (rdi_1 != 0 || r8_1 != 0)
        sub_1405a4c70(&var_48, rdi_1, r8_1)
        rdi_2 = var_48
        memcpy(rdi_2, rbx_1, rdi_1 * 2)
    else
        var_40:4.d = 0
        rdi_2 = var_48

int32_t performanceCount
int32_t* result = sub_1408f1b50(arg1 + 0x138, &performanceCount, &var_48)

if (*result != 0xffffffff)
    sub_1408f1b50(arg1 + 0x138, &performanceCount, &var_48)
    int64_t performanceCount_1 = sx.q(performanceCount)
    void* const rdx_6
    
    if (performanceCount_1.d == 0xffffffff)
        rdx_6 = nullptr
    else
        rdx_6 = (performanceCount_1 << 5) + *(arg1 + 0x138)
    
    int64_t* rcx_10 = rdx_6 + 0x10
    
    if (rdx_6 == 0)
        rcx_10 = nullptr
    
    void* rcx_11 = *rcx_10
    *(arg1 + 0x1c8) = rcx_11
    sub_140aeb550(rcx_11 + 0x30)
    *(arg1 + 0x130) = *(arg1 + 0x1c8)
    QueryPerformanceCounter(&performanceCount)
    int64_t* rax_3 = *(arg1 + 0x1c8)
    *(arg1 + 0x1b8) = float.d(performanceCount.q) f* data_143d796f8 f+ 16777216.0
    int64_t rbx_2 = *rax_3
    int64_t* rax_4 = sub_140596d10(&var_38, arg1 + 0x1d0)
    (*(rbx_2 + 0xb8))(*(arg1 + 0x1c8), rax_4)
    int64_t* rcx_16 = *(arg1 + 0x1c8)
    result = (*(*rcx_16 + 0xa8))(rcx_16, arg1 + 0x1d0)
    *(arg1 + 0x1c0) = result.b

if (rdi_2 == 0)
    return result

return sub_140a74f90(rdi_2)
