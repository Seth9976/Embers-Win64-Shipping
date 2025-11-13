// 函数: sub_140ab2a90
// 地址: 0x140ab2a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5e8
int64_t var_48 = __security_cookie ^ &var_5e8
int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t var_250 = 0x100
void var_248
void* var_268 = &var_248
void* var_260 = &var_248
int64_t* var_258 = &var_48
int64_t var_5b0
sub_140a1dfc0(arg3, &var_5b0)
int32_t var_5a8
int64_t rbx_1 = sx.q(var_5a8)
void* rcx_1 = var_260
int64_t r12 = var_5b0
int64_t rsi = rbx_1 * 2

if (rsi + rcx_1 u>= var_258)
    sub_140b38e20(&var_268, rbx_1)
    rcx_1 = var_260

void* rax_4 = rcx_1 + (rbx_1 << 1)
memcpy(rcx_1, r12, rsi.d)
void* rsi_1 = var_268
void var_468
void* var_488 = &var_468
int16_t var_470 = 0x100
void** var_478 = &var_268
void* rcx_3 = &var_468
void* var_480 = &var_468
int64_t rdx_3 = sx.q(((rax_4 - rsi_1) s>> 1).d)
int64_t rbx_2 = rdx_3 * 2

if (&var_468 + rbx_2 u>= &var_268)
    sub_140b38e20(&var_488, rdx_3)
    rcx_3 = var_480

void* rax_9 = rcx_3 + rbx_2
memcpy(rcx_3, rsi_1, rbx_2.d)
void* rcx_5 = rax_4

if (rcx_5 + 0xa u>= var_258)
    sub_140b38e20(&var_268, 5)
    rcx_5 = rax_4

*rcx_5 = 0x6100630075002e
*(rcx_5 + 8) = 0x73
void* rcx_7 = rax_9

if (rcx_7 + 0xa u>= var_478)
    sub_140b38e20(&var_488, 5)
    rcx_7 = rax_9

*rcx_7 = 0x6f00740075002e
*(rcx_7 + 8) = 0x63

if (*(rcx_5 + 0xa) != 0)
    *(rcx_5 + 0xa) = 0

int64_t var_5c0
int32_t var_598
int16_t var_594[0x56]
int128_t zmm1

