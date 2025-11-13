// 函数: sub_1428dd0c0
// 地址: 0x1428dd0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rax = sub_1428984e0(arg1, 1)
uint8_t* pbBuffer = sub_142898420(arg1, rax)

if (pbBuffer != 0)
    uint64_t rbx_1 = 0
    
    if (BCryptGenRandom(nullptr, pbBuffer, rax.d, BCRYPT_USE_SYSTEM_PREFERRED_RNG)
            == STATUS_SUCCESS)
        rbx_1 = rax
    
    sub_142898480(arg1, rbx_1, rbx_1 << 3)
    int64_t result = sub_142898590(arg1)
    
    if (result != 0)
        return result

return sub_142898590(arg1)
