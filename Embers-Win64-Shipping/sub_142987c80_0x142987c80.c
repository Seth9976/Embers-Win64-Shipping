// 函数: sub_142987c80
// 地址: 0x142987c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
struct Imf_2_3::GenericInputFile::Imf_2_3::InputFile::VTable** arg_8 = arg1
int64_t var_130 = -2
int32_t arg_20 = 0
*arg1 = &Imf_2_3::InputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
struct _Mtx_internal_imp_t* rax = j_sub_140a82f30(0xf0)
arg_20.q = rax
struct _Mtx_internal_imp_t* rax_1

if (rax == 0)
    rax_1 = nullptr
else
    rax_1 = sub_1429879e0(rax, arg3)

arg1[1] = rax_1
rax_1->__offset(0xe0).q = 0
arg1[1][0x1d].__offset(0x0).b = 1
arg_20.q = 0
struct Imf_2_3::IStream::VTable** rax_3 = j_sub_140a82f30(0x38)
struct Imf_2_3::IStream::VTable** var_138 = rax_3
int64_t* rsi_1

if (rax_3 == 0)
    rsi_1 = nullptr
else
    rsi_1 = sub_14298b170(rax_3, arg2)

arg_20.q = rsi_1
sub_1429a67e0(arg1, rsi_1, &arg1[1][0xd])

if (((arg1[1][0xd].__offset(0x0).d u>> 0xc).b & 1) == 0)
    struct _Mtx_internal_imp_t* mtx = j_sub_140a82f30(0x60)
    struct _Mtx_internal_imp_t* mtx_1 = mtx
    
    if (mtx == 0)
        mtx_1 = nullptr
    else
        _Mtx_init_in_situ(mtx, 2)
        mtx_1->__offset(0x50).q = 0
        mtx_1->__offset(0x58).q = 0
    
    arg1[1][0x1c] = mtx_1
    *(arg1[1][0x1c] + 0x50) = rsi_1
    void* rcx_8 = arg1[1]
    sub_142981de0(rcx_8 + 0x50, *(*(rcx_8 + 0xe0) + 0x50), rcx_8 + 0x68)
    void* rdx_6 = arg1[1]
    int32_t rcx_10 = *(rdx_6 + 0x68)
    
    if (((rcx_10 u>> 0xb).b & 1) == 0 && ((rcx_10 u>> 0xc).b & 1) == 0
            && Concurrency::details::UMSSchedulingContext::OnPrimary(rdx_6 + 0x50) != 0)
        void* rcx_13 = arg1[1]
        int64_t* rdx_7 = &data_143b86a08
        
        if (((*(rcx_13 + 0x68) u>> 9).b & 1) != 0)
            rdx_7 = &data_143b86a28
        
        sub_142983430(rcx_13 + 0x50, rdx_7)
    
    void* rcx_15 = arg1[1]
    sub_142982460(rcx_15 + 0x50, (*(rcx_15 + 0x68) u>> 9).b & 1, 0)
    sub_142988810(arg1)
else
    sub_142988580(arg1, rsi_1)

return arg1
