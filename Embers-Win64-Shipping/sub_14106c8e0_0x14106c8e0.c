// 函数: sub_14106c8e0
// 地址: 0x14106c8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int64_t rax_2 = *(arg3 + 0x20)
int128_t* var_188 = nullptr

if (rax_2 != 0)
    void* rax_3 = *(arg3 + 0x30)
    void* rcx = &arg3[0x40]
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx, &var_188)

int128_t zmm0 = *(arg3 + 4)
void*** rax_5 = sub_140a82f30(0x60, 0x10)
*rax_5 = &data_142d577c0
rax_5[2] = rax_2
rax_5[4] = var_188
int128_t var_178
int128_t zmm0_1 = var_178
var_188 = nullptr
*(rax_5 + 0x30) = zmm0_1
int128_t var_168
*(rax_5 + 0x40) = var_168
int64_t rax_6 = rax_2

if (rax_5[2] != 0)
    rax_6 = 0

*(rax_5 + 0x50) = zmm0
*rax_5 = &data_142d577e0
int64_t (* var_358)(void* arg1, char* arg2)
int64_t (* rax_7)(void* arg1, char* arg2) = var_358

if (rax_5 != -0x10)
    rax_7 = sub_1405d6f90

void*** var_348 = rax_5
int64_t (* var_358_1)(void* arg1, char* arg2) = rax_7

if (rax_6 != 0)
    int128_t* rax_8 = var_188
    int128_t* rcx_3 = &var_178
    
    if (rax_8 != 0)
        rcx_3 = rax_8
    
    (*(*rcx_3 + 0x10))(rcx_3)

int128_t var_338
uint64_t result

if (arg1 == 0)
label_14106d170:
    int64_t var_488_1 = 0
    void*** rdx_1
    rdx_1.b = 2
    sub_140d23f50(u"Invalid texture supplied.", rdx_1.b)
    int128_t* var_248 = nullptr
    
    if (var_358_1 != 0)
        void*** rcx_37 = &var_338
        
        if (var_348 != 0)
            rcx_37 = var_348
        
        (**rcx_37)(rcx_37, &var_248)
    
    void*** rax_65 = sub_140a82f30(0x50, 0x10)
    *rax_65 = &data_142f045c8
    rax_65[2] = var_358_1
    rax_65[4] = var_248
    int128_t var_238
    int128_t zmm0_7 = var_238
    var_248 = nullptr
    *(rax_65 + 0x30) = zmm0_7
    int128_t var_228
    *(rax_65 + 0x40) = var_228
    int64_t (* rax_66)(void* arg1, char* arg2) = var_358_1
    
    if (rax_65[2] != 0)
        rax_66 = nullptr
    
    *rax_65 = &data_142f045e8
    int64_t (* var_398)(void* arg1)
    int64_t (* rax_67)(void* arg1) = var_398
    
    if (rax_65 != -0x10)
        rax_67 = sub_14106bb60
    
    void*** var_388_1 = rax_65
    var_398 = rax_67
    result = sub_140a20e40(2, &var_398)
    
    if (rax_66 != 0)
        int128_t* rax_68 = var_248
        int128_t* rcx_40 = &var_238
        
        if (rax_68 != 0)
            rcx_40 = rax_68
        
        result = (*(*rcx_40 + 0x10))(rcx_40)
