// 函数: sub_1418472f0
// 地址: 0x1418472f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
CRITICAL_SECTION* lpCriticalSection = arg1 + 0x78
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x68) = 1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x69) = 1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

int64_t* rcx_4 = *(arg1 + 0xd8)
int32_t rdx_1 = (*(*rcx_4 + 0x48))(rcx_4, *(arg1 + 0xe0))
int32_t rdi = *(arg1 + 0x30)
int64_t rbx = *(arg1 + 0x28)
int16_t* var_2a8 = nullptr
sub_1405a4c70(&var_2a8, sbb.d(rdx_1, rdx_1, rdi != 0) + 0xd + rdi, 0)
memcpy(var_2a8, rbx, rdi * 2)
int32_t rdx_6 = sub_140a2cf70(&var_2a8, u"$resumeData", 0xb)
int32_t rbx_1 = *(arg1 + 0x40)
int64_t rdi_1 = *(arg1 + 0x38)
int16_t* var_288 = nullptr
sub_1405a4c70(&var_288, sbb.d(rdx_6, rdx_6, rbx_1 != 0) + 0xd + rbx_1, 0)
memcpy(var_288, rdi_1, rbx_1 * 2)
sub_140a2cf70(&var_288, u"$resumeData", 0xb)
int64_t* rcx_11 = *(arg1 + 0xb0)
int16_t* const rdx_11 = &data_142d40450

if (rdi != 0)
    rdx_11 = var_2a8

if ((*(*rcx_11 + 0x80))(rcx_11, rdx_11) != 0)
    int16_t* const r8_4 = &data_142d40450
    int64_t* rcx_12 = *(arg1 + 0xb0)
    int16_t* const rdx_12 = &data_142d40450
    
    if (rdi != 0)
        r8_4 = var_2a8
    
    if (rbx_1 != 0)
        rdx_12 = var_288
    
    (*(*rcx_12 + 0x70))(rcx_12, rdx_12, r8_4)

int16_t** var_2e8 = &var_288
int64_t* var_1c8
sub_141820f80(&var_1c8, *(arg1 + 0xb0), *(arg1 + 0x10), arg1 + 0x28, var_2e8)
int64_t var_a8
char var_58

