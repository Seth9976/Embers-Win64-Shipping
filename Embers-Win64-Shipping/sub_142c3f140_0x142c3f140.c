// 函数: sub_142c3f140
// 地址: 0x142c3f140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = *(arg1 + 0x98)
int64_t r12 = *(arg2 + 0x70)
void* r11 = arg2
uint64_t rbx = zx.q(arg3)
int64_t* var_60 = r13
int32_t r10 = *(r13 + 0xc)

if (r10 != 0 && rbx.d u< arg4)
    uint64_t i_3 = zx.q(arg4 - rbx.d)
    int16_t* r8_2 = r12 + ((rbx * 5 + 3) << 2)
    uint64_t i
    
    do
        if (*(r8_2 - 0xc) == r10)
            int16_t rcx = *r8_2
            
            if ((rcx.b & 0x60) == 0x60)
                r8_2[3].b = 4
                *r8_2 = rcx & 0xff9f
        
        r8_2 = &r8_2[0xa]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t r8_3 = r13[0xc].d
int32_t i_1 = rbx.d
bool arg_20 = r8_3 != 0
char r14 = 0

if (rbx.d u< arg4)
    char* rax_3 = r12 + 0x13 + rbx * 0x14
    
    while (true)
        if (*rax_3 u>= 4)
            if (r8_3 != 0)
                uint64_t rdx_1 = zx.q(i_1 + 1)
                
                while (rdx_1.d u< arg4)
                    if ((*(r12 + rdx_1 * 0x14 + 4) & r8_3) != 0)
                        uint64_t rcx_3 = rdx_1 * 5
                        void* r8_4 = r12 + (rcx_3 << 2)
                        char rcx_4
                        
                        if ((1 & *(r12 + (rcx_3 << 2) + 0xc) u>> 4) != 0)
                            rcx_4 = (*(r8_4 + 0xc)).b
                        
                        if ((1 & *(r12 + (rcx_3 << 2) + 0xc) u>> 4) == 0 || (1 & rcx_4 u>> 5) == 0
                                || (1 & rcx_4 u>> 6) != 0)
                            i_1 = rdx_1.d
                            
                            if (rdx_1.d u< arg4)
                                void* rdx_2 = r8_4 + 0x12
                                
                                while ((1 & *(rdx_2 - 6) u>> 5) == 0)
                                    char rcx_5 = *rdx_2
                                    int32_t rax_7
                                    
                                    if (rcx_5 u>= 0x20)
                                        rax_7 = 0
                                    else
                                        rax_7 = 1 << rcx_5
                                    
                                    if (((rax_7 u>> 4).b & 1) == 0)
                                        break
                                    
                                    i_1 += 1
                                    rdx_2 += 0x14
                                    
                                    if (i_1 u>= arg4)
                                        break
                            
                            arg_20 = false
                            *(r12 + zx.q(i_1) * 0x14 + 0x13) = 4
                        
                        break
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
            
            if (*(r11 + 0x3c) == 0x4d6c796d)
                uint64_t rax_10 = zx.q(i_1 + 1)
                
                if (rax_10.d u< arg4)
                    while (true)
                        char* r8_6 = r12 + 0x12 + rax_10 * 0x14
                        
                        while ((1 & r8_6[-6] u>> 5) == 0)
                            char rcx_9 = *r8_6
                            char rdx_4
                            
                            if (rcx_9 u>= 0x20)
                                rdx_4 = 0
                            else
                                rdx_4 = (1 << rcx_9).b
                            
                            if ((rdx_4 & 0x60) == 0)
                                break
                            
                            rax_10 = zx.q(rax_10.d + 1)
                            r8_6 = &r8_6[0x14]
                            
                            if (rax_10.d u>= arg4)
                                break
                        
                        if (rax_10.d == arg4)
                            break
                        
                        uint64_t rdx_5 = rax_10 * 5
                        
                        if ((1 & *(r12 + (rdx_5 << 2) + 0xc) u>> 5) != 0)
                            break
                        
                        char rcx_11 = *(r12 + (rdx_5 << 2) + 0x12)
                        int32_t rdx_6
                        
                        if (rcx_11 u>= 0x20)
                            rdx_6 = 0
                        else
                            rdx_6 = 1 << rcx_11
                        
                        if (((rdx_6 u>> 4).b & 1) == 0)
                            break
                        
                        uint64_t rax_11 = zx.q(rax_10.d + 1)
                        
                        if (rax_11.d u< arg4)
                            void* r8_8 = r12 + 0x12 + rax_11 * 0x14
                            
                            while (true)
                                if ((1 & *(r8_8 - 6) u>> 5) == 0)
                                    char rcx_14 = *r8_8
                                    char rdx_9
                                    
                                    if (rcx_14 u>= 0x20)
                                        rdx_9 = 0
                                    else
                                        rdx_9 = (1 << rcx_14).b
                                    
                                    if ((rdx_9 & 0x60) != 0)
                                        rax_11 = zx.q(rax_11.d + 1)
                                        r8_8 += 0x14
                                        
                                        if (rax_11.d u>= arg4)
                                            break
                                        
                                        continue
                                
                                if (rax_11.d u>= arg4)
                                    break
                                
                                uint64_t rdx_10 = rax_11 * 5
                                void* r8_9 = r12 + (rdx_10 << 2)
                                
                                if ((1 & *(r12 + (rdx_10 << 2) + 0xc) u>> 5) == 0)
                                    char rcx_16 = *(r8_9 + 0x12)
                                    int32_t rdx_11
                                    
                                    if (rcx_16 u>= 0x20)
                                        rdx_11 = 0
                                    else
                                        rdx_11 = 1 << rcx_16
                                    
                                    if ((rdx_11 & 0xb1806) != 0 && *(r8_9 + 0x13) == 8)
                                        i_1 = rax_11.d
                                        *(r8_9 + 0x13) = 4
                                
                                break
                        
                        rax_10 = zx.q(rax_11.d + 1)
                        
                        if (rax_10.d u>= arg4)
                            break
            
            if (rbx.d u< i_1 && *(r12 + zx.q(i_1) * 0x14 + 0x13) u> 4)
                i_1 -= 1
            
            break
        
        i_1 += 1
        rax_3 = &rax_3[0x14]
        
        if (i_1 u>= arg4)
            break

