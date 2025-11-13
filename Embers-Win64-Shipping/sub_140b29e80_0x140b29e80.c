// 函数: sub_140b29e80
// 地址: 0x140b29e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
uint64_t r14 = 0
uint64_t var_260 = arg2
wchar16* wcs1_2 = nullptr
int32_t var_230 = 0
sub_1405947f0(&wcs1_2, 0xf)
int32_t rax_2 = var_230 + 0xf

if (rax_2 s> 0)
    sub_140594770(&wcs1_2)

UnDecorator::getReferenceType(wcs1_2, u"/?:&\*"<>|%#@^", 0x1e)
int32_t rbx = arg1[1].d
uint64_t rdi_1 = *arg1
int16_t* wcs1_1 = nullptr
int32_t var_290 = rbx

if (rbx != 0)
    sub_1405a4c70(&wcs1_1, rbx, 0)
    memcpy(wcs1_1, rdi_1, rbx * 2)
else
    int32_t var_28c_1 = 0

sub_140a306e0(&wcs1_1, &(*U"{}[\nt")[3], &data_142d5a024, 0)
Concurrency::details::UMSThreadProxy::InternalSwitchTo(&wcs1_1)
wchar16* wcs1 = wcs1_1

if (wcs1 != 0)
    wchar16* rax_3 = wcsstr(wcs1, u"//")
    
    if (rax_3 != 0)
        int32_t rcx_9
        
        if (var_290 == 0)
            rcx_9 = 0
        else
            rcx_9 = var_290 - 1
        
        int64_t r8_3 = 0
        void* rcx_10 = &wcs1[sx.q(rcx_9)]
        void* rax_5 = &rax_3[1]
        void* rdx_4 = rax_5 + 2
        uint64_t r9_4 = (rcx_10 - rdx_4 + 1) u>> 1
        
        if (rdx_4 u> rcx_10)
            r9_4 = 0
        
        if (r9_4 != 0)
            do
                int16_t rcx_11 = *rdx_4
                
                if (*(rax_5 - 2) != 0x2f || rcx_11 != 0x2f)
                    *rax_5 = rcx_11
                    rax_5 += 2
                
                rdx_4 += 2
                r8_3 += 1
            while (r8_3 u< r9_4)
        
        *rax_5 = 0
        sub_140a36160(&wcs1_1)

if (sub_140a237d0(&wcs1_1, &data_142d5a024, 0) != 0)
    int32_t rax_7 = var_290
    int32_t r10_1 = rax_7 - 1
    
    if (rax_7 == 0)
        r10_1 = 0
    
    if (r10_1 - 1 s< 0)
        r10_1 = 0
    else if (r10_1 - 1 s< r10_1)
        r10_1 -= 1
    
    int32_t rbx_1 = rax_7 - 1
    
    if (rax_7 == 0)
        rbx_1 = 0
    
    wcs1 = zx.q(rbx_1 - r10_1)
    
    if (wcs1.d s> 1)
        wcs1 = 1
    
    if (wcs1.d != 0)
        int32_t rcx_16 = rax_7 - wcs1.d
        
        if (rcx_16 != r10_1)
            int16_t* wcs1_6 = wcs1_1
            memmove(&wcs1_6[sx.q(r10_1)], &wcs1_6[sx.q(wcs1.d + r10_1)], (rcx_16 - r10_1) * 2)
            rax_7 = var_290
        
        var_290 = rax_7 - wcs1.d

int32_t rsi = 0
int32_t rax_11 = sub_140a23cf0(&wcs1_1, &data_142d5a024, 0, 0, 0xffffffff)

while (true)
    int32_t rdx_7 = rax_11 - rsi
    uint64_t var_280 = 0
    int32_t var_278_1 = 0
    int32_t r12_1 = rax_11
    
    if (rax_11 == 0xffffffff)
        rdx_7 = 0x7fffffff
    
    if (rdx_7 s>= 0)
        int32_t rbx_2 = var_290 - 1
        
        if (var_290 == 0)
            rbx_2 = 0
        
        int32_t rcx_21
        
        if (rsi s>= 0)
            rcx_21 = rbx_2
            
            if (rsi s< rbx_2)
                rcx_21 = rsi
        else
            rcx_21 = 0
        
        int64_t r8_7 = sx.q(rdx_7) + sx.q(rsi)
        int64_t r10_2 = sx.q(rcx_21)
        
        if (r8_7 s< r10_2)
            rbx_2 = rcx_21
        else if (r8_7 s< sx.q(rbx_2))
            rbx_2 = r8_7.d
        
        uint64_t var_270 = 0
        int16_t* const wcs1_3 = &data_142d40450
        
        if (var_290 != 0)
            wcs1_3 = wcs1_1
        
        wcs1 = zx.q(rbx_2 - rcx_21)
        void* r12_2 = &wcs1_3[r10_2]
        int64_t var_268_1 = 0
        rdi_1 = 0
        int32_t r15_1 = 0
        
        if (r12_2 != 0 && *r12_2 != 0 && wcs1.d s> 0)
            int32_t rdx_8 = (wcs1 + 1).d
            
            if (rdx_8 s> 0)
                sub_1405947f0(&var_270, rdx_8)
                r15_1 = var_268_1:4.d
                rdi_1 = zx.q(var_268_1.d)
                r14 = var_270
            
            rdi_1 = zx.q(rdi_1.d + 1 + wcs1.d)
            var_268_1.d = rdi_1.d
            
            if (rdi_1.d s> r15_1)
                sub_140594770(&var_270)
                r15_1 = var_268_1:4.d
                rdi_1 = zx.q(var_268_1.d)
                r14 = var_270
            
            UnDecorator::getReferenceType(r14, r12_2, wcs1.d * 2)
            *(r14 + (sx.q(rdi_1.d) << 1) - 2) = 0
            uint64_t rcx_25 = var_280
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
        
        r12_1 = rax_11
        var_280 = r14
        var_278_1 = r15_1
        var_270 = 0
        var_278_1 = rdi_1.d
        int64_t var_268_2 = 0
    
    char rax_15
    
    if (rsi == 0)
        rax_15 = sub_140b1c8b0(&var_280)
    
    uint64_t rcx_27
    
    if (rsi != 0 || rax_15 == 0)
        int32_t var_288 = 0
        int64_t var_250 = 0
        int64_t var_248_1 = 0
        int64_t* rcx_61
        
        if (rax_2 != 0)
            wcs1 = wcs1_2
            wchar16 i = *wcs1
            
            if (i != 0)
                do
                    var_288.w = i
                    
                    if (sub_140a23cf0(&var_280, &var_288, 1, 0, 0xffffffff) != 0xffffffff)
                        wchar16 rsi_1 = *wcs1
                        
                        if (rsi_1 != 0)
                            int32_t rdx_12 = var_248_1.d
                            int32_t rdi_3 = rdx_12 - 1
                            
                            if (rdx_12 s<= 0)
                                rdi_3 = 0
                            
                            int32_t rax_17
                            rax_17.b = rdx_12 s<= 0
                            int32_t rax_19 = rax_17 + 1 + rdx_12
                            var_248_1.d = rax_19
                            
                            if (rax_19 s> var_248_1:4.d)
                                sub_140594770(&var_250)
                            
                            int64_t rcx_30 = sx.q(rdi_3)
                            *(var_250 + (rcx_30 << 1)) = rsi_1
                            *(var_250 + (rcx_30 << 1) + 2) = 0
                    
                    i = wcs1[1]
                    wcs1 = &wcs1[1]
                while (i != 0)
                
                int32_t rax_22 = var_248_1.d
                
                if (rax_22 != 0 && rax_22 != 1)
                    rdi_1 = var_260
                    
                    if (rdi_1 != 0)
                        int64_t var_148
                        __builtin_memset(&var_148, 0, 0x2c)
                        int32_t var_11c_1 = 0x80
                        int32_t var_118_1 = 0xffffffff
                        int32_t var_114_1 = 0
                        int64_t var_108_1 = 0
                        int32_t var_100_1 = 0
                        void var_1f8
                        int64_t* rax_26 = sub_140aae420(&var_1f8, &var_250)
                        int32_t var_a8 = 4
                        int64_t var_98_1 = *rax_26
                        int64_t* rcx_40 = rax_26[1]
                        
                        if (rcx_40 != 0)
                            rcx_40[1].d += 1
                        
                        int32_t var_88_1 = rax_26[2].d
                        char var_80_1 = 1
                        var_260 = 0
                        int32_t var_258_1 = 0
                        sub_1405947f0(&var_260, 0x16)
                        int32_t rax_28 = var_258_1 + 0x16
                        var_258_1 = rax_28
                        
                        if (rax_28 s> 0)
                            sub_140594770(&var_260)
                        
                        UnDecorator::getReferenceType(var_260, u"IllegalPathCharacters", 0x2c)
                        sub_140acb5e0(&var_148, &var_260, &var_a8)
                        uint64_t rcx_45 = var_260
                        
                        if (rcx_45 != 0)
                            sub_140a74f90(rcx_45)
                        
                        if (var_80_1 != 0 && rcx_40 != 0)
                            rcx_40[1].d -= 1
                            
                            if (rcx_40[1].d == 1)
                                (**rcx_40)(rcx_40)
                                int32_t rax_31 = *(rcx_40 + 0xc)
                                *(rcx_40 + 0xc) -= 1
                                
                                if (rax_31 == 1)
                                    (*(*rcx_40 + 8))(rcx_40, 1)
                        
                        int64_t* var_1f0
                        
                        if (var_1f0 != 0)
                            var_1f0[1].d -= 1
                            
                            if (var_1f0[1].d == 1)
                                (**var_1f0)(var_1f0)
                                int32_t rax_35 = *(var_1f0 + 0xc)
                                *(var_1f0 + 0xc) -= 1
                                
                                if (rax_35 == 1)
                                    (*(*var_1f0 + 8))(var_1f0, 1)
                        
                        void var_1e0
                        void var_1c8
                        char* var_168
                        int64_t* rax_39 = sub_140aaca20(&var_1e0, 
                            sub_140a96390(&var_168, 
                                _vfprintf_p_l(&var_1c8, 
                                    Path may not contain the following characters: {IllegalPathCharacters}", 
                                Core")), &var_148)
                        int64_t rdx_22 = *rdi_1
                        *rdi_1 = *rax_39
                        *rax_39 = rdx_22
                        int64_t rdx_23 = *(rdi_1 + 8)
                        *(rdi_1 + 8) = rax_39[1]
                        rax_39[1] = rdx_23
                        *(rdi_1 + 0x10) = rax_39[2].d
                        int64_t* var_1d8
                        
                        if (var_1d8 != 0)
                            var_1d8[1].d -= 1
                            
                            if (var_1d8[1].d == 1)
                                (**var_1d8)(var_1d8)
                                int32_t rax_44 = *(var_1d8 + 0xc)
                                *(var_1d8 + 0xc) -= 1
                                
                                if (rax_44 == 1)
                                    (*(*var_1d8 + 8))(var_1d8, 1)
                        
                        int64_t* var_1c0
                        
                        if (var_1c0 != 0)
                            var_1c0[1].d -= 1
                            
                            if (var_1c0[1].d == 1)
                                (**var_1c0)(var_1c0)
                                int32_t r13_1 = *(var_1c0 + 0xc)
                                *(var_1c0 + 0xc) -= 1
                                
                                if (r13_1 == 1)
                                    (*(*var_1c0 + 8))(var_1c0, 1)
                        
                        int32_t var_100_2 = 0
                        
                        if (var_108_1 != 0)
                            sub_140a74f90(var_108_1)
                        
                        rcx_61 = &var_148
                    label_140b2a9a6:
                        sub_140acd610(rcx_61)
                    
                label_140b2a9ab:
                    int64_t rcx_90 = var_250
                    
                    if (rcx_90 != 0)
                        sub_140a74f90(rcx_90)
                    
                    uint64_t rcx_91 = var_280
                    
                    if (rcx_91 != 0)
                        sub_140a74f90(rcx_91)
                    
                    rdi_1.b = 0
                    break
        
        for (uint64_t* i_1 = &data_1439a8f30; i_1 != &data_1439a8fe8; i_1 = &i_1[1])
            rdi_1 = *i_1
            int32_t rdx_13 = 0
            int16_t* var_228 = nullptr
            int32_t rax_24 = 0
            int32_t var_220_1 = 0
            int16_t* rsi_2 = nullptr
            int32_t var_21c_1 = 0
            int16_t* rdx_16
            int32_t r14_1
            
            if (rdi_1 != 0 && *rdi_1 != 0)
                int64_t rbx_3 = -1
                
                do
                    rbx_3 += 1
                while (*(rdi_1 + (rbx_3 << 1)) != 0)
                
                wcs1 = zx.q(rbx_3.d + 1)
                
                if (wcs1.d s> 0)
                    sub_1405947f0(&var_228, wcs1.d)
                    rax_24 = var_21c_1
                    rdx_13 = var_220_1
                    rsi_2 = var_228
                
                r14_1 = rdx_13 + wcs1.d
                
                if (r14_1 s> rax_24)
                    sub_140594770(&var_228)
                    rsi_2 = var_228
                
                UnDecorator::getReferenceType(rsi_2, rdi_1, wcs1.d * 2)
                rdx_16 = rsi_2
            
            if (rdi_1 == 0 || *rdi_1 == 0 || r14_1 == 0)
                rdx_16 = &data_142d40450
            
            uint64_t rcx_34 = &data_142d40450
            
            if (var_278_1 != 0)
                rcx_34 = var_280
            
            wcs1.b = sub_140a54510(rcx_34, rdx_16) == 0
            
            if (rsi_2 != 0)
                sub_140a74f90(rsi_2)
            
            if (wcs1.b != 0)
                uint64_t rsi_3 = var_260
                
                if (rsi_3 == 0)
                    goto label_140b2a9ab
                
                int32_t var_cc_1 = 0x80
                int64_t var_f8
                __builtin_memset(&var_f8, 0, 0x2c)
                int32_t rdx_24 = 0
                int32_t var_200_1 = 0
                int32_t rcx_62 = 0
                int32_t var_1fc_1 = 0
                int32_t var_c8_1 = 0xffffffff
                int32_t var_c4_1 = 0
                int64_t var_b8_1 = 0
                int32_t var_b0_1 = 0
                int64_t var_208 = 0
                
                if (rdi_1 != 0 && *rdi_1 != 0)
                    int64_t rbx_8 = -1
                    
                    do
                        rbx_8 += 1
                    while (*(rdi_1 + (rbx_8 << 1)) != 0)
                    
                    if (rbx_8.d + 1 s> 0)
                        sub_1405947f0(&var_208, rbx_8.d + 1)
                        rcx_62 = var_1fc_1
                        rdx_24 = var_200_1
                    
                    int32_t rax_51 = rdx_24 + rbx_8.d + 1
                    int32_t var_200_2 = rax_51
                    
                    if (rax_51 s> rcx_62)
                        sub_140594770(&var_208)
                    
                    UnDecorator::getReferenceType(var_208, rdi_1, (rbx_8.d + 1) * 2)
                
                void var_1b0
                int64_t* rax_52 = sub_140aae2f0(&var_1b0, &var_208)
                int32_t var_78 = 4
                int64_t var_68_1 = *rax_52
                int64_t* rcx_68 = rax_52[1]
                
                if (rcx_68 != 0)
                    rcx_68[1].d += 1
                
                int32_t var_58_1 = rax_52[2].d
                char var_50_1 = 1
                int64_t var_218 = 0
                int32_t var_210_1 = 0
                sub_1405947f0(&var_218, 0xf)
                int32_t rax_54 = var_210_1 + 0xf
                var_210_1 = rax_54
                
                if (rax_54 s> 0)
                    sub_140594770(&var_218)
                
                UnDecorator::getReferenceType(var_218, u"RestrictedName", 0x1e)
                sub_140acb5e0(&var_f8, &var_218, &var_78)
                int64_t rcx_73 = var_218
                
                if (rcx_73 != 0)
                    sub_140a74f90(rcx_73)
                
                if (var_50_1 != 0 && rcx_68 != 0)
                    rcx_68[1].d -= 1
                    
                    if (rcx_68[1].d == 1)
                        (**rcx_68)(rcx_68)
                        int32_t rax_57 = *(rcx_68 + 0xc)
                        *(rcx_68 + 0xc) -= 1
                        
                        if (rax_57 == 1)
                            (*(*rcx_68 + 8))(rcx_68, 1)
                
                int64_t* var_1a8
                
                if (var_1a8 != 0)
                    var_1a8[1].d -= 1
                    
                    if (var_1a8[1].d == 1)
                        (**var_1a8)(var_1a8)
                        int32_t rax_61 = *(var_1a8 + 0xc)
                        *(var_1a8 + 0xc) -= 1
                        
                        if (rax_61 == 1)
                            (*(*var_1a8 + 8))(var_1a8, 1)
                
                int64_t rcx_79 = var_208
                
                if (rcx_79 != 0)
                    sub_140a74f90(rcx_79)
                
                void var_198
                void var_180
                char* var_158
                int64_t* rax_65 = sub_140aaca20(&var_198, 
                    sub_140a96390(&var_158, 
                        _vfprintf_p_l(&var_180, 
                            Path may not contain a restricted name: {RestrictedName}", 
                        Core")), &var_f8)
                int64_t rdx_32 = *rsi_3
                *rsi_3 = *rax_65
                *rax_65 = rdx_32
                int64_t rdx_33 = *(rsi_3 + 8)
                *(rsi_3 + 8) = rax_65[1]
                rax_65[1] = rdx_33
                *(rsi_3 + 0x10) = rax_65[2].d
                int64_t* var_190
                
                if (var_190 != 0)
                    var_190[1].d -= 1
                    
                    if (var_190[1].d == 1)
                        (**var_190)(var_190)
                        int32_t rax_70 = *(var_190 + 0xc)
                        *(var_190 + 0xc) -= 1
                        
                        if (rax_70 == 1)
                            (*(*var_190 + 8))(var_190, 1)
                
                int64_t* var_178
                
                if (var_178 != 0)
                    var_178[1].d -= 1
                    
                    if (var_178[1].d == 1)
                        (**var_178)(var_178)
                        int32_t r13_2 = *(var_178 + 0xc)
                        *(var_178 + 0xc) -= 1
                        
                        if (r13_2 == 1)
                            (*(*var_178 + 8))(var_178, zx.q(r13_2))
                
                int32_t var_b0_2 = 0
                
                if (var_b8_1 != 0)
                    sub_140a74f90(var_b8_1)
                
                rcx_61 = &var_f8
                goto label_140b2a9a6
        
        int64_t rcx_36 = var_250
        
        if (r12_1 != 0xffffffff)
            if (rcx_36 != 0)
                sub_140a74f90(rcx_36)
            
            rcx_27 = var_280
            goto label_140b2a3c2
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        rcx_27 = var_280
    else
        rcx_27 = var_280
        
        if (r12_1 != 0xffffffff)
        label_140b2a3c2:
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            rsi = r12_1 + 1
            rax_11 = sub_140a23cf0(&wcs1_1, &data_142d5a024, 0, 0, rsi)
            r14 = 0
            continue
            continue
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    rdi_1.b = 1
    break

int16_t* wcs1_4 = wcs1_1

if (wcs1_4 != 0)
    sub_140a74f90(wcs1_4)

wchar16* wcs1_5 = wcs1_2

if (wcs1_5 != 0)
    sub_140a74f90(wcs1_5)

__security_check_cookie(rax_1 ^ &var_2c8)
return zx.q(rdi_1.b)
