// 函数: sub_1429accd0
// 地址: 0x1429accd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rcx = *(arg1 + 8)
int32_t rax_2 = *(rcx + 0x78)
int64_t* buffer2 = &data_143cc6d20

if ((rax_2 & 0x1800) == 0 && ((rax_2 u>> 9).b & 1) != 0
        && Concurrency::details::UMSSchedulingContext::OnPrimary(rcx + 0x50) != 0)
    sub_142983430(*(arg1 + 8) + 0x50, &data_143cc6d20)

void* rcx_4 = *(arg1 + 8)
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (*(rcx_4 + 0x118) != 0xffffffff)
    if (Concurrency::details::UMSSchedulingContext::OnPrimary(rcx_4 + 0x50) != 0)
        int64_t* buffer1_1 = sub_142983a40(*(arg1 + 8) + 0x50)
        
        if (data_143cc6d38 u>= 0x10)
            buffer2 = data_143cc6d20
        
        int64_t* buffer1 = buffer1_1
        
        if (buffer1_1[3] u>= 0x10)
            buffer1 = *buffer1_1
        
        uint64_t count = buffer1_1[2]
        int32_t rax_8
        
        if (count == data_143cc6d30)
            rax_8 = memcmp(buffer1, buffer2, count)
        
        if (count != data_143cc6d30 || rax_8 != 0)
            sub_14297d3f0(&exceptionObject, "TiledInputFile used for non-tiledimage part.")
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
else if (((*(rcx_4 + 0x78) u>> 9).b & 1) == 0)
    sub_14297d3f0(&exceptionObject, "Expected a tiled file but the file is not tiled.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn
sub_142982460(*(arg1 + 8) + 0x50, 1, 0)
*(*(arg1 + 8) + 0x68) = *sub_1429839b0(*(arg1 + 8) + 0x50)
*(*(arg1 + 8) + 0x90) = *sub_1429812f0(*(arg1 + 8) + 0x50)
int32_t* rax_12 = sub_142980a30(*(arg1 + 8) + 0x50)
*(*(arg1 + 8) + 0x94) = *rax_12
*(*(arg1 + 8) + 0x98) = rax_12[2]
*(*(arg1 + 8) + 0x9c) = rax_12[1]
*(*(arg1 + 8) + 0xa0) = rax_12[3]
void* rdx_5 = *(arg1 + 8)
sub_1429bd870(rdx_5 + 0x68, *(rdx_5 + 0x94), *(rdx_5 + 0x98), *(rdx_5 + 0x9c), *(rdx_5 + 0xa0), 
    rdx_5 + 0xb0, rdx_5 + 0xb8, rdx_5 + 0xa4, rdx_5 + 0xa8)
*(*(arg1 + 8) + 0x108) = sub_1429bd1a0(*(arg1 + 8) + 0x50)
void* rcx_26 = *(arg1 + 8)
*(rcx_26 + 0x110) = zx.q(*(rcx_26 + 0x68)) * *(rcx_26 + 0x108)
void* rcx_27 = *(arg1 + 8)
*(rcx_27 + 0x148) = zx.q(*(rcx_27 + 0x6c)) * *(rcx_27 + 0x110)
int64_t i = 0
void* rcx_28 = *(arg1 + 8)

if ((*(rcx_28 + 0x138) - *(rcx_28 + 0x130)) s>> 3 != 0)
    do
        void* rax_24 = j_sub_140a82f30(0x68)
        void* const rbx = rax_24
        void* var_d0_1 = rax_24
        
        if (rax_24 == 0)
            rbx = nullptr
        else
            void* rax_25 = *(arg1 + 8)
            struct Imf_2_3::Compressor::Imf_2_3::DwaCompressor::VTable** rax_27 = sub_14298c040(
                *sub_14297ea20(rax_25 + 0x50), *(rax_25 + 0x110), zx.q(*(rax_25 + 0x6c)), 
                rax_25 + 0x50)
            __builtin_memset(rbx, 0, 0x14)
            *(rbx + 0x18) = rax_27
            *(rbx + 0x20) = sub_1429a5f90(rax_27)
            *(rbx + 0x24) = -1
            *(rbx + 0x2c) = -1
            *(rbx + 0x34) = 0
            *(rbx + 0x48) = 0
            *(rbx + 0x50) = 0xf
            *(rbx + 0x38) = 0
            sub_1429c3140(rbx + 0x58, 1)
        
        *(*(*(arg1 + 8) + 0x130) + (i << 3)) = rbx
        int64_t* rcx_35 = *(*(*(arg1 + 8) + 0x158) + 0x50)
        
        if ((*(*rcx_35 + 8))(rcx_35) == 0)
            *(*(*(*(arg1 + 8) + 0x130) + (i << 3)) + 8) = j_sub_140a82f30(*(*(arg1 + 8) + 0x148))
        
        i += 1
        rcx_28 = *(arg1 + 8)
    while (i u< (*(rcx_28 + 0x138) - *(rcx_28 + 0x130)) s>> 3)

int32_t var_108
var_108.q = *(rcx_28 + 0xb0)
void var_c8
int32_t* rax_39 = sub_1429bde70(&var_c8, *(rcx_28 + 0x70), *(rcx_28 + 0xa4), *(rcx_28 + 0xa8), 
    var_108, *(rcx_28 + 0xb8))
void* rdx_10 = *(arg1 + 8)
*(rdx_10 + 0xc0) = *rax_39
*(rdx_10 + 0xc4) = rax_39[1]
*(rdx_10 + 0xc8) = rax_39[2]

if (rdx_10 + 0xd0 != &rax_39[4])
    sub_1429ac6c0(rdx_10 + 0xd0)
    *(rdx_10 + 0xd0) = *(rax_39 + 0x10)
    *(rdx_10 + 0xd8) = *(rax_39 + 0x18)
    *(rdx_10 + 0xe0) = *(rax_39 + 0x20)
    __builtin_memset(&rax_39[4], 0, 0x18)

void var_b8
int64_t result = sub_1429ac6c0(&var_b8)
__security_check_cookie(rax_1 ^ &var_128)
return result
