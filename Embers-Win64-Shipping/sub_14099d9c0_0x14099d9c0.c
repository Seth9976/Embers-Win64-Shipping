// 函数: sub_14099d9c0
// 地址: 0x14099d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(zx.d(*arg1) - 1)

if (result.d u<= 6)
    char var_88_1
    uint64_t var_68
    int32_t var_58
    int64_t var_48_1
    uint64_t* rcx_11
    int64_t* rbx_2
    int64_t rdi_2
    int64_t* r12_1
    int64_t r13_1
    int128_t zmm6
    
    switch (result.d)
        case 0
            r12_1 = arg2[2]
            int64_t* r15_1 = arg2[1]
            int64_t rdi_1 = sx.q(arg2[3].d)
            int64_t rbx_1 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_5
            
            if (r15_1[1].d == *(r15_1 + 0x34))
            label_14099da90:
                rcx_5 = nullptr
            else
                int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                void* r8_1 = &r15_1[7]
                void* rcx_3 = *(r8_1 + 8)
                
                if (rcx_3 != 0)
                    r8_1 = rcx_3
                
                int32_t rax_6 = *(r8_1 + (((sx.q(r15_1[9].d) - 1) & sx.q(rax_4)) << 2))
                
                if (rax_6 == 0xffffffff)
                label_14099da90_1:
                    rcx_5 = nullptr
                else
                    int64_t r8_2 = *r15_1
                    
                    while (true)
                        int64_t rdx_3 = sx.q(rax_6) * 3
                        rcx_5 = r8_2 + (rdx_3 << 3)
                        
                        if (*(r8_2 + (rdx_3 << 3)) == rbx_1)
                            break
                        
                        rax_6 = *(rcx_5 + 0x10)
                        
                        if (rax_6 == 0xffffffff)
                            goto label_14099da90_2
                    
                    if (rax_6 == 0xffffffff)
                    label_14099da90_2:
                        rcx_5 = nullptr
            
            rbx_2 = *arg2
            var_88_1 = 1
            var_48_1 = 0
            rdi_2 = sx.q(rbx_2[1].d)
            zmm6 = *(*(*(*(rcx_5 + 8) + 0x18) + r13_1 * 0x10) + rdi_1 * 0x10)
            int32_t rax_10 = (rdi_2 + 1).d
            rbx_2[1].d = rax_10
            
            if (rax_10 s> *(rbx_2 + 0xc))
                sub_14090a6a0(rbx_2)
            
            goto label_14099dad3
        case 1
            r12_1 = arg2[2]
            int64_t* r15_2 = arg2[1]
            int64_t rdi_3 = sx.q(arg2[3].d)
            int64_t rbx_3 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_15
            
            if (r15_2[1].d == *(r15_2 + 0x34))
            label_14099db61:
                rcx_15 = nullptr
            else
                int32_t rax_13 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
                void* r8_3 = &r15_2[7]
                void* rcx_13 = *(r8_3 + 8)
                
                if (rcx_13 != 0)
                    r8_3 = rcx_13
                
                int32_t rax_15 = *(r8_3 + (((sx.q(r15_2[9].d) - 1) & sx.q(rax_13)) << 2))
                
                if (rax_15 == 0xffffffff)
                label_14099db61_1:
                    rcx_15 = nullptr
                else
                    int64_t r8_4 = *r15_2
                    
                    while (true)
                        int64_t rdx_10 = sx.q(rax_15) * 3
                        rcx_15 = r8_4 + (rdx_10 << 3)
                        
                        if (*(r8_4 + (rdx_10 << 3)) == rbx_3)
                            break
                        
                        rax_15 = *(rcx_15 + 0x10)
                        
                        if (rax_15 == 0xffffffff)
                            goto label_14099db61_2
                    
                    if (rax_15 == 0xffffffff)
                    label_14099db61_2:
                        rcx_15 = nullptr
            
            int64_t r8_5 = rdi_3 * 3
            rbx_2 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 2
            rdi_2 = sx.q(rbx_2[1].d)
            var_48_1 = 0
            int64_t rax_17 = *(*(*(rcx_15 + 8) + 0x18) + r13_1 * 0x10)
            int32_t var_60_1 = *(rax_17 + (r8_5 << 2) + 8)
            int32_t rax_19 = (rdi_2 + 1).d
            var_68 = *(rax_17 + (r8_5 << 2))
            rbx_2[1].d = rax_19
            
            if (rax_19 s<= *(rbx_2 + 0xc))
            label_14099dad3:
                result = *r12_1
                rcx_11 = rdi_2 * 0x60 + *rbx_2
                rcx_11[1].d = r13_1.d
            else
                sub_14090a6a0(rbx_2)
                result = *r12_1
                rcx_11 = rdi_2 * 0x60 + *rbx_2
                rcx_11[1].d = r13_1.d
        case 2
            r12_1 = arg2[2]
            int64_t* r15_3 = arg2[1]
            int64_t rdi_4 = sx.q(arg2[3].d)
            int64_t rbx_4 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_23
            
            if (r15_3[1].d == *(r15_3 + 0x34))
            label_14099dc50:
                rcx_23 = nullptr
            else
                int32_t rax_22 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
                void* r8_6 = &r15_3[7]
                void* rcx_21 = *(r8_6 + 8)
                
                if (rcx_21 != 0)
                    r8_6 = rcx_21
                
                int32_t rax_24 = *(r8_6 + (((sx.q(r15_3[9].d) - 1) & sx.q(rax_22)) << 2))
                
                if (rax_24 == 0xffffffff)
                label_14099dc50_1:
                    rcx_23 = nullptr
                else
                    int64_t r8_7 = *r15_3
                    
                    while (true)
                        int64_t rdx_17 = sx.q(rax_24) * 3
                        rcx_23 = r8_7 + (rdx_17 << 3)
                        
                        if (*(r8_7 + (rdx_17 << 3)) == rbx_4)
                            break
                        
                        rax_24 = *(rcx_23 + 0x10)
                        
                        if (rax_24 == 0xffffffff)
                            goto label_14099dc50_2
                    
                    if (rax_24 == 0xffffffff)
                    label_14099dc50_2:
                        rcx_23 = nullptr
            
            rbx_2 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 3
            var_48_1 = 0
            int64_t rcx_26 = *(*(*(rcx_23 + 8) + 0x18) + r13_1 * 0x10)
            rdi_2 = sx.q(rbx_2[1].d)
            int32_t var_5c_1 = (*(rcx_26 + (rdi_4 << 3))).d
            var_58 = (*(rcx_26 + (rdi_4 << 3) + 4)).d
            int32_t rax_27 = (rdi_2 + 1).d
            rbx_2[1].d = rax_27
            
            if (rax_27 s<= *(rbx_2 + 0xc))
                goto label_14099dad3
            
            sub_14090a6a0(rbx_2)
            result = *r12_1
            rcx_11 = rdi_2 * 0x60 + *rbx_2
            rcx_11[1].d = r13_1.d
        case 3
            r12_1 = arg2[2]
            int64_t* r15_4 = arg2[1]
            int64_t rdi_5 = sx.q(arg2[3].d)
            int64_t rbx_5 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_33
            
            if (r15_4[1].d == *(r15_4 + 0x34))
            label_14099dd40:
                rcx_33 = nullptr
            else
                int32_t rax_30 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
                void* r8_8 = &r15_4[7]
                void* rcx_31 = *(r8_8 + 8)
                
                if (rcx_31 != 0)
                    r8_8 = rcx_31
                
                int32_t rax_32 = *(r8_8 + (((sx.q(r15_4[9].d) - 1) & sx.q(rax_30)) << 2))
                
                if (rax_32 == 0xffffffff)
                label_14099dd40_1:
                    rcx_33 = nullptr
                else
                    int64_t r8_9 = *r15_4
                    
                    while (true)
                        int64_t rdx_22 = sx.q(rax_32) * 3
                        rcx_33 = r8_9 + (rdx_22 << 3)
                        
                        if (*(r8_9 + (rdx_22 << 3)) == rbx_5)
                            break
                        
                        rax_32 = *(rcx_33 + 0x10)
                        
                        if (rax_32 == 0xffffffff)
                            goto label_14099dd40_2
                    
                    if (rax_32 == 0xffffffff)
                    label_14099dd40_2:
                        rcx_33 = nullptr
            
            rbx_2 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 4
            var_48_1 = 0
            rdi_2 = sx.q(rbx_2[1].d)
            int32_t var_54_1 = (*(*(*(*(rcx_33 + 8) + 0x18) + r13_1 * 0x10) + (rdi_5 << 2))).d
            int32_t rax_36 = (rdi_2 + 1).d
            rbx_2[1].d = rax_36
            
            if (rax_36 s<= *(rbx_2 + 0xc))
                goto label_14099dad3
            
            sub_14090a6a0(rbx_2)
            result = *r12_1
            rcx_11 = rdi_2 * 0x60 + *rbx_2
            rcx_11[1].d = r13_1.d
        case 4
            r12_1 = arg2[2]
            int64_t* r15_5 = arg2[1]
            int64_t rdi_6 = sx.q(arg2[3].d)
            int64_t rbx_6 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_40
            
            if (r15_5[1].d == *(r15_5 + 0x34))
            label_14099de20:
                rcx_40 = nullptr
            else
                int32_t rax_39 = sub_140b5ead0(rbx_6.d) + rbx_6:4.d
                void* r8_10 = &r15_5[7]
                void* rcx_38 = *(r8_10 + 8)
                
                if (rcx_38 != 0)
                    r8_10 = rcx_38
                
                int32_t rax_41 = *(r8_10 + (((sx.q(r15_5[9].d) - 1) & sx.q(rax_39)) << 2))
                
                if (rax_41 == 0xffffffff)
                label_14099de20_1:
                    rcx_40 = nullptr
                else
                    int64_t r8_11 = *r15_5
                    
                    while (true)
                        int64_t rdx_29 = sx.q(rax_41) * 3
                        rcx_40 = r8_11 + (rdx_29 << 3)
                        
                        if (*(r8_11 + (rdx_29 << 3)) == rbx_6)
                            break
                        
                        rax_41 = *(rcx_40 + 0x10)
                        
                        if (rax_41 == 0xffffffff)
                            goto label_14099de20_2
                    
                    if (rax_41 == 0xffffffff)
                    label_14099de20_2:
                        rcx_40 = nullptr
            
            rbx_2 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 5
            var_48_1 = 0
            rdi_2 = sx.q(rbx_2[1].d)
            int32_t var_50_1 = *(*(*(*(rcx_40 + 8) + 0x18) + r13_1 * 0x10) + (rdi_6 << 2))
            int32_t rax_45 = (rdi_2 + 1).d
            rbx_2[1].d = rax_45
            
            if (rax_45 s<= *(rbx_2 + 0xc))
                goto label_14099dad3
            
            sub_14090a6a0(rbx_2)
            result = *r12_1
            rcx_11 = rdi_2 * 0x60 + *rbx_2
            rcx_11[1].d = r13_1.d
        case 5
            r12_1 = arg2[2]
            int64_t* r15_6 = arg2[1]
            int64_t rdi_7 = sx.q(arg2[3].d)
            int64_t rbx_7 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_48
            
            if (r15_6[1].d == *(r15_6 + 0x34))
            label_14099df00:
                rcx_48 = nullptr
            else
                int32_t rax_48 = sub_140b5ead0(rbx_7.d) + rbx_7:4.d
                void* r8_12 = &r15_6[7]
                void* rcx_46 = *(r8_12 + 8)
                
                if (rcx_46 != 0)
                    r8_12 = rcx_46
                
                int32_t rax_50 = *(r8_12 + (((sx.q(r15_6[9].d) - 1) & sx.q(rax_48)) << 2))
                
                if (rax_50 == 0xffffffff)
                label_14099df00_1:
                    rcx_48 = nullptr
                else
                    int64_t r8_13 = *r15_6
                    
                    while (true)
                        int64_t rdx_36 = sx.q(rax_50) * 3
                        rcx_48 = r8_13 + (rdx_36 << 3)
                        
                        if (*(r8_13 + (rdx_36 << 3)) == rbx_7)
                            break
                        
                        rax_50 = *(rcx_48 + 0x10)
                        
                        if (rax_50 == 0xffffffff)
                            goto label_14099df00_2
                    
                    if (rax_50 == 0xffffffff)
                    label_14099df00_2:
                        rcx_48 = nullptr
            
            rbx_2 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 6
            var_48_1 = 0
            rdi_2 = sx.q(rbx_2[1].d)
            char var_4c_1 = *(rdi_7 + *(*(*(rcx_48 + 8) + 0x18) + r13_1 * 0x10))
            int32_t rax_54 = (rdi_2 + 1).d
            rbx_2[1].d = rax_54
            
            if (rax_54 s<= *(rbx_2 + 0xc))
                goto label_14099dad3
            
            sub_14090a6a0(rbx_2)
            result = *r12_1
            rcx_11 = rdi_2 * 0x60 + *rbx_2
            rcx_11[1].d = r13_1.d
        case 6
            int64_t* r15_7 = arg2[2]
            int64_t* rsi_1 = arg2[1]
            int64_t rdi_8 = sx.q(arg2[3].d)
            int64_t rbx_8 = *r15_7
            int64_t r12_2 = sx.q(r15_7[1].d)
            void* const rsi_2
            
            if (rsi_1[1].d == *(rsi_1 + 0x34))
            label_14099dfe0:
                rsi_2 = nullptr
            else
                int32_t rax_57 = sub_140b5ead0(rbx_8.d) + rbx_8:4.d
                void* r8_14 = &rsi_1[7]
                void* rcx_54 = *(r8_14 + 8)
                
                if (rcx_54 != 0)
                    r8_14 = rcx_54
                
                int32_t rax_59 = *(r8_14 + (((sx.q(rsi_1[9].d) - 1) & sx.q(rax_57)) << 2))
                
                if (rax_59 == 0xffffffff)
                label_14099dfe0_1:
                    rsi_2 = nullptr
                else
                    int64_t r8_15 = *rsi_1
                    
                    while (true)
                        int64_t rdx_43 = sx.q(rax_59) * 3
                        rsi_2 = r8_15 + (rdx_43 << 3)
                        
                        if (*(r8_15 + (rdx_43 << 3)) == rbx_8)
                            break
                        
                        rax_59 = *(rsi_2 + 0x10)
                        
                        if (rax_59 == 0xffffffff)
                            goto label_14099dfe0_2
                    
                    if (rax_59 == 0xffffffff)
                    label_14099dfe0_2:
                        rsi_2 = nullptr
            
            int64_t* rbx_9 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 7
            int64_t rdi_9 = sx.q(rbx_9[1].d)
            var_48_1 = *(*(*(*(rsi_2 + 8) + 0x18) + r12_2 * 0x10) + (rdi_8 << 3))
            int32_t rax_63 = (rdi_9 + 1).d
            rbx_9[1].d = rax_63
            
            if (rax_63 s> *(rbx_9 + 0xc))
                sub_14090a6a0(rbx_9)
            
            result = *r15_7
            rcx_11 = rdi_9 * 0x60 + *rbx_9
            rcx_11[1].d = r12_2.d
    
    *(rcx_11 + 0x10) = var_88_1.o
    *(rcx_11 + 0x20) = zmm6
    *(rcx_11 + 0x30) = var_68.o
    *(rcx_11 + 0x40) = var_58.o
    *(rcx_11 + 0x50) = var_48_1.o
    *rcx_11 = result

return result