if (sub_140a4c6c0(*arg1, var_268, &arg1[0xb], &arg1[0xc]) != 0)
    if (*(rcx_7 + 0xa) != 0)
        *(rcx_7 + 0xa) = 0
    
    int64_t* rax_22 = (*(*rax_2 + 0xc0))(rax_2, var_488, 0)
    int64_t* rcx_26
    
    if (rax_22 != 0)
        uint64_t count = (*(*rax_22 + 0x40))(rax_22)
        int64_t* rax_29 = j_sub_140a82f30(count)
        int64_t* rsi_2 = rax_29
        
        if (rax_29 == 0)
            rsi_2 = nullptr
        else
            memset(rax_29, 0, count)
        
        j_sub_140a74f90(0)
        j_sub_140a74f90(0)
        char rax_31 = (*(*rax_22 + 0x20))(rax_22, rsi_2, count)
        int64_t r8_9 = *rax_22
        (*r8_9)(rax_22, 1, r8_9)
        int128_t zmm1_1
        
        if (rax_31 == 0)
            if (*(rcx_7 + 0xa) != 0)
                *(rcx_7 + 0xa) = 0
            
            void* rdi_5 = var_488
            int64_t rbx_8
            
            if (rdi_5 == 0)
                rbx_8 = 0
            else
                rbx_8 = -1
                
                do
                    rbx_8 += 1
                while (*(rdi_5 + (rbx_8 << 1)) != 0)
            
            int32_t var_5c8_3 = 8
            var_5c0 = 0
            int64_t var_5b8_3 = 0
            sub_140a20ba0(&var_5c0, u"Failed to read IoStore TOC file '", 0x21)
            sub_140a20ba0(&var_5c0, rdi_5, rbx_8.d)
            sub_140a20ba0(&var_5c0, &data_142e51e18, 1)
            sub_140a1dfc0(&var_5c0, &var_5b0)
            int64_t rdx_18 = var_5b0
            var_598 = var_5c8_3
            int32_t rax_34 = var_5a8
            
            if (rax_34 s>= 0x7f)
                rax_34 = 0x7f
            
            UnDecorator::getReferenceType(&var_594, rdx_18, rax_34 * 2)
            int32_t* rdx_19 = arg2
            var_594[sx.q(rax_34)] = 0
            int32_t* r8_12 = &var_598
            int64_t i_10 = 2
            int64_t i
            
            do
                rdx_19 = &rdx_19[0x20]
                int128_t zmm0_4 = *r8_12
                zmm1_1 = *(r8_12 + 0x10)
                r8_12 = &r8_12[0x20]
                *(rdx_19 - 0x80) = zmm0_4
                zmm0_4 = *(r8_12 - 0x60)
                *(rdx_19 - 0x70) = zmm1_1
                zmm1_1 = *(r8_12 - 0x50)
                *(rdx_19 - 0x60) = zmm0_4
                zmm0_4 = *(r8_12 - 0x40)
                *(rdx_19 - 0x50) = zmm1_1
                zmm1_1 = *(r8_12 - 0x30)
                *(rdx_19 - 0x40) = zmm0_4
                zmm0_4 = *(r8_12 - 0x20)
                *(rdx_19 - 0x30) = zmm1_1
                zmm1_1 = *(r8_12 - 0x10)
                *(rdx_19 - 0x20) = zmm0_4
                *(rdx_19 - 0x10) = zmm1_1
                i = i_10
                i_10 -= 1
            while (i != 1)
            *rdx_19 = *r8_12
            goto label_140ab3777
        
        int32_t* rcx_42
        int32_t* rdx_23
        
        if (*rsi_2 != 0x2d3d3d2d2d3d3d2d || rsi_2[1] != 0x2d3d3d2d2d3d3d2d)
            if (*(rcx_7 + 0xa) != 0)
                *(rcx_7 + 0xa) = 0
            
            void* rdi_10 = var_488
            int64_t rbx_17
            
            if (rdi_10 == 0)
                rbx_17 = 0
            else
                rbx_17 = -1
                
                do
                    rbx_17 += 1
                while (*(rdi_10 + (rbx_17 << 1)) != 0)
            
            int32_t var_5c8_7 = 8
            var_5c0 = 0
            int64_t var_5b8_7 = 0
            sub_140a20ba0(&var_5c0, u"TOC header magic mismatch while reading '", 0x29)
            sub_140a20ba0(&var_5c0, rdi_10, rbx_17.d)
            sub_140a20ba0(&var_5c0, &data_142e51e18, 1)
            sub_140a1dfc0(&var_5c0, &var_5b0)
            int64_t rdx_46 = var_5b0
            var_598 = var_5c8_7
            int32_t rax_70 = var_5a8
            
            if (rax_70 s>= 0x7f)
                rax_70 = 0x7f
            
            UnDecorator::getReferenceType(&var_594, rdx_46, rax_70 * 2)
            rcx_42 = arg2
            var_594[sx.q(rax_70)] = 0
            rdx_23 = &var_598
            int64_t i_15 = 2
            int64_t i_1
            
            do
                rcx_42 = &rcx_42[0x20]
                int128_t zmm0_8 = *rdx_23
                zmm1_1 = *(rdx_23 + 0x10)
                rdx_23 = &rdx_23[0x20]
                *(rcx_42 - 0x80) = zmm0_8
                zmm0_8 = *(rdx_23 - 0x60)
                *(rcx_42 - 0x70) = zmm1_1
                zmm1_1 = *(rdx_23 - 0x50)
                *(rcx_42 - 0x60) = zmm0_8
                zmm0_8 = *(rdx_23 - 0x40)
                *(rcx_42 - 0x50) = zmm1_1
                zmm1_1 = *(rdx_23 - 0x30)
                *(rcx_42 - 0x40) = zmm0_8
                zmm0_8 = *(rdx_23 - 0x20)
                *(rcx_42 - 0x30) = zmm1_1
                zmm1_1 = *(rdx_23 - 0x10)
                *(rcx_42 - 0x20) = zmm0_8
                *(rcx_42 - 0x10) = zmm1_1
                i_1 = i_15
                i_15 -= 1
            while (i_1 != 1)
        label_140ab3775:
            *rcx_42 = *rdx_23
        label_140ab3777:
            int64_t rcx_76 = var_5c0
            
            if (rcx_76 != 0)
                sub_140a74f90(rcx_76)
        else
            if (rsi_2[2].d != 0x80)
                if (*(rcx_7 + 0xa) != 0)
                    *(rcx_7 + 0xa) = 0
                
                void* rdi_6 = var_488
                int64_t rbx_10
                
                if (rdi_6 == 0)
                    rbx_10 = 0
                else
                    rbx_10 = -1
                    
                    do
                        rbx_10 += 1
                    while (*(rdi_6 + (rbx_10 << 1)) != 0)
                
                int32_t var_5c8_4 = 8
                var_5c0 = 0
                int64_t var_5b8_4 = 0
                sub_140a20ba0(&var_5c0, u"TOC header size mismatch while reading '", 0x28)
                sub_140a20ba0(&var_5c0, rdi_6, rbx_10.d)
                sub_140a20ba0(&var_5c0, &data_142e51e18, 1)
                sub_140a1dfc0(&var_5c0, &var_5b0)
                int64_t rdx_22 = var_5b0
                var_598 = var_5c8_4
                int32_t rax_41 = var_5a8
                
                if (rax_41 s>= 0x7f)
                    rax_41 = 0x7f
                
                UnDecorator::getReferenceType(&var_594, rdx_22, rax_41 * 2)
                rcx_42 = arg2
                var_594[sx.q(rax_41)] = 0
                rdx_23 = &var_598
                int64_t i_11 = 2
                int64_t i_2
                
                do
                    rcx_42 = &rcx_42[0x20]
                    int128_t zmm0_5 = *rdx_23
                    zmm1_1 = *(rdx_23 + 0x10)
                    rdx_23 = &rdx_23[0x20]
                    *(rcx_42 - 0x80) = zmm0_5
                    zmm0_5 = *(rdx_23 - 0x60)
                    *(rcx_42 - 0x70) = zmm1_1
                    zmm1_1 = *(rdx_23 - 0x50)
                    *(rcx_42 - 0x60) = zmm0_5
                    zmm0_5 = *(rdx_23 - 0x40)
                    *(rcx_42 - 0x50) = zmm1_1
                    zmm1_1 = *(rdx_23 - 0x30)
                    *(rcx_42 - 0x40) = zmm0_5
                    zmm0_5 = *(rdx_23 - 0x20)
                    *(rcx_42 - 0x30) = zmm1_1
                    zmm1_1 = *(rdx_23 - 0x10)
                    *(rcx_42 - 0x20) = zmm0_5
                    *(rcx_42 - 0x10) = zmm1_1
                    i_2 = i_11
                    i_11 -= 1
                while (i_2 != 1)
                goto label_140ab3775
            
            if (rsi_2[3].d != 0x16)
                if (*(rcx_7 + 0xa) != 0)
                    *(rcx_7 + 0xa) = 0
                
                void* rdi_7 = var_488
                int64_t rbx_12
                
                if (rdi_7 == 0)
                    rbx_12 = 0
                else
                    rbx_12 = -1
                    
                    do
                        rbx_12 += 1
                    while (*(rdi_7 + (rbx_12 << 1)) != 0)
                
                int32_t var_5c8_5 = 8
                var_5c0 = 0
                int64_t var_5b8_5 = 0
                sub_140a20ba0(&var_5c0, u"TOC entry size mismatch while reading '", 0x27)
                sub_140a20ba0(&var_5c0, rdi_7, rbx_12.d)
                sub_140a20ba0(&var_5c0, &data_142e51e18, 1)
                sub_140a1dfc0(&var_5c0, &var_5b0)
                int64_t rdx_26 = var_5b0
                var_598 = var_5c8_5
                int32_t rax_45 = var_5a8
                
                if (rax_45 s>= 0x7f)
                    rax_45 = 0x7f
                
                UnDecorator::getReferenceType(&var_594, rdx_26, rax_45 * 2)
                rcx_42 = arg2
                var_594[sx.q(rax_45)] = 0
                rdx_23 = &var_598
                int64_t i_12 = 2
                int64_t i_3
                
                do
                    rcx_42 = &rcx_42[0x20]
                    int128_t zmm0_6 = *rdx_23
                    zmm1_1 = *(rdx_23 + 0x10)
                    rdx_23 = &rdx_23[0x20]
                    *(rcx_42 - 0x80) = zmm0_6
                    zmm0_6 = *(rdx_23 - 0x60)
                    *(rcx_42 - 0x70) = zmm1_1
                    zmm1_1 = *(rdx_23 - 0x50)
                    *(rcx_42 - 0x60) = zmm0_6
                    zmm0_6 = *(rdx_23 - 0x40)
                    *(rcx_42 - 0x50) = zmm1_1
                    zmm1_1 = *(rdx_23 - 0x30)
                    *(rcx_42 - 0x40) = zmm0_6
                    zmm0_6 = *(rdx_23 - 0x20)
                    *(rcx_42 - 0x30) = zmm1_1
                    zmm1_1 = *(rdx_23 - 0x10)
                    *(rcx_42 - 0x20) = zmm0_6
                    *(rcx_42 - 0x10) = zmm1_1
                    i_3 = i_12
                    i_12 -= 1
                while (i_3 != 1)
                goto label_140ab3775
            
            int64_t* rbx_14 = &rsi_2[0x10]
            int32_t rdi_8 = *(rsi_2 + 0x14)
            
            if (rdi_8 s> arg1[2].d - *(arg1 + 0x3c))
                sub_1409d9850(&arg1[1], rdi_8)
                int32_t rax_53
                
                if (rdi_8 u< 4)
                    rax_53 = 1
                else
                    uint32_t rax_50 = rdi_8 u>> 1
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_50 + 8)
                    int32_t rcx_49
                    
                    if (rax_50 == 0xfffffff8)
                        rcx_49 = 0x20
                    else
                        rcx_49 = 0x1f - temp0_1
                    
                    uint64_t rflags_2
                    char temp0_2
                    temp0_2, rflags_2 = _bit_scan_reverse(rax_50 + 7)
                    
                    if (rax_50 == 0xfffffff9)
                        rax_53 = 1
                    else
                        rax_53 =
                            1 << ((not.d(rcx_49 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_2)))
                
                int32_t rcx_54 = arg1[0xa].d
                
                if (rcx_54 == 0 || rcx_54 s< rax_53)
                    arg1[0xa].d = rax_53
                    sub_140abe800(&arg1[1])
            
            if (rdi_8 != 0)
                while (true)
                    rdi_8 -= 1
                    
                    if (((((zx.q(*(rbx_14 + 5)) << 8 | zx.q(*(rbx_14 + 6))) << 8
                            | zx.q(*(rbx_14 + 7))) << 8 | zx.q(rbx_14[1].b)) << 8 | zx.q(*(rbx_14 + 9)))
                            + ((((zx.q(*(rbx_14 + 1)) | zx.q(*rbx_14) << 8) << 8
                            | zx.q(*(rbx_14 + 2))) << 8 | zx.q(*(rbx_14 + 3))) << 8
                            | zx.q(*(rbx_14 + 4))) u> arg1[0xc])
                        if (*(rcx_7 + 0xa) != 0)
                            *(rcx_7 + 0xa) = 0
                        
                        void* rdi_9 = var_488
                        int64_t rbx_15
                        
                        if (rdi_9 == 0)
                            rbx_15 = 0
                        else
                            rbx_15 = -1
                            
                            do
                                rbx_15 += 1
                            while (*(rdi_9 + (rbx_15 << 1)) != 0)
                        
                        int32_t var_5c8_6 = 8
                        var_5c0 = 0
                        int64_t var_5b8_6 = 0
                        sub_140a20ba0(&var_5c0, TOC entry out of container bounds while reading '", 
                            0x31)
                        sub_140a20ba0(&var_5c0, rdi_9, rbx_15.d)
                        sub_140a20ba0(&var_5c0, &data_142e51e18, 1)
                        sub_140a1dfc0(&var_5c0, &var_5b0)
                        int64_t rdx_43 = var_5b0
                        var_598 = var_5c8_6
                        int32_t rax_66 = var_5a8
                        
                        if (rax_66 s>= 0x7f)
                            rax_66 = 0x7f
                        
                        UnDecorator::getReferenceType(&var_594, rdx_43, rax_66 * 2)
                        rcx_42 = arg2
                        var_594[sx.q(rax_66)] = 0
                        rdx_23 = &var_598
                        int64_t i_14 = 2
                        int64_t i_4
                        
                        do
                            rcx_42 = &rcx_42[0x20]
                            int128_t zmm0_7 = *rdx_23
                            zmm1_1 = *(rdx_23 + 0x10)
                            rdx_23 = &rdx_23[0x20]
                            *(rcx_42 - 0x80) = zmm0_7
                            zmm0_7 = *(rdx_23 - 0x60)
                            *(rcx_42 - 0x70) = zmm1_1
                            zmm1_1 = *(rdx_23 - 0x50)
                            *(rcx_42 - 0x60) = zmm0_7
                            zmm0_7 = *(rdx_23 - 0x40)
                            *(rcx_42 - 0x50) = zmm1_1
                            zmm1_1 = *(rdx_23 - 0x30)
                            *(rcx_42 - 0x40) = zmm0_7
                            zmm0_7 = *(rdx_23 - 0x20)
                            *(rcx_42 - 0x30) = zmm1_1
                            zmm1_1 = *(rdx_23 - 0x10)
                            *(rcx_42 - 0x20) = zmm0_7
                            *(rcx_42 - 0x10) = zmm1_1
                            i_4 = i_14
                            i_14 -= 1
                        while (i_4 != 1)
                        break
                    
                    sub_140a91740(&arg1[1], rbx_14 + 0xa, rbx_14)
                    rbx_14 += 0x16
                    
                    if (rdi_8 == 0)
                        goto label_140ab34a9
                
                goto label_140ab3775
            
        label_140ab34a9:
            int32_t* rcx_65 = arg2
            int32_t* rdx_40 = &data_143db9bc0
            int64_t i_13 = 2
            int64_t i_5
            
            do
                rcx_65 = &rcx_65[0x20]
                int128_t zmm0_3 = *rdx_40
                rdx_40 = &rdx_40[0x20]
                *(rcx_65 - 0x80) = zmm0_3
                *(rcx_65 - 0x70) = *(rdx_40 - 0x70)
                *(rcx_65 - 0x60) = *(rdx_40 - 0x60)
                *(rcx_65 - 0x50) = *(rdx_40 - 0x50)
                *(rcx_65 - 0x40) = *(rdx_40 - 0x40)
                *(rcx_65 - 0x30) = *(rdx_40 - 0x30)
                *(rcx_65 - 0x20) = *(rdx_40 - 0x20)
                *(rcx_65 - 0x10) = *(rdx_40 - 0x10)
                i_5 = i_13
                i_13 -= 1
            while (i_5 != 1)
            *rcx_65 = *rdx_40
        rcx_26 = rsi_2
    else
        if (*(rcx_7 + 0xa) != 0)
            *(rcx_7 + 0xa) = 0
        
        void* rdi_2 = var_488
        int64_t rbx_6
        
        if (rdi_2 == 0)
            rbx_6 = 0
        else
            rbx_6 = -1
            
            do
                rbx_6 += 1
            while (*(rdi_2 + (rbx_6 << 1)) != 0)
        
        int32_t var_5c8_2 = 4
        var_5c0 = 0
        int64_t var_5b8_2 = 0
        sub_140a20ba0(&var_5c0, u"Failed to open IoStore TOC file '", 0x21)
        sub_140a20ba0(&var_5c0, rdi_2, rbx_6.d)
        sub_140a20ba0(&var_5c0, &data_142e51e18, 1)
        sub_140a1dfc0(&var_5c0, &var_5b0)
        int64_t rdx_13 = var_5b0
        var_598 = var_5c8_2
        int32_t rax_25 = var_5a8
        
        if (rax_25 s>= 0x7f)
            rax_25 = 0x7f
        
        UnDecorator::getReferenceType(&var_594, rdx_13, rax_25 * 2)
        int32_t* rcx_24 = arg2
        var_594[sx.q(rax_25)] = 0
        int32_t* rdx_14 = &var_598
        int64_t i_9 = 2
        int64_t i_6
        
        do
            rcx_24 = &rcx_24[0x20]
            int128_t zmm0_2 = *rdx_14
            zmm1 = *(rdx_14 + 0x10)
            rdx_14 = &rdx_14[0x20]
            *(rcx_24 - 0x80) = zmm0_2
            zmm0_2 = *(rdx_14 - 0x60)
            *(rcx_24 - 0x70) = zmm1
            zmm1 = *(rdx_14 - 0x50)
            *(rcx_24 - 0x60) = zmm0_2
            zmm0_2 = *(rdx_14 - 0x40)
            *(rcx_24 - 0x50) = zmm1
            zmm1 = *(rdx_14 - 0x30)
            *(rcx_24 - 0x40) = zmm0_2
            zmm0_2 = *(rdx_14 - 0x20)
            *(rcx_24 - 0x30) = zmm1
            zmm1 = *(rdx_14 - 0x10)
            *(rcx_24 - 0x20) = zmm0_2
            *(rcx_24 - 0x10) = zmm1
            i_6 = i_9
            i_9 -= 1
        while (i_6 != 1)
        *rcx_24 = *rdx_14
        int64_t rcx_25 = var_5c0
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        rcx_26 = nullptr
    
    j_sub_140a74f90(rcx_26)
