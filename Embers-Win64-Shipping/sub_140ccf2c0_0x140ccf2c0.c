// 函数: sub_140ccf2c0
// 地址: 0x140ccf2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x2b0) != 0
*(arg1 + 0x2d8) = arg2

if (not(cond:0))
    void*** rax_1 = j_sub_140a82f30(0x10)
    
    if (rax_1 != 0)
        rax_1 = Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>(
            rax_1, arg1 + 0x200)
    
    *(arg1 + 0x2b0) = rax_1

int64_t* result = j_sub_140a82f30(8)

if (result != 0)
    *result = *(arg1 + 0x2b0)

*(arg1 + 0x2a8) = result
*(arg1 + 0x2b8) = result
*(arg1 + 0x2c0) = 1
return result
