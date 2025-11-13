// 函数: sub_1429a2000
// 地址: 0x1429a2000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
*arg1 = arg2
arg1[1] = arg3

if (arg2 != 0 && arg3 u> divu.dp.d(0:0xffffffff, arg2))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14298bd40(&exceptionObject, "Integer multiplication overflow.")
    _CxxThrowException(&exceptionObject, &data_1439467f8)
    noreturn

uint64_t i_3 = zx.q(arg2 * arg3)
int64_t rax_3 = 4 * i_3

if (mulu.dp.q(4, i_3) u>> 0x40 != zx.o(0))
    rax_3 = -1

void* rax_4 = j_sub_140a82f30(rax_3)
void* const rdx_1 = rax_4
void* var_88 = rax_4
int32_t i_1 = 0

if (rdx_1 == 0)
    rdx_1 = nullptr
else if (i_3 != 0)
    void* rcx_1 = rdx_1 + 2
    uint64_t i
    
    do
        *(rcx_1 - 2) = 0xff000000
        rcx_1 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t rcx_3 = arg1[1] * *arg1
*(arg1 + 8) = rdx_1

if (arg4 == 0)
    if (rcx_3 != 0)
        var_88.d = 0xff000000
        
        do
            uint64_t i_4 = zx.q(i_1)
            i_1 += 1
            *(*(arg1 + 8) + (i_4 << 2)) = 0xff000000
        while (i_1 u< arg1[1] * *arg1)
else if (rcx_3 != 0)
    do
        uint64_t i_2 = zx.q(i_1)
        i_1 += 1
        uint64_t r8 = i_2 << 2
        *(r8 + *(arg1 + 8)) = *(r8 + arg4)
    while (i_1 u< arg1[1] * *arg1)

__security_check_cookie(rax_1 ^ &var_a8)
return arg1
