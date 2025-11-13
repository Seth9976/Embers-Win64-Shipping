// 函数: sub_140cbd210
// 地址: 0x140cbd210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg6
void*** rdi = nullptr
int32_t rbx = arg3
void* r15 = arg1
void* const r12

if (rax == 0)
    r12 = nullptr
else
    r12 = *rax

void*** r14 = nullptr

if (r15 != 0)
    r14 = *(arg1 + 0x68)

bool arg_8

if (r14 != 0)
    if (r12 != 0)
        arg6.b = 0
        int64_t* var_198_1 = &arg6
        void*** (* var_1a0)() = sub_140884c50
        
        if (*(sub_140a756e0(&var_1a0, &data_14397f5f0) + 0x48) != 0)
            arg_8 = false
            char* var_188_1 = &arg_8
            void*** (* var_190)() = sub_140884c50
            
            if (*(sub_140a756e0(&var_190, &data_14397f5f0) + 0x48) != r12)
                char var_258 = 0
                char* var_1b8_1 = &var_258
                void*** (* var_1c0)() = sub_140884c50
                sub_140a756e0(&var_1c0, &data_14397f5f0)
    
    return r14

void* var_210 = nullptr
void* var_1f8 = nullptr
int32_t var_1f0_1 = 0
int64_t* rbx_1
int128_t zmm2_1
uint128_t zmm3_1

