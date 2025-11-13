// 函数: sub_1408f2e80
// 地址: 0x1408f2e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x20)
int64_t* rcx_1 = *(arg1 + 0x48)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)
    void arg_8
    int64_t* rax_2 = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
    int64_t r8_1 = *rax_2
    (*(r8_1 + 0x38))(rax_2, *(arg1 + 0x48), r8_1)
    result = 0
    *(arg1 + 0x48) = 0
    *(arg1 + 0x54) = 0

if (arg1 == -0x20)
    return result

return LeaveCriticalSection(arg1 + 0x20)
