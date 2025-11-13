// 函数: sub_1403e9240
// 地址: 0x1403e9240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x3bc8)
void var_3be8
int64_t rax_1 = __security_cookie ^ &var_3be8
int32_t var_3ba8 = 0
int32_t var_3ba0 = 0
int32_t var_3bb0 = 0
int32_t var_3bb4 = 0
char var_3bb8 = 0
*(arg1 + 0x1224) += 1
*(arg1 + 0x12d2) = *(arg1 + 0x1224) & 3
int64_t rax_3 = sx.q(*(arg1 + 0x1208))
int32_t* r13 = arg2
void* rdi_1 = arg1 + 0x24a4 + (rax_3 << 2)
sub_14040c360(arg1 + 0x10, arg1 + 0x141a, *(arg1 + 0x1200))
sub_1403e27d0(rdi_1 + (sx.q(*(arg1 + 0x11f8) * 5) << 2), arg1 + 0x141a, *(arg1 + 0x1200))
int64_t rax_7 = sx.q(*(arg1 + 0x11f8)) * 5
*(rdi_1 + (rax_7 << 2)) = *(rdi_1 + (rax_7 << 2)) + 9.99999997e-07f
int64_t rcx_4 = sx.q(*(arg1 + 0x11f8)) * 5 + (sx.q(*(arg1 + 0x1200)) s>> 3)
*(rdi_1 + (rcx_4 << 2)) = *(rdi_1 + (rcx_4 << 2)) + 9.99999997e-07f
int64_t rdx_3 = sx.q(*(arg1 + 0x1200)) s>> 3
void* rax_12 = rdi_1 + sx.q(*(arg1 + 0x11f8)) * 0x14
*(rax_12 + (rdx_3 << 3)) = *(rax_12 + (rdx_3 << 3)) - 9.99999997e-07f
int64_t rdx_4 = (sx.q(*(arg1 + 0x1200)) s>> 3) * 3
void* rax_16 = rdi_1 + sx.q(*(arg1 + 0x11f8)) * 0x14
*(rax_16 + (rdx_4 << 2)) = *(rax_16 + (rdx_4 << 2)) - 9.99999997e-07f
int64_t rcx_7 = sx.q(*(arg1 + 0x11f8)) * 5
void* rax_18 = rdi_1 + (sx.q(*(arg1 + 0x1200)) s>> 3) * 0x10
*(rax_18 + (rcx_7 << 2)) = *(rax_18 + (rcx_7 << 2)) + 9.99999997e-07f
int64_t rax_20 = ((sx.q(*(arg1 + 0x1200)) s>> 3) + sx.q(*(arg1 + 0x11f8))) * 5
*(rdi_1 + (rax_20 << 2)) = *(rdi_1 + (rax_20 << 2)) + 9.99999997e-07f
int64_t rdx_8 = (sx.q(*(arg1 + 0x1200)) s>> 3) * 3
void* rax_24 = rdi_1 + sx.q(*(arg1 + 0x11f8)) * 0x14
*(rax_24 + (rdx_8 << 3)) = *(rax_24 + (rdx_8 << 3)) - 9.99999997e-07f
int64_t rcx_12 = sx.q(*(arg1 + 0x11f8)) * 5
void* rax_26 = rdi_1 + (sx.q(*(arg1 + 0x1200)) s>> 3) * 0x1c
*(rax_26 + (rcx_12 << 2)) = *(rax_26 + (rcx_12 << 2)) - 9.99999997e-07f

