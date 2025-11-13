// 函数: sub_1429c2440
// 地址: 0x1429c2440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct IlmThread_2_3::ThreadPoolProvider::VTable** result = arg1
*arg1 = &IlmThread_2_3::x3c722eb3::DefaultThreadPoolProvider::operator[]::DefaultThreadPoolProvider::`vftable'{for `IlmThread_2_3::ThreadPoolProvider'}
char temp0 = *(arg1 + 0xf9)
*(arg1 + 0xf9) = 1
int64_t rax
rax.b = temp0
int64_t i_2 = (arg1[0x1d] - arg1[0x1c]) s>> 3

if (i_2 != 0)
    int64_t i_1 = i_2
    int64_t i
    
    do
        sub_1429c3350(&result[1])
        sub_1429c3430(&result[0x10])
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rbx_1 = 0

if (i_2 != 0)
    do
        int64_t* rcx_2 = *(result[0x1c] + (rbx_1 << 3))
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        rbx_1 += 1
    while (rbx_1 != i_2)

int32_t code = _Mtx_lock(&result[3])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

result[0x1d] = result[0x1c]
result[0xe] = result[0xd]
char temp0_1 = *(result + 0xf9)
*(result + 0xf9) = 0
int64_t rbp
rbp.b = temp0_1
int32_t code_1 = _Mtx_unlock(&result[3])

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

sub_1429c22c0(&result[1])
*result = &IlmThread_2_3::ThreadPoolProvider::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(result)

return result
