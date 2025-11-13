// 函数: sub_140ce1310
// 地址: 0x140ce1310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478
int64_t r14 = arg5
char var_34c = arg4.b
int16_t* r13 = arg3
void* var_308 = arg2
void* r15 = arg2
int64_t* r12 = arg1
int64_t var_380 = r14
int32_t var_3c0 = 0

if (arg2 == 0)
    r15 = arg1[2]
    var_308 = r15
    data_143e1b7e8 = r15

uint64_t result = zx.q(*(r15 + 0xcc) u>> 2)

if ((result.b & 1) != 0)
    void* rdx = *(r15 + 0x40)
    uint64_t rbx
    uint64_t var_40_1 = rbx
    int64_t var_458
    uint64_t var_410
    int32_t var_408
    
    if (rdx == 0)
    label_140ce16b9:
        int32_t rsi_1 = 1
        int32_t var_444_1
        int16_t* var_440
        int64_t var_438
        int16_t* var_368
        int64_t* rax_20
        int32_t rdi_1
        
        if (r13 == 0)
            rdi_1 = 2
            var_444_1 = 2
            sub_140bdd520(r12[2], &var_368)
            rax_20 = &var_368
        else
            int32_t rdx_9 = 0
            var_444_1 = 1
            int32_t rcx_17 = 0
            var_440 = nullptr
            rdi_1 = 1
            var_438 = 0
            
            if (*r13 != 0)
                int64_t rbx_3 = -1
                
                do
                    rbx_3 += 1
                while (r13[rbx_3] != 0)
                
                rbx = zx.q(rbx_3.d + 1)
                
                if (rbx.d s> 0)
                    sub_1405947f0(&var_440, rbx.d)
                    rcx_17 = var_438:4.d
                    rdx_9 = var_438.d
                
                int32_t rax_19 = rbx.d + rdx_9
                var_438.d = rax_19
                
                if (rax_19 s> rcx_17)
                    sub_140594770(&var_440)
                
                UnDecorator::getReferenceType(var_440, r13, rbx.d * 2)
            
            rax_20 = &var_440
        
        uint64_t result_1 = *rax_20
        *rax_20 = 0
        int32_t rcx_22 = rax_20[1].d
        rax_20[1] = 0
        
        if ((rdi_1.b & 2) != 0)
            int16_t* rcx_23 = var_368
            rdi_1 &= 0xfffffffd
            var_444_1 = rdi_1
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
        
        if ((1 & rdi_1.b) != 0)
            int16_t* rcx_24 = var_440
            rdi_1 &= 0xfffffffe
            var_444_1 = rdi_1
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
        
        char var_448_1
        
        if ((1 & (*(r12[2] + 0xcc) u>> 0xa).b) != 0)
            var_448_1 = 1
        
        if ((1 & (*(r12[2] + 0xcc) u>> 0xa).b) == 0 || (1 & (r12[1].d u>> 4).b) != 0)
            var_448_1 = 0
        
        int16_t* var_1b8
        
        if (r13 != 0)
            r13 = nullptr
            rbx.b = 0
        else if ((*(*r12 + 0x200))(r12) == 0)
            rbx.b = 0
        else
            var_1b8 = r13
            void var_2b8
            uint64_t var_1b0_1 = &var_2b8
            int32_t var_1a8_1 = 7
            rdi_1 |= 4
            var_458.w = 0x3f
            var_444_1 = rdi_1
            sub_1405a7220(&var_2b8, 8, "Windows", 8, var_458.w)
            
            if (sub_140a54510((*(*r12 + 0x200))(r12), var_1b0_1) == 0)
                rbx.b = 0
            else
                rbx = 1
        
        char var_447_1 = rbx.b
        
        if ((rdi_1.b & 4) != 0)
            rdi_1 &= 0xfffffffb
            var_444_1 = rdi_1
            
            if (var_1b8 != 0)
                sub_140a74f90(var_1b8)
        
        int64_t var_198
        sub_140ae6a10(&var_198)
        
        if (rbx.b != 0)
            int64_t* rax_29
            int512_t zmm2_1
            rax_29, zmm2_1 = sub_140b63b70(r12[2] + 0xe8, &var_368)
            int16_t* rbx_4
            
            if (rax_29[1].d == 0)
                rbx_4 = &data_142d40450
            else
                rbx_4 = *rax_29
            
            var_458.b = 0
            sub_140af9680(&var_198, rbx_4, 1, (*(*r12 + 0x200))(r12), zmm2_1, var_458.b)
            int16_t* rcx_37 = var_368
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
        
        int16_t* var_430 = r13
        int32_t var_428_1 = 0
        int16_t* var_420
        int16_t* var_3e8
        void* var_3d8
        int16_t* var_3d0
        int16_t* var_378
        int32_t var_370
        
        if (var_448_1 != 0)
            var_3e8 = r13
            int32_t var_3e0_1 = 0
            void* rax_32 = sub_140d21d80(r12)
            
            if (rax_32 != data_143e1b7d0)
                sub_140d21e40(r12, rax_32, &var_3e8)
            else
                var_3d8 = r12[3]
                sub_140b63b70(&var_3d8, &var_378)
                int16_t* rcx_40 = var_3e8
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
                
                var_3e8 = var_378
                var_3e0_1 = var_370
                int32_t var_36c
                var_3e0_1 = var_36c
            
            var_3d8 = *(r12[2] + 0x18)
            int32_t rcx_44 = sub_140b63b70(&var_3d8, &var_420)
            int16_t* rbx_5 = var_3e8
            var_440 = r13
            var_438.d = var_3e0_1
            sub_1405a4c70(&var_440, sbb.d(rcx_44, rcx_44, var_3e0_1 != 0) + 2 + var_3e0_1, 0)
            memcpy(var_440, rbx_5, var_3e0_1 * 2)
            sub_140a20ba0(&var_440, &data_142d404d4, 1)
            int32_t rax_40 = var_438.d
            int16_t* rdi_3 = var_440
            int32_t rcx_49 = var_438:4.d
            var_440 = r13
            var_438 = 0
            int16_t* rbx_6
            int32_t rsi_2
            int32_t r14_1
            int32_t var_418
            
            if (rax_40 s> 1)
                int32_t rbx_8
                
                if (var_418 == 0)
                    rbx_8 = r13.d
                else
                    rbx_8 = var_418 - 1
                
                if (rax_40 != 0 || rbx_8 == 0)
                    rsi_1 = r13.d
                
                var_3d0 = rdi_3
                int32_t rdx_23 = rbx_8 + rsi_1 + rax_40
                rdi_3 = r13
                
                if (rdx_23 s> rcx_49)
                    sub_1405947f0(&var_3d0, rdx_23)
                
                sub_140a20ba0(&var_3d0, var_420, rbx_8)
                rbx_6 = var_3d0
                rsi_2 = rax_40
                r14_1 = rcx_49
                var_3d0 = r13
                int32_t var_3c8_1
                var_3c8_1.q = 0
            else
                rbx_6 = var_420
                rsi_2 = var_418
                int32_t var_414
                r14_1 = var_414
                var_420 = r13
                var_418.q = 0
            int16_t* rcx_52 = var_430
            
            if (rcx_52 != 0)
                sub_140a74f90(rcx_52)
            
            var_430 = rbx_6
            var_428_1 = rsi_2
            var_428_1 = r14_1
            
            if (rdi_3 != 0)
                sub_140a74f90(rdi_3)
            
            int16_t* rcx_54 = var_420
            
            if (rcx_54 != 0)
                sub_140a74f90(rcx_54)
            
            (*(*r12 + 0x208))(r12, &var_430)
            int16_t* rcx_56 = var_3e8
            
            if (rcx_56 != 0)
                sub_140a74f90(rcx_56)
            
            r14 = var_380
            rdi_1 = var_444_1
        
        int64_t* i = *(r15 + 0x70)
        int64_t* i_3 = i
        
        if (i != 0)
            uint64_t var_330
            uint64_t var_338_1 = var_330
            
            do
                int64_t rbx_9 = i[8]
                
                if (test_bit(rbx_9, 0xe) && (r14 == 0 || r14 == i) && (0x800000000 & rbx_9) == 0)
                    void* rax_43 = sub_140cbd010(i)
                    void* rsi_3 = var_308
                    uint8_t rbx_10 = (rbx_9 u>> 0x12).b & 1
                    
                    if (rbx_10 != 0)
                        rsi_3 = rax_43
                    
                    if (var_448_1 == 0)
                        int64_t var_2d8
                        int64_t* rax_44 = sub_140d21e10(rsi_3, &var_2d8, 0)
                        
                        if (&var_430 != rax_44)
                            int16_t* rcx_59 = var_430
                            
                            if (rcx_59 != 0)
                                sub_140a74f90(rcx_59)
                            
                            var_430 = *rax_44
                            *rax_44 = 0
                            var_428_1 = rax_44[1].d
                            var_428_1 = *(rax_44 + 0xc)
                            rax_44[1] = 0
                        
                        int64_t rcx_61 = var_2d8
                        
                        if (rcx_61 != 0)
                            sub_140a74f90(rcx_61)
                        
                        sub_140d21d80(rsi_3)
                    
                    int64_t var_2c8
                    int64_t* rax_47
                    uint64_t rsi_4
                    int32_t rdi_5
                    
                    if (rbx_10 == 0 || arg3 != 0)
                        rsi_4 = 0
                        var_338_1 = 0
                        var_330 = 0
                        int32_t var_328_1 = rcx_22
                        
                        if (rcx_22 != 0)
                            sub_1405a4c70(&var_330, rcx_22, 0)
                            uint64_t rax_48 = var_330
                            var_338_1 = rax_48
                            memcpy(rax_48, result_1, rcx_22 * 2)
                        else
                            int32_t var_324_1 = 0
                        
                        rax_47 = &var_330
                        rdi_5 = 0x10
                    else
                        rax_47 = sub_140bdd520(rax_43, &var_2c8)
                        rsi_4 = 0
                        rdi_5 = 8
                    
                    int32_t r14_3 = rax_47[1].d
                    rdi_1 |= rdi_5
                    int64_t rbx_12 = *rax_47
                    int32_t var_444_2 = rdi_1
                    int16_t* var_388_1 = nullptr
                    uint64_t var_300 = 0
                    int16_t* rbx_13
                    
                    if (r14_3 != 0)
                        sub_1405a4c70(&var_300, r14_3, 0)
                        rbx_13 = var_300
                        var_388_1 = rbx_13
                        memcpy(rbx_13, rbx_12, r14_3 * 2)
                    else
                        int32_t var_2f4_1 = 0
                        rbx_13 = nullptr
                    
                    if ((rdi_1.b & 0x10) != 0)
                        rdi_1 &= 0xffffffef
                        var_444_2 = rdi_1
                        
                        if (var_338_1 != 0)
                            sub_140a74f90(var_338_1)
                    
                    if ((rdi_1.b & 8) != 0)
                        int64_t rcx_69 = var_2c8
                        rdi_1 &= 0xfffffff7
                        var_444_2 = rdi_1
                        
                        if (rcx_69 != 0)
                            sub_140a74f90(rcx_69)
                    
                    sub_140b63b70(&i[5], &var_440)
                    
                    if (((zx.q(*(i[1] + 0x10)) u>> 0x15).b & 1) != 0)
                        int16_t* rdi_7 = &data_142d40450
                        int64_t* r15_2
                        
                        if (var_447_1 == 0)
                            var_420 = nullptr
                            int32_t rdx_47 = 0
                            int32_t rcx_96 = 0
                            
                            if (r14_3 != 0)
                                rdi_7 = rbx_13
                            
                            int32_t var_418_1 = 0
                            int32_t var_414_1 = 0
                            
                            if (rdi_7 != 0 && *rdi_7 != 0)
                                int64_t rbx_20 = -1
                                
                                do
                                    rbx_20 += 1
                                while (rdi_7[rbx_20] != 0)
                                
                                if (rbx_20.d + 1 s> 0)
                                    sub_1405947f0(&var_420, rbx_20.d + 1)
                                    rcx_96 = var_414_1
                                    rdx_47 = var_418_1
                                
                                int32_t rax_70 = rdx_47 + rbx_20.d + 1
                                int32_t var_418_2 = rax_70
                                
                                if (rax_70 s> rcx_96)
                                    sub_140594770(&var_420)
                                
                                UnDecorator::getReferenceType(var_420, rdi_7, (rbx_20.d + 1) * 2)
                            
                            int16_t* rdx_50 = &data_142d40450
                            
                            if (var_428_1 != 0)
                                rdx_50 = var_430
                            
                            int64_t* rax_71 = sub_140af5690(data_143ddb400, rdx_50, 0, 1, &var_420)
                            int16_t* rcx_101 = var_420
                            r15_2 = rax_71
                            
                            if (rcx_101 != 0)
                                sub_140a74f90(rcx_101)
                        else
                            uint64_t var_3a0 = 0
                            
                            if (var_428_1 != 0)
                                rdi_7 = var_430
                            
                            int32_t rdx_40 = 0
                            int32_t rcx_86 = 0
                            int64_t var_398_1 = 0
                            
                            if (rdi_7 != 0 && *rdi_7 != 0)
                                int64_t rbx_17 = -1
                                
                                do
                                    rbx_17 += 1
                                while (rdi_7[rbx_17] != 0)
                                
                                if (rbx_17.d + 1 s> 0)
                                    sub_1405947f0(&var_3a0, rbx_17.d + 1)
                                    rcx_86 = var_398_1:4.d
                                    rdx_40 = var_398_1.d
                                    rsi_4 = var_3a0
                                
                                int32_t rax_63 = rdx_40 + rbx_17.d + 1
                                var_398_1.d = rax_63
                                
                                if (rax_63 s> rcx_86)
                                    sub_140594770(&var_3a0)
                                    rsi_4 = var_3a0
                                
                                UnDecorator::getReferenceType(rsi_4, rdi_7, (rbx_17.d + 1) * 2)
                            
                            int32_t var_354
                            sub_140a452d0(&var_198, &var_354, &var_3a0)
                            int64_t rax_64 = sx.q(var_354)
                            int64_t rax_65
                            
                            if (rax_64.d != 0xffffffff)
                                rax_65 = rax_64 * 0xb8
                            
                            if (rax_64.d == 0xffffffff || rax_65 == neg.q(var_198))
                                r15_2 = nullptr
                            else
                                r15_2 = rax_65 + var_198 + 0x10
                            
                            if (rsi_4 != 0)
                                sub_140a74f90(rsi_4)
                            
                            rsi_4 = 0
                        
                        if (r15_2 != 0)
                            int16_t* rdx_44 = &data_142d40450
                            void* var_2f0 = nullptr
                            
                            if (var_438.d != 0)
                                rdx_44 = var_440
                            
                            int32_t j_2 = 0
                            sub_140b58260(&var_3d0, rdx_44, 0)
                            sub_140ae5e50(r15_2, var_3d0, &var_2f0, 0)
                            uint64_t rax_67 = i[0xf]
                            char rbx_19 = (i[0x10].d).b
                            void* rdi_9 = sx.q(*(i + 0x4c)) + r12
                            int32_t j_1 = j_2
                            int32_t r12_1 = *(rax_67 + 0x3c)
                            var_410 = rax_67
                            var_3d8 = var_2f0
                            int32_t var_400_1 = r12_1
                            var_408.q = rdi_9
                            
                            if (j_1 s<= 0)
                                char r14_5 = rbx_19
                                
                                while (true)
                                    int16_t* r8_30 = &data_142d40450
                                    
                                    if (var_438.d != 0)
                                        r8_30 = var_440
                                    
                                    sub_140a2e390(&var_378, u"%s[%i]", r8_30)
                                    int16_t* rdx_54 = &data_142d40450
                                    
                                    if (var_370 != 0)
                                        rdx_54 = var_378
                                    
                                    sub_140b58260(&var_3e8, rdx_54, 0)
                                    int32_t rcx_107
                                    rcx_107.b = var_3e8:4.d == 0
                                    
                                    if ((rcx_107.b & sub_140b5b8a0(var_3e8.d, 0)) != 0)
                                        int16_t* rcx_117 = var_378
                                        
                                        if (rcx_117 != 0)
                                            sub_140a74f90(rcx_117)
                                        
                                        break
                                    
                                    sub_14093f560(r15_2, &var_3c0, var_3e8)
                                    int64_t rax_83 = sx.q(var_3c0)
                                    int64_t rax_85
                                    
                                    if (rax_83.d != 0xffffffff)
                                        rax_85 = rax_83 * 0x30
                                    
                                    void* rbx_24
                                    
                                    if (rax_83.d == 0xffffffff || rax_85 == neg.q(*r15_2))
                                        rbx_24 = nullptr
                                    else
                                        rbx_24 = rax_85 + *r15_2 + 8
                                        
                                        if (rbx_24 != 0)
                                            int32_t rax_87 = *(rdi_9 + 8)
                                            
                                            if (rsi_4.d s>= rax_87)
                                                sub_140cd78f0(&var_410, rsi_4.d - rax_87 + 1)
                                                r14_5 = rbx_19
                                                r12_1 = var_400_1
                                                rdi_9 = var_408.q
                                            
                                            void* r8_32
                                            
                                            if (*(rdi_9 + 8) != 0)
                                                void* rcx_112 = *rdi_9
                                                
                                                if ((not.b(r14_5) & 1) == 0 && (rcx_112.b & 1) != 0)
                                                    rcx_112 = (rcx_112 s>> 1) + rdi_9
                                                
                                                r8_32 = sx.q(rsi_4.d * r12_1) + rcx_112
                                            else
                                                r8_32 = nullptr
                                            
                                            int32_t rax_91 = *(rbx_24 + 0x18)
                                            void* rcx_114 = rbx_24 + 0x10
                                            
                                            if (rax_91 == 0 || rax_91 - 1 s<= 0)
                                                rcx_114 = rbx_24
                                            
                                            int16_t* const rdx_59
                                            
                                            if (*(rcx_114 + 8) == 0)
                                                rdx_59 = &data_142d40450
                                            else
                                                rdx_59 = *rcx_114
                                            
                                            sub_140941070(i_3[0xf], rdx_59, r8_32, 0, arg1, 
                                                data_143ddb418)
                                    
                                    int16_t* rcx_116 = var_378
                                    rsi_4 = zx.q(rsi_4.d + 1)
                                    
                                    if (rcx_116 != 0)
                                        sub_140a74f90(rcx_116)
                                    
                                    if (rbx_24 == 0)
                                        if (rsi_4.d s>= *(rdi_9 + 8))
                                            break
                            else
                                int32_t r8_23 = *(rdi_9 + 8)
                                
                                if (r8_23 != 0)
                                    sub_140cd9680(&var_410, 0, r8_23)
                                
                                *(rdi_9 + 8) = 0
                                int32_t rax_69 = *(rdi_9 + 0xc)
                                
                                if ((not.b(rbx_19) & 1) != 0)
                                    if (j_1 != rax_69)
                                        sub_140ce4fc0(rdi_9, j_1, r12_1)
                                else if (j_1 != rax_69)
                                    sub_140ce4f50(rdi_9, j_1, r12_1)
                                
                                sub_140cd78f0(&var_410, j_1)
                                int64_t rsi_6 = sx.q(j_1 - 1)
                                
                                if (j_1 - 1 s>= 0)
                                    void** rbx_22 = var_408.q
                                    int32_t r14_4 = 0
                                    int32_t* rdi_12 = var_3d8 + 0x18 + (rsi_6 << 5)
                                    int64_t temp6_1
                                    
                                    do
                                        void* r8_28
                                        
                                        if (rbx_22[1].d != 0)
                                            void* rax_75 = *rbx_22
                                            
                                            if ((not.b(rbx_19) & 1) == 0 && (rax_75.b & 1) != 0)
                                                rax_75 = (rax_75 s>> 1) + rbx_22
                                            
                                            r8_28 = sx.q(r14_4) + rax_75
                                        else
                                            r8_28 = nullptr
                                        
                                        int32_t rax_77 = *rdi_12
                                        int64_t* rax_79
                                        
                                        if (rax_77 != 0)
                                            rax_79 = -fffffffffffffff8
                                        
                                        if (rax_77 == 0 || rax_77 - 1 s<= 0)
                                            rax_79 = -0xffffffffffffffe8
                                        
                                        int16_t* const rdx_53
                                        
                                        if (*(rax_79 + rdi_12 + 8) == 0)
                                            rdx_53 = &data_142d40450
                                        else
                                            rdx_53 = *(rax_79 + rdi_12)
                                        
                                        sub_140941070(i_3[0xf], rdx_53, r8_28, 0, arg1, 
                                            data_143ddb418)
                                        rdi_12 -= 0x20
                                        r14_4 += var_400_1
                                        temp6_1 = rsi_6
                                        rsi_6 -= 1
                                    while (temp6_1 - 1 s>= 0)
                            
                            void* rdi_13 = var_3d8
                            void* rbx_25 = rdi_13
                            
                            if (j_1 != 0)
                                int32_t j
                                
                                do
                                    int64_t rcx_118 = *(rbx_25 + 0x10)
                                    
                                    if (rcx_118 != 0)
                                        sub_140a74f90(rcx_118)
                                    
                                    int64_t rcx_119 = *rbx_25
                                    
                                    if (rcx_119 != 0)
                                        sub_140a74f90(rcx_119)
                                    
                                    rbx_25 += 0x20
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                            
                            if (rdi_13 != 0)
                                sub_140a74f90(rdi_13)
                            
                            r12 = arg1
                            i = i_3
                        
                        rdi_1 = var_444_2
                    else
                        int32_t rax_51 = i[7].d
                        int32_t rsi_5 = 0
                        
                        if (rax_51 s> 0)
                            do
                                if (rax_51 != 1)
                                    sub_140b63b70(&i[5], &var_368)
                                    int16_t* const r8_12 = &data_142d40450
                                    int32_t var_360
                                    
                                    if (var_360 != 0)
                                        r8_12 = var_368
                                    
                                    int16_t* var_320
                                    sub_140a2e390(&var_320, u"%s[%i]", r8_12)
                                    int16_t* rcx_75 = var_440
                                    
                                    if (rcx_75 != 0)
                                        sub_140a74f90(rcx_75)
                                    
                                    int16_t* rcx_76 = var_368
                                    var_440 = var_320
                                    int32_t var_318
                                    var_438.d = var_318
                                    int32_t var_314
                                    var_438:4.d = var_314
                                    var_318.q = 0
                                    var_320 = nullptr
                                    
                                    if (rcx_76 != 0)
                                        sub_140a74f90(rcx_76)
                                
                                uint64_t var_348 = 0
                                int32_t var_340_1 = 0
                                char rbx_14
                                
                                if (var_447_1 == 0)
                                    int16_t* var_3b0 = nullptr
                                    int16_t* rdi_6 = &data_142d40450
                                    int32_t rdx_35 = 0
                                    
                                    if (r14_3 != 0)
                                        rdi_6 = rbx_13
                                    
                                    int32_t var_3a8_1 = 0
                                    int32_t rcx_78 = 0
                                    int32_t var_3a4_1 = 0
                                    
                                    if (rdi_6 != 0 && *rdi_6 != 0)
                                        int64_t rbx_15 = -1
                                        
                                        do
                                            rbx_15 += 1
                                        while (rdi_6[rbx_15] != 0)
                                        
                                        if (rbx_15.d + 1 s> 0)
                                            sub_1405947f0(&var_3b0, rbx_15.d + 1)
                                            rcx_78 = var_3a4_1
                                            rdx_35 = var_3a8_1
                                        
                                        int32_t rax_56 = rdx_35 + rbx_15.d + 1
                                        int32_t var_3a8_2 = rax_56
                                        
                                        if (rax_56 s> rcx_78)
                                            sub_140594770(&var_3b0)
                                        
                                        UnDecorator::getReferenceType(var_3b0, rdi_6, 
                                            (rbx_15.d + 1) * 2)
                                    
                                    int16_t* r8_16 = &data_142d40450
                                    
                                    if (var_438.d != 0)
                                        r8_16 = var_440
                                    
                                    int16_t* rdx_38 = &data_142d40450
                                    
                                    if (var_428_1 != 0)
                                        rdx_38 = var_430
                                    
                                    char rax_57 = sub_140af5b90(data_143ddb400, rdx_38, r8_16, 
                                        &var_348, &var_3b0)
                                    int16_t* rcx_83 = var_3b0
                                    rbx_14 = rax_57
                                    
                                    if (rcx_83 != 0)
                                        sub_140a74f90(rcx_83)
                                else
                                    int16_t* r8_13 = &data_142d40450
                                    int16_t* rdx_34 = &data_142d40450
                                    
                                    if (var_438.d != 0)
                                        r8_13 = var_440
                                    
                                    if (var_428_1 != 0)
                                        rdx_34 = var_430
                                    
                                    rbx_14 = sub_140af5d90(&var_198, rdx_34, r8_13, &var_348)
                                
                                if (rbx_14 != 0)
                                    int16_t* const rdx_39 = &data_142d40450
                                    
                                    if (var_340_1 != 0)
                                        rdx_39 = var_348
                                    
                                    sub_140941070(i, rdx_39, 
                                        sx.q(*(i + 0x4c)) + sx.q(*(i + 0x3c) * rsi_5) + r12, 0, 
                                        r12, data_143ddb418)
                                
                                uint64_t rcx_85 = var_348
                                
                                if (rcx_85 != 0)
                                    sub_140a74f90(rcx_85)
                                
                                rax_51 = i[7].d
                                rsi_5 += 1
                                rbx_13 = var_388_1
                            while (rsi_5 s< rax_51)
                            
                            rdi_1 = var_444_2
                    
                    int16_t* rcx_121 = var_440
                    
                    if (rcx_121 != 0)
                        sub_140a74f90(rcx_121)
                    
                    if (var_388_1 != 0)
                        sub_140a74f90(var_388_1)
                
                i = i[0xb]
                r14 = var_380
                i_3 = i
            while (i != 0)
        
        if ((var_34c & 8) != 0)
            (*(*r12 + 0x130))(r12, var_380)
        
        int16_t* rcx_124 = var_430
        
        if (rcx_124 != 0)
            sub_140a74f90(rcx_124)
        
        sub_140ae7280(&var_198)
        result = result_1
        
        if (result != 0)
            result = sub_140a74f90(result)
    else
        int32_t var_400
        uint64_t r9
        
        if (((*(rdx + 0xcc) u>> 2).b & 1) == 0)
            if ((arg4.b & 2) == 0)
                if ((arg4.b & 4) != 0)
                    var_458.d = 0
                    sub_1409aa070(&var_410, sub_140d41340(), 0, 0x10, var_458.d)
                    
                    for (void** i_1 = var_400.q; i_1 != 0; i_1 = var_400.q)
                        void* const rcx_14 = *i_1
                        
                        if (*(rcx_14 + 0x10) == r15)
                            if (i_1 == 0)
                                rcx_14 = nullptr
                            
                            void* const rcx_15
                            
                            if (i_1 == 0)
                                rcx_15 = nullptr
                            else
                                rcx_15 = *i_1
                            
                            sub_140ce1310(rcx_15, *(rcx_14 + 0x10), 0, zx.q(arg4) & 8, r14)
                        
                        sub_140cd6aa0(&var_410)
                
                goto label_140ce16b9
            
            arg3.b = 1
            sub_140cd3610(&var_410, 0x10, arg3.b, 0)
            int32_t rdx_5 = var_400
            int32_t r8_1 = var_408
            r9 = var_410
            
            while (true)
                if (rdx_5 s< 0 || rdx_5 s>= r8_1)
                    result.b = 0
                else
                    result.b = 1
                
                if (result.b == 0)
                    break
                
                int64_t* rbx_2 = *(r9 + (sx.q(rdx_5) << 3))
                int64_t rax_15 = sx.q(*(r15 + 0x38))
                
                if (rax_15.d s<= rbx_2[7].d && *(rbx_2[6] + (rax_15 << 3)) == r15 + 0x30)
                    int64_t rcx_11 = rbx_2[0x23]
                    
                    if (rcx_11 == 0)
                        (*(*rbx_2 + 0x390))(rbx_2)
                        rcx_11 = rbx_2[0x23]
                    
                    sub_140ce1310(rcx_11, rbx_2, 0, zx.q(arg4) & 0xc, r14)
                    rdx_5 = var_400
                    r8_1 = var_408
                    r9 = var_410
                
                result = zx.q(rdx_5 + 1)
                var_400 = result.d
                rdx_5 = result.d
                
                if (result.d s< r8_1)
                    while (*(r9 + (sx.q(rdx_5) << 3)) == 0)
                        result = zx.q(rdx_5 + 1)
                        var_400 = result.d
                        rdx_5 = result.d
                        
                        if (result.d s>= r8_1)
                            break
            
        label_140ce14b3:
            
            if (r9 != 0)
                result = sub_140a74f90(r9)
        else
            if ((arg4.b & 1) == 0)
                if ((arg4.b & 2) == 0)
                    if ((arg4.b & 4) != 0)
                        var_458.d = 0
                        sub_1409aa070(&var_410, sub_140d41340(), 0, 0x10, var_458.d)
                        
                        for (void** i_2 = var_400.q; i_2 != 0; i_2 = var_400.q)
                            int64_t rcx_6 = sx.q(*(r15 + 0x38))
                            void* rax_11 = *(*i_2 + 0x10)
                            
                            if (rcx_6.d s<= *(rax_11 + 0x38)
                                    && *(*(rax_11 + 0x30) + (rcx_6 << 3)) == r15 + 0x30)
                                void* const rax_13
                                
                                if (i_2 == 0)
                                    rax_13 = nullptr
                                else
                                    rax_13 = *i_2
                                
                                void* const rcx_7
                                
                                if (i_2 == 0)
                                    rcx_7 = nullptr
                                else
                                    rcx_7 = *i_2
                                
                                sub_140ce1310(rcx_7, *(rax_13 + 0x10), 0, zx.q(arg4) & 8, r14)
                            
                            sub_140cd6aa0(&var_410)
                    
                    goto label_140ce16b9
                
                arg3.b = 1
                sub_140cd3610(&var_410, 0x10, arg3.b, 0)
                int32_t rdx_1 = var_400
                int32_t r8 = var_408
                r9 = var_410
                
                while (true)
                    if (rdx_1 s< 0 || rdx_1 s>= r8)
                        result.b = 0
                    else
                        result.b = 1
                    
                    if (result.b == 0)
                        break
                    
                    int64_t* rbx_1 = *(r9 + (sx.q(rdx_1) << 3))
                    int64_t rax_6 = sx.q(*(r15 + 0x38))
                    
                    if (rax_6.d s<= rbx_1[7].d && *(rbx_1[6] + (rax_6 << 3)) == r15 + 0x30)
                        int64_t rcx_2 = rbx_1[0x23]
                        
                        if (rcx_2 == 0)
                            (*(*rbx_1 + 0x390))(rbx_1)
                            rcx_2 = rbx_1[0x23]
                        
                        sub_140ce1310(rcx_2, rbx_1, 0, zx.q(arg4) & 0xc, r14)
                        rdx_1 = var_400
                        r8 = var_408
                        r9 = var_410
                    
                    result = zx.q(rdx_1 + 1)
                    var_400 = result.d
                    rdx_1 = result.d
                    
                    if (result.d s< r8)
                        while (*(r9 + (sx.q(rdx_1) << 3)) == 0)
                            result = zx.q(rdx_1 + 1)
                            var_400 = result.d
                            rdx_1 = result.d
                            
                            if (result.d s>= r8)
                                break
                
                goto label_140ce14b3
            
            var_458 = r14
            result = sub_140ce1310(arg1, rdx, 0)
            
            if ((arg4.b & 6) == 0)
                goto label_140ce16b9

__security_check_cookie(rax_1 ^ &var_478)
return result