else
    if (*(rcx_5 + 0xa) != 0)
        *(rcx_5 + 0xa) = 0
    
    void* rdi_1 = var_268
    int64_t rbx_3
    
    if (rdi_1 == 0)
        rbx_3 = 0
    else
        rbx_3 = -1
        
        do
            rbx_3 += 1
        while (*(rdi_1 + (rbx_3 << 1)) != 0)
    
    int32_t var_5c8_1 = 4
    var_5c0 = 0
    int64_t var_5b8_1 = 0
    sub_140a20ba0(&var_5c0, u"Failed to open IoStore container file '", 0x27)
    sub_140a20ba0(&var_5c0, rdi_1, rbx_3.d)
    sub_140a20ba0(&var_5c0, &data_142e51e18, 1)
    sub_140a1dfc0(&var_5c0, &var_5b0)
    int64_t rdx_8 = var_5b0
    var_598 = var_5c8_1
    int32_t rax_18 = var_5a8
    
    if (rax_18 s>= 0x7f)
        rax_18 = 0x7f
    
    UnDecorator::getReferenceType(&var_594, rdx_8, rax_18 * 2)
    int32_t* rdx_9 = arg2
    var_594[sx.q(rax_18)] = 0
    int32_t* rcx_15 = &var_598
    int64_t i_8 = 2
    int64_t i_7
    
    do
        rdx_9 = &rdx_9[0x20]
        int128_t zmm0_1 = *rcx_15
        zmm1 = *(rcx_15 + 0x10)
        rcx_15 = &rcx_15[0x20]
        *(rdx_9 - 0x80) = zmm0_1
        zmm0_1 = *(rcx_15 - 0x60)
        *(rdx_9 - 0x70) = zmm1
        zmm1 = *(rcx_15 - 0x50)
        *(rdx_9 - 0x60) = zmm0_1
        zmm0_1 = *(rcx_15 - 0x40)
        *(rdx_9 - 0x50) = zmm1
        zmm1 = *(rcx_15 - 0x30)
        *(rdx_9 - 0x40) = zmm0_1
        zmm0_1 = *(rcx_15 - 0x20)
        *(rdx_9 - 0x30) = zmm1
        zmm1 = *(rcx_15 - 0x10)
        *(rdx_9 - 0x20) = zmm0_1
        *(rdx_9 - 0x10) = zmm1
        i_7 = i_8
        i_8 -= 1
    while (i_7 != 1)
    *rdx_9 = *rcx_15
    int64_t rcx_17 = var_5c0
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
sub_140b301c0(&var_488)
sub_140b301c0(&var_268)
__security_check_cookie(var_48 ^ &var_5e8)
return arg2
