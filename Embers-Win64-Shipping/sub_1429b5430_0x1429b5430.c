// 函数: sub_1429b5430
// 地址: 0x1429b5430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_268 = -2
void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void* var_270 = arg1
int64_t* buffer1_1 = sub_142983a40(arg2)
int64_t* buffer2 = &data_143cc6e40

if (data_143cc6e58 u>= 0x10)
    buffer2 = data_143cc6e40

int64_t* buffer1 = buffer1_1

if (buffer1_1[3] u>= 0x10)
    buffer1 = *buffer1_1

uint64_t count = buffer1_1[2]

if (count == data_143cc6e50 && memcmp(buffer1, buffer2, count) == 0)
    void* var_258
    void var_248
    
    if (*sub_142983ca0(arg2) != 1)
        sub_1429779b0(&var_258, 3, 1)
        sub_142983ca0(arg2)
        sub_14058b120(std::ostream::operator<<(sub_14058b120(&var_248, "Version ")), 
            " not supported for deepscanline images in this version of the library")
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_142977aa0(&exceptionObject, &var_258)
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    sub_14297d930(*(arg1 + 8) + 0x50, arg2)
    *(*(arg1 + 8) + 0xb8) = *sub_1429812f0(*(arg1 + 8) + 0x50)
    int32_t* rax_6 = sub_142980a30(*(arg1 + 8) + 0x50)
    *(*(arg1 + 8) + 0xbc) = *rax_6
    *(*(arg1 + 8) + 0xc0) = rax_6[2]
    *(*(arg1 + 8) + 0xc4) = rax_6[1]
    *(*(arg1 + 8) + 0xc8) = rax_6[3]
    void* rbx = *(arg1 + 8)
    int32_t rsi_2 = *(rbx + 0xc0) - *(rbx + 0xbc) + 1
    int32_t r12_2 = *(rbx + 0xc8) - *(rbx + 0xc4) + 1
    int64_t rcx_13 = sx.q(r12_2 * rsi_2)
    int64_t rax_10 = 4 * rcx_13
    
    if (mulu.dp.q(4, rcx_13) u>> 0x40 != zx.o(0))
        rax_10 = -1
    
    int64_t rax_11 = j_sub_140a82f30(rax_10)
    j_sub_140a74f90(*(rbx + 0x178))
    *(rbx + 0x170) = r12_2
    *(rbx + 0x174) = rsi_2
    *(rbx + 0x178) = rax_11
    void* rbx_1 = *(arg1 + 8)
    int32_t rsi_5 = *(rbx_1 + 0xc8) - *(rbx_1 + 0xc4) + 1
    int64_t rcx_16 = sx.q(rsi_5)
    int64_t rax_12 = 4 * rcx_16
    
    if (mulu.dp.q(4, rcx_16) u>> 0x40 != zx.o(0))
        rax_12 = -1
    
    int64_t rax_13 = j_sub_140a82f30(rax_12)
    j_sub_140a74f90(*(rbx_1 + 0x188))
    *(rbx_1 + 0x180) = rsi_5
    *(rbx_1 + 0x188) = rax_13
    struct Imf_2_3::Compressor::Imf_2_3::RleCompressor::VTable** rax_15 =
        sub_14298bdf0(*sub_14297ea20(*(arg1 + 8) + 0x50), 0, *(arg1 + 8) + 0x50)
    *(*(arg1 + 8) + 0x150) = sub_1429a63b0(rax_15)
    
    if (rax_15 != 0)
        (*rax_15)->__offset(0x0).q(rax_15, 1)
    
    void* rcx_24 = *(arg1 + 8)
    *(rcx_24 + 0xec) = *(rcx_24 + 0xc4) - 1
    void* r8_2 = *(arg1 + 8)
    int32_t rcx_25 = *(r8_2 + 0x150)
    sub_142985580(r8_2 + 0xd0, sx.q(divs.dp.d(sx.q(rcx_25 - rax_6[1] + rax_6[3]), rcx_25)))
    int64_t rsi_6 = 0
    void* var_278
    void* rbx_3
    
    while (true)
        rbx_3 = *(arg1 + 8)
        
        if (rsi_6 u>= (*(rbx_3 + 0x140) - *(rbx_3 + 0x138)) s>> 3)
            break
        
        void* rax_28 = j_sub_140a82f30(0x70)
        void* const rbx_4 = rax_28
        var_278 = rax_28
        
        if (rax_28 == 0)
            rbx_4 = nullptr
        else
            __builtin_memset(rax_28, 0, 0x18)
            *(rax_28 + 0x28) = 0
            *(rbx_4 + 0x30) = sub_1429a5f90(nullptr)
            *(rbx_4 + 0x34) = 0xffffffff
            *(rbx_4 + 0x38) = 0
            *(rbx_4 + 0x50) = 0
            *(rbx_4 + 0x58) = 0xf
            *(rbx_4 + 0x40) = 0
            sub_1429c3140(rbx_4 + 0x60, 1)
        
        *(*(*(arg1 + 8) + 0x138) + (rsi_6 << 3)) = rbx_4
        rsi_6 += 1
    
    int32_t rsi_9 = *(rbx_3 + 0xc8) - *(rbx_3 + 0xc4) + 1
    int64_t rax_31 = j_sub_140a82f30(sx.q(rsi_9))
    j_sub_140a74f90(*(rbx_3 + 0x198))
    *(rbx_3 + 0x190) = rsi_9
    *(rbx_3 + 0x198) = rax_31
    int32_t i = 0
    void* r8_4 = *(arg1 + 8)
    
    if (*(r8_4 + 0xc8) - *(r8_4 + 0xc4) + 1 s> 0)
        int64_t rdx_7 = 0
        
        do
            (*(*(arg1 + 8) + 0x198))[rdx_7] = 0
            i += 1
            rdx_7 += 1
            r8_4 = *(arg1 + 8)
        while (i s< *(r8_4 + 0xc8) - *(r8_4 + 0xc4) + 1)
    
    int32_t rdx_10 = *(r8_4 + 0xc8) - *(r8_4 + 0xc4) + 1
    int32_t rax_39 = *(r8_4 + 0x150)
    
    if (rdx_10 s>= rax_39)
        rdx_10 = rax_39
    
    *(r8_4 + 0x1d4) = ((*(r8_4 + 0xc0) - *(r8_4 + 0xbc) + 1) * rdx_10) << 2
    void* rbx_5 = *(arg1 + 8)
    int64_t rsi_10 = sx.q(*(rbx_5 + 0x1d4))
    int64_t rax_40 = j_sub_140a82f30(rsi_10)
    j_sub_140a74f90(*(rbx_5 + 0x1c0))
    *(rbx_5 + 0x1b8) = rsi_10.d
    *(rbx_5 + 0x1c0) = rax_40
    int32_t* rax_41 = sub_14297ea20(*(arg1 + 8) + 0x50)
    void* rcx_41 = *(arg1 + 8)
    *(*(arg1 + 8) + 0x1c8) = sub_14298bdf0(*rax_41, sx.q(*(rcx_41 + 0x1d4)), rcx_41 + 0x50)
    void* rcx_44 = *(arg1 + 8)
    sub_142985580(rcx_44 + 0xf0, sx.q(*(rcx_44 + 0xc8) - *(rcx_44 + 0xc4) + 1))
    int64_t* rax_46 = sub_14297e970(arg2)
    *(*(arg1 + 8) + 0x1d0) = 0
    sub_14297bd10(rax_46, &var_278)
    int64_t* result
    
    while (true)
        void var_260
        result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_46, &var_260)
        void* rcx_50 = var_278
        
        if (rcx_50 == *result)
            break
        
        int32_t rdx_15 = *(rcx_50 + 0x11c)
        
        if (rdx_15 != 0)
            if (rdx_15 == 1)
                void* rax_47 = *(arg1 + 8)
                *(rax_47 + 0x1d0) += 2
                sub_14297bb00(&var_278)
                continue
            else if (rdx_15 != 2)
                sub_1429779b0(&var_258, 3, 1)
                sub_14058b120(
                    sub_14058b120(sub_14058b120(&var_248, "Bad type for channel "), 
                        sub_142981d20(&var_278)), 
                    " initializing deepscanline reader")
                struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
                sub_142977aa0(&exceptionObject_1, &var_258)
                _CxxThrowException(&exceptionObject_1, &data_143946538)
                noreturn
        
        void* rax_48 = *(arg1 + 8)
        *(rax_48 + 0x1d0) += 4
        sub_14297bb00(&var_278)
    
    __security_check_cookie(rax_1 ^ &var_298)
    return result

struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_2
sub_14297d3f0(&exceptionObject_2, 
    "Can't build a DeepScanLineInputFile from a type-mismatched part.")
_CxxThrowException(&exceptionObject_2, &data_143946538)
noreturn
