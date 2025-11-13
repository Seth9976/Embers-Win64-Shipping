// 函数: sub_14299ef80
// 地址: 0x14299ef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_130 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t r11 = sx.q(arg3)
int64_t* r10 = arg2
int64_t* r15 = arg1
int32_t var_1b8 = *arg4
int32_t i_13 = *(arg1 + 0x24)

if (i_13 s>= arg4[2])
    i_13 = arg4[2]

int32_t i_10 = i_13
int32_t i_5 = arg4[1]
int32_t rcx = r15[5].d

if (rcx s>= arg4[3])
    rcx = arg4[3]

void* exceptionObject

if (r11.d s< 0x58)
    sub_14297ab20(&exceptionObject, "Error uncompressing DWA data(truncated header).")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

uint64_t* r8 = arg2
void* rdx = arg2 + 2
int64_t i_7 = 0xb
int64_t i

do
    uint64_t rcx_15 = ((((((zx.q(*(rdx + 5)) << 8 | zx.q(*(rdx + 4))) << 8 | zx.q(*(rdx + 3))) << 8
        | zx.q(*(rdx + 2))) << 8 | zx.q(*(rdx + 1))) << 8 | zx.q(*rdx)) << 8 | zx.q(*(rdx - 1))) << 8
        | zx.q(*(rdx - 2))
    *r8 = rcx_15
    rdx += 8
    r8 = &r8[1]
    i = i_7
    i_7 -= 1
while (i != 1)
int64_t rax_11 = *r10
int64_t rax_12 = r10[1]
int64_t r12 = r10[2]
int64_t r14 = r10[3]
int64_t r13 = r10[4]
int64_t rcx_16 = r10[5]
int32_t var_180 = rcx_16.d
int64_t rdi = r10[6]
int64_t var_190 = rdi
int64_t rbx = r10[7]
int64_t rdx_1 = r10[8]
int64_t rax_13 = r10[9]
int64_t rax_14 = r10[0xa]
int64_t r9_1 = rcx_16 + r13 + r14
void* rsi = &r10[0xb]
struct Imf_2_3::DwaCompressor::LossyDctDecoderBase::VTable* exceptionObject_1

if (r11 u< r12 + 0x58 + r9_1 || r11 u< r12 || r11 u< r14 || r11 u< r13 || r11 u< rcx_16)
    sub_14297ab20(&exceptionObject_1, "Error uncompressing DWA data(truncated file).")
    _CxxThrowException(&exceptionObject_1, &data_1439465c8)
    noreturn

if (rax_12 s< 0 || r12 s< 0 || r14 s< 0 || r13 s< 0 || rcx_16 s< 0 || rdi s< 0 || rbx s< 0
        || rdx_1 s< 0 || rax_13 s< 0)
    sub_14297ab20(&exceptionObject_1, "Error uncompressing DWA data (corrupt header).")
    _CxxThrowException(&exceptionObject_1, &data_1439465c8)
    noreturn

void* var_1a0
int64_t var_118