bool cond:1 = i_1 u>= arg4

if (i_1 == arg4)
    if (rbx.d u< i_1)
        uint64_t rdx_12 = zx.q(i_1 - 1)
        uint64_t rcx_18 = rdx_12 * 5
        
        if ((1 & *(r12 + (rcx_18 << 2) + 0xc) u>> 5) == 0)
            char rcx_19 = *(r12 + (rcx_18 << 2) + 0x12)
            int32_t rax_14
            
            if (rcx_19 u>= 0x20)
                rax_14 = 0
            else
                rax_14 = 1 << rcx_19
            
            if (((rax_14 u>> 6).b & 1) != 0)
                i_1 = rdx_12.d
    
    cond:1 = i_1 u>= arg4

if (not(cond:1) && rbx.d u< i_1)
    do
        uint64_t rcx_20 = zx.q(i_1) * 5
        
        if ((1 & *(r12 + (rcx_20 << 2) + 0xc) u>> 5) != 0)
            break
        
        char rcx_21 = *(r12 + (rcx_20 << 2) + 0x12)
        char rax_18
        
        if (rcx_21 u>= 0x20)
            rax_18 = 0
        else
            rax_18 = (1 << rcx_21).b
        
        if ((rax_18 & 0x18) == 0)
            break
        
        i_1 -= 1
    while (rbx.d u< i_1)

uint64_t r10_1 = zx.q((rbx + 1).d)
int32_t var_64 = r10_1.d
int128_t* var_58

