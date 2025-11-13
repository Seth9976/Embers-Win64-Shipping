// 函数: sub_14184e800
// 地址: 0x14184e800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void*** rax = j_sub_140a82f30(0x40)
void*** rsi = rax
int64_t arg_18

if (rax == 0)
    rsi = nullptr
else
    void*** rax_1 = j_sub_140a82f30(0xa8)
    void*** r14_1 = rax_1
    
    if (rax_1 == 0)
        r14_1 = nullptr
    else
        arg_18 = 0
        memset(rax_1, 0, 0x90)
        sub_140b4c2a0(r14_1)
        r14_1[0x12] = 0
        *r14_1 = &data_142d6ad48
        r14_1[0x13] = &rsi[5]
        r14_1[0x14] = 0
        sub_140b552b0(r14_1, 1)
        (*r14_1)[0x1b](r14_1, 0)
    
    rsi[1] = r14_1
    __builtin_memset(&rsi[2], 0, 0x18)
    *rsi = &data_142d84f30
    rsi[5] = 0
    rsi[6] = 0
    rsi[7] = arg2

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142d83c20
    *(rax_3 + 0xc) = 1
    rax_3[2] = rsi

uint64_t var_1c8 = rsi
uint64_t rbx_2 = var_1c8

if (rax_3 != 0)
    rax_3[1].d += 1
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t temp1_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_3)[1](rax_3, 1)

sub_140944dc0(rbx_2)
arg_18.d = *(arg1 + 8)
void* var_1f8 = nullptr
int32_t var_1f0 = 0
sub_1405947f0(&var_1f8, 0x14)
int32_t rax_8 = var_1f0 + 0x14
var_1f0 = rax_8

if (rax_8 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"ManifestFileVersion", 0x28)
int64_t var_1d8
sub_140a24120(&var_1d8, &arg_18, 4)
sub_140918ca0(rbx_2, &var_1f8, &var_1d8)
void* rcx_12 = var_1f8

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

var_1f8 = nullptr
int32_t var_1f0_1 = 0
sub_1405947f0(&var_1f8, 0xc)
int32_t rax_9 = var_1f0_1 + 0xc
var_1f0_1 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"bIsFileData", 0x18)
sub_14093c230(rbx_2, &var_1f8, *(arg1 + 0xc))
void* rcx_17 = var_1f8

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

var_1f8 = nullptr
int32_t var_1f0_2 = 0
sub_1405947f0(&var_1f8, 6)
int32_t rax_10 = var_1f0_2 + 6
var_1f0_2 = rax_10

if (rax_10 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"AppID", 0xc)
sub_140a24120(&var_1d8, arg1 + 0x10, 4)
sub_140918ca0(rbx_2, &var_1f8, &var_1d8)
void* rcx_23 = var_1f8

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

var_1f8 = nullptr
int32_t var_1f0_3 = 0
sub_1405947f0(&var_1f8, 0xe)
int32_t rax_11 = var_1f0_3 + 0xe
var_1f0_3 = rax_11

if (rax_11 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"AppNameString", 0x1c)
sub_140918ca0(rbx_2, &var_1f8, sub_140596d10(&var_1d8, arg1 + 0x18))
void* rcx_29 = var_1f8

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

var_1f8 = nullptr
int32_t var_1f0_4 = 0
sub_1405947f0(&var_1f8, 0x13)
int32_t rax_13 = var_1f0_4 + 0x13
var_1f0_4 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"BuildVersionString", 0x26)
sub_140918ca0(rbx_2, &var_1f8, sub_140596d10(&var_1d8, arg1 + 0x28))
void* rcx_35 = var_1f8

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

var_1f8 = nullptr
int32_t var_1f0_5 = 0
sub_1405947f0(&var_1f8, 0x10)
int32_t rax_15 = var_1f0_5 + 0x10
var_1f0_5 = rax_15

if (rax_15 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"LaunchExeString", 0x20)
sub_140918ca0(rbx_2, &var_1f8, sub_140596d10(&var_1d8, arg1 + 0x38))
void* rcx_41 = var_1f8

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

var_1f8 = nullptr
int32_t var_1f0_6 = 0
sub_1405947f0(&var_1f8, 0xe)
int32_t rax_17 = var_1f0_6 + 0xe
var_1f0_6 = rax_17

if (rax_17 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"LaunchCommand", 0x1c)
sub_140918ca0(rbx_2, &var_1f8, sub_140596d10(&var_1d8, arg1 + 0x48))
void* rcx_47 = var_1f8

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

var_1f8 = nullptr
int32_t var_1f0_7 = 0
sub_1405947f0(&var_1f8, 0xa)
int32_t rax_19 = var_1f0_7 + 0xa
var_1f0_7 = rax_19

if (rax_19 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"PrereqIds", 0x14)
sub_140939040(rbx_2, &var_1f8)
void* rcx_52 = var_1f8

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

int32_t var_1b4 = 1
int32_t r14_2 = *(arg1 + 0x80)
void* var_1b0 = arg1 + 0x68
int32_t rcx_53 = 0
int32_t var_1b8 = 0
int32_t var_1a8 = 0xffffffff
int32_t r8_7 = 0
int64_t var_1a4 = 0

