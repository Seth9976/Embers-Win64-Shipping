// 函数: sub_142988660
// 地址: 0x142988660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t* result = __security_cookie ^ &var_a8
int64_t* result_1 = result
int64_t* rcx = *(arg1 + 0xa8)

if (rcx != 0)
    void* i_1
    sub_14297bd10(rcx, &i_1)
    void var_80
    result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        *(arg1 + 0xa8), &var_80)
    
    for (void* i = i_1; i != *result; i = i_1)
        int32_t rax_1 = *(i + 0x120)
        
        if (rax_1 == 0)
            j_sub_140a74f90(*(i + 0x128) + (sx.q(*(arg1 + 0xbc)) << 2))
        else if (rax_1 == 1)
            j_sub_140a74f90(*(i + 0x128) + (sx.q(*(arg1 + 0xbc)) << 1))
        else if (rax_1 == 2)
            j_sub_140a74f90(*(i + 0x128) + (sx.q(*(arg1 + 0xbc)) << 2))
        else if (rax_1 == 3)
            struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
            sub_14297d3f0(&exceptionObject, "Invalid pixel type")
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        sub_14297bb00(&i_1)
        result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            *(arg1 + 0xa8), &var_80)
    
    int64_t* rdi_1 = *(arg1 + 0xa8)
    
    if (rdi_1 != 0)
        sub_142986500(rdi_1)
        j_sub_140a74f90(*rdi_1)
        result = j_sub_140a74f90(rdi_1)
    
    *(arg1 + 0xa8) = 0

__security_check_cookie(result_1 ^ &var_a8)
return result
