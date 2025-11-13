// 函数: sub_14099cf40
// 地址: 0x14099cf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(zx.d(*arg1) - 1)

switch (result.d)
    case 0
        int64_t* rbx_1 = arg2[1]
        int64_t* rsi_1 = *arg2
        int64_t rdi_1 = sx.q(arg2[2].d)
        int64_t rbp_1 = sx.q(rbx_1[1].d)
        int64_t rbx_2 = *rbx_1
        void* const rcx_3
        
        if (rsi_1[1].d == *(rsi_1 + 0x34))
        label_14099d000:
            rcx_3 = nullptr
        else
            int32_t rax_4 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
            void* r8_3 = &rsi_1[7]
            void* rcx_1 = *(r8_3 + 8)
            
            if (rcx_1 != 0)
                r8_3 = rcx_1
            
            int32_t rax_6 = *(r8_3 + (((sx.q(rsi_1[9].d) - 1) & sx.q(rax_4)) << 2))
            
            if (rax_6 == 0xffffffff)
            label_14099d000_1:
                rcx_3 = nullptr
            else
                int64_t r8_4 = *rsi_1
                
                while (true)
                    int64_t rdx_3 = sx.q(rax_6) * 3
                    rcx_3 = r8_4 + (rdx_3 << 3)
                    
                    if (*(r8_4 + (rdx_3 << 3)) == rbx_2)
                        break
                    
                    rax_6 = *(rcx_3 + 0x10)
                    
                    if (rax_6 == 0xffffffff)
                        goto label_14099d000_2
                
                if (rax_6 == 0xffffffff)
                label_14099d000_2:
                    rcx_3 = nullptr
        
        result = *(*(*(rcx_3 + 8) + 0x18) + rbp_1 * 0x10)
        *(result + rdi_1 * 0x10) = *(arg1 + 0x10)
    case 1
        int64_t* rbx_3 = arg2[1]
        int64_t* rsi_2 = *arg2
        int64_t rdi_2 = sx.q(arg2[2].d)
        int64_t rbp_2 = sx.q(rbx_3[1].d)
        int64_t rbx_4 = *rbx_3
        void* const rcx_9
        
        if (rsi_2[1].d == *(rsi_2 + 0x34))
        label_14099d0a0:
            rcx_9 = nullptr
        else
            int32_t rax_11 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
            void* r8_5 = &rsi_2[7]
            void* rcx_7 = *(r8_5 + 8)
            
            if (rcx_7 != 0)
                r8_5 = rcx_7
            
            int32_t rax_13 = *(r8_5 + (((sx.q(rsi_2[9].d) - 1) & sx.q(rax_11)) << 2))
            
            if (rax_13 == 0xffffffff)
            label_14099d0a0_1:
                rcx_9 = nullptr
            else
                int64_t r8_6 = *rsi_2
                
                while (true)
                    int64_t rdx_9 = sx.q(rax_13) * 3
                    rcx_9 = r8_6 + (rdx_9 << 3)
                    
                    if (*(r8_6 + (rdx_9 << 3)) == rbx_4)
                        break
                    
                    rax_13 = *(rcx_9 + 0x10)
                    
                    if (rax_13 == 0xffffffff)
                        goto label_14099d0a0_2
                
                if (rax_13 == 0xffffffff)
                label_14099d0a0_2:
                    rcx_9 = nullptr
        
        int64_t r9_1 = rdi_2 * 3
        int64_t r8_7 = *(*(*(rcx_9 + 8) + 0x18) + rbp_2 * 0x10)
        *(r8_7 + (r9_1 << 2)) = *(arg1 + 0x20)
        result = zx.q(*(arg1 + 0x28))
        *(r8_7 + (r9_1 << 2) + 8) = result.d
    case 2
        int64_t* rbx_5 = arg2[1]
        int64_t* rsi_3 = *arg2
        int64_t rdi_3 = sx.q(arg2[2].d)
        int64_t rbp_3 = sx.q(rbx_5[1].d)
        int64_t rbx_6 = *rbx_5
        void* const rcx_14
        
        if (rsi_3[1].d == *(rsi_3 + 0x34))
        label_14099d150:
            rcx_14 = nullptr
        else
            int32_t rax_17 = sub_140b5ead0(rbx_6.d) + rbx_6:4.d
            void* r8_8 = &rsi_3[7]
            void* rcx_12 = *(r8_8 + 8)
            
            if (rcx_12 != 0)
                r8_8 = rcx_12
            
            int32_t rax_19 = *(r8_8 + (((sx.q(rsi_3[9].d) - 1) & sx.q(rax_17)) << 2))
            
            if (rax_19 == 0xffffffff)
            label_14099d150_1:
                rcx_14 = nullptr
            else
                int64_t r8_9 = *rsi_3
                
                while (true)
                    int64_t rdx_15 = sx.q(rax_19) * 3
                    rcx_14 = r8_9 + (rdx_15 << 3)
                    
                    if (*(r8_9 + (rdx_15 << 3)) == rbx_6)
                        break
                    
                    rax_19 = *(rcx_14 + 0x10)
                    
                    if (rax_19 == 0xffffffff)
                        goto label_14099d150_2
                
                if (rax_19 == 0xffffffff)
                label_14099d150_2:
                    rcx_14 = nullptr
        
        result = *(*(rcx_14 + 8) + 0x18)
        *(*(result + rbp_3 * 0x10) + (rdi_3 << 3)) = *(arg1 + 0x2c)
    case 3
        int64_t* rbx_7 = arg2[1]
        int64_t* rsi_4 = *arg2
        int64_t rdi_4 = sx.q(arg2[2].d)
        int64_t rbp_4 = sx.q(rbx_7[1].d)
        int64_t rbx_8 = *rbx_7
        void* const rcx_21
        
        if (rsi_4[1].d == *(rsi_4 + 0x34))
        label_14099d1f0:
            rcx_21 = nullptr
        else
            int32_t rax_23 = sub_140b5ead0(rbx_8.d) + rbx_8:4.d
            void* r8_10 = &rsi_4[7]
            void* rcx_19 = *(r8_10 + 8)
            
            if (rcx_19 != 0)
                r8_10 = rcx_19
            
            int32_t rax_25 = *(r8_10 + (((sx.q(rsi_4[9].d) - 1) & sx.q(rax_23)) << 2))
            
            if (rax_25 == 0xffffffff)
            label_14099d1f0_1:
                rcx_21 = nullptr
            else
                int64_t r8_11 = *rsi_4
                
                while (true)
                    int64_t rdx_19 = sx.q(rax_25) * 3
                    rcx_21 = r8_11 + (rdx_19 << 3)
                    
                    if (*(r8_11 + (rdx_19 << 3)) == rbx_8)
                        break
                    
                    rax_25 = *(rcx_21 + 0x10)
                    
                    if (rax_25 == 0xffffffff)
                        goto label_14099d1f0_2
                
                if (rax_25 == 0xffffffff)
                label_14099d1f0_2:
                    rcx_21 = nullptr
        
        result = zx.q(*(arg1 + 0x34))
        *(*(*(*(rcx_21 + 8) + 0x18) + rbp_4 * 0x10) + (rdi_4 << 2)) = result.d
    case 4
        int64_t* rbx_9 = arg2[1]
        int64_t* rsi_5 = *arg2
        int64_t rdi_5 = sx.q(arg2[2].d)
        int64_t rbp_5 = sx.q(rbx_9[1].d)
        int64_t rbx_10 = *rbx_9
        void* const rcx_28
        
        if (rsi_5[1].d == *(rsi_5 + 0x34))
        label_14099d281:
            rcx_28 = nullptr
        else
            int32_t rax_30 = sub_140b5ead0(rbx_10.d) + rbx_10:4.d
            void* r8_12 = &rsi_5[7]
            void* rcx_26 = *(r8_12 + 8)
            
            if (rcx_26 != 0)
                r8_12 = rcx_26
            
            int32_t rax_32 = *(r8_12 + (((sx.q(rsi_5[9].d) - 1) & sx.q(rax_30)) << 2))
            
            if (rax_32 == 0xffffffff)
            label_14099d281_1:
                rcx_28 = nullptr
            else
                int64_t r8_13 = *rsi_5
                
                while (true)
                    int64_t rdx_23 = sx.q(rax_32) * 3
                    rcx_28 = r8_13 + (rdx_23 << 3)
                    
                    if (*(r8_13 + (rdx_23 << 3)) == rbx_10)
                        break
                    
                    rax_32 = *(rcx_28 + 0x10)
                    
                    if (rax_32 == 0xffffffff)
                        goto label_14099d281_2
                
                if (rax_32 == 0xffffffff)
                label_14099d281_2:
                    rcx_28 = nullptr
        
        result = zx.q(*(arg1 + 0x38))
        *(*(*(*(rcx_28 + 8) + 0x18) + rbp_5 * 0x10) + (rdi_5 << 2)) = result.d
    case 5
        int64_t* rbx_11 = arg2[1]
        int64_t* rsi_6 = *arg2
        char* rdi_6 = sx.q(arg2[2].d)
        int64_t rbp_6 = sx.q(rbx_11[1].d)
        int64_t rbx_12 = *rbx_11
        void* const rcx_35
        
        if (rsi_6[1].d == *(rsi_6 + 0x34))
        label_14099d320:
            rcx_35 = nullptr
        else
            int32_t rax_37 = sub_140b5ead0(rbx_12.d) + rbx_12:4.d
            void* r8_14 = &rsi_6[7]
            void* rcx_33 = *(r8_14 + 8)
            
            if (rcx_33 != 0)
                r8_14 = rcx_33
            
            int32_t rax_39 = *(r8_14 + (((sx.q(rsi_6[9].d) - 1) & sx.q(rax_37)) << 2))
            
            if (rax_39 == 0xffffffff)
            label_14099d320_1:
                rcx_35 = nullptr
            else
                int64_t r8_15 = *rsi_6
                
                while (true)
                    int64_t rdx_27 = sx.q(rax_39) * 3
                    rcx_35 = r8_15 + (rdx_27 << 3)
                    
                    if (*(r8_15 + (rdx_27 << 3)) == rbx_12)
                        break
                    
                    rax_39 = *(rcx_35 + 0x10)
                    
                    if (rax_39 == 0xffffffff)
                        goto label_14099d320_2
                
                if (rax_39 == 0xffffffff)
                label_14099d320_2:
                    rcx_35 = nullptr
        
        result = zx.q(arg1[0x3c])
        rdi_6[*(*(*(rcx_35 + 8) + 0x18) + rbp_6 * 0x10)] = result.b
    case 6
        int64_t* rbx_13 = arg2[1]
        int64_t* rsi_7 = *arg2
        int64_t rdi_7 = sx.q(arg2[2].d)
        int64_t rbp_7 = sx.q(rbx_13[1].d)
        int64_t rbx_14 = *rbx_13
        void* const rcx_42
        
        if (rsi_7[1].d == *(rsi_7 + 0x34))
        label_14099d3c0:
            rcx_42 = nullptr
        else
            int32_t rax_44 = sub_140b5ead0(rbx_14.d) + rbx_14:4.d
            void* r8_16 = &rsi_7[7]
            void* rcx_40 = *(r8_16 + 8)
            
            if (rcx_40 != 0)
                r8_16 = rcx_40
            
            int32_t rax_46 = *(r8_16 + (((sx.q(rsi_7[9].d) - 1) & sx.q(rax_44)) << 2))
            
            if (rax_46 == 0xffffffff)
            label_14099d3c0_1:
                rcx_42 = nullptr
            else
                int64_t r8_17 = *rsi_7
                
                while (true)
                    int64_t rdx_31 = sx.q(rax_46) * 3
                    rcx_42 = r8_17 + (rdx_31 << 3)
                    
                    if (*(r8_17 + (rdx_31 << 3)) == rbx_14)
                        break
                    
                    rax_46 = *(rcx_42 + 0x10)
                    
                    if (rax_46 == 0xffffffff)
                        goto label_14099d3c0_2
                
                if (rax_46 == 0xffffffff)
                label_14099d3c0_2:
                    rcx_42 = nullptr
        
        result = *(arg1 + 0x40)
        *(*(*(*(rcx_42 + 8) + 0x18) + rbp_7 * 0x10) + (rdi_7 << 3)) = result

return result
