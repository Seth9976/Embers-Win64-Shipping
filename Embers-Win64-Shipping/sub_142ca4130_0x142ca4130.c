// 函数: sub_142ca4130
// 地址: 0x142ca4130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rdi = *(arg2 + 0x160)
void* rbx = *(rdi + 8)

if (rbx != 0)
    struct _Mtx_internal_imp_t* mtx = *(rbx + 0xf8)
    
    if (mtx != 0)
        _Mtx_destroy_in_situ(mtx)
        j_sub_140a74f90(mtx)
    
    int64_t* rbx_1 = *(rdi + 8)
    
    if (rbx_1 != 0)
        sub_142985e40(rbx_1)
        j_sub_140a74f90(rbx_1)

*(arg2 + 0x40) = &data_143702040
*(arg2 + 0x50) = &data_143702020
std::ios::ios<char, struct std::char_traits<char> >(arg2 + 0xd8)
*(arg2 + 0x20) = 1
std::iostream::iostream<char, struct std::char_traits<char> >(arg2 + 0x40, arg2 + 0x58)
*(arg2 + sx.q(*(*(arg2 + 0x40) + 4)) + 0x40) = &std::stringstream::`vftable'
int64_t rcx_7 = sx.q(*(*(arg2 + 0x40) + 4))
*(arg2 + rcx_7 + 0x3c) = (rcx_7 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
*(arg2 + 0x58) = &std::stringbuf::`vftable'{for `std::streambuf'}
*(arg2 + 0xc0) = 0
*(arg2 + 0xc8) = 0
int64_t* rsi = *(arg2 + 0x38)
char* rax_3 = (*(*rsi + 8))(rsi)
int64_t* rax_4 = std::_String_val<struct std::_Simple_types<char> >::_Myptr(*(arg2 + 0x168))
sub_14058b120(
    sub_14058b120(sub_14058b120(sub_14058b120(arg2 + 0x50, "Cannot open image file ""), rax_4), 
        "". "), 
    rax_3)
sub_142c9a130(rsi, arg2 + 0x40)
*(arg2 + sx.q(*(*(arg2 + 0x40) + 4)) + 0x40) = &std::stringstream::`vftable'
int64_t rcx_16 = sx.q(*(*(arg2 + 0x40) + 4))
*(arg2 + rcx_16 + 0x3c) = (rcx_16 - 0x98).d
sub_140589260(arg2 + 0x58)
std::iostream::~iostream<char, struct std::char_traits<char> >(arg2 + 0x60)
std::ios::~ios<char, struct std::char_traits<char> >(arg2 + 0xd8)
_CxxThrowException(nullptr, nullptr)
noreturn
