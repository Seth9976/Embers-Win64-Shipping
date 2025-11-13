// 函数: sub_1429caff0
// 地址: 0x1429caff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

if (arg2 u> 0x1fffffffffffffff)
    std::_Xbad_alloc()
    noreturn

int64_t rcx = arg2 << 3

if (rcx u< 0x1000)
    int64_t rax = j_sub_140a82f30(rcx)
    
    if (rax != 0)
        return rax
    
    _invalid_parameter_noinfo_noreturn()
    noreturn

if (rcx + 0x27 u<= rcx)
    std::_Xbad_alloc()
    noreturn

int64_t rax_2 = j_sub_140a82f30(rcx + 0x27)

if (rax_2 == 0)
    _invalid_parameter_noinfo_noreturn()
    noreturn

void* rax_4 = (rax_2 + 0x27) & 0xffffffffffffffe0
*(rax_4 - 8) = rax_2
return rax_4