if (r10_1.d u< arg4)
    if (rbx.d u< i_1)
        uint64_t rdi_1 = zx.q(i_1 - 2)
        
        if (i_1 != arg4)
            rdi_1 = zx.q(i_1 - 1)
        
        int32_t rax_19 = *(r11 + 0x3c)
        
        if (rax_19 != 0x4d6c796d && rax_19 != 0x54616d6c)
            while (true)
                if (rdi_1.d u> rbx.d)
                    char* rdx_14 = r12 + 0x12 + rdi_1 * 0x14
                    
                    do
                        if ((1 & rdx_14[-6] u>> 5) == 0)
                            char rcx_23 = *rdx_14
                            char rax_21
                            
                            if (rcx_23 u>= 0x20)
                                rax_21 = 0
                            else
                                rax_21 = (1 << rcx_23).b
                            
                            if ((rax_21 & 0x90) != 0)
                                break
                        
                        rdi_1 = zx.q(rdi_1.d - 1)
                        rdx_14 -= 0x14
                    while (rdi_1.d u> rbx.d)
                
                uint64_t rcx_24 = rdi_1 * 5
                void* rdx_15 = r12 + (rcx_24 << 2)
                
                if ((1 & *(r12 + (rcx_24 << 2) + 0xc) u>> 5) != 0)
                    goto label_142c3f664
                
                char rcx_25 = *(rdx_15 + 0x12)
                int32_t rax_23
                
                if (rcx_25 u>= 0x20)
                    rax_23 = 0
                else
                    rax_23 = 1 << rcx_25
                
                if (((rax_23 u>> 4).b & 1) == 0)
                    goto label_142c3f664
                
                if (*(rdx_15 + 0x13) == 2)
                    goto label_142c3f664
                
                uint64_t rax_25 = zx.q((rdi_1 + 1).d)
                
                if (rax_25.d u>= arg4)
                    break
                
                if (*(r12 + rax_25 * 0x14 + 0x12) != 6)
                    break
                
                if (rdi_1.d u<= rbx.d)
                    goto label_142c3f664
                
                rdi_1 = zx.q(rdi_1.d - 1)
        
        uint64_t rcx_27
        
        if (rbx.d u< rdi_1.d)
            rcx_27 = rdi_1 * 5
        
        if (rbx.d u>= rdi_1.d || *(r12 + (rcx_27 << 2) + 0x13) == 2)
        label_142c3f664:
            int32_t rdx_19 = rbx.d
            char* rax_33 = r12 + 0x13 + rbx * 0x14
            
            while (*rax_33 != 2)
                rdx_19 += 1
                rax_33 = &rax_33[0x14]
                
                if (rdx_19 u>= i_1)
                    goto label_142c3f6a2
            
            int32_t r8_13 = i_1 + 1
            
            if (arg4 u< r8_13)
                r8_13 = arg4
            
            if (r8_13 - rdx_19 u>= 2)
                sub_142bf5140(r11, rdx_19, r8_13)
                r10_1 = zx.q((rbx + 1).d)
        else
            int32_t rdx_16 = rdi_1.d
            
            if (rdi_1.d u> rbx.d)
                int64_t r14_1 = r12 + (rcx_27 << 2)
                uint64_t r13_1
                
                do
                    r13_1 = zx.q(rdx_16 - 1)
                    
                    if (*(r12 + r13_1 * 0x14 + 0x13) == 2)
                        if (r13_1.d u< i_1 && i_1 u<= rdi_1.d)
                            i_1 -= 1
                        
                        uint64_t rcx_31 = r13_1 * 5
                        int32_t rbx_1 = *(r12 + (rcx_31 << 2) + 0x10)
                        var_58.o = *(r12 + (rcx_31 << 2))
                        memmove(r12 + (rcx_31 << 2), r14_1, (rdi_1.d - rdx_16 + 1) * 0x14)
                        int32_t r8_12 = i_1 + 1
                        uint64_t rcx_33 = rdi_1 * 5
                        *(r12 + (rcx_33 << 2)) = var_58.o
                        
                        if (arg4 u< r8_12)
                            r8_12 = arg4
                        
                        *(r12 + (rcx_33 << 2) + 0x10) = rbx_1
                        
                        if (r8_12 - rdi_1.d u>= 2)
                            sub_142bf5140(arg2, rdi_1.d, r8_12)
                        
                        rbx = zx.q(arg3)
                        rdi_1 = zx.q(rdi_1.d - 1)
                    
                    r14_1 -= 0x14
                    rdx_16 = r13_1.d
                while (r13_1.d u> rbx.d)
                r13 = var_60
                r14 = 0
                r10_1 = zx.q((rbx + 1).d)
    
