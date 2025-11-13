// 函数: sub_140e33d20
// 地址: 0x140e33d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm10
int128_t var_78 = zmm10
int128_t zmm11
int128_t var_88 = zmm11
int128_t zmm12
int128_t var_98 = zmm12
void* rbx = *(arg1 + 0x20)
int64_t r12
r12.b = 0
uint64_t rax
void* r15

if (*(arg1 + 0x60) == 0)
    r15 = rbx
    rax = 0x28
else
    r15 = rbx + 0xe
    rax = zx.q(*(rbx + 0xa))
    
    if (rax == 0x42)
        r12.b = 1
    else if (rax == 0x46)
        r12.b = 2
    else if (rax == 0x7a)
        r12.b = 3
    else
        r12 = 4
        
        if (rax != 0x8a)
            r12 = 0

void* r13 = rax + rbx
uint64_t result = zx.q(*(r15 + 0x10))

if ((result.d == 0 || result.d == 3) && *(r15 + 0xc) == 1)
    result = zx.q(*(r15 + 0xe))
    
    if (result.w == 8)
        int32_t r8_1 = *(r15 + 4)
        *(arg1 + 0x3c) = r8_1
        int32_t rcx = *(r15 + 8)
        uint8_t r12_2 = (rcx u>> 0x1f).b
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx)
        int32_t rax_4 = (temp1_1 - temp0_1) s>> 1
        
        if (*(arg1 + 0x61) == 0)
            rax_4 = rcx
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rax_4)
        int32_t rax_7 = (temp5_1 ^ temp4_1) - temp4_1
        *(arg1 + 0x40) = rax_7
        *(arg1 + 0x3a) = 1
        int64_t rax_10 = sx.q((rax_7 * r8_1) << 2)
        *(arg1 + 0x10) = 0
        int64_t rdx_3 = 0
        
        if (*(arg1 + 0x18) != rax_10)
            sub_140a4fbe0(arg1 + 8, rax_10)
            rdx_3 = *(arg1 + 0x10)
        
        int64_t rax_15 = sx.q((*(arg1 + 0x3c) * *(arg1 + 0x40)) << 2) + rdx_3
        *(arg1 + 0x10) = rax_15
        
        if (rax_15 s> *(arg1 + 0x18))
            sub_140a4f990(arg1 + 8)
        
        int32_t* rsi_1 = *(arg1 + 8)
        int32_t i_10 = *(r15 + 0x20)
        int32_t i_9 = 0x100
        
        if (i_10 != 0)
            i_9 = i_10
        
        int64_t r9_1 = 0
        int64_t var_b8 = 0
        int32_t i_1 = 0
        int32_t r10_1 = 0
        int32_t var_ac_1 = 0
        int64_t i_8 = sx.q(i_9)
        
        if (i_9 s> 0)
            int32_t var_c8
            var_c8:3.b = 0xff
            void* rbx_1 = rbx + 0x38
            int64_t i
            
            do
                var_c8.b = *(rbx_1 - 2)
                var_c8:1.b = *(rbx_1 - 1)
                var_c8:2.b = *rbx_1
                int64_t i_6 = sx.q(i_1)
                i_1 = (i_6 + 1).d
                
                if (i_1 s> r10_1)
                    sub_1406105e0(&var_b8)
                    r10_1 = var_ac_1
                    r9_1 = var_b8
                
                *(r9_1 + (i_6 << 2)) = var_c8
                rbx_1 += 4
                i = i_8
                i_8 -= 1
            while (i != 1)
        
        if (i_9 s<= 0 || i_1 s< 0x100)
            int32_t var_c8_1 = 0xff000000
            
            do
                int64_t i_7 = sx.q(i_1)
                i_1 = (i_7 + 1).d
                
                if (i_1 s> r10_1)
                    sub_1406105e0(&var_b8)
                    r10_1 = var_ac_1
                    r9_1 = var_b8
                
                *(r9_1 + (i_7 << 2)) = 0xff000000
            while (i_1 s< 0x100)
        
        int32_t rcx_8 = (*(arg1 + 0x3c) + 3) & 0xfffffffc
        int32_t r8_2 = rcx_8
        
        if (r12_2 == 0)
            r8_2 = neg.d(rcx_8)
        
        int32_t rdx_8 = *(arg1 + 0x40)
        int32_t rax_20
        
        if (r12_2 == 0)
            rax_20 = rdx_8 - 1
        else
            rax_20 = 0
        
        result = zx.q(rax_20 * rcx_8)
        void* r10_3 = sx.q(result.d) + r13
        int32_t i_2 = 0
        
        if (rdx_8 s> 0)
            do
                int32_t j = 0
                
                if (*(arg1 + 0x3c) s> 0)
                    void* rdx_9 = r10_3
                    
                    do
                        result = zx.q(*rdx_9)
                        *rsi_1 = *(r9_1 + (result << 2))
                        rsi_1 = &rsi_1[1]
                        j += 1
                        rdx_9 += 1
                    while (j s< *(arg1 + 0x3c))
                
                r10_3 += sx.q(r8_2)
                i_2 += 1
            while (i_2 s< *(arg1 + 0x40))
        
        if (r9_1 != 0)
            return sub_140a74f90(r9_1)
    else if (result.w == 0x18)
        int32_t r8_3 = *(r15 + 4)
        *(arg1 + 0x3c) = r8_3
        int32_t rcx_11 = *(r15 + 8)
        uint8_t rsi_3 = (rcx_11 u>> 0x1f).b
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_11)
        int32_t rax_24 = (temp3_1 - temp2_1) s>> 1
        
        if (*(arg1 + 0x61) == 0)
            rax_24 = rcx_11
        
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(rax_24)
        int32_t rax_27 = (temp9_1 ^ temp8_1) - temp8_1
        *(arg1 + 0x40) = rax_27
        *(arg1 + 0x3a) = 1
        int64_t rax_30 = sx.q((rax_27 * r8_3) << 2)
        *(arg1 + 0x10) = 0
        int64_t rdx_12 = 0
        
        if (*(arg1 + 0x18) != rax_30)
            sub_140a4fbe0(arg1 + 8, rax_30)
            rdx_12 = *(arg1 + 0x10)
        
        int64_t rcx_14 = sx.q((*(arg1 + 0x3c) * *(arg1 + 0x40)) << 2) + rdx_12
        *(arg1 + 0x10) = rcx_14
        
        if (rcx_14 s> *(arg1 + 0x18))
            sub_140a4f990(arg1 + 8)
        
        void* rcx_16 = *(arg1 + 8)
        int32_t rdx_15 = ((*(arg1 + 0x3c) + 1) * 3) & 0xfffffffc
        int32_t r11_1 = rdx_15
        
        if (rsi_3 == 0)
            r11_1 = neg.d(rdx_15)
        
        int32_t r8_4 = *(arg1 + 0x40)
        int32_t rax_38 = 0
        
        if (rsi_3 == 0)
            rax_38 = r8_4 - 1
        
        result = zx.q(rax_38 * rdx_15)
        void* r9_3 = sx.q(result.d) + r13
        int32_t i_3 = 0
        
        if (r8_4 s> 0)
            do
                void* rdx_16 = r9_3
                int32_t j_1 = 0
                
                if (*(arg1 + 0x3c) s> 0)
                    do
                        *rcx_16 = *rdx_16
                        *(rcx_16 + 1) = *(rdx_16 + 1)
                        result = zx.q(*(rdx_16 + 2))
                        *(rcx_16 + 2) = result.b
                        rdx_16 += 3
                        *(rcx_16 + 3) = 0xff
                        rcx_16 += 4
                        j_1 += 1
                    while (j_1 s< *(arg1 + 0x3c))
                
                r9_3 += sx.q(r11_1)
                i_3 += 1
            while (i_3 s< *(arg1 + 0x40))
    else if (result.w == 0x20)
        int32_t r8_5 = *(r15 + 4)
        *(arg1 + 0x3c) = r8_5
        int32_t rcx_17 = *(r15 + 8)
        uint8_t rsi_5 = (rcx_17 u>> 0x1f).b
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(rcx_17)
        int32_t rax_44 = (temp7_1 - temp6_1) s>> 1
        
        if (*(arg1 + 0x61) == 0)
            rax_44 = rcx_17
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(rax_44)
        int32_t rax_47 = (temp11_1 ^ temp10_1) - temp10_1
        *(arg1 + 0x40) = rax_47
        *(arg1 + 0x3a) = 1
        int64_t rax_50 = sx.q((rax_47 * r8_5) << 2)
        *(arg1 + 0x10) = 0
        int64_t rdx_19 = 0
        
        if (*(arg1 + 0x18) != rax_50)
            sub_140a4fbe0(arg1 + 8, rax_50)
            rdx_19 = *(arg1 + 0x10)
        
        int64_t rcx_20 = sx.q((*(arg1 + 0x3c) * *(arg1 + 0x40)) << 2) + rdx_19
        *(arg1 + 0x10) = rcx_20
        
        if (rcx_20 s> *(arg1 + 0x18))
            sub_140a4f990(arg1 + 8)
        
        void* rbx_3 = *(arg1 + 8)
        int32_t rcx_23 = *(arg1 + 0x3c) << 2
        int32_t r9_4 = rcx_23
        
        if (rsi_5 == 0)
            r9_4 = neg.d(rcx_23)
        
        int32_t rax_56
        
        if (rsi_5 == 0)
            rax_56 = *(arg1 + 0x40) - 1
        else
            rax_56 = 0
        
        result = zx.q(rax_56 * rcx_23)
        void* rbp_2 = sx.q(result.d) + r13
        void* r14_1 = *(arg1 + 0x20)
        int32_t rdx_21 = *(r15 + 0x10)
        
        if (rdx_21 == 0)
        label_140e344b4:
            int32_t i_4 = 0
            
            if (*(arg1 + 0x40) s> 0)
                do
                    void* rcx_38 = rbp_2
                    int32_t j_2 = 0
                    
                    if (*(arg1 + 0x3c) s> 0)
                        do
                            *rbx_3 = *rcx_38
                            *(rbx_3 + 1) = *(rcx_38 + 1)
                            result = zx.q(*(rcx_38 + 2))
                            *(rbx_3 + 2) = result.b
                            *(rbx_3 + 3) = 0xff
                            rbx_3 += 4
                            rcx_38 += 4
                            j_2 += 1
                        while (j_2 s< *(arg1 + 0x3c))
                    
                    rbp_2 += sx.q(r9_4)
                    i_4 += 1
                while (i_4 s< *(arg1 + 0x40))
        else if (rdx_21 == 3)
            int32_t rcx_24 = *(r14_1 + 0x36)
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rcx_24)
            int32_t rax_58
            
            if (rdx_21 == 3)
                rax_58 = 0x20
            else
                rax_58 = 0x1f - temp0_2
            
            int32_t rcx_25
            
            if (rcx_24 != 0)
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_forward(rcx_24)
                rcx_25 = temp0_3
            else
                rcx_25 = 0x20
            
            result = zx.q(rax_58 + rcx_25)
            
            if (result.d == 0x18)
                int32_t rcx_26 = *(r14_1 + 0x3a)
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rcx_26)
                int32_t rax_59
                
                if (result.d == 0x18)
                    rax_59 = 0x20
                else
                    rax_59 = 0x1f - temp0_4
                
                int32_t rcx_27
                
                if (rcx_26 != 0)
                    uint64_t rflags_4
                    int32_t temp0_5
                    temp0_5, rflags_4 = _bit_scan_forward(rcx_26)
                    rcx_27 = temp0_5
                else
                    rcx_27 = 0x20
                
                result = zx.q(rax_59 + rcx_27)
                
                if (result.d != 0x18)
                    goto label_140e34226
                
                int32_t rcx_28 = *(r14_1 + 0x3e)
                uint64_t rflags_5
                int32_t temp0_6
                temp0_6, rflags_5 = _bit_scan_reverse(rcx_28)
                int32_t rax_60
                
                if (result.d == 0x18)
                    rax_60 = 0x20
                else
                    rax_60 = 0x1f - temp0_6
                
                int32_t rcx_29
                
                if (rcx_28 != 0)
                    uint64_t rflags_6
                    int32_t temp0_7
                    temp0_7, rflags_6 = _bit_scan_forward(rcx_28)
                    rcx_29 = temp0_7
                else
                    rcx_29 = 0x20
                
                result = zx.q(rax_60 + rcx_29)
                
                if (result.d == 0x18 && r12.b u< 3)
                    goto label_140e344b4
            
        label_140e34226:
            
            if (rdx_21 == 3)
                int32_t rax_61 = *(r14_1 + 0x36)
                char var_c0_1
                int32_t r8_9
                
                if (rax_61 != 0)
                    uint64_t rflags_7
                    int32_t temp0_8
                    temp0_8, rflags_7 = _bit_scan_forward(rax_61)
                    r8_9 = temp0_8
                    var_c0_1 = r8_9.b
                else
                    r8_9 = 0x20
                    var_c0_1 = 0x20
                
                uint64_t rflags_8
                int32_t temp0_9
                temp0_9, rflags_8 = _bit_scan_reverse(rax_61)
                int32_t rcx_30
                
                if (rax_61 == 0)
                    rcx_30 = 0x20
                else
                    rcx_30 = 0x1f - temp0_9
                
                zmm6 = zx.o(0)
                
                if (0x20 - rcx_30 != r8_9)
                    zmm12.d = 255f / (powf(2f, float.s(zx.q(0x20 - rcx_30 - r8_9))) - 1f)
                else
                    zmm12 = zx.o(0)
                
                int32_t rax_64 = *(r14_1 + 0x3a)
                char var_c4_1
                int32_t r8_10
                
                if (rax_64 != 0)
                    uint64_t rflags_9
                    int32_t temp0_10
                    temp0_10, rflags_9 = _bit_scan_forward(rax_64)
                    r8_10 = temp0_10
                    var_c4_1 = r8_10.b
                else
                    r8_10 = 0x20
                    var_c4_1 = 0x20
                
                uint64_t rflags_10
                int32_t temp0_11
                temp0_11, rflags_10 = _bit_scan_reverse(rax_64)
                int32_t rcx_31
                
                if (rax_64 == 0)
                    rcx_31 = 0x20
                else
                    rcx_31 = 0x1f - temp0_11
                
                if (0x20 - rcx_31 != r8_10)
                    zmm11.d = 255f / (powf(2f, float.s(zx.q(0x20 - rcx_31 - r8_10))) - 1f)
                else
                    zmm11 = zx.o(0)
                
                int32_t rax_67 = *(r14_1 + 0x3e)
                char var_c8_2
                int32_t r8_11
                
                if (rax_67 != 0)
                    uint64_t rflags_11
                    int32_t temp0_12
                    temp0_12, rflags_11 = _bit_scan_forward(rax_67)
                    r8_11 = temp0_12
                    var_c8_2 = r8_11.b
                else
                    r8_11 = 0x20
                    var_c8_2 = 0x20
                
                uint64_t rflags_12
                int32_t temp0_13
                temp0_13, rflags_12 = _bit_scan_reverse(rax_67)
                int32_t rcx_32
                
                if (rax_67 == 0)
                    rcx_32 = 0x20
                else
                    rcx_32 = 0x1f - temp0_13
                
                if (0x20 - rcx_32 != r8_11)
                    zmm10.d = 255f / (powf(2f, float.s(zx.q(0x20 - rcx_32 - r8_11))) - 1f)
                else
                    zmm10 = zx.o(0)
                
                result = zx.q(*(r14_1 + 0x42))
                int32_t temp22_1 = result.d
                int32_t r13_1 = 0x20
                
                if (temp22_1 != 0)
                    uint64_t rflags_13
                    int32_t temp0_14
                    temp0_14, rflags_13 = _bit_scan_forward(result.d)
                    r13_1 = temp0_14
                
                uint64_t rflags_14
                int32_t temp0_15
                temp0_15, rflags_14 = _bit_scan_reverse(result.d)
                int32_t r15_1
                
                if (temp22_1 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_15
                
                if (0x20 - r15_1 != r13_1)
                    zmm7.d = 255f / (powf(2f, float.s(zx.q(0x20 - r15_1 - r13_1))) - 1f)
                    zmm6 = zmm7
                    result = zx.q(*(r14_1 + 0x42))
                
                char r10
                
                if (result.d == 0 || r12.b u< 3)
                    r10 = 0
                else
                    r10 = 1
                
                int32_t i_5 = 0
                
                if (*(arg1 + 0x40) s> 0)
                    do
                        void* rdx_25 = rbp_2
                        int32_t j_3 = 0
                        
                        if (*(arg1 + 0x3c) s> 0)
                            do
                                float zmm1 = float.s(zx.q((*rdx_25 & *(r14_1 + 0x3e)) u>> var_c8_2))
                                    f* zmm10.d
                                *rbx_3 = (int.d(zmm1 + zmm1 + 0.5f) s>> 1).b
                                zmm1 = float.s(zx.q((*rdx_25 & *(r14_1 + 0x3a)) u>> var_c4_1))
                                    f* zmm11.d
                                *(rbx_3 + 1) = (int.d(zmm1 + zmm1 + 0.5f) s>> 1).b
                                zmm1 = float.s(zx.q((*rdx_25 & *(r14_1 + 0x36)) u>> var_c0_1))
                                    f* zmm12.d
                                *(rbx_3 + 2) = (int.d(zmm1 + zmm1 + 0.5f) s>> 1).b
                                
                                if (r10 == 0)
                                    result = 0xff
                                else
                                    zmm1 = float.s(zx.q((*rdx_25 & *(r14_1 + 0x42)) u>> r13_1.b))
                                        f* zmm6.d
                                    result = zx.q(int.d(zmm1 + zmm1 + 0.5f) s>> 1)
                                
                                *(rbx_3 + 3) = result.b
                                rbx_3 += 4
                                rdx_25 += 4
                                j_3 += 1
                            while (j_3 s< *(arg1 + 0x3c))
                        
                        rbp_2 += sx.q(r9_4)
                        i_5 += 1
                    while (i_5 s< *(arg1 + 0x40))

return result