if (var_58 != 0)
    int64_t* rbx_2 = *(arg1 + 0x48)
    void* r13_3 = &rbx_2[sx.q(*(arg1 + 0x50)) * 2]
    
    if (rbx_2 != r13_3)
        do
            sub_14182a8a0(&var_1c8, rbx_2)
            void var_268
            
            if (*sub_140960120(&var_a8, &var_268, rbx_2) != 0xffffffff)
                int16_t* const rdi_2
                
                if (rbx_2[1].d == 0)
                    rdi_2 = &data_142d40450
                else
                    rdi_2 = *rbx_2
                
                sub_140b19e60()
                sub_140b1f700(&data_1439a8bd0, 
                    FBuildPatchFileConstructor: Deleting incompatible stage file %s", rdi_2)
                int32_t rax_11 = rbx_2[1].d
                int32_t rdi_3 = *(arg1 + 0x30)
                int32_t r15_1 = rax_11 - 1
                
                if (rax_11 == 0)
                    r15_1 = 0
                
                int32_t rax_13
                
                if (rdi_3 == 0)
                    rax_13 = rdi_3 + 2
                
                if (rdi_3 != 0 || r15_1 == 0xffffffff)
                    rax_13 = 1
                
                int16_t* var_298 = nullptr
                int32_t rcx_16 = rax_13 + r15_1
                int64_t r12_1 = *(arg1 + 0x28)
                
                if (rdi_3 != 0 || rcx_16 != 0)
                    sub_1405a4c70(&var_298, rdi_3 + rcx_16, 0)
                    memcpy(var_298, r12_1, rdi_3 * 2)
                else
                    int32_t var_28c_1 = 0
                
                sub_140a2cf70(&var_298, *rbx_2, r15_1)
                int64_t* rcx_20 = *(arg1 + 0xb0)
                int16_t* const rdx_19 = &data_142d40450
                
                if (rdi_3 != 0)
                    rdx_19 = var_298
                
                (*(*rcx_20 + 0x68))(rcx_20, rdx_19)
                int16_t* rcx_21 = var_298
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
            
            rbx_2 = &rbx_2[2]
        while (rbx_2 != r13_3)
        
        lpCriticalSection = arg1 + 0x78

int64_t* rcx_22 = *(arg1 + 0x10)
int64_t var_218
__builtin_memset(&var_218, 0, 0x2c)
int32_t var_1ec = 0x80
int32_t var_1e8 = 0xffffffff
int32_t var_1e4 = 0
int64_t var_1d8 = 0
int32_t var_1d0 = 0
(*(*rcx_22 + 8))(rcx_22, &var_218, 0)
int16_t* const rdi_4 = &data_142d40450
int16_t* var_1a8
int32_t var_1a0

if (var_1a0 != 0)
    rdi_4 = var_1a8

int64_t rbx_3 = *var_1c8
int64_t var_230
int64_t* rax_17 = sub_14181c830(&var_230, &var_218, &data_142d576a0)
(*(rbx_3 + 0x60))(var_1c8, rdi_4, rax_17)
int64_t rcx_25 = var_230

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t* rcx_26 = *(arg1 + 0xd8)
(*(*rcx_26 + 8))(rcx_26)
int128_t zmm6 = 0x3f000000
int16_t* var_2d8 = nullptr
int32_t var_2d0 = 0
label_141847686:
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rdi_5 = zx.q(data_14401b1a0)
int64_t var_148
void* var_108
int64_t var_f8
void* var_b8

while (true)
    EnterCriticalSection(lpCriticalSection)
    int64_t rbx_4 = sx.q(*(arg1 + 0xa8))
    
    if (rbx_4.d s> 0)
        int64_t rcx_28 = *(arg1 + 0xa0)
        int64_t rax_20 = rbx_4 * 2
        int16_t* r13_4 = *(rcx_28 + (rax_20 << 3) - 0x10)
        *(rcx_28 + (rax_20 << 3) - 0x10) = 0
        int32_t rdx_23 = *(rcx_28 + (rax_20 << 3) - 8)
        int32_t rdx_24 = *(rcx_28 + (rax_20 << 3) - 4)
        *(rcx_28 + (rax_20 << 3) - 8) = 0
        int64_t rdi_6 = sx.q(*(arg1 + 0xa8))
        int64_t r15_3 = rdi_6 << 4
        int64_t rcx_29 = *(r15_3 + *(arg1 + 0xa0) - 0x10)
        int32_t rax_22 = rdi_6.d
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
            rax_22 = *(arg1 + 0xa8)
        
        int32_t rcx_31 = rax_22 - (rdi_6 - 1).d
        
        if (rcx_31 != 1)
            int64_t rax_23 = *(arg1 + 0xa0)
            memmove(rax_23 - 0x10 + r15_3, (rdi_6 << 4) + rax_23, (rcx_31 - 1) << 4)
            rax_22 = *(arg1 + 0xa8)
        
        int16_t* rcx_35 = var_2d8
        *(arg1 + 0xa8) = rax_22 - 1
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        rdi_5 = zx.q(data_14401b1a0)
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        var_2d0 = rdx_23
        var_2d0 = rdx_24
        var_2d8 = r13_4
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    if (rbx_4.d s<= 0)
        break
    
    bool z_1
    
    if (0 == *(arg1 + 0x74))
        *(arg1 + 0x74) = 0
        z_1 = true
    else
        *(arg1 + 0x74)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx_37 = *(arg1 + 0x10)
    int64_t* rax_29 = (*(*rcx_37 + 0x68))(rcx_37, &var_2d8)
    int64_t r12
    r12.b = rax_29 != 0
    
    if (rax_29 == 0)
        int64_t* rcx_55 = *(arg1 + 0xc8)
        
        if ((*(*rcx_55 + 8))(rcx_55) == 0)
            int64_t var_2b8 = 0
            int32_t var_2b0_1 = 0
            sub_1405947f0(&var_2b8, 0x16)
            int32_t rax_51 = var_2b0_1 + 0x16
            var_2b0_1 = rax_51
            
            if (rax_51 s> 0)
                sub_140594770(&var_2b8)
            
            UnDecorator::getReferenceType(var_2b8, u"Missing File Manifest", 0x2c)
            int64_t* rcx_59 = *(arg1 + 0xd0)
            (*(*rcx_59 + 0x20))(rcx_59, &var_2d8, 0xffffffff, &var_2b8, var_2e8)
            int64_t rcx_60 = var_2b8
            
            if (rcx_60 != 0)
                sub_140a74f90(rcx_60)
        
        if (data_143cd6ff0 s> *(0x14 + *(ThreadLocalStoragePointer + (rdi_5 << 3))))
            _Init_thread_header(&data_143cd6ff0)
            
            if (data_143cd6ff0 == 0xffffffff)
                sub_140a96080(&data_143cd6fd8)
                atexit(sub_142cb0d20)
                _Init_thread_footer(&data_143cd6ff0)
        
        int16_t* var_260 = data_143cd6fd8
        void* rax_55 = data_143cd6fe0
        void* var_258_1 = rax_55
        
        if (rax_55 != 0)
            *(rax_55 + 8) += 1
        
        int64_t* rcx_62 = *(arg1 + 0xc8)
        int32_t var_250_1 = data_143cd6fe8
        var_2e8 = &var_260
        (*(*rcx_62 + 0x38))(rcx_62, 2, data_1439c6790, 0, var_2e8)
    else
        int64_t rdx_29 = rax_29[0xb]
        int64_t* rcx_38 = *(arg1 + 0xd8)
        int32_t var_270
        var_270.q = rdx_29
        (*(*rcx_38 + 0x20))(rcx_38, &var_2d8, rdx_29)
        int32_t r15_4 = var_2d0
        int32_t var_f0
        int32_t var_c4
        int32_t rdi_7
        
        if (var_f0 == var_c4)
        label_141847899:
            rdi_7 = -1
        else
            int32_t rcx_39
            int16_t* rdx_31
            
            if (r15_4 == 0)
                rdx_31 = &data_142d40450
                rcx_39 = 0
            else
                rdx_31 = var_2d8
                rcx_39 = r15_4 - 1
            
            void var_c0
            void* rcx_42 = &var_c0
            int32_t var_b0
            int64_t rdx_33 = sx.q(var_b0 - 1) & sx.q(sub_1405969c0(rcx_39, rdx_31))
            
            if (var_b8 != 0)
                rcx_42 = var_b8
            
            rdi_7 = *(rcx_42 + (rdx_33 << 2))
            
            if (rdi_7 == 0xffffffff)
            label_141847899_1:
                rdi_7 = -1
            else
                int64_t rcx_43 = var_f8
                
                while (true)
                    int16_t* const rdx_34 = &data_142d40450
                    
                    if (r15_4 != 0)
                        rdx_34 = var_2d8
                    
                    int64_t rbx_5 = sx.q(rdi_7) * 3
                    int16_t* const rcx_44
                    
                    if (*(rcx_43 + (rbx_5 << 3) + 8) == 0)
                        rcx_44 = &data_142d40450
                    else
                        rcx_44 = *(rcx_43 + (rbx_5 << 3))
                    
                    r15_4 = var_2d0
                    
                    if (sub_140a54510(rcx_44, rdx_34) == 0)
                        break
                    
                    rcx_43 = var_f8
                    rdi_7 = *(rcx_43 + (rbx_5 << 3) + 0x10)
                    
                    if (rdi_7 == 0xffffffff)
                        goto label_141847899_1
        
        int32_t var_140
        int32_t var_114
        int32_t rbx_6
        
        if (var_140 == var_114)
        label_14184794f:
            rbx_6 = -1
        else
            int32_t rcx_45
            int16_t* rdx_35
            
            if (r15_4 == 0)
                rdx_35 = &data_142d40450
                rcx_45 = 0
            else
                rdx_35 = var_2d8
                rcx_45 = r15_4 - 1
            
            void var_110
            void* rcx_48 = &var_110
            int32_t var_100
            int64_t rdx_37 = sx.q(var_100 - 1) & sx.q(sub_1405969c0(rcx_45, rdx_35))
            
            if (var_108 != 0)
                rcx_48 = var_108
            
            rbx_6 = *(rcx_48 + (rdx_37 << 2))
            
            if (rbx_6 == 0xffffffff)
            label_14184794f_1:
                rbx_6 = -1
            else
                int64_t rcx_49 = var_148
                
                while (true)
                    int16_t* rdx_38 = &data_142d40450
                    
                    if (r15_4 != 0)
                        rdx_38 = var_2d8
                    
                    r12 = sx.q(rbx_6) * 3
                    int16_t* const rcx_50
                    
                    if (*(rcx_49 + (r12 << 3) + 8) == 0)
                        rcx_50 = &data_142d40450
                    else
                        rcx_50 = *(rcx_49 + (r12 << 3))
                    
                    if (sub_140a54510(rcx_50, rdx_38) == 0)
                        break
                    
                    rcx_49 = var_148
                    rbx_6 = *(rcx_49 + (r12 << 3) + 0x10)
                    
                    if (rbx_6 == 0xffffffff)
                        goto label_14184794f_1
                    
                    r15_4 = var_2d0
        
        bool r8_15 = rbx_6 != 0xffffffff
        
        if (rdi_7 == 0xffffffff)
            char rax_48
            rax_48, zmm6 = sub_14182f800(arg1, rax_29, r8_15)
            r12 = zx.q(rax_48)
        else
            int64_t* rcx_51 = *(arg1 + 0xd8)
            r12.b = 1
            *(arg1 + 0xe8) += var_270.q
            (*(*rcx_51 + 0x40))(rcx_51, *(arg1 + 0xe8), r8_15)
            int16_t* rbx_7 = &data_142d40450
            
            if (var_2d0 != 0)
                rbx_7 = var_2d8
            
            sub_140b19e60()
            sub_140b1f700(&data_1439a8bd0, FBuildPatchFileConstructor: Skipping completed file %s", 
                rbx_7)
            int64_t i = rax_29[9]
            
            for (int64_t rdi_8 = i + sx.q(rax_29[0xa].d) * 0x18; i != rdi_8; i += 0x18)
                int64_t* rcx_53 = *(arg1 + 0xc0)
                
                if ((*(*rcx_53 + 0x30))(rcx_53, i) == 0 || r12.b == 0)
                    r12.b = 0
                else
                    r12.b = 1
        
        rdi_5 = zx.q(data_14401b1a0)
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    
    if (r12.b == 0)
        *(arg1 + 0x74) = 1
        
        if (data_143cd6ff0 s> *(0x14 + *(ThreadLocalStoragePointer + (rdi_5 << 3))))
            _Init_thread_header(&data_143cd6ff0)
            
            if (data_143cd6ff0 == 0xffffffff)
                sub_140a96080(&data_143cd6fd8)
                atexit(sub_142cb0d20)
                _Init_thread_footer(&data_143cd6ff0)
        
        int16_t* var_248 = data_143cd6fd8
        void* rax_69 = data_143cd6fe0
        void* var_240_1 = rax_69
        
        if (rax_69 != 0)
            *(rax_69 + 8) += 1
        
        int64_t* rcx_76 = *(arg1 + 0xc8)
        int32_t var_238_1 = data_143cd6fe8
        var_2e8 = &var_248
        (*(*rcx_76 + 0x38))(rcx_76, 2, data_1439c6778, 0, var_2e8)
    else if (*(arg1 + 0x58) == 1)
        int32_t rdi_10
        
        if (var_2d0 == 0)
            rdi_10 = 0
        else
            rdi_10 = var_2d0 - 1
        
        int32_t rbx_8 = *(arg1 + 0x20)
        int32_t rax_59
        
        if (rbx_8 == 0)
            rax_59 = rbx_8 + 2
        
        if (rbx_8 != 0 || rdi_10 == 0xffffffff)
            rax_59 = 1
        
        int64_t r15_5 = *(arg1 + 0x18)
        int32_t rcx_63 = rdi_10 + rax_59
        int16_t* var_2c8 = nullptr
        
        if (rbx_8 != 0 || rcx_63 != 0)
            sub_1405a4c70(&var_2c8, rbx_8 + rcx_63, 0)
            memcpy(var_2c8, r15_5, rbx_8 * 2)
        else
            int32_t var_2bc_1 = rcx_63
        
        sub_140a2cf70(&var_2c8, var_2d8, rdi_10)
        sub_140b21570(&var_2c8)
        Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_2c8)
        int64_t* rcx_69 = *(arg1 + 0xb0)
        int16_t* const rdx_48 = &data_142d40450
        
        if (rbx_8 != 0)
            rdx_48 = var_2c8
        
        if ((*(*rcx_69 + 0x80))(rcx_69, rdx_48) != 0)
            int64_t* r13_5
            r13_5.b = 0
            *(arg1 + 0x114) += 1
            int32_t rax_62 = *(arg1 + 0x108)
            int32_t rcx_70 = *(arg1 + 0x114)
            int64_t rdi_11 = sx.q(rax_62 - 1)
            
            if (rax_62 - 1 s>= 0)
                int64_t rbx_10 = rdi_11 << 4
                int64_t temp5_1
                
                do
                    int64_t rcx_71 = *(arg1 + 0x100)
                    
                    if (*(rbx_10 + rcx_71 + 8) == 0)
                        r13_5.b = 1
                    else
                        int64_t* rcx_72 = *(rbx_10 + rcx_71)
                        
                        if (rcx_72 == 0)
                            r13_5.b = 1
                        else if ((*(*rcx_72 + 0x50))(rcx_72, &var_2c8) == 0)
                            r13_5.b = 1
                    
                    rbx_10 -= 0x10
                    temp5_1 = rdi_11
                    rdi_11 -= 1
                while (temp5_1 - 1 s>= 0)
                rcx_70 = *(arg1 + 0x114)
            
            *(arg1 + 0x114) = rcx_70 - 1
            
            if (r13_5.b != 0)
                sub_140599630(arg1 + 0x100, 0)
            
            sub_140a464c0()
            int16_t* rdx_50 = &data_142d40450
            int64_t r9_2
            r9_2.b = 1
            var_2e8.b = 0
            
            if (rbx_8 != 0)
                rdx_50 = var_2c8
            
            (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_50, 0, r9_2, var_2e8)
        
        int16_t* rcx_74 = var_2c8
        
        if (rcx_74 != 0)
            sub_140a74f90(rcx_74)
    
    int64_t* rcx_77 = *(arg1 + 0xd8)
    (*(*rcx_77 + 0x30))(rcx_77, &var_2d8, zx.q(r12.b))
    bool z_2
    
    if (0 == *(arg1 + 0x70))
        *(arg1 + 0x70) = 0
        z_2 = true
    else
        *(arg1 + 0x70)
        z_2 = false
    
    rdi_5 = zx.q(data_14401b1a0)
    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    
    if (not(z_2))
        while (true)
            bool z_3
            
            if (0 == *(arg1 + 0x74))
                *(arg1 + 0x74) = 0
                z_3 = true
            else
                *(arg1 + 0x74)
                z_3 = false
            
            rdi_5 = zx.q(data_14401b1a0)
            ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
            
            if (not(z_3))
                break
            
            zmm6 = sub_140b73230(zmm6)
            bool z_4
            
            if (0 == *(arg1 + 0x70))
                *(arg1 + 0x70) = 0
                z_4 = true
            else
                *(arg1 + 0x70)
                z_4 = false
            
            if (z_4)
                goto label_141847686

