// 函数: sub_14089c460
// 地址: 0x14089c460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1->__offset(0x80).q

if (rcx != 0)
    if (arg1->__offset(0x88).q * 2 u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)

if (arg1->__offset(0x71).b != 0)
    arg1->__offset(0x71).b = 0

return std::wstreambuf::~wstreambuf<wchar_t, struct std::char_traits<wchar_t> >(arg1) __tailcall
