// 函数: sub_142ca6740
// 地址: 0x142ca6740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
struct _Mtx_internal_imp_t* rbx = *(*(arg2 + 0x160) + 8)

if (rbx != 0)
    sub_1429aeea0(rbx)
    j_sub_140a74f90(rbx)

*(arg2 + 0x40) = &data_143702040
*(arg2 + 0x50) = &data_143702020
std::ios::ios<char, struct std::char_traits<char> >(arg2 + 0xd8)
*(arg2 + 0x20) = 1
std::iostream::iostream<char, struct std::char_traits<char> >(arg2 + 0x40, arg2 + 0x58)
*(arg2 + sx.q(*(*(arg2 + 0x40) + 4)) + 0x40) = &std::stringstream::`vftable'
int64_t rcx_5 = sx.q(*(*(arg2 + 0x40) + 4))
*(arg2 + rcx_5 + 0x3c) = (rcx_5 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
*(arg2 + 0x58) = &std::stringbuf::`vftable'{for `std::streambuf'}
*(arg2 + 0xc0) = 0
*(arg2 + 0xc8) = 0
int64_t* rsi = *(arg2 + 0x38)
char* rax_4 = (*(*rsi + 8))(rsi)
int64_t* rax_5 = std::_String_val<struct std::_Simple_types<char> >::_Myptr(*(arg2 + 0x168))
sub_14058b120(
    sub_14058b120(sub_14058b120(sub_14058b120(arg2 + 0x50, "Cannot read image file ""), rax_5), 
        "". "), 
    rax_4)
sub_142c9a130(rsi, arg2 + 0x40)
*(arg2 + sx.q(*(*(arg2 + 0x40) + 4)) + 0x40) = &std::stringstream::`vftable'
int64_t rcx_14 = sx.q(*(*(arg2 + 0x40) + 4))
*(arg2 + rcx_14 + 0x3c) = (rcx_14 - 0x98).d
sub_140589260(arg2 + 0x58)
std::iostream::~iostream<char, struct std::char_traits<char> >(arg2 + 0x60)
std::ios::~ios<char, struct std::char_traits<char> >(arg2 + 0xd8)
_CxxThrowException(nullptr, nullptr)
noreturn