if (*(arg1 + 0x6b) == 0)
    int64_t* rcx_78 = *(arg1 + 0xd8)
    (*(*rcx_78 + 0x10))(rcx_78)

int64_t* rcx_79 = *(arg1 + 0xd8)
(*(*rcx_79 + 0x38))(rcx_79)
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x68) = 0

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

int16_t* rcx_82 = var_2d8

if (rcx_82 != 0)
    sub_140a74f90(rcx_82)

int32_t var_1d0_1 = 0

if (var_1d8 != 0)
    sub_140a74f90(var_1d8)

sub_14059ad90(&var_218, 0)
int64_t var_1f8

if (var_1f8 != 0)
    sub_140a74f90(var_1f8)

int64_t rcx_86 = var_218

if (rcx_86 != 0)
    sub_140a74f90(rcx_86)

int32_t var_60 = 0
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_14059ad90(&var_a8, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_90 = var_a8

if (rcx_90 != 0)
    sub_140a74f90(rcx_90)

int32_t var_b0_1 = 0

if (var_b8 != 0)
    sub_140a74f90(var_b8)

sub_14059ad90(&var_f8, 0)
int64_t var_d8

if (var_d8 != 0)
    sub_140a74f90(var_d8)

int64_t rcx_94 = var_f8

if (rcx_94 != 0)
    sub_140a74f90(rcx_94)

int32_t var_100_1 = 0

if (var_108 != 0)
    sub_140a74f90(var_108)

sub_14059ad90(&var_148, 0)
int64_t var_128

if (var_128 != 0)
    sub_140a74f90(var_128)

int64_t rcx_98 = var_148

if (rcx_98 != 0)
    sub_140a74f90(rcx_98)

int32_t var_150 = 0
int64_t var_158

if (var_158 != 0)
    sub_140a74f90(var_158)

int64_t var_198
sub_14059ad90(&var_198, 0)
int64_t var_178

if (var_178 != 0)
    sub_140a74f90(var_178)

int64_t rcx_102 = var_198

if (rcx_102 != 0)
    sub_140a74f90(rcx_102)

if (var_1a8 != 0)
    sub_140a74f90(var_1a8)

int64_t var_1b8

if (var_1b8 != 0)
    sub_140a74f90(var_1b8)

int16_t* rcx_105 = var_288

if (rcx_105 != 0)
    sub_140a74f90(rcx_105)

int16_t* rcx_106 = var_2a8

if (rcx_106 != 0)
    sub_140a74f90(rcx_106)

__security_check_cookie(rax_1 ^ &var_308)
return 0
