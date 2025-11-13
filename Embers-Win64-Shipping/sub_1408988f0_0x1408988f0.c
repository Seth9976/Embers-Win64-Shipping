// 函数: sub_1408988f0
// 地址: 0x1408988f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3

if (arg3[3] u>= 0x10)
    rbx = *arg3

void* const var_138 = &data_143702018
void var_90
std::ios::ios<char, struct std::char_traits<char> >(&var_90)
struct std::streambuf::std::filebuf::VTable* const _Strbuf
std::ostream::ostream<char, struct std::char_traits<char> >(&var_138, &_Strbuf, 0)
*(&var_138 + sx.q(*(var_138 + 4))) = &std::ofstream::`vftable'
int64_t rcx_3 = sx.q(*(var_138 + 4))
void var_13c
*(&var_13c + rcx_3) = (rcx_3 - 0xa8).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
char var_b4 = 0
_Strbuf = &std::filebuf::`vftable'{for `std::streambuf'}
char var_bf = 0
std::streambuf::_Init()
int64_t var_bc = data_14401b790
FILE* _Stream = nullptr
int64_t var_c8 = 0

if (sub_14058ab10(&_Strbuf, rbx, 0x22, 0x40) == 0)
    std::ios::setstate(sx.q(*(var_138 + 4)) + &var_138, 2, 0)

*(&var_138 + sx.q(*(var_138 + 4))) = &std::ofstream::`vftable'
int64_t rcx_8 = sx.q(*(var_138 + 4))
*(&var_13c + rcx_8) = (rcx_8 - 0xa8).d
FILE* _Stream_1 = _Stream
int64_t result

if (_Stream_1 == 0)
    *(&var_138 + sx.q(*(var_138 + 4))) = &std::ofstream::`vftable'
    int64_t rcx_22 = sx.q(*(var_138 + 4))
    *(&var_13c + rcx_22) = (rcx_22 - 0xa8).d
    sub_14058a090(&_Strbuf)
    std::ostream::~ostream<char, struct std::char_traits<char> >()
    std::ios::~ios<char, struct std::char_traits<char> >(&var_90)
    int64_t rdx_9 = arg3[3]
    
    if (rdx_9 u< 0x10)
        result.b = 0
    else
        void* rcx_25 = *arg3
        
        if (rdx_9 + 1 u< 0x1000)
            j_sub_140a74f90(rcx_25)
            result.b = 0
        else
            void* r8_1 = *(rcx_25 - 8)
            
            if (rcx_25 - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(r8_1)
            result.b = 0
else
    char* i = nullptr
    
    if (arg2[1] != *arg2)
        do
            wchar16 _Str
            _Str.b = i[*arg2]
            std::ostream::write(&var_138, &_Str, 1)
            i = &i[1]
        while (i u< arg2[1] - *arg2)
        
        _Stream_1 = _Stream
    
    if (_Stream_1 == 0)
        char var_b4_2 = 0
        char var_bf_2 = 0
        std::streambuf::_Init()
        int64_t var_bc_2 = data_14401b790
        int64_t var_b0_1 = 0
        int64_t var_c8_2 = 0
        std::ios::setstate(sx.q(*(var_138 + 4)) + &var_138, 2, 0)
    else
        struct std::streambuf::std::filebuf::VTable* const* rbx_1 = &_Strbuf
        
        if (sub_14058a900(&_Strbuf) == 0)
            rbx_1 = nullptr
        
        char var_b4_1 = 0
        char var_bf_1 = 0
        
        if (fclose(_Stream) != 0)
            rbx_1 = nullptr
        
        std::streambuf::_Init()
        int64_t var_bc_1 = data_14401b790
        int64_t var_b0 = 0
        int64_t var_c8_1 = 0
        
        if (rbx_1 == 0)
            std::ios::setstate(sx.q(*(var_138 + 4)) + &var_138, 2, 0)
    
    *(&var_138 + sx.q(*(var_138 + 4))) = &std::ofstream::`vftable'
    int64_t rcx_16 = sx.q(*(var_138 + 4))
    *(&var_13c + rcx_16) = (rcx_16 - 0xa8).d
    sub_14058a090(&_Strbuf)
    std::ostream::~ostream<char, struct std::char_traits<char> >()
    std::ios::~ios<char, struct std::char_traits<char> >(&var_90)
    int64_t rdx_6 = arg3[3]
    
    if (rdx_6 u< 0x10)
        result.b = 1
    else
        void* rcx_19 = *arg3
        
        if (rdx_6 + 1 u>= 0x1000)
            void* r8 = *(rcx_19 - 8)
            
            if (rcx_19 - r8 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_19 = r8
        
        j_sub_140a74f90(rcx_19)
        result.b = 1

*arg3 = 0
arg3[3] = 0xf
arg3[2] = 0
return result
