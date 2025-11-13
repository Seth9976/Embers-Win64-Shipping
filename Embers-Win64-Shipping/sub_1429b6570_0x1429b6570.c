// 函数: sub_1429b6570
// 地址: 0x1429b6570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1b0 = -2
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t r12 = sx.q(arg3)
int32_t var_1d8 = r12.d
int64_t* rcx = *(arg1 + 0x50)
int64_t r8 = *rcx
(*(r8 + 0x28))(rcx, *(*(arg2 + 0xd0) + (r12 << 3)), r8)
char var_1e8
char var_1e7
char var_1e6
char var_1e5
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (((*(arg2 + 0x68) u>> 0xc).b & 1) != 0)
    int64_t* rcx_1 = *(arg1 + 0x50)
    (*(*rcx_1 + 0x10))(rcx_1, &var_1e8, 4)
    
    if ((((sx.d(var_1e5) << 8 | zx.d(var_1e6)) << 8 | zx.d(var_1e7)) << 8 | zx.d(var_1e8))
            != *(arg2 + 0x154))
        sub_14297d3f0(&exceptionObject, "Unexpected part number.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn

int64_t* rcx_9 = *(arg1 + 0x50)
(*(*rcx_9 + 0x10))(rcx_9, &var_1e8, 4)
int32_t rdi_6 = ((sx.d(var_1e5) << 8 | zx.d(var_1e6)) << 8 | zx.d(var_1e7)) << 8 | zx.d(var_1e8)
int32_t rcx_10 = *(arg2 + 0x150)

if (rdi_6 != rcx_10 * r12.d + *(arg2 + 0xc4))
    sub_14297d3f0(&exceptionObject, "Unexpected data block y coordinate.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int32_t rax_16 = rcx_10 - 1 + rdi_6
int32_t r15 = *(arg2 + 0xc8)

if (r15 s>= rax_16)
    r15 = rax_16

int64_t* rcx_11 = *(arg1 + 0x50)
char var_48
(*(*rcx_11 + 0x10))(rcx_11, &var_48, 8)
char var_47
char var_46
char var_45
char var_44
char var_43
char var_42
char var_41
uint64_t rsi_14 = (((
    (((zx.q(var_41) << 8 | zx.q(var_42)) << 8 | zx.q(var_43)) << 8 | zx.q(var_44)) << 8
    | zx.q(var_45)) << 8 | zx.q(var_46)) << 8 | zx.q(var_47)) << 8 | zx.q(var_48)
void* var_1a8
void var_198

if (rsi_14 u> sx.q(*(arg2 + 0x1d4)))
    sub_1429779b0(&var_1a8, 3, 1)
    std::ostream::operator<<(sub_14058b120(
        std::ostream::operator<<(sub_14058b120(
            std::ostream::operator<<(sub_14058b120(&var_198, 
                "Bad sampleCountTableDataSize read from chunk ")), 
            ": expected ")), 
        " or less, got "))
    sub_142977aa0(&exceptionObject, &var_1a8)
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

uint64_t var_1c0
sub_14297d090(*(arg1 + 0x50), &var_1c0)
sub_14297d090(*(arg1 + 0x50), &var_1c0)

if (rsi_14 u> 0x7fffffff)
    sub_1429779b0(&var_1a8, 3, 1)
    sub_14058b120(
        std::ostream::operator<<(sub_14058b120(
            std::ostream::operator<<(sub_14058b120(
                sub_14058b120(&var_198, "This version of the library does not "), 
                "support the allocation of data with size  > ")), 
            " file table size    :")), 
        ".\n")
    sub_142977aa0(&exceptionObject, &var_1a8)
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int64_t* rcx_14 = *(arg1 + 0x50)
(*(*rcx_14 + 0x10))(rcx_14, *(arg2 + 0x1c0), zx.q(rsi_14.d))
void* var_1e0

if (rsi_14 u>= sx.q(*(arg2 + 0x1d4)))
    var_1e0 = *(arg2 + 0x1c0)
else
    int64_t* rcx_15 = *(arg2 + 0x1c8)
    
    if (rcx_15 == 0)
        sub_1429779b0(&var_1a8, 3, 1)
        sub_14058b120(
            std::ostream::operator<<(sub_14058b120(&var_198, 
                "Deep scanline data corrupt at chunk ")), 
            " (sampleCountTableDataSize error)")
        sub_142977aa0(&exceptionObject, &var_1a8)
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    (*(*rcx_15 + 0x28))(rcx_15, *(arg2 + 0x1c0), zx.q(rsi_14.d), zx.q(rdi_6), &var_1e0)

int64_t result = *(arg2 + 0x1a0)
int64_t result_1 = result
int32_t rdx_9 = *(arg2 + 0x1a8)
int32_t var_1d4 = rdx_9
int32_t r8_3 = *(arg2 + 0x1ac)
var_48.d = r8_3
int64_t rsi_15 = 0
int64_t var_1c8 = 0

if (rdi_6 s<= r15)
    int32_t r13_2 = r8_3 * rdi_6
    
    do
        int32_t r14_2 = rdi_6 - *(arg2 + 0xc4)
        int64_t r12_1 = sx.q(r14_2) << 2
        *(r12_1 + *(arg2 + 0x188)) = 0
        int32_t r15_1 = 0
        int32_t i = *(arg2 + 0xbc)
        
        if (i s<= *(arg2 + 0xc0))
            int32_t rsi_17 = i * rdx_9
            
            do
                char* rax_31 = var_1e0
                uint32_t r9_2 = zx.d(*rax_31)
                var_1e0 = &rax_31[1]
                uint32_t r8_4 = zx.d(rax_31[1])
                var_1e0 = &rax_31[2]
                uint32_t rdx_10 = zx.d(rax_31[2])
                var_1e0 = &rax_31[3]
                int32_t r10_1 = sx.d(rax_31[3])
                var_1e0 = &rax_31[4]
                int32_t r10_7 = ((r10_1 << 8 | rdx_10) << 8 | r8_4) << 8 | r9_2
                
                if (r10_7 s< r15_1)
                    sub_1429779b0(&var_1a8, 3, 1)
                    sub_14058b120(
                        std::ostream::operator<<(sub_14058b120(&var_198, 
                            "Deep scanline sampleCount data corrupt at chunk ")), 
                        " (negative sample count detected)")
                    sub_142977aa0(&exceptionObject, &var_1a8)
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                int32_t rdx_12 = r10_7 - r15_1
                r15_1 = r10_7
                *(*(arg2 + 0x178)
                    + ((sx.q(*(arg2 + 0x174) * r14_2) + sx.q(i - *(arg2 + 0xbc))) << 2)) = rdx_12
                int64_t rax_42 = *(arg2 + 0x188)
                *(r12_1 + rax_42) += rdx_12
                *(sx.q(rsi_17) + sx.q(r13_2) + result_1) = rdx_12
                i += 1
                rdx_9 = var_1d4
                rsi_17 += rdx_9
            while (i s<= *(arg2 + 0xc0))
            
            rsi_15 = var_1c8
            r8_3 = var_48.d
        
        rsi_15 += zx.q(*(r12_1 + *(arg2 + 0x188)))
        var_1c8 = rsi_15
        
        if (sx.q(*(arg2 + 0x1d0)) * rsi_15 u> var_1c0)
            sub_1429779b0(&var_1a8, 3, 1)
            sub_14058b120(
                std::ostream::operator<<(sub_14058b120(
                    std::ostream::operator<<(sub_14058b120(
                        std::ostream::operator<<(sub_14058b120(&var_198, 
                            "Deep scanline sampleCount data corrupt at chunk ")), 
                        ": pixel data only contains ")), 
                    " bytes of data but table references at least ")), 
                " bytes of sample data")
            sub_142977aa0(&exceptionObject, &var_1a8)
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        result = *(arg2 + 0x198)
        *(sx.q(rdi_6 - *(arg2 + 0xc4)) + result) = 1
        rdi_6 += 1
        r13_2 += r8_3
    while (rdi_6 s<= r15)

__security_check_cookie(rax_1 ^ &var_218)
return result