label_142c3f6a2:
    uint64_t rcx_37 = zx.q(rbx.d) * 5
    int128_t* r9 = r12 + (rcx_37 << 2)
    
    if (*(r12 + (rcx_37 << 2) + 0x13) != 1)
        r11 = arg2
    else
        char rcx_38 = (*(r9 + 0xc)).b
        char rax_38
        
        if ((rcx_38 u>> 5 & 1) != 0)
            rax_38 = 1
        
        if ((rcx_38 u>> 5 & 1) == 0 || (rcx_38 u>> 6 & 1) != 0)
            rax_38 = 0
        
        int32_t rcx_39
        rcx_39.b = *(r9 + 0x12) == 0xf
        
        if (rcx_39 == zx.d(rax_38))
            r11 = arg2
        else
            int32_t r8_14 = *(*r13 + 0x10)
            uint64_t i_4
            char rax_48
            uint64_t rdx_23
            
            if (r8_14 == 0xc)
            label_142c3f841:
                i_4 = zx.q(r10_1.d)
                
                if (r10_1.d u>= i_1)
                label_142c3f88e:
                    i_4 = zx.q(arg4 - 1)
                    
                    if (i_4.d u> rbx.d)
                        char* rax_54 = r12 + 0x13 + i_4 * 0x14
                        
                        while (*rax_54 == 0xe)
                            i_4 = zx.q(i_4.d - 1)
                            rax_54 -= 0x14
                            
                            if (i_4.d u<= rbx.d)
                                break
                    
                    if (*(r13 + 9) == 0)
                        uint64_t rcx_52 = i_4 * 5
                        
                        if ((*(r12 + (rcx_52 << 2) + 0xc) u>> 5 & 1) == 0)
                            char rcx_53 = *(r12 + (rcx_52 << 2) + 0x12)
                            int32_t rax_56
                            
                            if (rcx_53 u>= 0x20)
                                rax_56 = 0
                            else
                                rax_56 = 1 << rcx_53
                            
                            if (((rax_56 u>> 4).b & 1) != 0)
                                uint64_t rdx_27 = zx.q(i_1 + 1)
                                
                                if (rdx_27.d u< i_4.d)
                                    int32_t i_2
                                    
                                    do
                                        i_2 = (i_4 - 1).d
                                        
                                        if (*(r12 + rdx_27 * 0x14 + 0x12) != 7)
                                            i_2 = i_4.d
                                        
                                        rdx_27 = zx.q(rdx_27.d + 1)
                                        i_4 = zx.q(i_2)
                                    while (rdx_27.d u< i_2)
                else
                    char* rdx_26 = r12 + 0x12 + r10_1 * 0x14
                    
                    while (true)
                        if ((rdx_26[-6] u>> 5 & 1) == 0)
                            char rcx_50 = *rdx_26
                            int32_t rax_51
                            
                            if (rcx_50 u>= 0x20)
                                rax_51 = 0
                            else
                                rax_51 = 1 << rcx_50
                            
                            if (((rax_51 u>> 4).b & 1) != 0)
                                break
                        
                        i_4 = zx.q(i_4.d + 1)
                        rdx_26 = &rdx_26[0x14]
                        
                        if (i_4.d u>= i_1)
                            goto label_142c3f88e
                    
                    if (i_4.d u>= i_1)
                        goto label_142c3f88e
                    
                    uint64_t rcx_54 = i_4 * 5
                    
                    if ((*(r12 + (rcx_54 << 2) + 0xc) u>> 5 & 1) != 0)
                        goto label_142c3f88e
                    
                    char rcx_55 = *(r12 + (rcx_54 << 2) + 0x12)
                    int32_t rax_58
                    
                    if (rcx_55 u>= 0x20)
                        rax_58 = 0
                    else
                        rax_58 = 1 << rcx_55
                    
                    if (((rax_58 u>> 4).b & 1) == 0)
                        goto label_142c3f88e
                    
                    rdx_23 = zx.q((i_4 + 1).d)
                    
                    if (rdx_23.d u< i_1)
                        uint64_t rcx_56 = rdx_23 * 5
                        
                        if ((*(r12 + (rcx_56 << 2) + 0xc) u>> 5 & 1) == 0)
                            char rcx_57 = *(r12 + (rcx_56 << 2) + 0x12)
                            
                            if (rcx_57 u>= 0x20)
                                goto label_142c3f7f0
                            
                            rax_48 = (1 << rcx_57).b
                            goto label_142c3f7f3
            else
                i_4 = zx.q(r10_1.d)
                
                if (r10_1.d u>= i_1)
                label_142c3f74e:
                    
                    if (r8_14 != 5)
                        if (r8_14 != 9)
                            goto label_142c3f841
                        
                        uint64_t rdx_24 = zx.q(i_1 + 1)
                        i_4 = zx.q(i_1)
                        
                        while (rdx_24.d u< arg4)
                            char rcx_48 = *(r12 + rdx_24 * 0x14 + 0x13)
                            int32_t rax_49
                            
                            if (rcx_48 u>= 0x20)
                                rax_49 = 0
                            else
                                rax_49 = 1 << rcx_48
                            
                            if ((rax_49 & 0x5800) != 0)
                                break
                            
                            i_4 = zx.q(i_4.d + 1)
                            rdx_24 = zx.q(rdx_24.d + 1)
                    else
                        uint64_t rdx_22 = zx.q(i_1 + 1)
                        i_4 = zx.q(i_1)
                        
                        if (rdx_22.d u< arg4)
                            while (*(r12 + rdx_22 * 0x14 + 0x13) u<= 5)
                                i_4 = zx.q(i_4.d + 1)
                                rdx_22 = zx.q(rdx_22.d + 1)
                                
                                if (rdx_22.d u>= arg4)
                                    break
                    
                    if (i_4.d u>= arg4)
                        goto label_142c3f841
                else
                    char* rdx_21 = r12 + 0x12 + r10_1 * 0x14
                    
                    while (true)
                        if ((rdx_21[-6] u>> 5 & 1) == 0)
                            char rcx_41 = *rdx_21
                            int32_t rax_42
                            
                            if (rcx_41 u>= 0x20)
                                rax_42 = 0
                            else
                                rax_42 = 1 << rcx_41
                            
                            if (((rax_42 u>> 4).b & 1) != 0)
                                break
                        
                        i_4 = zx.q(i_4.d + 1)
                        rdx_21 = &rdx_21[0x14]
                        
                        if (i_4.d u>= i_1)
                            goto label_142c3f74e
                    
                    if (i_4.d u>= i_1)
                        goto label_142c3f74e
                    
                    uint64_t rcx_43 = i_4 * 5
                    
                    if ((*(r12 + (rcx_43 << 2) + 0xc) u>> 5 & 1) != 0)
                        goto label_142c3f74e
                    
                    char rcx_44 = *(r12 + (rcx_43 << 2) + 0x12)
                    int32_t rax_45
                    
                    if (rcx_44 u>= 0x20)
                        rax_45 = 0
                    else
                        rax_45 = 1 << rcx_44
                    
                    if (((rax_45 u>> 4).b & 1) == 0)
                        goto label_142c3f74e
                    
                    rdx_23 = zx.q((i_4 + 1).d)
                    
                    if (rdx_23.d u< i_1)
                        uint64_t rcx_45 = rdx_23 * 5
                        
                        if ((*(r12 + (rcx_45 << 2) + 0xc) u>> 5 & 1) == 0)
                            char rcx_46 = *(r12 + (rcx_45 << 2) + 0x12)
                            
                            if (rcx_46 u>= 0x20)
                            label_142c3f7f0:
                                rax_48 = 0
                            else
                                rax_48 = (1 << rcx_46).b
                            
                        label_142c3f7f3:
                            
                            if ((rax_48 & 0x60) != 0)
                                i_4 = zx.q(rdx_23.d)
            int32_t r8_15 = (i_4 + 1).d
            
            if (r8_15 - rbx.d u>= 2)
                sub_142bf5140(arg2, rbx.d, r8_15)
                r10_1 = zx.q(var_64)
            
            int32_t rbx_2 = r9[1].d
            var_58.o = *r9
            memmove(r9, r12 + zx.q(r10_1.d) * 0x14, (i_4.d - arg3) * 0x14)
            uint64_t rcx_61 = zx.q(i_4.d) * 5
            *(r12 + (rcx_61 << 2)) = var_58.o
            *(r12 + (rcx_61 << 2) + 0x10) = rbx_2
            rbx = zx.q(arg3)
            
            if (rbx.d u>= i_1)
                r11 = arg2
            else
                r11 = arg2
                
                if (i_1 u<= i_4.d)
                    i_1 -= 1

