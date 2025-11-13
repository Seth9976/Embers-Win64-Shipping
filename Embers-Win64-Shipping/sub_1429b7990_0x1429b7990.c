// 函数: sub_1429b7990
// 地址: 0x1429b7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
struct Imf_2_3::Compressor::Imf_2_3::PizCompressor::VTable** result = arg1
struct Imf_2_3::Compressor::VTable** var_b0 = arg1
Microsoft::WRL::Wrappers::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>(
    arg1, arg2)
*result = &Imf_2_3::PizCompressor::`vftable'{for `Imf_2_3::Compressor'}
result[2].d = arg3.d
*(result + 0x14) = 1
result[3].d = arg4.d
__builtin_memset(&result[4], 0, 0x14)
result[7] = sub_14297e970(arg2)
result[8] = 0
uint64_t rbp_1 = sub_14298bc70(arg3, arg4) u>> 1
int64_t rax_4 = sub_14298bc70(arg3, arg4)

if (rax_4 u> -0x12001)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14298bd40(&exceptionObject, "Integer addition overflow.")
    _CxxThrowException(&exceptionObject, &data_1439467f8)
    noreturn

int64_t rax_5 = 2 * rbp_1

if (mulu.dp.q(2, rbp_1) u>> 0x40 != zx.o(0))
    rax_5 = -1

result[4] = j_sub_140a82f30(rax_5)
result[5] = j_sub_140a82f30(rax_4 + 0x12000)
int64_t* rax_8 = sub_14297e970(result[1])
uint64_t rbx_1
rbx_1.b = 1
void* i_1
sub_14297bd10(rax_8, &i_1)
void var_c0
int64_t* rax_9 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    rax_8, &var_c0)
void* i = i_1

if (i != *rax_9)
    int64_t* rax_10
    
    do
        result[6].d = &result[6].d->__offset(0x0).q + 1
        char rdx_4 = 0
        
        if (*(i + 0x11c) == 1)
            rdx_4 = rbx_1.b
        
        rbx_1 = zx.q(rdx_4)
        sub_14297bb00(&i_1)
        rax_10 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_8, &var_c0)
        i = i_1
    while (i != *rax_10)

int64_t rdx_6 = sx.q(result[6].d)
int64_t rax_11 = 0x20 * rdx_6

if (mulu.dp.q(0x20, rdx_6) u>> 0x40 != zx.o(0))
    rax_11 = -1

result[8] = j_sub_140a82f30(rax_11)
int32_t* rax_13 = sub_142980a30(arg2)
result[9].d = *rax_13
*(result + 0x4c) = rax_13[2]
result[0xa].d = rax_13[3]

if (rbx_1.b != 0 && sub_1429a6580(1) == 2)
    *(result + 0x14) = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
