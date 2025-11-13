// 函数: sub_140622200
// 地址: 0x140622200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint32_t result
char var_58

if (*(arg1 + 0x10) == 0)
    uint32_t rax_3 = midiInGetNumDevs()
    
    if (rax_3 == 0)
        sub_14058ad40(arg1 + 0x18, "MidiInWinMM::openPort: no MIDI input sources found!", 
            zx.q(rax_3 + 0x33))
        result = sub_1406209b0(arg1, 3, sub_140592d30(&var_58, arg1 + 0x18))
    else if (arg2 u< rax_3)
        HMIDIIN* phmi = *(arg1 + 8)
        char const* const rdx_10
        int64_t r8_10
        
        if (midiInOpen(phmi, arg2, sub_140621e30, arg1 + 0x50, CALLBACK_FUNCTION) == 0)
            MIDIHDR** rbx_1 = &phmi[7]
            int32_t rsi_1 = 0
            
            while (true)
                *rbx_1 = j_sub_140a82f30(0x70)
                (*rbx_1)->lpData = j_sub_140a82f30(0x400)
                (*rbx_1)->dwBufferLength = 0x400
                (*rbx_1)->dwUser = zx.q(rsi_1)
                (*rbx_1)->dwFlags = 0
                uint32_t rax_26 = midiInPrepareHeader(*phmi, *rbx_1, 0x70)
                struct HMIDIIN__* hmi = *phmi
                
                if (rax_26 != 0)
                    midiInClose(hmi)
                    r8_10 = 0x51
                    rdx_10 = "MidiInWinMM::openPort: error starting Windows MM MIDI input port "
                    "(PrepareHeader)."
                    goto label_140622582
                
                if (midiInAddBuffer(hmi, *rbx_1, rax_26 + 0x70) != 0)
                    midiInClose(*phmi)
                    r8_10 = 0x4d
                    rdx_10 = "MidiInWinMM::openPort: error starting Windows MM MIDI input port (AddBuffer)."
                    goto label_140622582
                
                rsi_1 += 1
                rbx_1 = &rbx_1[1]
                
                if (rsi_1 s>= 4)
                    result = midiInStart(*phmi)
                    
                    if (result == 0)
                        *(arg1 + 0x10) = 1
                        goto label_1406225ca
                    
                    midiInClose(*phmi)
                    r8_10 = 0x41
                    rdx_10 = "MidiInWinMM::openPort: error starting Windows MM MIDI input port."
                label_140622582:
                    *phmi = nullptr
                    break
        else
            r8_10 = 0x41
            rdx_10 = "MidiInWinMM::openPort: error creating Windows MM MIDI input port."
        
        sub_14058ad40(arg1 + 0x18, rdx_10, r8_10)
        result = sub_1406209b0(arg1, 8, sub_140592d30(&var_58, arg1 + 0x18))
    else
        void* const var_148 = &data_142d68768
        void var_c0
        std::ios::ios<char, struct std::char_traits<char> >(&var_c0)
        struct std::streambuf::std::stringbuf::VTable* const _Strbuf
        std::ostream::ostream<char, struct std::char_traits<char> >(&var_148, &_Strbuf, 0)
        *(&var_148 + sx.q(*(var_148 + 4))) = &std::ostringstream::`vftable'
        int64_t rcx_9 = sx.q(*(var_148 + 4))
        void var_14c
        *(&var_14c + rcx_9) = (rcx_9 - 0x88).d
        std::streambuf::streambuf<char, struct std::char_traits<char> >()
        char var_d0_1 = 4
        _Strbuf = &std::stringbuf::`vftable'{for `std::streambuf'}
        int64_t var_d8_1 = 0
        sub_14058b120(
            std::ostream::operator<<(sub_14058b120(&var_148, 
                "MidiInWinMM::openPort: the 'portNumber' argument (")), 
            ") is invalid.")
        int64_t var_48_1 = 0
        int64_t var_40_1 = 0xf
        var_58 = 0
        int64_t r8_5
        int64_t* var_100
        
        if ((var_d0_1 & 2) == 0)
            r8_5 = *var_100
        int64_t rdx_3
        
        if ((var_d0_1 & 2) == 0 && r8_5 != 0)
            if (r8_5 u< var_d8_1)
                r8_5 = var_d8_1
            
            int64_t* var_120
            rdx_3 = *var_120
            sub_14058ad40(&var_58, rdx_3, r8_5 - rdx_3)
        else if ((var_d0_1 & 4) == 0)
            int64_t* var_108
            int64_t rcx_14 = *var_108
            
            if (rcx_14 != 0)
                int64_t* var_128
                rdx_3 = *var_128
                int32_t* var_f0
                sub_14058ad40(&var_58, rdx_3, sx.q(*var_f0) - rdx_3 + rcx_14)
        sub_14058a530(arg1 + 0x18, &var_58)
        
        if (var_40_1 u>= 0x10)
            void* rcx_17 = var_58.q
            void* rax_14 = rcx_17
            
            if (var_40_1 + 1 u>= 0x1000)
                rcx_17 = *(rcx_17 - 8)
                
                if (rax_14 - rcx_17 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_17)
        
        sub_1406209b0(arg1, 6, sub_140592d30(&var_58, arg1 + 0x18))
        *(&var_148 + sx.q(*(var_148 + 4))) = &std::ostringstream::`vftable'
        int64_t rcx_21 = sx.q(*(var_148 + 4))
        *(&var_14c + rcx_21) = (rcx_21 - 0x88).d
        sub_140589260(&_Strbuf)
        std::ostream::~ostream<char, struct std::char_traits<char> >()
        result = std::ios::~ios<char, struct std::char_traits<char> >(&var_c0)
else
    sub_14058ad40(arg1 + 0x18, "MidiInWinMM::openPort: a valid connection already exists!", 0x39)
    result = sub_1406209b0(arg1, 0, sub_140592d30(&var_58, arg1 + 0x18))
label_1406225ca:
__security_check_cookie(rax_1 ^ &var_178)
return result
