// 函数: sub_14060f9b0
// 地址: 0x14060f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0xd0) == 0)
    result = sub_140615620(arg1)
    void* rbx_1 = *(arg1 + 0xc0)
    
    if (rbx_1 != 0)
        sub_14060d4c0(rbx_1)
        result = j_sub_140a74f90(rbx_1)
    
    int32_t* rsi_1 = nullptr
    *(arg1 + 0xc0) = 0
    
    if (arg2 != 0)
        int32_t r14_1 = *(arg2 + 0x30)
        
        if (r14_1 != 0)
            char* rbx_2 = *(arg2 + 0x28)
            std::streambuf::streambuf<char, struct std::char_traits<char> >()
            class std::streambuf _Strbuf
            _Strbuf.vtable = &data_142d64308
            *_Strbuf._IGfirst = rbx_2
            *_Strbuf._IGnext = rbx_2
            *_Strbuf._IGcount = r14_1
            class std::istream var_88
            std::istream::istream<char, struct std::char_traits<char> >(&var_88, &_Strbuf, 0)
            int32_t* rax_3 = j_sub_140a82f30(0x28)
            
            if (rax_3 != 0)
                rsi_1 = sub_14060cb10(rax_3, &var_88)
            
            *(arg1 + 0xc0) = rsi_1
            sub_140612870(arg1 + 0xc8, rsi_1)
            std::basic_istream<char,struct std::char_traits<char> >::`vbase destructor'()
            return std::streambuf::~streambuf<char, struct std::char_traits<char> >(&_Strbuf)

return result
