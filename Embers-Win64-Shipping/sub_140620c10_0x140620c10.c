// 函数: sub_140620c10
// 地址: 0x140620c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
uint64_t uDeviceID = zx.q(arg3)
void* var_a8 = nullptr
char var_b8 = 0
int64_t var_a0 = 0xf
char var_d8
void* rcx_19
int128_t zmm0

if (uDeviceID.d u< midiInGetNumDevs())
    MIDIINCAPSW pmic
    midiInGetDevCapsW(uDeviceID, &pmic, 0x4c)
    BOOL* lpUsedDefaultChar = nullptr
    PSTR lpDefaultChar = nullptr
    int32_t cbMultiByte = 0
    PSTR lpMultiByteStr = nullptr
    int64_t var_c8_1 = 0
    int64_t var_c0_1 = 0xf
    var_d8 = 0
    var_90
    int32_t cbMultiByte_1 = WideCharToMultiByte(0xfde9, 0, &var_90, 0xffffffff, lpMultiByteStr, 
        cbMultiByte, lpDefaultChar, lpUsedDefaultChar)
    
    if (cbMultiByte_1 != 0)
        sub_140610c40(&var_d8, sx.q(cbMultiByte_1 - 1), 0)
        char* lpMultiByteStr_1 = &var_d8
        lpUsedDefaultChar = nullptr
        
        if (var_c0_1 u>= 0x10)
            lpMultiByteStr_1 = var_d8.q
        
        WideCharToMultiByte(0xfde9, 0, &var_90, 0xffffffff, lpMultiByteStr_1, cbMultiByte_1, 
            nullptr, lpUsedDefaultChar)
    
    if (var_a0 u>= 0x10)
        void* rcx_23 = var_b8.q
        void* rax_22 = rcx_23
        
        if (var_a0 + 1 u>= 0x1000)
            rcx_23 = *(rcx_23 - 8)
            
            if (rax_22 - rcx_23 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_23)
    
    zmm0 = var_d8.o
    void* const var_2b8 = &data_142d68768
    var_b8.o = zmm0
    var_a8.o = var_c8_1.o
    void var_230
    std::ios::ios<char, struct std::char_traits<char> >(&var_230)
    struct std::streambuf::std::stringbuf::VTable* const _Strbuf
    std::ostream::ostream<char, struct std::char_traits<char> >(&var_2b8, &_Strbuf, 0)
    *(&var_2b8 + sx.q(*(var_2b8 + 4))) = &std::ostringstream::`vftable'
    int64_t rcx_27 = sx.q(*(var_2b8 + 4))
    *(&lpUsedDefaultChar:4 + rcx_27) = (rcx_27 - 0x88).d
    std::streambuf::streambuf<char, struct std::char_traits<char> >()
    int64_t var_248_1 = 0
    _Strbuf = &std::stringbuf::`vftable'{for `std::streambuf'}
    char var_240_1 = 4
    sub_14058b120(&var_2b8, &(*U""\tv 0")[3])
    std::ostream::operator<<(&var_2b8)
    char* rsi_1 = nullptr
    char* var_c8_2 = nullptr
    int64_t r14_1 = 0xf
    int64_t var_c0_2 = 0xf
    var_d8 = 0
    int64_t r8_9
    int64_t* var_270
    
    if ((var_240_1 & 2) == 0)
        r8_9 = *var_270
    int64_t rdx_16
    int64_t r8_10
    
    if ((var_240_1 & 2) == 0 && r8_9 != 0)
        if (r8_9 u< var_248_1)
            r8_9 = var_248_1
        
        int64_t* var_290
        rdx_16 = *var_290
        r8_10 = r8_9 - rdx_16
        goto label_140621123
    
    if ((var_240_1 & 4) == 0)
        int64_t* var_278
        int64_t rcx_31 = *var_278
        
        if (rcx_31 != 0)
            int64_t* var_298
            rdx_16 = *var_298
            int32_t* var_260
            r8_10 = sx.q(*var_260) - rdx_16 + rcx_31
        label_140621123:
            sub_14058ad40(&var_d8, rdx_16, r8_10)
            rsi_1 = var_c8_2
            r14_1 = var_c0_2
    
    char* r9_1 = &var_d8
    char* rdi = var_d8.q
    void* rcx_33 = var_a8
    
    if (r14_1 u>= 0x10)
        r9_1 = rdi
    
    if (rsi_1 u> var_a0 - rcx_33)
        sub_14058c670(&var_b8, rsi_1, 0, r9_1, rsi_1)
        r14_1 = var_c0_2
        rdi = var_d8.q
    else
        char* rbx_2 = &var_b8
        var_a8 = rsi_1 + rcx_33
        
        if (var_a0 u>= 0x10)
            rbx_2 = var_b8.q
        
        void* rbx_3 = rbx_2 + rcx_33
        memmove(rbx_3, r9_1, rsi_1.d)
        *(rsi_1 + rbx_3) = 0
    
    if (r14_1 u>= 0x10)
        char* rax_35 = rdi
        
        if (r14_1 + 1 u>= 0x1000)
            rdi = *(rdi - 8)
        
        if (r14_1 + 1 u>= 0x1000 && rax_35 - rdi - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        j_sub_140a74f90(rdi)
    
    void* const rax_38 = var_2b8
    int64_t var_a8_1 = 0
    int64_t var_a0_1 = 0xf
    *arg2 = var_b8.o
    var_b8 = 0
    arg2[1] = var_a8.o
    *(&var_2b8 + sx.q(*(rax_38 + 4))) = &std::ostringstream::`vftable'
    int64_t rcx_38 = sx.q(*(var_2b8 + 4))
    *(&lpUsedDefaultChar:4 + rcx_38) = (rcx_38 - 0x88).d
    sub_140589260(&_Strbuf)
    std::ostream::~ostream<char, struct std::char_traits<char> >()
    std::ios::~ios<char, struct std::char_traits<char> >(&var_230)
    
    if (var_a0_1 u>= 0x10)
        rcx_19 = var_b8.q
        void* rax_40 = rcx_19
        
        if (var_a0_1 + 1 u< 0x1000)
            j_sub_140a74f90(rcx_19)
        else
            rcx_19 = *(rcx_19 - 8)
            
            if (rax_40 - rcx_19 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_19)
else
    void* const var_1c8 = &data_142d68768
    void var_140
    std::ios::ios<char, struct std::char_traits<char> >(&var_140)
    struct std::streambuf::std::stringbuf::VTable* const _Strbuf_1
    std::ostream::ostream<char, struct std::char_traits<char> >(&var_1c8, &_Strbuf_1, 0)
    *(&var_1c8 + sx.q(*(var_1c8 + 4))) = &std::ostringstream::`vftable'
    int64_t rcx_3 = sx.q(*(var_1c8 + 4))
    void var_1cc
    *(&var_1cc + rcx_3) = (rcx_3 - 0x88).d
    std::streambuf::streambuf<char, struct std::char_traits<char> >()
    int64_t var_158_1 = 0
    _Strbuf_1 = &std::stringbuf::`vftable'{for `std::streambuf'}
    char var_150_1 = 4
    sub_14058b120(
        std::ostream::operator<<(sub_14058b120(&var_1c8, 
            "MidiInWinMM::getPortName: the 'portNumber' argument (")), 
        ") is invalid.")
    int64_t rdx_1 = 0xf
    int64_t var_c0 = 0xf
    int64_t var_c8 = 0
    var_d8 = 0
    int64_t r8_1
    int64_t* var_180
    
    if ((var_150_1 & 2) == 0)
        r8_1 = *var_180
    int64_t rdx_2
    
    if ((var_150_1 & 2) == 0 && r8_1 != 0)
        if (r8_1 u< var_158_1)
            r8_1 = var_158_1
        
        int64_t* var_1a0
        rdx_2 = *var_1a0
        sub_14058ad40(&var_d8, rdx_2, r8_1 - rdx_2)
        rdx_1 = var_c0
    else if ((var_150_1 & 4) == 0)
        int64_t* var_188
        int64_t rcx_8 = *var_188
        
        if (rcx_8 != 0)
            int64_t* var_1a8
            rdx_2 = *var_1a8
            int32_t* var_170
            sub_14058ad40(&var_d8, rdx_2, sx.q(*var_170) - rdx_2 + rcx_8)
            rdx_1 = var_c0
    
    if (arg1 + 0x18 != &var_d8)
        int64_t rdx_3 = *(arg1 + 0x30)
        
        if (rdx_3 u>= 0x10)
            void* rcx_10 = *(arg1 + 0x18)
            
            if (rdx_3 + 1 u>= 0x1000)
                void* r8_5 = *(rcx_10 - 8)
                
                if (rcx_10 - r8_5 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_10 = r8_5
            
            j_sub_140a74f90(rcx_10)
        
        zmm0 = var_d8.o
        *(arg1 + 0x30) = 0xf
        *(arg1 + 0x18) = zmm0
        *(arg1 + 0x28) = var_c8.o
    else if (rdx_1 u>= 0x10)
        void* rcx_12 = var_d8.q
        void* rax_13 = rcx_12
        
        if (rdx_1 + 1 u>= 0x1000)
            rcx_12 = *(rcx_12 - 8)
        
        if (rdx_1 + 1 u>= 0x1000 && rax_13 - rcx_12 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        j_sub_140a74f90(rcx_12)
    
    sub_1406209b0(arg1, 0, sub_140592d30(&var_d8, arg1 + 0x18))
    void* const rax_17 = var_1c8
    *arg2 = var_b8.o
    arg2[1] = var_a8.o
    *(&var_1c8 + sx.q(*(rax_17 + 4))) = &std::ostringstream::`vftable'
    int64_t rcx_16 = sx.q(*(var_1c8 + 4))
    *(&var_1cc + rcx_16) = (rcx_16 - 0x88).d
    sub_140589260(&_Strbuf_1)
    std::ostream::~ostream<char, struct std::char_traits<char> >()
    std::ios::~ios<char, struct std::char_traits<char> >(&var_140)
    
    if (var_a0 u>= 0x10)
        rcx_19 = var_b8.q
        void* rax_19 = rcx_19
        
        if (var_a0 + 1 u< 0x1000)
            j_sub_140a74f90(rcx_19)
        else
            rcx_19 = *(rcx_19 - 8)
            
            if (rax_19 - rcx_19 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_19)
__security_check_cookie(rax_1 ^ &var_2f8)
return arg2