else
    void* rcx_4 = *(arg1 + 0x78)
    
    if (rcx_4 == 0)
        goto label_14106d170
    
    int64_t* rcx_5 = *(rcx_4 + 0x10)
    
    if (rcx_5 == 0)
        goto label_14106d170
    
    void* rax_11 = (*(*rcx_5 + 8))(rcx_5)
    void* var_490 = rax_11
    int128_t* rax_19
    int128_t* rcx_9
    
    if (rax_11 == 0)
        int64_t var_498_1 = 0
        sub_140d23f50(u"Invalid texture supplied.", 2)
        int128_t* var_288 = nullptr
        
        if (var_358_1 != 0)
            void*** rcx_33 = &var_338
            
            if (var_348 != 0)
                rcx_33 = var_348
            
            (**rcx_33)(rcx_33, &var_288)
        
        void*** rax_58 = sub_140a82f30(0x50, 0x10)
        *rax_58 = &data_142f045c8
        rax_58[2] = var_358_1
        rax_58[4] = var_288
        int128_t var_278
        int128_t zmm0_6 = var_278
        var_288 = nullptr
        *(rax_58 + 0x30) = zmm0_6
        int128_t var_268
        *(rax_58 + 0x40) = var_268
        int64_t (* rax_59)(void* arg1, char* arg2) = var_358_1
        
        if (rax_58[2] != 0)
            rax_59 = nullptr
        
        *rax_58 = &data_142f045e8
        int64_t (* var_3d8)(void* arg1)
        int64_t (* rax_60)(void* arg1) = var_3d8
        
        if (rax_58 != -0x10)
            rax_60 = sub_14106bb60
        
        void*** var_3c8_1 = rax_58
        var_3d8 = rax_60
        sub_140a20e40(2, &var_3d8)
        
        if (rax_59 == 0)
            result = sub_1405d1550(&var_490)
        else
            rax_19 = var_288
            rcx_9 = &var_278
        label_14106d154:
            
            if (rax_19 != 0)
                rcx_9 = rax_19
            
            (*(*rcx_9 + 0x10))(rcx_9)
            result = sub_1405d1550(&var_490)
    else
        *(rax_11 + 8) += 1
        int32_t rdx_3 = *(var_490 + 0x3c)
        int32_t rdx_4
        
        if (rdx_3 == 1)
        label_14106cb92:
            
            if (*arg3 == 3)
                goto label_14106ccb6
            
            int64_t var_4a0_1 = 0
            rdx_4.b = 2
            sub_140d23f50(Only EXR export is currently supported for PF_FloatRGBA and PF_A32B32G32R32F formats.", 
                rdx_4.b)
            int128_t* var_2c8 = nullptr
            
            if (var_358_1 != 0)
                void*** rcx_10 = &var_338
                
                if (var_348 != 0)
                    rcx_10 = var_348
                
                (**rcx_10)(rcx_10, &var_2c8)
            
            void*** rax_23 = sub_140a82f30(0x50, 0x10)
            *rax_23 = &data_142f045c8
            rax_23[2] = var_358_1
            rax_23[4] = var_2c8
            int128_t var_2b8
            int128_t zmm0_3 = var_2b8
            var_2c8 = nullptr
            *(rax_23 + 0x30) = zmm0_3
            int128_t var_2a8
            *(rax_23 + 0x40) = var_2a8
            int64_t (* rax_24)(void* arg1, char* arg2) = var_358_1
            
            if (rax_23[2] != 0)
                rax_24 = nullptr
            
            *rax_23 = &data_142f045e8
            int64_t (* var_418)(void* arg1)
            int64_t (* rax_25)(void* arg1) = var_418
            
            if (rax_23 != -0x10)
                rax_25 = sub_14106bb60
            
            void*** var_408_1 = rax_23
            var_418 = rax_25
            sub_140a20e40(2, &var_418)
            
            if (rax_24 != 0)
                rax_19 = var_2c8
                rcx_9 = &var_2b8
                goto label_14106d154
            
            result = sub_1405d1550(&var_490)
        else if (rdx_3 == 2)
        label_14106ccb6:
            int64_t var_218 = 0
            int64_t var_210_1 = 0
            int64_t var_1f8_1 = 0
            int64_t var_1e8_1 = 0
            int64_t* var_1b0_1 = nullptr
            int64_t var_1a8 = 0
            j_sub_140b3db50()
            void var_468
            int64_t rbx_1 = *sub_140b58170(&var_468, "ImageWriteQueue", 1)
            j_sub_140b3db50()
            int64_t* rax_27 = j_sub_140b407e0(&data_143de7d78, rbx_1)
            int64_t var_1b8_1 = (*(*rax_27 + 0x40))(rax_27)
            sub_140597df0(&var_218, arg2)
            int128_t zmm5_1 = var_1f8_1.o
            int128_t zmm4_1 = var_1e8_1.o
            char var_208_1 = *arg3
            int32_t var_204_1 = *(arg3 + 0x14)
            char var_200_1 = arg3[0x18]
            char rax_32 = arg3[0x19]
            int128_t var_108_1 = zmm5_1
            int128_t var_f8_1 = zmm4_1
            int128_t var_1d8
            int128_t var_e8_1 = var_1d8
            int128_t var_1c8
            int128_t var_d8_1 = var_1c8
            char var_1ff_1 = rax_32
            var_1f8_1.o = var_358_1.o
            var_1e8_1.o = var_348.o
            int128_t var_1d8_1 = var_338
            int128_t var_328
            int128_t var_1c8_1 = var_328
            var_358_1.o = zmm5_1
            var_348.o = zmm4_1
            var_338 = var_1d8
            int128_t var_328_1 = var_1c8
            
            if (rax_32 == 0)
                void*** rax_33 = j_sub_140a82f30(0x28)
                void*** rbx_2 = rax_33
                
                if (rax_33 == 0)
                    rbx_2 = nullptr
                else
                    rax_33[1].d = 1
                    *(rax_33 + 0xc) = 1
                    *rbx_2 = &data_142f045b8
                    sub_14106a750(&rbx_2[2])
                
                uint128_t zmm0_5 = (&rbx_2[2]).o
                uint128_t var_4b8 = zmm0_5
                void* rax_34 = _mm_bsrli_si128(zmm0_5, 8).q
                
                if (rax_34 != 0)
                    *(rax_34 + 8) += 1
                
                var_1b0_1 = var_4b8.q
                var_4b8.q = 0
                sub_1405aeff0(&var_1a8, &var_4b8:8)
                void* rcx_18 = var_4b8:8.q
                
                if (rcx_18 != 0)
                    int32_t rax_36 = *(rcx_18 + 8)
                    *(rcx_18 + 8) -= 1
                    
                    if (rax_36 == 1)
                        int64_t* rbx_3 = var_4b8:8.q
                        (**rbx_3)(rbx_3)
                        int32_t rax_38 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_38 == 1)
                            int64_t* rcx_20 = var_4b8:8.q
                            (*(*rcx_20 + 8))(rcx_20, 1)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t rax_42 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_42 == 1)
                            (*rbx_2)[1](rbx_2, 1)
            
            void var_c8
            sub_14106a7f0(&var_c8, &var_218)
            void*** rax_44 = sub_140a82f30(0x90, 0x10)
            *rax_44 = &data_142f04608
            sub_14106a7f0(&rax_44[2], &var_c8)
            *rax_44 = &data_142f04628
            void* const var_148
            void* const rax_45 = var_148
            
            if (rax_44 != -0x10)
                rax_45 = &data_14106bb50
            
            var_148 = rax_45
            void*** rbx_5
            
            if (sub_14106dc60(arg1, &var_148, var_1c8, var_1d8) == 0 || arg3[0x19] != 0)
                rbx_5.b = 0
            else
                rbx_5.b = 1
            
            if (var_148 != 0)
                void var_128
                void*** rcx_26 = &var_128
                
                if (rax_44 != 0)
                    rcx_26 = rax_44
                
                (*rcx_26)[2](rcx_26)
            
            if (rbx_5.b != 0)
                var_1b0_1[2].b = 1
                int64_t* rbx_6 = var_1b0_1[1]
                void* rdi_2 = *var_1b0_1
                
                if (rbx_6 != 0)
                    rbx_6[1].d += 1
                
                if (rdi_2 != 0)
                    while (true)
                        if (rdi_2 != 0)
                            int64_t* rcx_27 = *(rdi_2 + 0x70)
                            
                            if ((*(*rcx_27 + 0x20))(rcx_27, 0xffffffff, 0) != 0)
                                break
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t rsi_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (rsi_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, zx.q(rsi_1))
            
            sub_14106ab30(&var_c8)
            sub_14106ab30(&var_218)
            result = sub_1405d1550(&var_490)
        else
            if (rdx_3 == 0xa)
                goto label_14106cb92
            
            if (rdx_3 == 0x25)
                goto label_14106ccb6
            
            int64_t var_4a8_1 = 0
            rdx_4.b = 2
            sub_140d23f50(u"Unsupported texture format.", rdx_4.b)
            int128_t* var_308 = nullptr
            
            if (var_358_1 != 0)
                void*** rcx_6 = &var_338
                
                if (var_348 != 0)
                    rcx_6 = var_348
                
                (**rcx_6)(rcx_6, &var_308)
            
            void*** rax_16 = sub_140a82f30(0x50, 0x10)
            *rax_16 = &data_142f045c8
            rax_16[2] = var_358_1
            rax_16[4] = var_308
            int128_t var_2f8
            int128_t zmm0_2 = var_2f8
            var_308 = nullptr
            *(rax_16 + 0x30) = zmm0_2
            int128_t var_2e8
            *(rax_16 + 0x40) = var_2e8
            int64_t (* rax_17)(void* arg1, char* arg2) = var_358_1
            
            if (rax_16[2] != 0)
                rax_17 = nullptr
            
            *rax_16 = &data_142f045e8
            int64_t (* var_458)(void* arg1)
            int64_t (* rax_18)(void* arg1) = var_458
            
            if (rax_16 != -0x10)
                rax_18 = sub_14106bb60
            
            void*** var_448_1 = rax_16
            var_458 = rax_18
            sub_140a20e40(2, &var_458)
            
            if (rax_17 != 0)
                rax_19 = var_308
                rcx_9 = &var_2f8
                goto label_14106d154
            
            result = sub_1405d1550(&var_490)

if (var_358_1 != 0)
    void*** rcx_41 = &var_338
    
    if (var_348 != 0)
        rcx_41 = var_348
    
    result = (*rcx_41)[2](rcx_41)

__security_check_cookie(rax_1 ^ &var_4d8)
return result
