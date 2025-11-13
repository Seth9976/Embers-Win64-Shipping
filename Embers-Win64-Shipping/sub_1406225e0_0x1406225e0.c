// 函数: sub_1406225e0
// 地址: 0x1406225e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
uint32_t result
char var_48

if (*(arg1 + 0x10) == 0)
    uint32_t rax_3 = midiOutGetNumDevs()
    
    if (rax_3 u< 1)
        sub_14058ad40(arg1 + 0x18, "MidiOutWinMM::openPort: no MIDI output destinations found!", 
            0x3a)
        result = sub_1406209b0(arg1, 3, sub_140592d30(&var_48, arg1 + 0x18))
    else if (arg2 u< rax_3)
        result = midiOutOpen(*(arg1 + 8) + 8, arg2, 0, 0, CALLBACK_NULL)
        
        if (result == 0)
            *(arg1 + 0x10) = 1
        else
            sub_14058ad40(arg1 + 0x18, 
                "MidiOutWinMM::openPort: error creating Windows MM MIDI output port.", 0x43)
            result = sub_1406209b0(arg1, 8, sub_140592d30(&var_48, arg1 + 0x18))
    else
        void* const var_138 = &data_142d68768
        void var_b0
        std::ios::ios<char, struct std::char_traits<char> >(&var_b0)
        struct std::streambuf::std::stringbuf::VTable* const _Strbuf
        std::ostream::ostream<char, struct std::char_traits<char> >(&var_138, &_Strbuf, 0)
        *(&var_138 + sx.q(*(var_138 + 4))) = &std::ostringstream::`vftable'
        int64_t rcx_9 = sx.q(*(var_138 + 4))
        void var_13c
        *(&var_13c + rcx_9) = (rcx_9 - 0x88).d
        std::streambuf::streambuf<char, struct std::char_traits<char> >()
        int64_t var_c8_1 = 0
        _Strbuf = &std::stringbuf::`vftable'{for `std::streambuf'}
        char var_c0_1 = 4
        sub_14058b120(
            std::ostream::operator<<(sub_14058b120(&var_138, 
                "MidiOutWinMM::openPort: the 'portNumber' argument (")), 
            ") is invalid.")
        int64_t var_38_1 = 0
        int64_t var_30_1 = 0xf
        var_48 = 0
        int64_t r8_4
        int64_t* var_f0
        
        if ((var_c0_1 & 2) == 0)
            r8_4 = *var_f0
        int64_t rdx_3
        
        if ((var_c0_1 & 2) == 0 && r8_4 != 0)
            if (r8_4 u< var_c8_1)
                r8_4 = var_c8_1
            
            int64_t* var_110
            rdx_3 = *var_110
            sub_14058ad40(&var_48, rdx_3, r8_4 - rdx_3)
        else if ((var_c0_1 & 4) == 0)
            int64_t* var_f8
            int64_t rcx_14 = *var_f8
            
            if (rcx_14 != 0)
                int64_t* var_118
                rdx_3 = *var_118
                int32_t* var_e0
                sub_14058ad40(&var_48, rdx_3, sx.q(*var_e0) - rdx_3 + rcx_14)
        sub_14058a530(arg1 + 0x18, &var_48)
        
        if (var_30_1 u>= 0x10)
            void* rcx_17 = var_48.q
            void* rax_14 = rcx_17
            
            if (var_30_1 + 1 u>= 0x1000)
                rcx_17 = *(rcx_17 - 8)
                
                if (rax_14 - rcx_17 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_17)
        
        sub_1406209b0(arg1, 6, sub_140592d30(&var_48, arg1 + 0x18))
        *(&var_138 + sx.q(*(var_138 + 4))) = &std::ostringstream::`vftable'
        int64_t rcx_21 = sx.q(*(var_138 + 4))
        *(&var_13c + rcx_21) = (rcx_21 - 0x88).d
        sub_140589260(&_Strbuf)
        std::ostream::~ostream<char, struct std::char_traits<char> >()
        result = std::ios::~ios<char, struct std::char_traits<char> >(&var_b0)
else
    sub_14058ad40(arg1 + 0x18, "MidiOutWinMM::openPort: a valid connection already exists!", 0x3a)
    result = sub_1406209b0(arg1, 0, sub_140592d30(&var_48, arg1 + 0x18))
__security_check_cookie(rax_1 ^ &var_168)
return result