if (arg2 != 0)
    int32_t rdx_11 = 0
    int32_t rcx_26 = 0
    int32_t var_218_1 = 0
    int32_t var_214_1 = 0
    uint64_t var_230 = 0
    int32_t var_228_1 = 0
    int64_t var_220 = 0
    
    if (*arg2 != 0)
        int64_t rbx_5 = -1
        
        do
            rbx_5 += 1
        while (arg2[rbx_5] != 0)
        
        if (rbx_5.d + 1 s> 0)
            sub_1405947f0(&var_220, rbx_5.d + 1)
            rcx_26 = var_214_1
            rdx_11 = var_218_1
        
        int32_t rax_23 = rdx_11 + rbx_5.d + 1
        int32_t var_218_2 = rax_23
        
        if (rax_23 s> rcx_26)
            sub_140594770(&var_220)
        
        UnDecorator::getReferenceType(var_220, arg2, (rbx_5.d + 1) * 2)
        rbx = arg3
    
    bool rax_24 = sub_140bbcf00(&var_220, &var_230, nullptr)
    int64_t rcx_31 = var_220
    rax_24 = rax_24 == 0
    arg_8 = rax_24
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
        rax_24 = arg_8
    
    if (rax_24 != 0)
        void var_b8
        sub_140cc1d50(nullptr, r12, arg2, _vfprintf_p_l(&var_b8, Can't resolve asset name", 
            Linker"), r15, rbx)
        int64_t* var_b0
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t rsi_2 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (rsi_2 == 1)
                    (*(*var_b0 + 8))(var_b0, zx.q(rsi_2))
        
        goto label_140cbda29
    
    int16_t* const rdx_17 = &data_142d40450
    int64_t var_1d0_1 = 0
    
    if (var_228_1 != 0)
        rdx_17 = var_230
    
    int64_t var_1d8_1 = 0
    void var_148
    int64_t rax_30 = *sub_140b58260(&var_148, rdx_17, 1)
    int64_t var_168 = 0
    int64_t var_160_1 = 0
    int64_t var_158_1 = rax_30
    void var_a0
    sub_140be09b0(&var_a0, 0x40, &var_168)
    void var_90
    sub_140b63e00(&var_90, &var_230)
    arg_8.q = var_230
    uint64_t var_240 = 0
    int32_t var_238_1 = var_228_1
    
    if (var_228_1 != 0)
        sub_1405a4c70(&var_240, var_228_1, 0)
        memcpy(var_240, arg_8.q, var_228_1 * 2)
    else
        int32_t var_234_1 = 0
    
    if (sub_140bace20(&var_240) == 0)
        int64_t var_120
        int64_t* rax_33 = sub_140ba9d00(&var_120, &var_240)
        
        if (&var_240 != rax_33)
            uint64_t rcx_42 = var_240
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            var_240 = *rax_33
            *rax_33 = 0
            int32_t var_238_2 = rax_33[1].d
            int32_t var_234_2 = *(rax_33 + 0xc)
            rax_33[1] = 0
        
        int64_t rcx_43 = var_120
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        uint64_t var_110[0x2]
        uint64_t* rax_37 = sub_140baa220(&var_110, &var_240)
        
        if (&var_240 != rax_37)
            uint64_t rcx_45 = var_240
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
            
            var_240 = *rax_37
            *rax_37 = 0
            int32_t var_238_3 = rax_37[1].d
            int32_t var_234_3 = *(rax_37 + 0xc)
            rax_37[1] = 0
        
        uint64_t rcx_46 = var_110[0]
        
        if (rcx_46 != 0)
            sub_140a74f90(rcx_46)
    
    int16_t* rbx_11 = &data_142d40450
    
    if (var_228_1 != 0)
        rbx_11 = var_230
    
    void* rax_42 = sub_140d2ee50(sub_140cddea0(), nullptr, rbx_11, 0)
    void* rbx_12 = rax_42
    
    if (rax_42 == 0 || *(rax_42 + 0x20) != 0 || (*(rax_42 + 0x50) & 0x11) == 0)
        char rax_43
        rax_43, zmm2_1, zmm3_1 = sub_140cb7c70(&var_240, arg4, &var_1f8)
        int64_t* rbx_14
        
        if (rax_43 == 0)
            if ((arg3 & 0x2002) != 0)
                goto label_140cbda1a
            
            *sub_140b58260(&var_210, arg2, 1)
            
            if (sub_140cc1810() != 0)
                goto label_140cbda1a
            
            void var_88
            sub_140cc1d50(nullptr, r12, arg2, _vfprintf_p_l(&var_88, Can't find file.", Linker"), 
                r15, arg3)
            int64_t* var_80
            rbx_14 = var_80
        label_140cbd9ec:
            
            if (rbx_14 == 0)
                goto label_140cbda1a
            
            rbx_14[1].d -= 1
            
            if (rbx_14[1].d == 1)
                (**rbx_14)(rbx_14)
                int32_t rsi_3 = *(rbx_14 + 0xc)
                *(rbx_14 + 0xc) -= 1
                
                if (rsi_3 == 1)
                    (*(*rbx_14 + 8))(rbx_14, zx.q(rsi_3))
            
            goto label_140cbda1a
        
        if (rbx_12 == 0)
            int16_t* rdx_26 = &data_142d40450
            
            if (var_228_1 != 0)
                rdx_26 = var_230
            
            void* rax_47
            rax_47, zmm2_1, zmm3_1 = sub_140d1dfb0(nullptr, rdx_26)
            var_210 = rax_47
            rbx_12 = rax_47
            
            if (rax_47 != 0 && (arg3 & 0x80000) != 0)
                *(rax_47 + 0x50) |= 0x100000
        
        if (r15 == 0)
            if (rbx_12 == 0)
                void var_70
                sub_140cc1d50(nullptr, r12, arg2, 
                    _vfprintf_p_l(&var_70, Can't convert filename to asset name", Linker"), nullptr, 
                    arg3)
                int64_t* var_68
                rbx_14 = var_68
                goto label_140cbd9ec
            
            r14 = *(rbx_12 + 0x68)
            r15 = rbx_12
        else if (r15 != rbx_12)
            zmm2_1 = sub_140ccddc0(r15)
        
        uint64_t rcx_58 = var_240
        
        if (rcx_58 != 0)
            sub_140a74f90(rcx_58)
        
        uint64_t rcx_59 = var_230
        
        if (rcx_59 != 0)
            sub_140a74f90(rcx_59)
        
        if (r14 != 0)
            if (r12 != 0)
                int64_t rax_56 = sub_140baa940()
                void* rax_57
                
                if (rax_56 != 0)
                    rax_57 = sub_140baa940()
                
                char rax_58
                int64_t rax_59
                
                if (rax_56 == 0 || *(rax_57 + 0xc) s<= 0 || *(r12 + 0xc) != 1)
                    rax_58 = data_14399ea98()
                    
                    if (rax_58 != 0)
                        rax_59 = sub_140baa940()
                
                if ((rax_56 == 0 || *(rax_57 + 0xc) s<= 0 || *(r12 + 0xc) != 1)
                        && (rax_58 == 0 || rax_59 == 0))
                    if (sub_140baa940() != 0 && sub_140baa940() != r12)
                        sub_140d3a720(r12, sub_140baa940() + 0x10)
                else
                    *arg6 = sub_140baa940()
            
            goto label_140cbdb99
        
    label_140cbda83:
        char var_257 = 0
        char* var_1a8_1 = &var_257
        void*** (* var_1b0)() = sub_140884c50
        int32_t* rbx_15 = *(sub_140a756e0(&var_1b0, &data_14397f5f0) + 0x48)
        
        if (rbx_15 != 0)
            *rbx_15 += 1
        
        void* r8_14 = &data_142d40450
        
        if (var_1f0_1 != 0)
            r8_14 = var_1f8
        
        r14 = sub_140cb63d0(rbx_15, r15, r8_14, arg3, zmm2_1, zmm3_1, arg5)
        
        if (rbx_15 != 0)
            int32_t temp1_1 = *rbx_15
            *rbx_15 -= 1
            
            if (temp1_1 == 1)
                sub_140d3a300(rbx_15)
                j_sub_140a74f90(rbx_15)
        
    label_140cbdb99:
        
        if (r14 == 0)
            void* rax_64 = var_210
            
            if (rax_64 != 0)
                int32_t rax_65 = *(rax_64 + 0xc)
                
                if (rax_65 s< data_143e1d9b4)
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rax_65)
                    uint32_t rdx_33 = zx.d(temp2_1)
                    int32_t rax_67 = temp3_1 + rdx_33
                    rdi = *(data_143e1d9a0 + (sx.q(rax_67 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_67.w) - rdx_33) * 0x18
                
                rdi[1].d |= 0x20000000
            
            rdi = r14
        else if (arg4 == 0)
            rdi = r14
        else
            int32_t rcx_82 = (r14[0x26].d ^ *(arg4 + 0xc)) | (*(r14 + 0x12c) ^ *(arg4 + 8))
                | (r14[0x25].d ^ *(arg4 + 4)) | (*(r14 + 0x124) ^ *arg4)
            
            if (rcx_82 != 0)
                void var_58
                sub_140cc1d50(&r14[0x40], r12, arg2, 
                    _vfprintf_p_l(&var_58, Asset version mismatch", Linker"), r15, arg3)
                int64_t* var_50
                rbx_1 = var_50
                goto label_140cbdc98
            
            rdi = r14
    else
    label_140cbda1a:
        uint64_t rcx_55 = var_240
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
        
    label_140cbda29:
        uint64_t rcx_56 = var_230
        
        if (rcx_56 != 0)
            sub_140a74f90(rcx_56)
else if (r15 != 0)
    int64_t var_1c8 = *(arg1 + 0x18)
    int16_t* var_208
    sub_140b63b70(&var_1c8, &var_208)
    int16_t* const rdx_2 = &data_142d40450
    int64_t var_1e0_1 = 0
    int32_t var_200
    
    if (var_200 != 0)
        rdx_2 = var_208
    
    int64_t var_1e8_1 = 0
    void var_150
    int64_t rax_6 = *sub_140b58260(&var_150, rdx_2, 1)
    int64_t var_180 = 0
    int64_t var_178_1 = 0
    int64_t var_170_1 = rax_6
    void var_e8
    sub_140be09b0(&var_e8, 0x40, &var_180)
    void var_d8
    sub_140b63e00(&var_d8, &var_208)
    arg6 = var_208
    uint64_t var_250 = 0
    int32_t var_248_1 = var_200
    
    if (var_200 != 0)
        sub_1405a4c70(&var_250, var_200, 0)
        memcpy(var_250, arg6, var_200 * 2)
    else
        int32_t var_244_1 = 0
    
    if ((*(r15 + 0x50) & 0x11) == 0 && sub_140bace20(&var_250) == 0)
        int64_t var_140
        int64_t* rax_9 = sub_140ba9d00(&var_140, &var_250)
        
        if (&var_250 != rax_9)
            uint64_t rcx_12 = var_250
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            var_250 = *rax_9
            *rax_9 = 0
            int32_t var_248_2 = rax_9[1].d
            int32_t var_244_2 = *(rax_9 + 0xc)
            rax_9[1] = 0
        
        int64_t rcx_13 = var_140
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        uint64_t var_130[0x2]
        uint64_t* rax_13 = sub_140baa220(&var_130, &var_250)
        
        if (&var_250 != rax_13)
            uint64_t rcx_15 = var_250
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            var_250 = *rax_13
            *rax_13 = 0
            int32_t var_248_3 = rax_13[1].d
            int32_t var_244_3 = *(rax_13 + 0xc)
            rax_13[1] = 0
        
        uint64_t rcx_16 = var_130[0]
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        rbx = arg3
    
    char rax_17
    rax_17, zmm2_1, zmm3_1 = sub_140cb7c70(&var_250, arg4, &var_1f8)
    
    if (rax_17 != 0)
        uint64_t rcx_24 = var_250
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int16_t* rcx_25 = var_208
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        goto label_140cbda83
    
    if ((rbx.b & 0x20) == 0 && (*(r15 + 0x50) & 0x11) == 0)
        *(r15 + 0x18)
        
        if (sub_140cc1810() == 0)
            void var_d0
            sub_140cc1d50(nullptr, r12, nullptr, _vfprintf_p_l(&var_d0, Can't find file.", 
                Linker"), r15, rbx)
            int64_t* var_c8
            
            if (var_c8 != 0)
                var_c8[1].d -= 1
                
                if (var_c8[1].d == 1)
                    (**var_c8)(var_c8)
                    int32_t rsi_1 = *(var_c8 + 0xc)
                    *(var_c8 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*var_c8 + 8))(var_c8, zx.q(rsi_1))
    
    uint64_t rcx_22 = var_250
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int16_t* rcx_23 = var_208
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
else
    void var_100
    sub_140cc1d50(nullptr, r12, nullptr, _vfprintf_p_l(&var_100, Can't resolve asset name", 
        Linker"), nullptr, rbx)
    int64_t* var_f8
    rbx_1 = var_f8
label_140cbdc98:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rsi_4 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_4 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_4))
void* rcx_77 = var_1f8

if (rcx_77 != 0)
    sub_140a74f90(rcx_77)

return rdi
