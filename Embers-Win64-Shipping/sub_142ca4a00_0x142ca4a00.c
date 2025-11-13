// 函数: sub_142ca4a00
// 地址: 0x142ca4a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rcx = *(arg2 + 0x178)

if (rcx != 0)
    (**rcx)(rcx, 1)

void* rbx = *(arg2 + 0x160)
void* rax_2 = *(rbx + 8)

if (rax_2 != 0 && *(rax_2 + 0xd0) == 0)
    struct _Mtx_internal_imp_t* mtx = *(rax_2 + 0xe0)
    
    if (mtx != 0)
        _Mtx_destroy_in_situ(mtx)
        j_sub_140a74f90(mtx)
        *(*(rbx + 8) + 0xe0) = 0

struct _Mtx_internal_imp_t* rcx_3 = *(rbx + 8)

if (rcx_3 != 0)
    sub_142987f30(rcx_3, 1)

*(rbx + 8) = 0
*(arg2 + 0x40) = &data_143702040
*(arg2 + 0x50) = &data_143702020
std::ios::ios<char, struct std::char_traits<char> >(arg2 + 0xd8)
*(arg2 + 0x178) = 1
std::iostream::iostream<char, struct std::char_traits<char> >(arg2 + 0x40, arg2 + 0x58)
*(arg2 + sx.q(*(*(arg2 + 0x40) + 4)) + 0x40) = &std::stringstream::`vftable'
int64_t rcx_7 = sx.q(*(*(arg2 + 0x40) + 4))
*(arg2 + rcx_7 + 0x3c) = (rcx_7 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
*(arg2 + 0x58) = &std::stringbuf::`vftable'{for `std::streambuf'}
*(arg2 + 0xc0) = 0
*(arg2 + 0xc8) = 0
int64_t* rdi_1 = *(arg2 + 0x30)
char* rax_7 = (*(*rdi_1 + 8))(rdi_1)
sub_14058b120(
    sub_14058b120(
        sub_14058b120(sub_14058b120(arg2 + 0x50, "Cannot read image file ""), *(arg2 + 0x168)), 
        "". "), 
    rax_7)
sub_142c9a130(rdi_1, arg2 + 0x40)
*(arg2 + sx.q(*(*(arg2 + 0x40) + 4)) + 0x40) = &std::stringstream::`vftable'
int64_t rcx_15 = sx.q(*(*(arg2 + 0x40) + 4))
*(arg2 + rcx_15 + 0x3c) = (rcx_15 - 0x98).d
sub_140589260(arg2 + 0x58)
std::iostream::~iostream<char, struct std::char_traits<char> >(arg2 + 0x60)
std::ios::~ios<char, struct std::char_traits<char> >(arg2 + 0xd8)
_CxxThrowException(nullptr, nullptr)
noreturn
