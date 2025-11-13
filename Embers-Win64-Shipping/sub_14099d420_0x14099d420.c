// 函数: sub_14099d420
// 地址: 0x14099d420
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
    int64_t r12_2
    int64_t r13_1
    int64_t* r15_2
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
            label_14099d4f0:
                rcx_5 = nullptr
            else
                int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                void* r8_1 = &r15_1[7]
                void* rcx_3 = *(r8_1 + 8)
                
                if (rcx_3 != 0)
                    r8_1 = rcx_3
                
                int32_t rax_6 = *(r8_1 + (((sx.q(r15_1[9].d) - 1) & sx.q(rax_4)) << 2))
                
                if (rax_6 == 0xffffffff)
                label_14099d4f0_1:
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
                            goto label_14099d4f0_2
                    
                    if (rax_6 == 0xffffffff)
                    label_14099d4f0_2:
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
            
            goto label_14099d533
        case 1
            r15_2 = arg2[2]
            r12_2 = zx.q(r15_2[1].d)
            int64_t var_98
            sub_14099ad60(arg2[1], &var_98, arg2[3].d, *r15_2, r12_2.d)
            var_68 = var_98
            var_48_1 = 0
            var_88_1 = 2
            int32_t var_90
            int32_t var_60_1 = var_90
        label_14099d900:
            zmm6 = data_142d3f660
            goto label_14099d907
        case 2
            r12_1 = arg2[2]
            int64_t* r15_3 = arg2[1]
            int64_t rdi_3 = sx.q(arg2[3].d)
            int64_t rbx_3 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_16
            
            if (r15_3[1].d == *(r15_3 + 0x34))
            label_14099d601:
                rcx_16 = nullptr
            else
                int32_t rax_14 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
                void* r8_4 = &r15_3[7]
                void* rcx_14 = *(r8_4 + 8)
                
                if (rcx_14 != 0)
                    r8_4 = rcx_14
                
                int32_t rax_16 = *(r8_4 + (((sx.q(r15_3[9].d) - 1) & sx.q(rax_14)) << 2))
                
                if (rax_16 == 0xffffffff)
                label_14099d601_1:
                    rcx_16 = nullptr
                else
                    int64_t r8_5 = *r15_3
                    
                    while (true)
                        int64_t rdx_11 = sx.q(rax_16) * 3
                        rcx_16 = r8_5 + (rdx_11 << 3)
                        
                        if (*(r8_5 + (rdx_11 << 3)) == rbx_3)
                            break
                        
                        rax_16 = *(rcx_16 + 0x10)
                        
                        if (rax_16 == 0xffffffff)
                            goto label_14099d601_2
                    
                    if (rax_16 == 0xffffffff)
                    label_14099d601_2:
                        rcx_16 = nullptr
            
            rbx_2 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 3
            var_48_1 = 0
            int64_t rcx_19 = *(*(*(rcx_16 + 8) + 0x18) + r13_1 * 0x10)
            rdi_2 = sx.q(rbx_2[1].d)
            int32_t var_5c_1 = (*(rcx_19 + (rdi_3 << 3))).d
            var_58 = (*(rcx_19 + (rdi_3 << 3) + 4)).d
            int32_t rax_19 = (rdi_2 + 1).d
            rbx_2[1].d = rax_19
            
            if (rax_19 s<= *(rbx_2 + 0xc))
            label_14099d533:
                result = *r12_1
                rcx_11 = rdi_2 * 0x60 + *rbx_2
                rcx_11[1].d = r13_1.d
            else
                sub_14090a6a0(rbx_2)
                result = *r12_1
                rcx_11 = rdi_2 * 0x60 + *rbx_2
                rcx_11[1].d = r13_1.d
        case 3
            r15_2 = arg2[2]
            zmm6 = data_142d3f660
            r12_2 = zx.q(r15_2[1].d)
            var_88_1 = 4
            int32_t var_54_1 = sub_14099acb0(arg2[1], arg2[3].d, *r15_2, r12_2.d).d
            var_48_1 = 0
        label_14099d907:
            int64_t* rbx_7 = *arg2
            int64_t rdi_7 = sx.q(rbx_7[1].d)
            int32_t rax_46 = (rdi_7 + 1).d
            rbx_7[1].d = rax_46
            
            if (rax_46 s> *(rbx_7 + 0xc))
                sub_14090a6a0(rbx_7)
            
            result = *r15_2
            rcx_11 = rdi_7 * 0x60 + *rbx_7
            rcx_11[1].d = r12_2.d
        case 4
            r12_1 = arg2[2]
            int64_t* r15_4 = arg2[1]
            int64_t rdi_4 = sx.q(arg2[3].d)
            int64_t rbx_4 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_27
            
            if (r15_4[1].d == *(r15_4 + 0x34))
            label_14099d720:
                rcx_27 = nullptr
            else
                int32_t rax_22 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
                void* r8_7 = &r15_4[7]
                void* rcx_25 = *(r8_7 + 8)
                
                if (rcx_25 != 0)
                    r8_7 = rcx_25
                
                int32_t rax_24 = *(r8_7 + (((sx.q(r15_4[9].d) - 1) & sx.q(rax_22)) << 2))
                
                if (rax_24 == 0xffffffff)
                label_14099d720_1:
                    rcx_27 = nullptr
                else
                    int64_t r8_8 = *r15_4
                    
                    while (true)
                        int64_t rdx_17 = sx.q(rax_24) * 3
                        rcx_27 = r8_8 + (rdx_17 << 3)
                        
                        if (*(r8_8 + (rdx_17 << 3)) == rbx_4)
                            break
                        
                        rax_24 = *(rcx_27 + 0x10)
                        
                        if (rax_24 == 0xffffffff)
                            goto label_14099d720_2
                    
                    if (rax_24 == 0xffffffff)
                    label_14099d720_2:
                        rcx_27 = nullptr
            
            rbx_2 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 5
            var_48_1 = 0
            rdi_2 = sx.q(rbx_2[1].d)
            int32_t var_50_1 = *(*(*(*(rcx_27 + 8) + 0x18) + r13_1 * 0x10) + (rdi_4 << 2))
            int32_t rax_28 = (rdi_2 + 1).d
            rbx_2[1].d = rax_28
            
            if (rax_28 s<= *(rbx_2 + 0xc))
                goto label_14099d533
            
            sub_14090a6a0(rbx_2)
            result = *r12_1
            rcx_11 = rdi_2 * 0x60 + *rbx_2
            rcx_11[1].d = r13_1.d
        case 5
            r12_1 = arg2[2]
            int64_t* r15_5 = arg2[1]
            int64_t rdi_5 = sx.q(arg2[3].d)
            int64_t rbx_5 = *r12_1
            r13_1 = sx.q(r12_1[1].d)
            void* const rcx_35
            
            if (r15_5[1].d == *(r15_5 + 0x34))
            label_14099d800:
                rcx_35 = nullptr
            else
                int32_t rax_31 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
                void* r8_9 = &r15_5[7]
                void* rcx_33 = *(r8_9 + 8)
                
                if (rcx_33 != 0)
                    r8_9 = rcx_33
                
                int32_t rax_33 = *(r8_9 + (((sx.q(r15_5[9].d) - 1) & sx.q(rax_31)) << 2))
                
                if (rax_33 == 0xffffffff)
                label_14099d800_1:
                    rcx_35 = nullptr
                else
                    int64_t r8_10 = *r15_5
                    
                    while (true)
                        int64_t rdx_24 = sx.q(rax_33) * 3
                        rcx_35 = r8_10 + (rdx_24 << 3)
                        
                        if (*(r8_10 + (rdx_24 << 3)) == rbx_5)
                            break
                        
                        rax_33 = *(rcx_35 + 0x10)
                        
                        if (rax_33 == 0xffffffff)
                            goto label_14099d800_2
                    
                    if (rax_33 == 0xffffffff)
                    label_14099d800_2:
                        rcx_35 = nullptr
            
            rbx_2 = *arg2
            zmm6 = data_142d3f660
            var_88_1 = 6
            var_48_1 = 0
            rdi_2 = sx.q(rbx_2[1].d)
            char var_4c_1 = *(rdi_5 + *(*(*(rcx_35 + 8) + 0x18) + r13_1 * 0x10))
            int32_t rax_37 = (rdi_2 + 1).d
            rbx_2[1].d = rax_37
            
            if (rax_37 s<= *(rbx_2 + 0xc))
                goto label_14099d533
            
            sub_14090a6a0(rbx_2)
            result = *r12_1
            rcx_11 = rdi_2 * 0x60 + *rbx_2
            rcx_11[1].d = r13_1.d
        case 6
            r15_2 = arg2[2]
            int64_t* rsi_1 = arg2[1]
            int64_t rdi_6 = sx.q(arg2[3].d)
            int64_t rbx_6 = *r15_2
            r12_2 = sx.q(r15_2[1].d)
            void* const rsi_2
            
            if (rsi_1[1].d == *(rsi_1 + 0x34))
            label_14099d8e0:
                rsi_2 = nullptr
            else
                int32_t rax_40 = sub_140b5ead0(rbx_6.d) + rbx_6:4.d
                void* r8_11 = &rsi_1[7]
                void* rcx_41 = *(r8_11 + 8)
                
                if (rcx_41 != 0)
                    r8_11 = rcx_41
                
                int32_t rax_42 = *(r8_11 + (((sx.q(rsi_1[9].d) - 1) & sx.q(rax_40)) << 2))
                
                if (rax_42 == 0xffffffff)
                label_14099d8e0_1:
                    rsi_2 = nullptr
                else
                    int64_t r8_12 = *rsi_1
                    
                    while (true)
                        int64_t rdx_31 = sx.q(rax_42) * 3
                        rsi_2 = r8_12 + (rdx_31 << 3)
                        
                        if (*(r8_12 + (rdx_31 << 3)) == rbx_6)
                            break
                        
                        rax_42 = *(rsi_2 + 0x10)
                        
                        if (rax_42 == 0xffffffff)
                            goto label_14099d8e0_2
                    
                    if (rax_42 == 0xffffffff)
                    label_14099d8e0_2:
                        rsi_2 = nullptr
            
            var_88_1 = 7
            var_48_1 = *(*(*(*(rsi_2 + 8) + 0x18) + r12_2 * 0x10) + (rdi_6 << 3))
            goto label_14099d900
    
    *(rcx_11 + 0x10) = var_88_1.o
    *(rcx_11 + 0x20) = zmm6
    *(rcx_11 + 0x30) = var_68.o
    *(rcx_11 + 0x40) = var_58.o
    *(rcx_11 + 0x50) = var_48_1.o
    *rcx_11 = result

return result