if (rax_11 u>= 2)
    uint16_t rdx_2 = zx.w(*rsi)
    void* rax_17 = rsi + 1
    rsi = rax_17 + 1
    var_1a0 = rsi
    uint64_t rbx_1 = zx.q(zx.w(*rax_17) << 8) | zx.q(rdx_2)
    
    if (r11 u< r12 + 0x58 + r9_1 + rbx_1)
        sub_14297ab20(&exceptionObject, "Error uncompressing DWA data (truncated file).")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    sub_142991430(r15[0xe], r15[0xf])
    r15[0xf] = r15[0xe]
    int16_t temp1_1 = rbx_1.w
    rbx_1.w -= 2
    
    if (temp1_1 != 2)
        do
            sub_142995d90(&exceptionObject, &var_1a0, zx.d(rbx_1.w))
            sub_14299e6d0(&r15[0xe], &exceptionObject)
            rbx_1.w -= var_118.w + 3
            int64_t var_110
            
            if (var_110 u>= 0x10)
                void* exceptionObject_2 = exceptionObject
                void* exceptionObject_5 = exceptionObject_2
                
                if (var_110 + 1 u>= 0x1000)
                    exceptionObject_2 = *(exceptionObject_2 - 8)
                    
                    if (exceptionObject_5 - exceptionObject_2 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(exceptionObject_2)
        while (rbx_1.w != 0)
        
        rsi = var_1a0
    
    rdi = var_190
else
    sub_14299d690(r15)

var_190 = 0
sub_14299c610(r15, &var_190)

if (sx.q((*(*r15 + 8))(r15) * *(r15 + 0x14)) u> r15[0x18])
    r15[0x18] = sx.q((*(*r15 + 8))(r15) * *(r15 + 0x14))
    int64_t rcx_26 = r15[0x17]
    
    if (rcx_26 != 0)
        j_sub_140a74f90(rcx_26)
    
    r15[0x17] = j_sub_140a82f30(sx.q((*(*r15 + 8))(r15) * *(r15 + 0x14)))

void* rax_37 = r15[0x11]
void* rcx_29 = nullptr

if (rax_37 != 0)
    rcx_29 = rax_37

var_1a0 = rcx_29
int64_t rax_38 = r15[0x13]
int64_t rcx_30 = 0

if (rax_38 != 0)
    rcx_30 = rax_38

int64_t var_1a8_1 = rcx_30
void* rax_40 = rsi + r12 + r14
var_190 = rax_40

if (rax_11 u> 2)
    sub_14297ab20(&exceptionObject, "Invalid version of compressed data block")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

sub_14299ed70(r15, var_1b8, i_5, i_10, rcx)

if (r12 != 0)
    if (rax_12 u> r15[0x1c])
        sub_14297ab20(&exceptionObject, "Error uncompressing DWA data(corrupt header).")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    var_1b8 = rax_12.d
    
    if (sub_140374350(r15[0x19], &var_1b8, rsi, r12.d) != 0)
        sub_142c99e10(&exceptionObject, "Error uncompressing UNKNOWN data.")
        _CxxThrowException(&exceptionObject, &data_143946868)
        noreturn

if (r14 != 0)
    if (rdx_1 * 2 u> r15[0x12])
        sub_14297ab20(&exceptionObject, "Error uncompressing DWA data(corrupt header).")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    if (rax_14 == 0)
        sub_1429bc720(rsi + r12, r14.d, r15[0x11], rdx_1.d)
    else
        if (rax_14 != 1)
            sub_142996c30(&exceptionObject, "Unknown AC Compression")
            _CxxThrowException(&exceptionObject, &data_1439468a0)
            noreturn
        
        i_10 = (rdx_1 * 2).d
        
        if (sub_140374350(r15[0x11], &i_10, rsi + r12, r14.d) != 0)
            sub_14297ab20(&exceptionObject, "Data decompression (zlib) failed.")
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn
        
        if (rdx_1 * 2 != zx.q(i_10))
            sub_14297ab20(&exceptionObject, "AC data corrupt.")
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn

if (r13 != 0)
    if (rax_13 * 2 u> r15[0x14])
        sub_14297ab20(&exceptionObject, "Error uncompressing DWA data(corrupt header).")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    if (sx.q(sub_1429bb330(r15[0x1f], var_190, r13.d, r15[0x13])) != sx.q(rax_13.d) * 2)
        sub_142c99e10(&exceptionObject, "DC data corrupt.")
        _CxxThrowException(&exceptionObject, &data_143946868)
        noreturn

if (rbx != 0)
    if (rdi u> r15[0x16] || rbx u> r15[0x1e])
        sub_14297ab20(&exceptionObject, "Error uncompressing DWA data(corrupt header).")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    i_10 = rdi.d
    
    if (sub_140374350(r15[0x15], &i_10, rax_40 + r13, var_180) != 0)
        sub_142c99e10(&exceptionObject, "Error uncompressing RLE data.")
        _CxxThrowException(&exceptionObject, &data_143946868)
        noreturn
    
    if (zx.q(i_10) != rdi)
        sub_142c99e10(&exceptionObject, "RLE data corrupted")
        _CxxThrowException(&exceptionObject, &data_143946868)
        noreturn
    
    if (sx.q(sub_1429bcf90(rdi.d, rbx.d, r15[0x15], r15[0x1b])) != rbx)
        sub_142c99e10(&exceptionObject, "RLE data corrupted")
        _CxxThrowException(&exceptionObject, &data_143946868)
        noreturn

int64_t rax_57
int64_t rdx_17
rdx_17:rax_57 = muls.dp.q(0x6bca1af286bca1b, r15[9] - r15[8])
int64_t rbx_3 = rdx_17 s>> 2
int64_t rbx_4 = rbx_3 + (rbx_3 u>> 0x3f)
var_1b8 = 0
uint64_t rdi_2 = (rbx_4 + 0x1f) u>> 5
sub_1429958f0(&exceptionObject, rdi_2, &var_1b8)
int64_t var_110_1 = 0

if (rbx_4 u> 0x7fffffffffffffff)
    sub_1406afea0()
    noreturn

void* var_120
void* rcx_45 = var_120
void* exceptionObject_3 = exceptionObject

if (rdi_2 u< (rcx_45 - exceptionObject_3) s>> 2)
    void* rax_63 = exceptionObject_3 + (rdi_2 << 2)
    
    if (rax_63 != rcx_45)
        rcx_45 = rax_63
    
    void* var_120_1 = rcx_45

int64_t var_110_2 = rbx_4
int32_t rbx_5 = rbx_4.d & 0x1f

if (rbx_5 u> 0)
    *(exceptionObject_3 + (rdi_2 << 2) - 4) &= (1 << rbx_5.b) - 1

int64_t rax_66
int64_t rdx_19
rdx_19:rax_66 = muls.dp.q(0x6bca1af286bca1b, r15[9] - r15[8])
int64_t rdx_20 = rdx_19 s>> 2
int64_t var_178
sub_142995cd0(&var_178, rdx_20 + (rdx_20 u>> 0x3f))
int32_t i_8 = 0
int64_t r9_9 = r15[9]
int64_t rax_69
int64_t rdx_22
rdx_22:rax_69 = muls.dp.q(0x6bca1af286bca1b, r9_9 - r15[8])
int64_t rdx_23 = rdx_22 s>> 2

if (rdx_23 != neg.q(rdx_23 u>> 0x3f))
    uint64_t i_1 = 0
    int64_t rdx_26
    
    do
        int32_t* rcx_52 = exceptionObject_3 + (i_1 u>> 5 << 2)
        *rcx_52 &= not.d(1 << ((i_1.d & 0x1f) u% 0x20))
        i_8 += 1
        r9_9 = r15[9]
        int64_t rax_76
        int64_t rdx_25
        rdx_25:rax_76 = muls.dp.q(0x6bca1af286bca1b, r9_9 - r15[8])
        rdx_26 = rdx_25 s>> 2
        i_1 = zx.q(i_8)
    while (i_1 u< rdx_26 + (rdx_26 u>> 0x3f))

int64_t r12_1 = r15[0x17]
int64_t var_188_1 = r12_1
var_1b8.q = r12_1
int32_t i_2 = i_5
int64_t r13_1 = var_178
int32_t rbx_6

for (rbx_6 = rcx; i_2 s<= rbx_6; i_2 += 1)
    int32_t j_2 = 0
    int64_t r8_12 = r15[8]
    r9_9 = r15[9]
    int64_t rax_79
    int64_t rdx_28
    rdx_28:rax_79 = muls.dp.q(0x6bca1af286bca1b, r9_9 - r8_12)
    int64_t rdx_29 = rdx_28 s>> 2
    
    if (rdx_29 != neg.q(rdx_29 u>> 0x3f))
        uint64_t j = 0
        
        do
            void* rbx_8 = j * 0x98 + r8_12
            
            if (sub_14299e620(i_2, *(rbx_8 + 0x28)) == 0)
                int64_t rcx_59 = j * 0x18 + r13_1
                int64_t* rdx_32 = *(rcx_59 + 8)
                
                if (*(rcx_59 + 0x10) == rdx_32)
                    sub_1427c6dc0(rcx_59, rdx_32, &var_1b8)
                    r12_1 = var_1b8.q
                else
                    *rdx_32 = r12_1
                    *(rcx_59 + 8) += 8
                
                r12_1 += sx.q(sub_1429a6580(*(rbx_8 + 0x2c)) * *(rbx_8 + 0x34))
                var_1b8.q = r12_1
            
            j_2 += 1
            r8_12 = r15[8]
            r9_9 = r15[9]
            j = zx.q(j_2)
        while (j u< (r9_9 - r8_12) s/ 0x98)
        
        var_188_1 = r12_1
        rbx_6 = rcx

int64_t* r14_3 = nullptr
int32_t i_9 = 0
int64_t r8_14 = r15[0xb]
int64_t rax_90
int64_t rdx_36
rdx_36:rax_90 = muls.dp.q(0x2aaaaaaaaaaaaaab, r15[0xc] - r8_14)
int64_t rdx_37 = rdx_36 s>> 1
int32_t var_bc
int32_t var_b8
int64_t var_90
void* var_78
int64_t var_68
void var_60
void* exceptionObject_4

if (rdx_37 == neg.q(rdx_37 u>> 0x3f))
    exceptionObject_4 = exceptionObject
else
    uint64_t i_3 = 0
    int64_t rdx_42
    
    do
        uint64_t rax_93 = i_3 * 3
        int64_t r14_1 = sx.q(*(r8_14 + (rax_93 << 2) + 8))
        int64_t rcx_65 = r15[8]
        int64_t rsi_2 = sx.q(*(r8_14 + (rax_93 << 2) + 4))
        int64_t rdi_3 = sx.q(*(r8_14 + (rax_93 << 2)))
        void* r11_2 = rdi_3 * 0x98 + rcx_65
        int64_t rcx_66 = var_178
        int32_t var_1d0_1 = *(r14_1 * 0x98 + rcx_65 + 0x2c)
        int32_t var_1d8_1 = *(rsi_2 * 0x98 + rcx_65 + 0x2c)
        int32_t var_1e0_1 = *(r11_2 + 0x2c)
        void* rbx_11 = var_1a0
        int32_t var_208
        var_208.q = rbx_11
        sub_1429962d0(&exceptionObject_1, rcx_66 + rdi_3 * 0x18, rcx_66 + rsi_2 * 0x18, 
            rcx_66 + r14_1 * 0x18, var_208, var_1a8_1, &data_143574a40, *(r11_2 + 0x34), 
            *(r11_2 + 0x38))
        sub_14299a830(&exceptionObject_1)
        var_1a0 = rbx_11 + (sx.q(var_bc) << 1)
        var_1a8_1 += sx.q(var_b8) << 1
        int32_t* rcx_72 = exceptionObject + (rdi_3 u>> 5 << 2)
        *rcx_72 |= 1 << ((rdi_3.d & 0x1f) u% 0x20)
        exceptionObject_4 = exceptionObject
        int32_t* rcx_73 = exceptionObject_4 + (rsi_2 u>> 5 << 2)
        *rcx_73 |= 1 << ((rsi_2.d & 0x1f) u% 0x20)
        int32_t* rcx_74 = exceptionObject_4 + (r14_1 u>> 5 << 2)
        *rcx_74 |= 1 << ((r14_1.d & 0x1f) u% 0x20)
        exceptionObject_1 = &Imf_2_3::DwaCompressor::LossyDctDecoderBase::`vftable'
        sub_142996ec0(&var_60)
        void* rcx_76 = var_78
        
        if (rcx_76 == 0)
            r14_3 = nullptr
        else
            void* rax_120 = rcx_76
            
            if ((var_68 - rcx_76) s>> 2 << 2 u>= 0x1000)
                rcx_76 = *(rcx_76 - 8)
                
                if (rax_120 - rcx_76 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_76)
            r14_3 = nullptr
            __builtin_memset(&var_78, 0, 0x18)
        
        sub_142997940(&var_90)
        i_9 += 1
        r8_14 = r15[0xb]
        int64_t rax_123
        int64_t rdx_41
        rdx_41:rax_123 = muls.dp.q(0x2aaaaaaaaaaaaaab, r15[0xc] - r8_14)
        rdx_42 = rdx_41 s>> 1
        i_3 = zx.q(i_9)
    while (i_3 u< rdx_42 + (rdx_42 u>> 0x3f))
    r9_9 = r15[9]
    rbx_6 = rcx

int32_t i_6 = 0
i_10 = 0
int64_t r8_16 = r15[8]
int64_t rax_126
int64_t rdx_44
rdx_44:rax_126 = muls.dp.q(0x6bca1af286bca1b, r9_9 - r8_16)
int64_t rdx_45 = rdx_44 s>> 2

if (rdx_45 != neg.q(rdx_45 u>> 0x3f))
    uint64_t i_4 = 0
    int64_t rdx_56
    
    do
        uint64_t rdx_48 = i_4 u>> 5
        int32_t rax_130 = i_4.d & 0x1f
        
        if ((*(exceptionObject_4 + (rdx_48 << 2)) & 1 << rax_130.b) == 0)
            void* rdi_6 = i_4 * 0x98 + r8_16
            int32_t k_3 = sub_1429a6580(*(rdi_6 + 0x2c))
            int32_t rdx_49 = *(rdi_6 + 0x20)
            
            if (rdx_49 == 0)
                int32_t r13_4 = sub_1429a6580(*(rdi_6 + 0x2c)) * *(rdi_6 + 0x34)
                int32_t i_12 = i_5
                
                if (i_12 s<= rbx_6)
                    int64_t r15_2 = var_178
                    
                    do
                        if (sub_14299e620(i_12, *(rdi_6 + 0x28)) == 0)
                            int64_t rbx_15 = sx.q(r13_4)
                            memcpy(*(*(r15_2 + i_4 * 0x18) + r14_3), *(rdi_6 + 0x48), rbx_15.d)
                            *(rdi_6 + 0x48) += rbx_15
                            r14_3 = &r14_3[1]
                            rbx_6 = rcx
                        
                        i_12 += 1
                    while (i_12 s<= rbx_6)
                    
                    r15 = arg1
                    r14_3 = nullptr
                
                i_6 = i_10
            else if (rdx_49 == 1)
                void* const rdx_65 = &data_143574a40
                
                if (*(rdi_6 + 0x30) != 0)
                    rdx_65 = nullptr
                
                int64_t r8_18 = var_178 + i_4 * 0x18
                int32_t rbx_14 = *(rdi_6 + 0x2c)
                var_1b8 = rbx_14
                var_bc.q = 0
                void* rdi_7 = var_1a0
                void* var_b0_1 = rdi_7
                int64_t var_a8_1 = var_1a8_1
                int32_t var_98_1 = *(rdi_6 + 0x34)
                int32_t var_94_1 = *(rdi_6 + 0x38)
                __builtin_memset(&var_90, 0, 0x48)
                void* const rax_150 = &data_143554a40
                
                if (rdx_65 != 0)
                    rax_150 = rdx_65
                
                void* const var_a0_1 = rax_150
                char var_c0_1 = data_143fed230
                exceptionObject_1 = &Imf_2_3::DwaCompressor::LossyDctDecoder::`vftable'{for `Imf_2_3::DwaCompressor::LossyDctDecoderBase'}
                sub_142991990(&var_90, nullptr, r8_18)
                int32_t* var_70
                
                if (var_68 == var_70)
                    sub_142991b90(&var_78, var_70, &var_1b8)
                else
                    *var_70 = rbx_14
                    var_70 = &var_70[1]
                
                sub_14299a830(&exceptionObject_1)
                var_1a0 = rdi_7 + (sx.q(var_bc) << 1)
                var_1a8_1 += sx.q(var_b8) << 1
                exceptionObject_1 = &Imf_2_3::DwaCompressor::LossyDctDecoderBase::`vftable'
                sub_142996ec0(&var_60)
                void* rcx_99 = var_78
                
                if (rcx_99 == 0)
                    r14_3 = nullptr
                    sub_142997940(&var_90)
                    rbx_6 = rcx
                else
                    void* rax_157 = rcx_99
                    
                    if ((var_68 - rcx_99) s>> 2 << 2 u>= 0x1000)
                        rcx_99 = *(rcx_99 - 8)
                        
                        if (rax_157 - rcx_99 - 8 u> 0x1f)
                            _invalid_parameter_noinfo_noreturn()
                            noreturn
                    
                    j_sub_140a74f90(rcx_99)
                    __builtin_memset(&var_78, 0, 0x18)
                    r14_3 = nullptr
                    sub_142997940(&var_90)
                    rbx_6 = rcx
            else
                if (rdx_49 != 2)
                    sub_142996c30(&exceptionObject_1, "Unhandled compression scheme case")
                    _CxxThrowException(&exceptionObject_1, &data_1439468a0)
                    noreturn
                
                int32_t i_11 = i_5
                int64_t k_2 = sx.q(k_3)
                
                if (i_11 s<= rcx)
                    int64_t r15_1 = var_178
                    
                    do
                        if (sub_14299e620(i_11, *(rdi_6 + 0x28)) == 0)
                            void* r10_3 = *(r14_3 + *(r15_1 + i_4 * 0x18))
                            
                            if (k_2 != 2)
                                int32_t j_1 = 0
                                
                                if (*(rdi_6 + 0x34) s> 0)
                                    do
                                        if (k_2 s> 0)
                                            void* rax_136 = rdi_6 + 0x70
                                            int64_t k_1 = k_2
                                            int64_t k
                                            
                                            do
                                                *r10_3 = **rax_136
                                                r10_3 += 1
                                                *rax_136 += 1
                                                rax_136 += 8
                                                k = k_1
                                                k_1 -= 1
                                            while (k != 1)
                                        
                                        j_1 += 1
                                    while (j_1 s< *(rdi_6 + 0x34))
                            else
                                sub_14299e360(r10_3, *(rdi_6 + 0x70), *(rdi_6 + 0x78), 
                                    *(rdi_6 + 0x34))
                                *(rdi_6 + 0x70) += sx.q(*(rdi_6 + 0x34))
                                *(rdi_6 + 0x78) += sx.q(*(rdi_6 + 0x34))
                            
                            r14_3 = &r14_3[1]
                        
                        i_11 += 1
                    while (i_11 s<= rcx)
                    
                    r15 = arg1
                    r14_3 = nullptr
                
                rbx_6 = rcx
                i_6 = i_10
            
            exceptionObject_4 = exceptionObject
            *(exceptionObject_4 + (rdx_48 << 2)) |= 1 << (rax_130 u% 0x20)
        
        i_6 += 1
        i_10 = i_6
        r8_16 = r15[8]
        int64_t rax_139
        int64_t rdx_55
        rdx_55:rax_139 = muls.dp.q(0x6bca1af286bca1b, r15[9] - r8_16)
        rdx_56 = rdx_55 s>> 2
        i_4 = zx.q(i_6)
    while (i_4 u< rdx_56 + (rdx_56 u>> 0x3f))
    r12_1 = var_188_1

*arg5 = r15[0x17]
int32_t r12_2 = r12_1.d - r15[0x17].d
int64_t rbx_13 = var_178

if (rbx_13 != 0)
    int64_t var_170
    sub_1429914c0(rbx_13, var_170)
    int64_t rax_145 = rbx_13
    int64_t var_168
    
    if ((var_168 - rbx_13) s/ 0x18 * 0x18 u>= 0x1000)
        rbx_13 = *(rbx_13 - 8)
        
        if (rax_145 - rbx_13 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rbx_13)

if (exceptionObject_4 != 0)
    void* exceptionObject_6 = exceptionObject_4
    
    if (((var_118 - exceptionObject_4) & 0xfffffffffffffffc) u>= 0x1000)
        exceptionObject_4 = *(exceptionObject_4 - 8)
        
        if (exceptionObject_6 - exceptionObject_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(exceptionObject_4)

__security_check_cookie(rax_1 ^ &var_228)
return zx.q(r12_2)
