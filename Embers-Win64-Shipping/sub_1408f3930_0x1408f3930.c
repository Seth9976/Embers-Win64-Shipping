// 函数: sub_1408f3930
// 地址: 0x1408f3930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x20)
int64_t* rcx_1 = *(arg1 + 0x48)
int32_t rdi_1

if (rcx_1 != 0)
    int32_t arg_8 = 0
    (*(*rcx_1 + 0x58))(rcx_1, arg2, zx.q(arg3), &arg_8)
    rdi_1 = arg_8
    
    if (rdi_1 == 0xffffffff && data_1439866e8 != 0)
        void arg_20
        int64_t* rax_3 = sub_140fc6160(sub_140b58260(&arg_20, u"WINDOWS", rdi_1 + 2))
        int32_t rax_4 = (*(*rax_3 + 0xb8))(rax_3)
        sub_140fc89f0(sub_140fc6160(sub_140b58260(&arg_20, u"WINDOWS", 1)), rax_4)
        rdi_1 = arg_8
else
    rdi_1 = (rcx_1 - 1).d

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return zx.q(rdi_1)