if (*(arg1 + 0x1268) == 0)
    void var_1898
    void var_ff8
    sub_1403ebd10(arg1, &var_1898, &var_ff8, rdi_1, *(arg1 + 0x1414))
    sub_1403ea5d0(arg1, &var_1898, &var_ff8 + (rax_3 << 2), rdi_1)
    sub_1403ec030(arg1, &var_1898, &var_ff8, rdi_1, arg4)
    sub_1403ec3b0(arg1, &var_1898, arg4)
    void var_14f8
    sub_1403ea180(arg1, &var_1898, &var_14f8, rdi_1)
    sub_1403e8f30(arg1, &var_1898, &var_14f8, arg4)
    int32_t r13_1 = 0
    int32_t r12_1 = 0x100
    int32_t var_3b9c_1 = 0
    int32_t var_3b98_1 = 0
    int32_t rax_28 = sub_1403e8150(arg1 + 0x12b0, *(arg1 + 0x11fc))
    int64_t r11_1 = *arg3
    int32_t r15_1 = rax_28
    int64_t rax_29 = arg3[1]
    int32_t r10_1 = -1
    int64_t rax_30 = arg3[2]
    void* rdi_2 = arg1 + 0x90
    int64_t rax_31 = arg3[3]
    int32_t r9_5 = -1
    int64_t rax_32 = arg3[4]
    void var_3ad8
    void* rcx_20 = &var_3ad8
    int64_t rax_33 = arg3[5]
    int32_t var_3bac_1 = 0xffffffff
    int64_t rax_34 = arg3[6]
    int32_t var_3ba4_1 = 0xffffffff
    int64_t var_3b70_1 = r11_1
    void* rdx_19 = rdi_2
    uint128_t zmm0_1
    int128_t zmm1_1
    
    if (((rdi_2.d | &var_3ad8) & 0xf) != 0)
        memcpy(&var_3ad8, rdx_19, 0x111c)
        r9_5 = var_3ba4_1
        r10_1 = var_3bac_1
        r11_1 = var_3b70_1
    else
        int64_t i_6 = 0x22
        int64_t i
        
        do
            zmm0_1 = *rdx_19
            zmm1_1 = *(rdx_19 + 0x10)
            rcx_20 += 0x80
            rdx_19 += 0x80
            *(rcx_20 - 0x80) = zmm0_1
            zmm0_1 = *(rdx_19 - 0x60)
            *(rcx_20 - 0x70) = zmm1_1
            zmm1_1 = *(rdx_19 - 0x50)
            *(rcx_20 - 0x60) = zmm0_1
            zmm0_1 = *(rdx_19 - 0x40)
            *(rcx_20 - 0x50) = zmm1_1
            zmm1_1 = *(rdx_19 - 0x30)
            *(rcx_20 - 0x40) = zmm0_1
            zmm0_1 = *(rdx_19 - 0x20)
            *(rcx_20 - 0x30) = zmm1_1
            zmm1_1 = *(rdx_19 - 0x10)
            *(rcx_20 - 0x20) = zmm0_1
            *(rcx_20 - 0x10) = zmm1_1
            i = i_6
            i_6 -= 1
        while (i != 1)
        int64_t rax_38 = *(rdx_19 + 0x10)
        *rcx_20 = *rdx_19
        *(rcx_20 + 0x10) = rax_38
        *(rcx_20 + 0x18) = *(rdx_19 + 0x18)
    
    int16_t rax_40 = *(arg1 + 0x16bc)
    int32_t rbx_1 = sx.d(*(arg1 + 0x12d2))
    int32_t rax_41 = *(arg1 + 0x16b8)
    int64_t var_3ae8
    int64_t var_3b58_1 = var_3ae8
    int64_t var_3ae0
    int64_t var_3b48_1 = var_3ae0
    int32_t var_3b7c_1 = rbx_1
    int64_t var_3af0
    int64_t var_3b68_1 = var_3af0
    int64_t var_3b08
    int64_t var_3b60_1 = var_3b08
    int64_t var_3b00
    int64_t var_3b78_1 = var_3b00
    int64_t var_3b10
    int64_t var_3b50_1 = var_3b10
    
    while (true)
        int32_t rbx_2
        
        if (r15_1 != r10_1)
            if (r15_1 == r9_5)
                rbx_2 = var_3bb0
                goto label_1403e9843
            
            if (r13_1 s> 0)
                *arg3 = r11_1
                uint128_t* rdx_20 = &var_3ad8
                arg3[1] = rax_29
                void* rcx_24 = rdi_2
                arg3[2] = rax_30
                arg3[3] = rax_31
                arg3[4] = rax_32
                arg3[5] = rax_33
                arg3[6] = rax_34
                
                if (((&var_3ad8 | rdi_2.d) & 0xf) != 0)
                    memcpy(rcx_24, &var_3ad8, 0x111c)
                else
                    int64_t i_7 = 0x22
                    int64_t i_1
                    
                    do
                        zmm0_1 = *rdx_20
                        zmm1_1 = rdx_20[1]
                        rcx_24 += 0x80
                        rdx_20 = &rdx_20[8]
                        *(rcx_24 - 0x80) = zmm0_1
                        zmm0_1 = rdx_20[-6]
                        *(rcx_24 - 0x70) = zmm1_1
                        zmm1_1 = rdx_20[-5]
                        *(rcx_24 - 0x60) = zmm0_1
                        zmm0_1 = rdx_20[-4]
                        *(rcx_24 - 0x50) = zmm1_1
                        zmm1_1 = rdx_20[-3]
                        *(rcx_24 - 0x40) = zmm0_1
                        zmm0_1 = rdx_20[-2]
                        *(rcx_24 - 0x30) = zmm1_1
                        zmm1_1 = rdx_20[-1]
                        *(rcx_24 - 0x20) = zmm0_1
                        *(rcx_24 - 0x10) = zmm1_1
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
                    int64_t rax_54 = rdx_20[1].q
                    *rcx_24 = *rdx_20
                    *(rcx_24 + 0x10) = rax_54
                    *(rcx_24 + 0x18) = *(rdx_20 + 0x18)
                
                *(arg1 + 0x12d2) = rbx_1.b
                *(arg1 + 0x16bc) = rax_40
                *(arg1 + 0x16b8) = rax_41
            
            int32_t var_3bc8_2
            var_3bc8_2.q = arg1 + 0x12d4
            sub_1403ec8a0(arg1, &var_1898, arg1 + 0x12b0, rdi_2, var_3bc8_2, &var_14f8)
            sub_1403e1840(arg1, arg3, *(arg1 + 0x16a4), 0, arg4)
            sub_1403e12b0(arg3, sx.d(*(arg1 + 0x12cd)), sx.d(*(arg1 + 0x12ce)), arg1 + 0x12d4, 
                *(arg1 + 0x1200))
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = __bsr_gprv_memv(arg3[4].d)
            rbx_2 = arg3[3].d - temp0_1 - 1
            
            if (arg6 == 0 && r13_1 == 0)
                if (rbx_2 s<= arg5)
                    break
                
                goto label_1403e9857
            
            r10_1 = var_3bac_1
        else
            rbx_2 = var_3bb4
        
    label_1403e9843:
        int64_t var_3af8
        void var_29b8
        void var_578
        
        if (r13_1 == 6)
            if (var_3b9c_1 != 0 && (r15_1 == r10_1 || rbx_2 s> arg5))
                *arg3 = var_3b50_1
                arg3[1] = var_3b60_1
                arg3[2] = var_3b78_1
                arg3[3] = var_3af8
                arg3[4] = var_3b68_1
                arg3[5] = var_3b58_1
                arg3[6] = var_3b48_1
                uint32_t count
                memcpy(*arg3, &var_578, count)
                void* rcx_48 = &var_29b8
                
                if (((&var_29b8 | rdi_2.d) & 0xf) != 0)
                    memcpy(rdi_2, &var_29b8, 0x111c)
                else
                    int64_t i_9 = 0x22
                    int64_t i_2
                    
                    do
                        int128_t zmm0_2 = *rcx_48
                        zmm1_1 = *(rcx_48 + 0x10)
                        rdi_2 += 0x80
                        rcx_48 += 0x80
                        *(rdi_2 - 0x80) = zmm0_2
                        zmm0_2 = *(rcx_48 - 0x60)
                        *(rdi_2 - 0x70) = zmm1_1
                        zmm1_1 = *(rcx_48 - 0x50)
                        *(rdi_2 - 0x60) = zmm0_2
                        zmm0_2 = *(rcx_48 - 0x40)
                        *(rdi_2 - 0x50) = zmm1_1
                        zmm1_1 = *(rcx_48 - 0x30)
                        *(rdi_2 - 0x40) = zmm0_2
                        zmm0_2 = *(rcx_48 - 0x20)
                        *(rdi_2 - 0x30) = zmm1_1
                        zmm1_1 = *(rcx_48 - 0x10)
                        *(rdi_2 - 0x20) = zmm0_2
                        *(rdi_2 - 0x10) = zmm1_1
                        i_2 = i_9
                        i_9 -= 1
                    while (i_2 != 1)
                    int64_t rax_103 = *(rcx_48 + 0x10)
                    *rdi_2 = *rcx_48
                    *(rdi_2 + 0x10) = rax_103
                    *(rdi_2 + 0x18) = *(rcx_48 + 0x18)
                
                *(arg1 + 0x1c38) = var_3bb8
            
            break
        
        int32_t rcx_28
        int32_t rdx_25
        int32_t r9_8
        int32_t r10_2
        
        if (rbx_2 s<= arg5)
            if (rbx_2 s>= arg5 - 5)
                break
            
            r9_8 = sx.d(r12_1.w)
            var_3b9c_1 = 1
            rdx_25 = rbx_2
            var_3bb4 = rbx_2
            var_3ba0 = r9_8
            
            if (r15_1 != r10_1)
                var_3b50_1 = *arg3
                var_3b60_1 = arg3[1]
                var_3bac_1 = r15_1
                var_3b78_1 = arg3[2]
                var_3af8 = arg3[3]
                var_3b68_1 = arg3[4]
                var_3b58_1 = arg3[5]
                var_3b48_1 = arg3[6]
                memcpy(&var_578, *arg3, *(arg3 + 0x1c))
                uint128_t* rcx_30 = &var_29b8
                void* rdx_27 = rdi_2
                
                if (((rdi_2.d | &var_29b8) & 0xf) != 0)
                    memcpy(&var_29b8, rdx_27, 0x111c)
                else
                    int64_t i_8 = 0x22
                    int64_t i_3
                    
                    do
                        zmm0_1 = *rdx_27
                        zmm1_1 = *(rdx_27 + 0x10)
                        rcx_30 = &rcx_30[8]
                        rdx_27 += 0x80
                        rcx_30[-8] = zmm0_1
                        zmm0_1 = *(rdx_27 - 0x60)
                        rcx_30[-7] = zmm1_1
                        zmm1_1 = *(rdx_27 - 0x50)
                        rcx_30[-6] = zmm0_1
                        zmm0_1 = *(rdx_27 - 0x40)
                        rcx_30[-5] = zmm1_1
                        zmm1_1 = *(rdx_27 - 0x30)
                        rcx_30[-4] = zmm0_1
                        zmm0_1 = *(rdx_27 - 0x20)
                        rcx_30[-3] = zmm1_1
                        zmm1_1 = *(rdx_27 - 0x10)
                        rcx_30[-2] = zmm0_1
                        rcx_30[-1] = zmm1_1
                        i_3 = i_8
                        i_8 -= 1
                    while (i_3 != 1)
                    int64_t rax_73 = *(rdx_27 + 0x10)
                    *rcx_30 = *rdx_27
                    rcx_30[1].q = rax_73
                    *(rcx_30 + 0x18) = *(rdx_27 + 0x18)
                
                rdx_25 = rbx_2
                var_3bb8 = *(arg1 + 0x1c38)
                goto label_1403e99d7
            
            r10_2 = var_3ba8
            rcx_28 = var_3bb0
        else
        label_1403e9857:
            
            if (var_3b9c_1 != 0 || r13_1 s< 2)
                r9_8 = var_3ba0
                rdx_25 = var_3bb4
                r10_2 = sx.d(r12_1.w)
                var_3ba8 = r10_2
                var_3b98_1 = 1
                rcx_28 = rbx_2
                var_3bb0 = rbx_2
                var_3ba4_1 = r15_1
            else
                rdx_25 = var_3bb4
                var_3b98_1 = 0
                var_3ba4_1 = 0xffffffff
                int32_t var_1544
                zmm0_1.d = var_1544.d f* 1.5f
                var_1544 = zmm0_1.d
            label_1403e99d7:
                r9_8 = var_3ba0
                r10_2 = var_3ba8
                rcx_28 = var_3bb0
        
        if ((var_3b98_1 & var_3b9c_1) != 0)
            int32_t r8_13 = r10_2 - r9_8
            int32_t r8_14 = r8_13 s>> 2
            r12_1 = sx.d((divs.dp.d(sx.q((arg5 - rdx_25) * r8_13), rcx_28 - rdx_25)).w + r9_8.w)
            
            if (r12_1 s> r8_14 + r9_8)
                r12_1 = r9_8 + r8_14
            else if (r12_1 s< r10_2 - r8_14)
                r12_1.w = r10_2.w - r8_14.w
        else
            *(arg1 + 0x1200)
            int32_t rax_82 =
                sub_1403df0e0(divs.dp.d(sx.q((rbx_2 << 7) - (arg5 << 7)), *(arg1 + 0x1200)) + 0x800)
            int32_t rdx_30 = 0x20000
            
            if (rax_82 s< 0x20000)
                rdx_30 = rax_82
            
            if (rbx_2 s> arg5)
                int32_t rax_83 = 0x14ccd
                
                if (rdx_30 s> 0x14ccd)
                    rax_83 = rdx_30
                
                rdx_30 = rax_83
            
            int32_t rcx_36 = zx.d(rdx_30.w) * sx.d(r12_1.w)
            r12_1.w *= (rdx_30 s>> 0x10).w
            r12_1.w += (rcx_36 s>> 0x10).w
        
        int32_t i_12 = *(arg1 + 0x11fc)
        char var_150c
        
        if (i_12 s> 0)
            uint64_t i_11 = zx.q(i_12)
            int32_t r10_3 = sx.d(r12_1.w)
            int64_t r8_15 = 0
            uint64_t i_4
            
            do
                void var_151c
                int32_t rcx_40 = *(&var_151c + r8_15)
                int32_t rdx_37 = ((zx.d(rcx_40.w) * r10_3) s>> 0x10) + (rcx_40 s>> 0x10) * r10_3
                
                if (rdx_37 s> 0x7fffff)
                    rdx_37 = 0x7fffff
                else if (rdx_37 s< 0xff800000)
                    rdx_37 = -0x800000
                
                r8_15 += 4
                *(&var_150c + r8_15) = rdx_37 << 8
                i_4 = i_11
                i_11 -= 1
            while (i_4 != 1)
            i_12 = *(arg1 + 0x11fc)
        
        int32_t r9_9
        r9_9.b = arg4 == 2
        *(arg1 + 0x1c38) = var_150c
        void var_1508
        sub_1403e8270(arg1 + 0x12b0, &var_1508, arg1 + 0x1c38, r9_9, i_12)
        int32_t rax_94 = sub_1403e8150(arg1 + 0x12b0, *(arg1 + 0x11fc))
        uint64_t i_10 = zx.q(*(arg1 + 0x11fc))
        r15_1 = rax_94
        
        if (i_10.d s> 0)
            int64_t rax_95 = 0
            uint64_t i_5
            
            do
                zmm0_1 = zx.o(*(&var_1508 + rax_95))
                rax_95 += 4
                zmm0_1.d = _mm_cvtepi32_ps(zmm0_1).d f* 1.52587891e-05f
                void var_189c
                *(&var_189c + rax_95) = zmm0_1.d
                i_5 = i_10
                i_10 -= 1
            while (i_5 != 1)
        
        r9_5 = var_3ba4_1
        r10_1 = var_3bac_1
        rbx_1 = var_3b7c_1
        r11_1 = var_3b70_1
        r13_1 += 1
    
    r13 = arg2

memmove(arg1 + 0x24a4, arg1 + ((sx.q(*(arg1 + 0x1200)) + 0x929) << 2), 
    (*(arg1 + 0x11f8) * 5 + *(arg1 + 0x1208)) << 2)

if (*(arg1 + 0x1268) == 0)
    int64_t rax_107 = sx.q(*(arg1 + 0x11fc))
    *(arg1 + 0x1258) = 0
    char rax_108 = *(arg1 + 0x12cd)
    int32_t var_17b8[0x9d]
    *(arg1 + 0x11d8) = var_17b8[rax_107]
    *(arg1 + 0x11d5) = rax_108
    uint64_t rflags_2
    int32_t temp0_5
    temp0_5, rflags_2 = __bsr_gprv_memv(arg3[4].d)
    *r13 = (arg3[3].d - temp0_5 + 6) s>> 3
else
    *r13 = 0

__security_check_cookie(rax_1 ^ &var_3be8)
return 0