int64_t* rdi_2 = var_60

if (arg_20 != 0)
    uint64_t r13_2 = zx.q(i_1 + 1)
    
    while (r13_2.d u< arg4)
        if ((*(r12 + r13_2 * 0x14 + 4) & rdi_2[0xc].d) != 0)
            uint64_t rcx_65 = r13_2 * 5
            int128_t* rdi_3 = r12 + (rcx_65 << 2)
            char rcx_66 = (*(r12 + (rcx_65 << 2) + 0xc)).b
            
            if ((rcx_66 u>> 5 & 1) != 0 && (rcx_66 u>> 6 & 1) == 0)
                int32_t rax_69 = *(r11 + 0x3c)
                
                if (rax_69 == 0x4d6c796d || rax_69 == 0x54616d6c)
                label_142c3fad5:
                    
                    if (i_1 u> rbx.d)
                        uint64_t rax_73 = zx.q(i_1 - 1) * 5
                        
                        if ((*(r12 + (rax_73 << 2) + 0xc) u>> 5 & 1) == 0)
                            char rcx_70 = *(r12 + (rax_73 << 2) + 0x12)
                            int32_t rax_75
                            
                            if (rcx_70 u>= 0x20)
                                rax_75 = 0
                            else
                                rax_75 = 1 << rcx_70
                            
                            if (((rax_75 u>> 4).b & 1) != 0 && i_1 u< arg4)
                                uint64_t rcx_71 = zx.q(i_1) * 5
                                
                                if ((*(r12 + (rcx_71 << 2) + 0xc) u>> 5 & 1) == 0)
                                    char rcx_72 = *(r12 + (rcx_71 << 2) + 0x12)
                                    
                                    if (rcx_72 u< 0x20)
                                        r14 = (1 << rcx_72).b
                                    
                                    if ((r14 & 0x60) != 0)
                                        i_1 += 1
                else if (i_1 u> rbx.d)
                    while (true)
                        uint64_t rdx_32 = zx.q(i_1 - 1)
                        uint64_t rcx_67 = rdx_32 * 5
                        
                        if ((*(r12 + (rcx_67 << 2) + 0xc) u>> 5 & 1) == 0)
                            char rcx_68 = *(r12 + (rcx_67 << 2) + 0x12)
                            char rax_71
                            
                            if (rcx_68 u>= 0x20)
                                rax_71 = 0
                            else
                                rax_71 = (1 << rcx_68).b
                            
                            if ((rax_71 & 0x90) != 0)
                                break
                        
                        i_1 = rdx_32.d
                        
                        if (rdx_32.d u<= rbx.d)
                            goto label_142c3fb3b
                    
                    goto label_142c3fad5
                
            label_142c3fb3b:
                int32_t r8_18 = (r13_2 + 1).d
                
                if (r8_18 - i_1 u>= 2)
                    sub_142bf5140(r11, i_1, r8_18)
                
                int32_t rdi_4 = rdi_3[1].d
                var_58.o = *rdi_3
                int128_t* rbx_3 = r12 + zx.q(i_1) * 0x14
                memmove(r12 + zx.q(i_1 + 1) * 0x14, rbx_3, (r13_2.d - i_1) * 0x14)
                *rbx_3 = var_58.o
                rbx_3[1].d = rdi_4
            
            rdi_2 = var_60
            break
        
        r13_2 = zx.q(r13_2.d + 1)

uint64_t r13_4 = zx.q(arg3)
uint64_t result = r13_4 * 5
void* rbx_4

if (*(r12 + (result << 2) + 0x13) != 2)
    rbx_4 = arg2
else
    uint64_t rdx_35
    
    if (r13_4.d != 0)
        rdx_35 = zx.q((r13_4 - 1).d)
    
    if (r13_4.d == 0 || (1 << ((*(r12 + rdx_35 * 0x14 + 0x10)).b & 0x1f) & 0x1ffe) == 0)
        void* rcx_80 = r12 + r13_4 * 0x14
        result = zx.q(*(rdi_2 + 0x7c))
        *(rcx_80 + 4) |= result.d
        rbx_4 = arg2
    else
        rbx_4 = arg2
        result = sub_142bf5c70(rbx_4, rdx_35.d, (r13_4 + 1).d)

if (*(rdi_2 + 9) != 0)
    result = zx.q(*(arg1 + 4))
    
    if (result.d != 0x53696e68 && result.d != 0x54616d6c)
        result = zx.q(arg4 - r13_4.d)
        
        if (result.d u>= 2)
            return sub_142bf5140(rbx_4, r13_4.d, arg4)

return result
