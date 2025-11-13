// 函数: sub_142ca4770
// 地址: 0x142ca4770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rdi = *(arg2 + 0x160)
void* rax = *(rdi + 8)

if (rax != 0 && *(rax + 0xd0) == 0)
    struct _Mtx_internal_imp_t* mtx = *(rax + 0xe0)
    
    if (mtx != 0)
        _Mtx_destroy_in_situ(mtx)
        j_sub_140a74f90(mtx)

struct _Mtx_internal_imp_t* rcx_2 = *(rdi + 8)

if (rcx_2 != 0)
    sub_142987f30(rcx_2, 1)

*(rdi + 8) = 0
*(arg2 + 0x40) = &data_143702040
*(arg2 + 0x50) = &data_143702020
std::ios::ios<char, struct std::char_traits<char> >(arg2 + 0xd8)
*(arg2 + 0x178) = 1
std::iostream::iostream<char, struct std::char_traits<char> >(arg2 + 0x40, arg2 + 0x58)
*(arg2 + sx.q(*(*(arg2 + 0x40) + 4)) + 0x40) = &std::stringstream::`vftable'
int64_t rcx_6 = sx.q(*(*(arg2 + 0x40) + 4))
*(arg2 + rcx_6 + 0x3c) = (rcx_6 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
*(arg2 + 0x58) = &std::stringbuf::`vftable'{for `std::streambuf'}
*(arg2 + 0xc0) = 0
*(arg2 + 0xc8) = 0
int64_t* rsi = *(arg2 + 0x30)
char* rax_4 = (*(*rsi + 8))(rsi)
int64_t* rax_5 = std::_String_val<struct std::_Simple_types<char> >::_Myptr(*(arg2 + 0x168))
sub_14058b120(
    sub_14058b120(sub_14058b120(sub_14058b120(arg2 + 0x50, "Cannot read image file ""), rax_5), 
        "". "), 
    rax_4)
sub_142c9a130(rsi, arg2 + 0x40)
*(arg2 + sx.q(*(*(arg2 + 0x40) + 4)) + 0x40) = &std::stringstream::`vftable'
int64_t rcx_15 = sx.q(*(*(arg2 + 0x40) + 4))
*(arg2 + rcx_15 + 0x3c) = (rcx_15 - 0x98).d
sub_140589260(arg2 + 0x58)
std::iostream::~iostream<char, struct std::char_traits<char> >(arg2 + 0x60)
std::ios::~ios<char, struct std::char_traits<char> >(arg2 + 0xd8)
_CxxThrowException(nullptr, nullptr)
noreturn
