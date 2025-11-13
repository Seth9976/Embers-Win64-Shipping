// 函数: sub_1429b93e0
// 地址: 0x1429b93e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
struct Imf_2_3::Compressor::Imf_2_3::B44Compressor::VTable** result = arg1
struct Imf_2_3::Compressor::VTable** var_120 = arg1
Microsoft::WRL::Wrappers::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>(
    arg1, arg2)
*result = &Imf_2_3::B44Compressor::`vftable'{for `Imf_2_3::Compressor'}
result[2].d = arg3.d
*(result + 0x14) = arg5
result[3].d = 1
*(result + 0x1c) = arg4.d
__builtin_memset(&result[4], 0, 0x14)
result[7] = sub_14297e970(arg2)
result[8] = 0
int64_t rax_4 = sub_14298bc70(arg3, arg4)
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (rax_4 u> 0x7fffffffffffffff)
    sub_14298bd40(&exceptionObject, "Integer multiplication overflow.")
    _CxxThrowException(&exceptionObject, &data_1439467f8)
    noreturn

int64_t rax_5 = 2 * rax_4

if (mulu.dp.q(2, rax_4) u>> 0x40 != zx.o(0))
    rax_5 = -1

result[4] = j_sub_140a82f30(rax_5)
int64_t* rax_7 = sub_14297e970(result[1])
uint64_t rsi = 0
void* i_2
sub_14297bd10(rax_7, &i_2)
void var_130
int64_t* rax_8 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    rax_7, &var_130)
void* i = i_2

if (i != *rax_8)
    int64_t* rcx_11
    
    do
        result[6].d = &result[6].d->__offset(0x0).q + 1
        int32_t rcx_8 = (rsi + 1).d
        
        if (*(i + 0x11c) != 1)
            rcx_8 = rsi.d
        
        rsi = zx.q(rcx_8)
        sub_14297bb00(&i_2)
        rcx_11 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_7, &var_130)
        i = i_2
    while (i != *rcx_11)

uint64_t rcx_14 = (sx.q((rsi * 3).d << 2) * (arg4 + 3)) u>> 2

if (arg3 != 0 && arg4 u> divu.dp.q(-1, arg3))
    sub_14298bd40(&exceptionObject, "Integer multiplication overflow.")
    _CxxThrowException(&exceptionObject, &data_1439467f8)
    noreturn

int64_t rbx_1 = arg4 * arg3

if (rbx_1 u> not.q(rcx_14))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
    sub_14298bd40(&exceptionObject_1, "Integer addition overflow.")
    _CxxThrowException(&exceptionObject_1, &data_1439467f8)
    noreturn

result[5] = j_sub_140a82f30(rcx_14 + rbx_1)
int64_t rcx_16 = sx.q(result[6].d)
int64_t rax_17 = 0x28 * rcx_16

if (mulu.dp.q(0x28, rcx_16) u>> 0x40 != zx.o(0))
    rax_17 = -1

result[8] = j_sub_140a82f30(rax_17)
sub_14297bd10(rax_7, &i_2)
int64_t* rax_19 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    rax_7, &var_130)
void* i_1 = i_2

if (i_1 != *rax_19)
    int64_t r14_1 = 0
    int64_t* rax_30
    
    do
        *(result[8] + r14_1 + 0x18) = *(i_1 + 0x124)
        *(result[8] + r14_1 + 0x1c) = *(i_2 + 0x11c)
        *(result[8] + r14_1 + 0x20) = *(i_2 + 0x128)
        *(result[8] + r14_1 + 0x24) =
            divs.dp.d(sx.q(sub_1429a6580(*(i_2 + 0x11c))), sub_1429a6580(1))
        sub_14297bb00(&i_2)
        r14_1 += 0x28
        rax_30 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_7, &var_130)
        i_1 = i_2
    while (i_1 != *rax_30)

int32_t* rax_31 = sub_142980a30(arg2)
result[9].d = *rax_31
*(result + 0x4c) = rax_31[2]
result[0xa].d = rax_31[3]

if (result[6].d == rsi.d)
    result[3].d = 0

__security_check_cookie(rax_1 ^ &var_158)
return result
