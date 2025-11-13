// 函数: sub_1407c5f50
// 地址: 0x1407c5f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* r10 = *(arg3 + 0x10)
int64_t r15 = *(arg2 + 0x1b0)
int64_t var_98 = r15
void* const rcx_3

if (*(r10 + 0xd0) == *(r10 + 0xfc))
label_1407c6010:
    rcx_3 = nullptr
else
    int64_t r11_1 = *(arg3 + 0x18)
    void* r9_1 = r10 + 0x100
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_7 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(*(r10 + 0x110)) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_1407c6010_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(r10 + 0xc8)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_7) * 9
            rcx_3 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == r11_1)
                break
            
            rax_7 = *(rcx_3 + 0x40)
            
            if (rax_7 == 0xffffffff)
                goto label_1407c6010_2
        
        if (rax_7 == 0xffffffff)
        label_1407c6010_2:
            rcx_3 = nullptr

void* r14 = rcx_3 + 8

if (rcx_3 == 0)
    r14 = nullptr

uint64_t result

if (r14 != 0)
    void* rdi_1 = *r14
    
    if (rdi_1 != 0)
        *(r14 + 0x34) = 0
        int64_t* rdi_2 = *(rdi_1 + 8)
        
        if (rdi_2 == 0)
            result = sub_1407c89a0(arg1, arg2, r15, 0)
            *(r14 + 0x18) = 0
        else
            void* rcx_6 = *(arg3 + 0x28)
            int32_t var_90 = 0
            int32_t var_8c = 0
            int32_t var_88 = 0xffffffff
            int64_t rax_8 = *r14
            int64_t r12_1 = *(rcx_6 + 0xc0)
            void* r15_1
            
            if (r12_1 != rax_8)
                r15_1 = rdi_2[0x13]
                
                if (r15_1 != 0)
                    var_90 = *(r15_1 + 0xc0)
                    var_8c = *(r15_1 + 0xc4)
                    var_88 = *(r15_1 + 0x48)
            else
                void* rcx_7 = rcx_6 + 0xe0
                void* rax_9 = *(rcx_7 + 0x20)
                
                if (rax_9 != 0)
                    rcx_7 = rax_9
                
                void* rcx_8 = rcx_7 + (sx.q(*(arg3 + 0x30)) << 5)
                r15_1 = *rcx_8
                var_88 = *(rcx_8 + 0x18)
                void* rax_13 = *(rcx_8 + 8)
                
                if (rax_13 != 0)
                    var_90 = *(rax_13 + 0xc0)
                    var_8c = *(*(rcx_8 + 8) + 0xc4)
            
            sub_140741e30(arg2, &var_98, arg1 + 8, &var_90, 0)
            sub_140741e30(arg2, &var_98, arg1 + 0xe, &var_8c, 0)
            int64_t r13_1 = rdi_2[0x10]
            
            if (r13_1 == 0)
                r13_1 = sub_14082c590()
            
            int64_t rdx_7
            
            if (*(arg1 + 0x1c) u<= 0)
                rdx_7 = var_98
            else
                uint32_t rax_20 = zx.d(*(arg1 + 0x1a))
                void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_21 = &rcx_14[5]
                
                if (rax_21 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_21 = &rcx_14[5]
                
                *(arg2 + 0x30) = rax_21
                void**** rax_22 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                rdx_7 = var_98
                *rax_22 = rcx_14
                *(arg2 + 8) = &rcx_14[1]
                rcx_14[1] = 0
                *rcx_14 = &data_142d99560
                rcx_14[3].d = rax_20
                rcx_14[2] = rdx_7
                rcx_14[4] = r13_1
            
            if (r15_1 != 0)
                if (*(r14 + 0x18) != rdi_2)
                    sub_14078ea90(arg1, r14, rdi_2)
                    *(r14 + 0x18) = rdi_2
                
                if (r12_1 != rax_8)
                    int64_t rcx_20 = *(r15_1 + 0x98)
                    int64_t r12_2 = *(arg2 + 0x30)
                    int64_t var_60 = *(r15_1 + 0x58)
                    int64_t var_58_1 = *(r15_1 + 0x78)
                    int64_t var_50
                    int64_t rax_27 = var_50
                    
                    if (rcx_20 != 0)
                        rax_27 = rcx_20
                    
                    int64_t var_50_1 = rax_27
                    int32_t r13_2
                    r13_2.b = rcx_20 != 0
                    uint64_t r13_3 = zx.q(r13_2 + 2)
                    int64_t* r12_4 = (r12_2 + 7) & 0xfffffffffffffff8
                    uint32_t rdx_10 = (r13_3 << 3).d
                    uint64_t rax_28 = zx.q(rdx_10)
                    void* rax_29 = rax_28 + r12_4
                    
                    if (rax_29 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, rdx_10 + 8)
                        r12_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_29 = rax_28 + r12_4
                    
                    *(arg2 + 0x30) = rax_29
                    uint64_t i_1 = zx.q(r13_3.d)
                    
                    if (r13_3.d != 0)
                        int64_t* rcx_22 = r12_4
                        uint64_t i
                        
                        do
                            *rcx_22 = *(&var_60 - r12_4 + rcx_22)
                            rcx_22 = &rcx_22[1]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_32 = &rcx_25[6]
                    
                    if (rax_32 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x38)
                        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_32 = &rcx_25[6]
                    
                    *(arg2 + 0x30) = rax_32
                    void**** rax_33 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_33 = rcx_25
                    *(arg2 + 8) = &rcx_25[1]
                    rcx_25[1] = 0
                    rcx_25[2].d = r13_3.d
                    *rcx_25 = &data_142da7798
                    rcx_25[4].d = 0
                    rcx_25[5] = 0
                    rcx_25[3] = r12_4
                    *(rcx_25 + 0x24) = 3
                    
                    if (*(arg1 + 0x18) u> 0)
                        int64_t* r12_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        int64_t rcx_29 = *(*(arg3 + 0x20) + 0x48)
                        void* rax_37 = &r12_9[1]
                        
                        if (rax_37 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x10)
                            r12_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_37 = &r12_9[1]
                        
                        *(arg2 + 0x30) = rax_37
                        *r12_9 = rcx_29
                        void*** rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_38 = &rcx_33[6]
                        
                        if (rax_38 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x38)
                            rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_38 = &rcx_33[6]
                        
                        *(arg2 + 0x30) = rax_38
                        void**** rax_39 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_39 = rcx_33
                        *(arg2 + 8) = &rcx_33[1]
                        rcx_33[1] = 0
                        *rcx_33 = &data_142da7798
                        rcx_33[2].d = 1
                        rcx_33[3] = r12_9
                        rcx_33[4].d = 2
                        *(rcx_33 + 0x24) = 3
                        rcx_33[5] = 0
                        void*** rcx_39 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_41 = &rcx_39[2]
                        
                        if (rax_41 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x18)
                            rcx_39 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_41 = &rcx_39[2]
                        
                        *(arg2 + 0x30) = rax_41
                        int64_t* rax_42 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_42 = rcx_39
                        *(arg2 + 8) = &rcx_39[1]
                        rcx_39[1] = 0
                        *rcx_39 = &data_142da7768
                        void*** rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_44 = &rcx_45[2]
                        
                        if (rax_44 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x18)
                            rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_44 = &rcx_45[2]
                        
                        *(arg2 + 0x30) = rax_44
                        int64_t* rax_45 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_45 = rcx_45
                        *(arg2 + 8) = &rcx_45[1]
                        rcx_45[1] = 0
                        *rcx_45 = &data_142da7758
                
                uint32_t var_80 = *(r15_1 + 0xb8) u>> 2
                uint32_t var_7c = *(r15_1 + 0xbc) u>> 2
                sub_140741e30(arg2, &var_98, arg1 + 0x14, &var_88, 0)
                int64_t r12_12 = *(r15_1 + 0xa0)
                
                if (r12_12 == 0)
                    r12_12 = sub_14082c590()
                
                if (*(arg1 + 0x20) u> 0)
                    uint32_t r13_4 = zx.d(*(arg1 + 0x1e))
                    void*** rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_52 = &rcx_52[5]
                    
                    if (rax_52 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_52 = &rcx_52[5]
                    
                    *(arg2 + 0x30) = rax_52
                    void**** rax_53 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_53 = rcx_52
                    *(arg2 + 8) = &rcx_52[1]
                    rcx_52[1] = 0
                    *rcx_52 = &data_142d99560
                    rcx_52[2] = var_98
                    rcx_52[3].d = r13_4
                    rcx_52[4] = r12_12
                
                int64_t r12_13 = *(r15_1 + 0x60)
                
                if (r12_13 == 0)
                    r12_13 = sub_14082c510()
                
                if (*(arg1 + 0x24) u> 0)
                    uint32_t r13_5 = zx.d(*(arg1 + 0x22))
                    void*** rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_57 = &rcx_58[5]
                    
                    if (rax_57 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_57 = &rcx_58[5]
                    
                    *(arg2 + 0x30) = rax_57
                    void**** rax_58 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_58 = rcx_58
                    *(arg2 + 8) = &rcx_58[1]
                    rcx_58[1] = 0
                    *rcx_58 = &data_142d99560
                    rcx_58[2] = var_98
                    rcx_58[3].d = r13_5
                    rcx_58[4] = r12_13
                
                int64_t r15_2 = *(r15_1 + 0x80)
                
                if (r15_2 == 0)
                    r15_2 = sub_14082c590()
                
                if (*(arg1 + 0x28) u> 0)
                    uint32_t r12_14 = zx.d(*(arg1 + 0x26))
                    void*** rcx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_62 = &rcx_64[5]
                    
                    if (rax_62 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_62 = &rcx_64[5]
                    
                    *(arg2 + 0x30) = rax_62
                    void**** rax_63 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_63 = rcx_64
                    *(arg2 + 8) = &rcx_64[1]
                    rcx_64[1] = 0
                    *rcx_64 = &data_142d99560
                    rcx_64[2] = var_98
                    rcx_64[3].d = r12_14
                    rcx_64[4] = r15_2
                
                sub_140741e30(arg2, &var_98, arg1 + 0x2a, &var_80, 0)
                sub_140741e30(arg2, &var_98, arg1 + 0x30, &var_7c, 0)
                sub_14077c9b0(arg2, &var_98, arg1 + 0x36, *(r14 + 0x20), *(r14 + 0x28), 0)
                result = sub_140741e30(arg2, &var_98, arg1 + 0x3c, r14 + 0x30, 0)
            else
                result = sub_1407c89a0(arg1, arg2, rdx_7, 1)
    else
        if (*(r14 + 0x34) == 0)
            *(r14 + 0x34) = 1
        
        result = sub_1407c89a0(arg1, arg2, r15, 0)
        *(r14 + 0x18) = 0
else
    result = sub_1407c89a0(arg1, arg2, r15, 0)

__security_check_cookie(rax_1 ^ &var_c8)
return result