if (r14_2 != 0)
    void* rax_20 = *(arg1 + 0x78)
    void* r9_1 = arg1 + 0x68
    
    if (rax_20 != 0)
        r9_1 = rax_20
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r14_2 - 1)
    int32_t rdx_25 = *r9_1
    
    if (rdx_25 != 0)
    label_14184edf8:
        int32_t rax_27 = neg.d(rdx_25) & rdx_25
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_27)
        int32_t var_1b4_1 = rax_27
        int32_t rax_28
        
        if (rax_27 == 0)
            rax_28 = 0x20
        else
            rax_28 = 0x1f - temp0_2
        
        var_1a4.d = r8_7 - rax_28 + 0x1f
        
        if (r8_7 - rax_28 + 0x1f s> r14_2)
            var_1a4.d = r14_2
    else
        while (true)
            int64_t rdx_26 = sx.q(rcx_53)
            r8_7 += 0x20
            rcx_53 += 1
            var_1a4:4.d = r8_7
            var_1b8 = rcx_53
            
            if (rdx_26.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_25 = *(r9_1 + (rdx_26 << 2) + 4)
            var_1a8 = 0xffffffff
            
            if (rdx_25 != 0)
                goto label_14184edf8
        
        var_1a4.d = r14_2

int32_t rdx_27 = *(arg1 + 0x80)
double zmm2[0x2] = var_1a8.o
double var_60[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_27.b & 0x1f)
int128_t var_70 = var_1b8.o
int32_t r8_10 = rdx_27 s>> 5
int32_t r9_3 = rdx_27 & 0xffffffe0
int64_t var_98 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_1a8_1 = r12
var_1a4.d = rdx_27
int128_t var_b8 = (arg1 + 0x58).o
int128_t var_a8 = var_70

if (rdx_27 != r14_2)
    void* rax_30 = *(arg1 + 0x78)
    void* r10_1 = arg1 + 0x68
    
    if (rax_30 != 0)
        r10_1 = rax_30
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r14_2 - 1)
    int32_t rdx_31 = *(r10_1 + (sx.q(r8_10) << 2)) & r12
    
    if (rdx_31 != 0)
    label_14184eee0:
        int32_t rax_37 = neg.d(rdx_31) & rdx_31
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_37)
        int32_t r11_1
        
        if (rax_37 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_1a4.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> r14_2)
            var_1a4.d = r14_2
    else
        while (true)
            int64_t rcx_58 = sx.q(r8_10)
            r9_3 += 0x20
            r8_10 += 1
            
            if (rcx_58.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_31 = *(r10_1 + (rcx_58 << 2) + 4)
            var_1a8_1 = 0xffffffff
            
            if (rdx_31 != 0)
                goto label_14184eee0
        
        var_1a4.d = r14_2

while (true)
    int64_t rax_39 = sx.q(var_a8:0xc.d)
    int64_t* rdx_32 = var_b8.q
    
    if (rax_39.d == (var_1a8_1.q u>> 0x20).d && var_a8.q == arg1 + 0x68 && rdx_32 == arg1 + 0x58)
        int64_t* rcx_65 = *(rbx_2 + 8)
        *(rbx_2 + 0x24) -= 1
        arg_18.w = 0x5d
        (*(*rcx_65 + 0x150))(rcx_65, &arg_18, 2)
        *(rbx_2 + 0x18) -= 1
        sub_140679af0(rbx_2 + 0x10)
        *(rbx_2 + 0x20) = 5
        var_1f8 = nullptr
        int32_t var_1f0_8 = 0
        sub_1405947f0(&var_1f8, 0xb)
        int32_t rax_47 = var_1f0_8 + 0xb
        var_1f0_8 = rax_47
        
        if (rax_47 s> 0)
            sub_140594770(&var_1f8)
        
        UnDecorator::getReferenceType(var_1f8, u"PrereqName", 0x16)
        void* r12_1 = arg_8
        sub_140918ca0(rbx_2, &var_1f8, sub_140596d10(&var_1d8, r12_1 + 0xa8))
        void* rcx_72 = var_1f8
        
        if (rcx_72 != 0)
            sub_140a74f90(rcx_72)
        
        var_1f8 = nullptr
        int32_t var_1f0_9 = 0
        sub_1405947f0(&var_1f8, 0xb)
        int32_t rax_49 = var_1f0_9 + 0xb
        var_1f0_9 = rax_49
        
        if (rax_49 s> 0)
            sub_140594770(&var_1f8)
        
        UnDecorator::getReferenceType(var_1f8, u"PrereqPath", 0x16)
        sub_140918ca0(rbx_2, &var_1f8, sub_140596d10(&var_1d8, r12_1 + 0xb8))
        void* rcx_78 = var_1f8
        
        if (rcx_78 != 0)
            sub_140a74f90(rcx_78)
        
        var_1f8 = nullptr
        int32_t var_1f0_10 = 0
        sub_1405947f0(&var_1f8, 0xb)
        int32_t rax_51 = var_1f0_10 + 0xb
        var_1f0_10 = rax_51
        
        if (rax_51 s> 0)
            sub_140594770(&var_1f8)
        
        UnDecorator::getReferenceType(var_1f8, u"PrereqArgs", 0x16)
        sub_140918ca0(rbx_2, &var_1f8, sub_140596d10(&var_1d8, r12_1 + 0xc8))
        void* rcx_84 = var_1f8
        
        if (rcx_84 != 0)
            sub_140a74f90(rcx_84)
        
        var_1f8 = nullptr
        int32_t var_1f0_11 = 0
        sub_1405947f0(&var_1f8, 0x11)
        int32_t rax_53 = var_1f0_11 + 0x11
        var_1f0_11 = rax_53
        
        if (rax_53 s> 0)
            sub_140594770(&var_1f8)
        
        UnDecorator::getReferenceType(var_1f8, u"FileManifestList", 0x22)
        sub_140939040(rbx_2, &var_1f8)
        void* rcx_89 = var_1f8
        
        if (rcx_89 != 0)
            sub_140a74f90(rcx_89)
        
        int64_t* r13_2 = *(r12_1 + 0xf8)
        int64_t* arg_20 = r13_2
        void* rax_57 = &r13_2[sx.q(*(r12_1 + 0x100)) * 0xc]
        var_1f8 = rax_57
        int64_t var_1e8
        void*** var_1c0
        int64_t var_198
        
        if (r13_2 != rax_57)
            int32_t rax_58 = *(rbx_2 + 0x20)
            
            do
                if (rax_58 u> 0xc || not(test_bit(0x1015, rax_58)))
                    int64_t* rcx_90 = *(rbx_2 + 8)
                    arg_18.w = 0x2c
                    (*(*rcx_90 + 0x150))(rcx_90, &arg_18, 2)
                
                int64_t* rcx_91 = *(rbx_2 + 8)
                arg_18.w = 0x7b
                (*(*rcx_91 + 0x150))(rcx_91, &arg_18, 2)
                *(rbx_2 + 0x24) += 1
                int64_t rsi_3 = sx.q(*(rbx_2 + 0x18))
                int32_t rax_61 = (rsi_3 + 1).d
                *(rbx_2 + 0x18) = rax_61
                
                if (rax_61 s> *(rbx_2 + 0x1c))
                    sub_1406105e0(rbx_2 + 0x10)
                
                int64_t rax_62 = *(rbx_2 + 0x10)
                int64_t var_188 = 0
                int32_t var_180_1 = 0
                *(rax_62 + (rsi_3 << 2)) = 6
                *(rbx_2 + 0x20) = 2
                sub_1405947f0(&var_188, 9)
                int32_t rax_63 = var_180_1 + 9
                var_180_1 = rax_63
                
                if (rax_63 s> 0)
                    sub_140594770(&var_188)
                
                UnDecorator::getReferenceType(var_188, u"Filename", 0x12)
                int32_t rsi_4 = r13_2[1].d
                int64_t r14_4 = *r13_2
                uint64_t var_90 = 0
                int32_t var_88_1 = rsi_4
                
                if (rsi_4 != 0)
                    sub_1405a4c70(&var_90, rsi_4, 0)
                    memcpy(var_90, r14_4, rsi_4 * 2)
                else
                    int32_t var_84_1 = 0
                
                int32_t rcx_98 = *(rbx_2 + 0x20)
                
                if (((rcx_98 - 2) & 0xfffffff5) != 0 || rcx_98 == 0xa)
                    int64_t* rcx_99 = *(rbx_2 + 8)
                    arg_18.w = 0x2c
                    (*(*rcx_99 + 0x150))(rcx_99, &arg_18, 2)
                
                (*(*rbx_2 + 0x10))(rbx_2, &var_188)
                int64_t* rcx_101 = *(rbx_2 + 8)
                arg_18.w = 0x3a
                (*(*rcx_101 + 0x150))(rcx_101, &arg_18, 2)
                (*(*rbx_2 + 0x10))(rbx_2, &var_90)
                *(rbx_2 + 0x20) = 7
                uint64_t rcx_103 = var_90
                
                if (rcx_103 != 0)
                    sub_140a74f90(rcx_103)
                
                int64_t rcx_104 = var_188
                
                if (rcx_104 != 0)
                    sub_140a74f90(rcx_104)
                
                int64_t var_178 = 0
                int32_t var_170_1 = 0
                sub_1405947f0(&var_178, 9)
                int32_t rax_69 = var_170_1 + 9
                var_170_1 = rax_69
                
                if (rax_69 s> 0)
                    sub_140594770(&var_178)
                
                UnDecorator::getReferenceType(var_178, u"FileHash", 0x12)
                int64_t* rax_70 = sub_140a24120(&var_1b8, &r13_2[4], 0x14)
                int32_t rdx_59 = *(rbx_2 + 0x20)
                
                if (((rdx_59 - 2) & 0xfffffff5) != 0 || rdx_59 == 0xa)
                    int64_t* rcx_110 = *(rbx_2 + 8)
                    arg_18.w = 0x2c
                    int64_t r9_5 = *rcx_110
                    (*(r9_5 + 0x150))(rcx_110, &arg_18, 2, r9_5)
                
                (*(*rbx_2 + 0x10))(rbx_2, &var_178)
                int64_t* rcx_112 = *(rbx_2 + 8)
                arg_18.w = 0x3a
                (*(*rcx_112 + 0x150))(rcx_112, &arg_18, 2)
                (*(*rbx_2 + 0x10))(rbx_2, rax_70)
                *(rbx_2 + 0x20) = 7
                int64_t rcx_114 = *rax_70
                
                if (rcx_114 != 0)
                    sub_140a74f90(rcx_114)
                
                int64_t rcx_115 = var_178
                
                if (rcx_115 != 0)
                    sub_140a74f90(rcx_115)
                
                if ((*(r13_2 + 0x34) & 4) != 0)
                    int64_t var_168 = 0
                    int32_t var_160_1 = 0
                    sub_1405947f0(&var_168, 0x12)
                    int32_t rax_74 = var_160_1 + 0x12
                    var_160_1 = rax_74
                    
                    if (rax_74 s> 0)
                        sub_140594770(&var_168)
                    
                    UnDecorator::getReferenceType(var_168, u"bIsUnixExecutable", 0x24)
                    int32_t rcx_119 = *(rbx_2 + 0x20)
                    
                    if (((rcx_119 - 2) & 0xfffffff5) != 0 || rcx_119 == 0xa)
                        int64_t* rcx_120 = *(rbx_2 + 8)
                        arg_18.w = 0x2c
                        (*(*rcx_120 + 0x150))(rcx_120, &arg_18, 2)
                    
                    (*(*rbx_2 + 0x10))(rbx_2, &var_168)
                    int64_t* rcx_122 = *(rbx_2 + 8)
                    arg_18.w = 0x3a
                    (*(*rcx_122 + 0x150))(rcx_122, &arg_18, 2)
                    int16_t* var_e8 = nullptr
                    int32_t var_e0_1 = 0
                    sub_1405947f0(&var_e8, 5)
                    int32_t rsi_6 = var_e0_1 + 5
                    
                    if (rsi_6 s> 0)
                        sub_140594770(&var_e8)
                    
                    int16_t* r14_5 = var_e8
                    UnDecorator::getReferenceType(r14_5, u"true", 0xa)
                    int64_t* rcx_126 = *(rbx_2 + 8)
                    int16_t* const rdx_69
                    int32_t rsi_7
                    
                    if (rsi_6 == 0)
                        rsi_7 = 0
                        rdx_69 = &data_142d40450
                    else
                        rsi_7 = rsi_6 - 1
                        rdx_69 = r14_5
                    
                    (*(*rcx_126 + 0x150))(rcx_126, rdx_69, sx.q(rsi_7) * 2)
                    
                    if (r14_5 != 0)
                        sub_140a74f90(r14_5)
                    
                    *(rbx_2 + 0x20) = 9
                    int64_t rcx_128 = var_168
                    
                    if (rcx_128 != 0)
                        sub_140a74f90(rcx_128)
                
                if ((*(r13_2 + 0x34) & 1) != 0)
                    int64_t var_158 = 0
                    int32_t var_150_1 = 0
                    sub_1405947f0(&var_158, 0xc)
                    int32_t rax_80 = var_150_1 + 0xc
                    var_150_1 = rax_80
                    
                    if (rax_80 s> 0)
                        sub_140594770(&var_158)
                    
                    UnDecorator::getReferenceType(var_158, u"bIsReadOnly", 0x18)
                    int32_t rcx_132 = *(rbx_2 + 0x20)
                    
                    if (((rcx_132 - 2) & 0xfffffff5) != 0 || rcx_132 == 0xa)
                        int64_t* rcx_133 = *(rbx_2 + 8)
                        arg_18.w = 0x2c
                        (*(*rcx_133 + 0x150))(rcx_133, &arg_18, 2)
                    
                    (*(*rbx_2 + 0x10))(rbx_2, &var_158)
                    int64_t* rcx_135 = *(rbx_2 + 8)
                    arg_18.w = 0x3a
                    (*(*rcx_135 + 0x150))(rcx_135, &arg_18, 2)
                    int16_t* var_d8 = nullptr
                    int32_t var_d0_1 = 0
                    sub_1405947f0(&var_d8, 5)
                    int32_t rsi_8 = var_d0_1 + 5
                    
                    if (rsi_8 s> 0)
                        sub_140594770(&var_d8)
                    
                    int16_t* r14_6 = var_d8
                    UnDecorator::getReferenceType(r14_6, u"true", 0xa)
                    int64_t* rcx_139 = *(rbx_2 + 8)
                    int16_t* const rdx_75
                    int32_t rsi_9
                    
                    if (rsi_8 == 0)
                        rsi_9 = 0
                        rdx_75 = &data_142d40450
                    else
                        rsi_9 = rsi_8 - 1
                        rdx_75 = r14_6
                    
                    (*(*rcx_139 + 0x150))(rcx_139, rdx_75, sx.q(rsi_9) * 2)
                    
                    if (r14_6 != 0)
                        sub_140a74f90(r14_6)
                    
                    *(rbx_2 + 0x20) = 9
                    int64_t rcx_141 = var_158
                    
                    if (rcx_141 != 0)
                        sub_140a74f90(rcx_141)
                
                if ((*(r13_2 + 0x34) & 2) != 0)
                    int64_t var_148 = 0
                    int32_t var_140_1 = 0
                    sub_1405947f0(&var_148, 0xe)
                    int32_t rax_86 = var_140_1 + 0xe
                    var_140_1 = rax_86
                    
                    if (rax_86 s> 0)
                        sub_140594770(&var_148)
                    
                    UnDecorator::getReferenceType(var_148, u"bIsCompressed", 0x1c)
                    int32_t rcx_145 = *(rbx_2 + 0x20)
                    
                    if (((rcx_145 - 2) & 0xfffffff5) != 0 || rcx_145 == 0xa)
                        int64_t* rcx_146 = *(rbx_2 + 8)
                        arg_18.w = 0x2c
                        (*(*rcx_146 + 0x150))(rcx_146, &arg_18, 2)
                    
                    (*(*rbx_2 + 0x10))(rbx_2, &var_148)
                    int64_t* rcx_148 = *(rbx_2 + 8)
                    arg_18.w = 0x3a
                    (*(*rcx_148 + 0x150))(rcx_148, &arg_18, 2)
                    int16_t* var_c8 = nullptr
                    int32_t var_c0_1 = 0
                    sub_1405947f0(&var_c8, 5)
                    int32_t rsi_10 = var_c0_1 + 5
                    
                    if (rsi_10 s> 0)
                        sub_140594770(&var_c8)
                    
                    int16_t* r14_7 = var_c8
                    UnDecorator::getReferenceType(r14_7, u"true", 0xa)
                    int64_t* rcx_152 = *(rbx_2 + 8)
                    int16_t* const rdx_81
                    int32_t rsi_11
                    
                    if (rsi_10 == 0)
                        rsi_11 = 0
                        rdx_81 = &data_142d40450
                    else
                        rsi_11 = rsi_10 - 1
                        rdx_81 = r14_7
                    
                    (*(*rcx_152 + 0x150))(rcx_152, rdx_81, sx.q(rsi_11) * 2)
                    
                    if (r14_7 != 0)
                        sub_140a74f90(r14_7)
                    
                    *(rbx_2 + 0x20) = 9
                    int64_t rcx_154 = var_148
                    
                    if (rcx_154 != 0)
                        sub_140a74f90(rcx_154)
                
                if (r13_2[3].d s<= 1)
                    int64_t var_128 = 0
                    int32_t var_120_1 = 0
                    sub_1405947f0(&var_128, 0xf)
                    int32_t rax_98 = var_120_1 + 0xf
                    var_120_1 = rax_98
                    
                    if (rax_98 s> 0)
                        sub_140594770(&var_128)
                    
                    UnDecorator::getReferenceType(var_128, u"FileChunkParts", 0x1e)
                    int32_t rcx_170 = *(rbx_2 + 0x20)
                    
                    if (((rcx_170 - 2) & 0xfffffff5) != 0 || rcx_170 == 0xa)
                        int64_t* rcx_171 = *(rbx_2 + 8)
                        arg_18.w = 0x2c
                        (*(*rcx_171 + 0x150))(rcx_171, &arg_18, 2)
                    
                    (*(*rbx_2 + 0x10))(rbx_2, &var_128)
                    int64_t* rcx_173 = *(rbx_2 + 8)
                    arg_18.w = 0x3a
                    (*(*rcx_173 + 0x150))(rcx_173, &arg_18, 2)
                    int64_t* rcx_174 = *(rbx_2 + 8)
                    arg_18.w = 0x5b
                    (*(*rcx_174 + 0x150))(rcx_174, &arg_18, 2)
                    *(rbx_2 + 0x24) += 1
                    int64_t rsi_13 = sx.q(*(rbx_2 + 0x18))
                    int32_t rax_104 = (rsi_13 + 1).d
                    *(rbx_2 + 0x18) = rax_104
                    
                    if (rax_104 s> *(rbx_2 + 0x1c))
                        sub_1406105e0(rbx_2 + 0x10)
                    
                    *(*(rbx_2 + 0x10) + (rsi_13 << 2)) = 5
                    *(rbx_2 + 0x20) = 4
                    int64_t rcx_176 = var_128
                    
                    if (rcx_176 != 0)
                        sub_140a74f90(rcx_176)
                    
                    int32_t* r14_9 = r13_2[9]
                    void* r12_2 = &r14_9[sx.q(r13_2[0xa].d) * 6]
                    
                    if (r14_9 != r12_2)
                        int32_t rax_107 = *(rbx_2 + 0x20)
                        
                        do
                            if (rax_107 u> 0xc || not(test_bit(0x1015, rax_107)))
                                int64_t* rcx_178 = *(rbx_2 + 8)
                                arg_18.w = 0x2c
                                (*(*rcx_178 + 0x150))(rcx_178, &arg_18, 2)
                            
                            int64_t* rcx_179 = *(rbx_2 + 8)
                            arg_18.w = 0x7b
                            (*(*rcx_179 + 0x150))(rcx_179, &arg_18, 2)
                            *(rbx_2 + 0x24) += 1
                            int64_t rsi_14 = sx.q(*(rbx_2 + 0x18))
                            int32_t rax_110 = (rsi_14 + 1).d
                            *(rbx_2 + 0x18) = rax_110
                            
                            if (rax_110 s> *(rbx_2 + 0x1c))
                                sub_1406105e0(rbx_2 + 0x10)
                            
                            int64_t rax_111 = *(rbx_2 + 0x10)
                            int64_t var_118 = 0
                            int32_t var_110_1 = 0
                            *(rax_111 + (rsi_14 << 2)) = 6
                            *(rbx_2 + 0x20) = 2
                            sub_1405947f0(&var_118, 5)
                            int32_t rax_112 = var_110_1 + 5
                            var_110_1 = rax_112
                            
                            if (rax_112 s> 0)
                                sub_140594770(&var_118)
                            
                            UnDecorator::getReferenceType(var_118, u"Guid", 0xa)
                            int64_t var_50
                            sub_140b291e0(r14_9, &var_50, 0)
                            int32_t rcx_185 = *(rbx_2 + 0x20)
                            
                            if (((rcx_185 - 2) & 0xfffffff5) != 0 || rcx_185 == 0xa)
                                int64_t* rcx_186 = *(rbx_2 + 8)
                                arg_18.w = 0x2c
                                (*(*rcx_186 + 0x150))(rcx_186, &arg_18, 2)
                            
                            (*(*rbx_2 + 0x10))(rbx_2, &var_118)
                            int64_t* rcx_188 = *(rbx_2 + 8)
                            arg_18.w = 0x3a
                            (*(*rcx_188 + 0x150))(rcx_188, &arg_18, 2)
                            (*(*rbx_2 + 0x10))(rbx_2, &var_50)
                            *(rbx_2 + 0x20) = 7
                            int64_t rcx_190 = var_50
                            
                            if (rcx_190 != 0)
                                sub_140a74f90(rcx_190)
                            
                            int64_t rcx_191 = var_118
                            
                            if (rcx_191 != 0)
                                sub_140a74f90(rcx_191)
                            
                            int64_t var_108 = 0
                            int32_t var_100_1 = 0
                            sub_1405947f0(&var_108, 7)
                            int32_t rax_118 = var_100_1 + 7
                            var_100_1 = rax_118
                            
                            if (rax_118 s> 0)
                                sub_140594770(&var_108)
                            
                            UnDecorator::getReferenceType(var_108, u"Offset", 0xe)
                            sub_140a24120(&var_198, &r14_9[4], 4)
                            int32_t rcx_196 = *(rbx_2 + 0x20)
                            
                            if (((rcx_196 - 2) & 0xfffffff5) != 0 || rcx_196 == 0xa)
                                int64_t* rcx_197 = *(rbx_2 + 8)
                                arg_18.w = 0x2c
                                (*(*rcx_197 + 0x150))(rcx_197, &arg_18, 2)
                            
                            (*(*rbx_2 + 0x10))(rbx_2, &var_108)
                            int64_t* rcx_199 = *(rbx_2 + 8)
                            arg_18.w = 0x3a
                            (*(*rcx_199 + 0x150))(rcx_199, &arg_18, 2)
                            (*(*rbx_2 + 0x10))(rbx_2, &var_198)
                            *(rbx_2 + 0x20) = 7
                            int64_t rcx_201 = var_198
                            
                            if (rcx_201 != 0)
                                sub_140a74f90(rcx_201)
                            
                            int64_t rcx_202 = var_108
                            
                            if (rcx_202 != 0)
                                sub_140a74f90(rcx_202)
                            
                            int64_t var_f8 = 0
                            int32_t var_f0_1 = 0
                            sub_1405947f0(&var_f8, 5)
                            int32_t rax_124 = var_f0_1 + 5
                            var_f0_1 = rax_124
                            
                            if (rax_124 s> 0)
                                sub_140594770(&var_f8)
                            
                            UnDecorator::getReferenceType(var_f8, u"Size", 0xa)
                            sub_140a24120(&var_1d8, &r14_9[5], 4)
                            int32_t rcx_207 = *(rbx_2 + 0x20)
                            
                            if (((rcx_207 - 2) & 0xfffffff5) != 0 || rcx_207 == 0xa)
                                int64_t* rcx_208 = *(rbx_2 + 8)
                                arg_18.w = 0x2c
                                (*(*rcx_208 + 0x150))(rcx_208, &arg_18, 2)
                            
                            (*(*rbx_2 + 0x10))(rbx_2, &var_f8)
                            int64_t* rcx_210 = *(rbx_2 + 8)
                            arg_18.w = 0x3a
                            (*(*rcx_210 + 0x150))(rcx_210, &arg_18, 2)
                            (*(*rbx_2 + 0x10))(rbx_2, &var_1d8)
                            *(rbx_2 + 0x20) = 7
                            int64_t rcx_212 = var_1d8
                            
                            if (rcx_212 != 0)
                                sub_140a74f90(rcx_212)
                            
                            int64_t rcx_213 = var_f8
                            
                            if (rcx_213 != 0)
                                sub_140a74f90(rcx_213)
                            
                            int64_t* rcx_214 = *(rbx_2 + 8)
                            *(rbx_2 + 0x24) -= 1
                            arg_18.w = 0x7d
                            (*(*rcx_214 + 0x150))(rcx_214, &arg_18, 2)
                            *(rbx_2 + 0x18) -= 1
                            sub_140679af0(rbx_2 + 0x10)
                            r14_9 = &r14_9[6]
                            *(rbx_2 + 0x20) = 3
                            rax_107 = 3
                        while (r14_9 != r12_2)
                        
                        r13_2 = arg_20
                    
                    int64_t* rcx_216 = *(rbx_2 + 8)
                    *(rbx_2 + 0x24) -= 1
                    arg_18.w = 0x5d
                    (*(*rcx_216 + 0x150))(rcx_216, &arg_18, 2)
                    *(rbx_2 + 0x18) -= 1
                    sub_140679af0(rbx_2 + 0x10)
                    *(rbx_2 + 0x20) = 5
                else
                    int64_t var_138 = 0
                    int32_t var_130_1 = 0
                    sub_1405947f0(&var_138, 0xe)
                    int32_t rax_92 = var_130_1 + 0xe
                    var_130_1 = rax_92
                    
                    if (rax_92 s> 0)
                        sub_140594770(&var_138)
                    
                    UnDecorator::getReferenceType(var_138, u"SymlinkTarget", 0x1c)
                    int32_t rsi_12 = r13_2[3].d
                    int64_t r14_8 = r13_2[2]
                    var_1c8 = 0
                    var_1c0.d = rsi_12
                    
                    if (rsi_12 != 0)
                        sub_1405a4c70(&var_1c8, rsi_12, 0)
                        memcpy(var_1c8, r14_8, rsi_12 * 2)
                    else
                        var_1c0:4.d = 0
                    
                    int32_t rcx_160 = *(rbx_2 + 0x20)
                    
                    if (((rcx_160 - 2) & 0xfffffff5) != 0 || rcx_160 == 0xa)
                        int64_t* rcx_161 = *(rbx_2 + 8)
                        arg_18.w = 0x2c
                        (*(*rcx_161 + 0x150))(rcx_161, &arg_18, 2)
                    
                    (*(*rbx_2 + 0x10))(rbx_2, &var_138)
                    int64_t* rcx_163 = *(rbx_2 + 8)
                    arg_18.w = 0x3a
                    (*(*rcx_163 + 0x150))(rcx_163, &arg_18, 2)
                    (*(*rbx_2 + 0x10))(rbx_2, &var_1c8)
                    *(rbx_2 + 0x20) = 7
                    uint64_t rcx_165 = var_1c8
                    
                    if (rcx_165 != 0)
                        sub_140a74f90(rcx_165)
                    
                    int64_t rcx_166 = var_138
                    
                    if (rcx_166 != 0)
                        sub_140a74f90(rcx_166)
                
                if (r13_2[8].d s> 0)
                    var_1e8 = 0
                    int32_t var_1e0_1 = 0
                    sub_1405947f0(&var_1e8, 0xc)
                    int32_t rax_132 = var_1e0_1 + 0xc
                    var_1e0_1 = rax_132
                    
                    if (rax_132 s> 0)
                        sub_140594770(&var_1e8)
                    
                    UnDecorator::getReferenceType(var_1e8, u"InstallTags", 0x18)
                    int32_t rcx_221 = *(rbx_2 + 0x20)
                    
                    if (((rcx_221 - 2) & 0xfffffff5) != 0 || rcx_221 == 0xa)
                        int64_t* rcx_222 = *(rbx_2 + 8)
                        arg_18.w = 0x2c
                        (*(*rcx_222 + 0x150))(rcx_222, &arg_18, 2)
                    
                    (*(*rbx_2 + 0x10))(rbx_2, &var_1e8)
                    int64_t* rcx_224 = *(rbx_2 + 8)
                    arg_18.w = 0x3a
                    (*(*rcx_224 + 0x150))(rcx_224, &arg_18, 2)
                    int64_t* rcx_225 = *(rbx_2 + 8)
                    arg_18.w = 0x5b
                    (*(*rcx_225 + 0x150))(rcx_225, &arg_18, 2)
                    *(rbx_2 + 0x24) += 1
                    int64_t rsi_15 = sx.q(*(rbx_2 + 0x18))
                    int32_t rax_138 = (rsi_15 + 1).d
                    *(rbx_2 + 0x18) = rax_138
                    
                    if (rax_138 s> *(rbx_2 + 0x1c))
                        sub_1406105e0(rbx_2 + 0x10)
                    
                    *(*(rbx_2 + 0x10) + (rsi_15 << 2)) = 5
                    *(rbx_2 + 0x20) = 4
                    int64_t rcx_227 = var_1e8
                    
                    if (rcx_227 != 0)
                        sub_140a74f90(rcx_227)
                    
                    int64_t rsi_16 = r13_2[7]
                    int64_t r14_12 = (sx.q(r13_2[8].d) << 4) + rsi_16
                    
                    if (rsi_16 != r14_12)
                        int32_t rcx_228 = *(rbx_2 + 0x20)
                        
                        do
                            if (((rcx_228 - 2) & 0xfffffff5) != 0 || rcx_228 == 0xa)
                                int64_t* rcx_229 = *(rbx_2 + 8)
                                arg_18.w = 0x2c
                                (*(*rcx_229 + 0x150))(rcx_229, &arg_18, 2)
                            
                            (*(*rbx_2 + 0x10))(rbx_2, rsi_16)
                            rsi_16 += 0x10
                            *(rbx_2 + 0x20) = 7
                            rcx_228 = 7
                        while (rsi_16 != r14_12)
                    
                    int64_t* rcx_231 = *(rbx_2 + 8)
                    *(rbx_2 + 0x24) -= 1
                    arg_18.w = 0x5d
                    (*(*rcx_231 + 0x150))(rcx_231, &arg_18, 2)
                    *(rbx_2 + 0x18) -= 1
                    sub_140679af0(rbx_2 + 0x10)
                    *(rbx_2 + 0x20) = 5
                
                int64_t* rcx_233 = *(rbx_2 + 8)
                *(rbx_2 + 0x24) -= 1
                arg_18.w = 0x7d
                (*(*rcx_233 + 0x150))(rcx_233, &arg_18, 2)
                *(rbx_2 + 0x18) -= 1
                sub_140679af0(rbx_2 + 0x10)
                r13_2 = &r13_2[0xc]
                *(rbx_2 + 0x20) = 3
                rax_58 = 3
                arg_20 = r13_2
            while (r13_2 != var_1f8)
            
            r12_1 = arg_8
        
        sub_140944d20(rbx_2)
        var_1e8 = 0
        int32_t var_1e0_2 = 0
        sub_1405947f0(&var_1e8, 0xe)
        int32_t rax_145 = var_1e0_2 + 0xe
        var_1e0_2 = rax_145
        
        if (rax_145 s> 0)
            sub_140594770(&var_1e8)
        
        UnDecorator::getReferenceType(var_1e8, u"ChunkHashList", 0x1c)
        sub_140939a80(rbx_2, &var_1e8)
        int64_t rcx_240 = var_1e8
        
        if (rcx_240 != 0)
            sub_140a74f90(rcx_240)
        
        int32_t* i = *(r12_1 + 0xe8)
        
        for (void* r14_15 = &i[sx.q(*(r12_1 + 0xf0)) * 0x10]; i != r14_15; i = &i[0x10])
            sub_140a24120(&var_1d8, &i[4], 8)
            sub_140b291e0(i, &var_198, 0)
            int32_t rcx_243 = *(rbx_2 + 0x20)
            
            if (((rcx_243 - 2) & 0xfffffff5) != 0 || rcx_243 == 0xa)
                int64_t* rcx_244 = *(rbx_2 + 8)
                arg_8.w = 0x2c
                (*(*rcx_244 + 0x150))(rcx_244, &arg_8, 2)
            
            (*(*rbx_2 + 0x10))(rbx_2, &var_198)
            int64_t* rcx_246 = *(rbx_2 + 8)
            arg_8.w = 0x3a
            (*(*rcx_246 + 0x150))(rcx_246, &arg_8, 2)
            (*(*rbx_2 + 0x10))(rbx_2, &var_1d8)
            *(rbx_2 + 0x20) = 7
            int64_t rcx_248 = var_1d8
            
            if (rcx_248 != 0)
                sub_140a74f90(rcx_248)
            
            int64_t rcx_249 = var_198
            
            if (rcx_249 != 0)
                sub_140a74f90(rcx_249)
        
        sub_140944d70(rbx_2)
        var_1e8 = 0
        int32_t var_1e0_3 = 0
        sub_1405947f0(&var_1e8, 0xd)
        int32_t rax_151 = var_1e0_3 + 0xd
        var_1e0_3 = rax_151
        
        if (rax_151 s> 0)
            sub_140594770(&var_1e8)
        
        UnDecorator::getReferenceType(var_1e8, u"ChunkShaList", 0x1a)
        sub_140939a80(rbx_2, &var_1e8)
        int64_t rcx_255 = var_1e8
        
        if (rcx_255 != 0)
            sub_140a74f90(rcx_255)
        
        int32_t* i_1 = *(r12_1 + 0xe8)
        
        for (void* r14_18 = &i_1[sx.q(*(r12_1 + 0xf0)) * 0x10]; i_1 != r14_18; i_1 = &i_1[0x10])
            sub_141829dd0(&var_1d8, &i_1[6], 0x14)
            sub_140b291e0(i_1, &var_198, 0)
            int32_t rcx_258 = *(rbx_2 + 0x20)
            
            if (((rcx_258 - 2) & 0xfffffff5) != 0 || rcx_258 == 0xa)
                int64_t* rcx_259 = *(rbx_2 + 8)
                arg_8.w = 0x2c
                (*(*rcx_259 + 0x150))(rcx_259, &arg_8, 2)
            
            (*(*rbx_2 + 0x10))(rbx_2, &var_198)
            int64_t* rcx_261 = *(rbx_2 + 8)
            arg_8.w = 0x3a
            (*(*rcx_261 + 0x150))(rcx_261, &arg_8, 2)
            (*(*rbx_2 + 0x10))(rbx_2, &var_1d8)
            *(rbx_2 + 0x20) = 7
            int64_t rcx_263 = var_1d8
            
            if (rcx_263 != 0)
                sub_140a74f90(rcx_263)
            
            int64_t rcx_264 = var_198
            
            if (rcx_264 != 0)
                sub_140a74f90(rcx_264)
        
        sub_140944d70(rbx_2)
        var_1e8 = 0
        int32_t var_1e0_4 = 0
        sub_1405947f0(&var_1e8, 0xe)
        int32_t rax_157 = var_1e0_4 + 0xe
        var_1e0_4 = rax_157
        
        if (rax_157 s> 0)
            sub_140594770(&var_1e8)
        
        UnDecorator::getReferenceType(var_1e8, u"DataGroupList", 0x1c)
        sub_140939a80(rbx_2, &var_1e8)
        int64_t rcx_270 = var_1e8
        
        if (rcx_270 != 0)
            sub_140a74f90(rcx_270)
        
        int32_t* i_2 = *(r12_1 + 0xe8)
        
        for (void* r14_21 = &i_2[sx.q(*(r12_1 + 0xf0)) * 0x10]; i_2 != r14_21; i_2 = &i_2[0x10])
            sub_140a24120(&var_1d8, &i_2[0xb], 1)
            sub_140b291e0(i_2, &var_198, 0)
            int32_t rcx_273 = *(rbx_2 + 0x20)
            
            if (((rcx_273 - 2) & 0xfffffff5) != 0 || rcx_273 == 0xa)
                int64_t* rcx_274 = *(rbx_2 + 8)
                arg_8.w = 0x2c
                (*(*rcx_274 + 0x150))(rcx_274, &arg_8, 2)
            
            (*(*rbx_2 + 0x10))(rbx_2, &var_198)
            int64_t* rcx_276 = *(rbx_2 + 8)
            arg_8.w = 0x3a
            (*(*rcx_276 + 0x150))(rcx_276, &arg_8, 2)
            (*(*rbx_2 + 0x10))(rbx_2, &var_1d8)
            *(rbx_2 + 0x20) = 7
            int64_t rcx_278 = var_1d8
            
            if (rcx_278 != 0)
                sub_140a74f90(rcx_278)
            
            int64_t rcx_279 = var_198
            
            if (rcx_279 != 0)
                sub_140a74f90(rcx_279)
        
        sub_140944d70(rbx_2)
        var_1e8 = 0
        int32_t var_1e0_5 = 0
        sub_1405947f0(&var_1e8, 0x12)
        int32_t rax_163 = var_1e0_5 + 0x12
        var_1e0_5 = rax_163
        
        if (rax_163 s> 0)
            sub_140594770(&var_1e8)
        
        UnDecorator::getReferenceType(var_1e8, u"ChunkFilesizeList", 0x24)
        sub_140939a80(rbx_2, &var_1e8)
        int64_t rcx_285 = var_1e8
        
        if (rcx_285 != 0)
            sub_140a74f90(rcx_285)
        
        int32_t* i_3 = *(r12_1 + 0xe8)
        
        for (void* r14_24 = &i_3[sx.q(*(r12_1 + 0xf0)) * 0x10]; i_3 != r14_24; i_3 = &i_3[0x10])
            sub_140a24120(&var_1d8, &i_3[0xe], 8)
            sub_140b291e0(i_3, &var_198, 0)
            int32_t rcx_288 = *(rbx_2 + 0x20)
            
            if (((rcx_288 - 2) & 0xfffffff5) != 0 || rcx_288 == 0xa)
                int64_t* rcx_289 = *(rbx_2 + 8)
                arg_8.w = 0x2c
                (*(*rcx_289 + 0x150))(rcx_289, &arg_8, 2)
            
            (*(*rbx_2 + 0x10))(rbx_2, &var_198)
            int64_t* rcx_291 = *(rbx_2 + 8)
            arg_8.w = 0x3a
            (*(*rcx_291 + 0x150))(rcx_291, &arg_8, 2)
            (*(*rbx_2 + 0x10))(rbx_2, &var_1d8)
            *(rbx_2 + 0x20) = 7
            int64_t rcx_293 = var_1d8
            
            if (rcx_293 != 0)
                sub_140a74f90(rcx_293)
            
            int64_t rcx_294 = var_198
            
            if (rcx_294 != 0)
                sub_140a74f90(rcx_294)
        
        sub_140944d70(rbx_2)
        var_1e8 = 0
        int32_t var_1e0_6 = 0
        sub_1405947f0(&var_1e8, 0xd)
        int32_t rax_169 = var_1e0_6 + 0xd
        var_1e0_6 = rax_169
        
        if (rax_169 s> 0)
            sub_140594770(&var_1e8)
        
        UnDecorator::getReferenceType(var_1e8, u"CustomFields", 0x1a)
        sub_140939a80(rbx_2, &var_1e8)
        int64_t rcx_300 = var_1e8
        
        if (rcx_300 != 0)
            sub_140a74f90(rcx_300)
        
        var_1b8 = 0
        int32_t rdx_162 = *(r12_1 + 0x130)
        void* r8_24 = r12_1 + 0x118
        void* var_1b0_1 = r8_24
        int32_t var_1b4_2 = 1
        int32_t var_1a8_2 = 0xffffffff
        int64_t var_1a4_1 = 0
        
        if (rdx_162 != 0)
            sub_14059bdd0(&var_1b8)
            rdx_162 = *(r12_1 + 0x130)
            r8_24 = r12_1 + 0x118
        
        zmm2 = var_1a8_2.o
        var_1a4_1.d = rdx_162
        double var_60_1[0x2] = zmm2
        int128_t var_70_1 = var_1b8.o
        zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
        var_b8 = (r12_1 + 0x108).o
        int128_t var_a8_1 = var_70_1
        int64_t var_98_1 = zmm2.q
        
        while (true)
            int64_t rax_170 = sx.q(var_a8_1:0xc.d)
            int64_t* rdx_163 = var_b8.q
            
            if (rax_170.d == ((0xffffffff << (rdx_162.b & 0x1f)).q u>> 0x20).d
                    && var_a8_1.q == r8_24 && rdx_163 == r12_1 + 0x108)
                sub_140944d70(rbx_2)
                sub_140944d70(rbx_2)
                int64_t result = (*(*rbx_2 + 8))(rbx_2)
                
                if (rax_3 != 0)
                    rax_3[1].d -= 1
                    
                    if (rax_3[1].d == 1)
                        result = (**rax_3)(rax_3)
                        int32_t temp7_1 = *(rax_3 + 0xc)
                        *(rax_3 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            return (*rax_3)[1](rax_3, 1)
                
                return result
            
            int64_t rcx_304 = rax_170 * 5
            var_1c8 = 0
            int64_t rax_171 = *rdx_163
            int32_t rsi_18 = *(rax_171 + (rcx_304 << 3) + 0x18)
            void* r14_25 = rax_171 + (rcx_304 << 3)
            int64_t r15_3 = *(r14_25 + 0x10)
            var_1c0.d = rsi_18
            
            if (rsi_18 != 0)
                sub_1405a4c70(&var_1c8, rsi_18, 0)
                memcpy(var_1c8, r15_3, rsi_18 * 2)
            else
                var_1c0:4.d = 0
            
            int32_t rcx_307 = *(rbx_2 + 0x20)
            
            if (((rcx_307 - 2) & 0xfffffff5) != 0 || rcx_307 == 0xa)
                int64_t* rcx_308 = *(rbx_2 + 8)
                arg_8.w = 0x2c
                (*(*rcx_308 + 0x150))(rcx_308, &arg_8, 2)
            
            (*(*rbx_2 + 0x10))(rbx_2, r14_25)
            int64_t* rcx_310 = *(rbx_2 + 8)
            arg_8.w = 0x3a
            (*(*rcx_310 + 0x150))(rcx_310, &arg_8, 2)
            (*(*rbx_2 + 0x10))(rbx_2, &var_1c8)
            *(rbx_2 + 0x20) = 7
            uint64_t rcx_312 = var_1c8
            
            if (rcx_312 != 0)
                sub_140a74f90(rcx_312)
            
            var_a8_1:8.d &= not.d(var_b8:0xc.d)
            sub_14059bdd0(&var_b8:8)
            r8_24 = r12_1 + 0x118
    
    int64_t r14_3 = *rdx_32 + rax_39 * 0x18
    int32_t rcx_61 = *(rbx_2 + 0x20)
    
    if (((rcx_61 - 2) & 0xfffffff5) != 0 || rcx_61 == 0xa)
        int64_t* rcx_62 = *(rbx_2 + 8)
        arg_18.w = 0x2c
        (*(*rcx_62 + 0x150))(rcx_62, &arg_18, 2)
    
    (*(*rbx_2 + 0x10))(rbx_2, r14_3)
    int32_t rax_45 = not.d(var_b8:0xc.d)
    *(rbx_2 + 0x20) = 7
    var_a8:8.d &= rax_45
    sub_14059bdd0(&var_b8:8)
