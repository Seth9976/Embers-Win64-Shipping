// 函数: sub_14099e0c0
// 地址: 0x14099e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(zx.d(*arg1) - 1)

switch (result.d)
    case 0
        int64_t* rbx_1 = arg2[1]
        int64_t* rsi_1 = *arg2
        int64_t rdi_1 = sx.q(arg2[2].d)
        int64_t r14_1 = sx.q(rbx_1[1].d)
        int64_t rbx_2 = *rbx_1
        void* const rcx_3
        
        if (rsi_1[1].d == *(rsi_1 + 0x34))
        label_14099e180:
            rcx_3 = nullptr
        else
            int32_t rax_4 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
            void* r8_3 = &rsi_1[7]
            void* rcx_1 = *(r8_3 + 8)
            
            if (rcx_1 != 0)
                r8_3 = rcx_1
            
            int32_t rax_6 = *(r8_3 + (((sx.q(rsi_1[9].d) - 1) & sx.q(rax_4)) << 2))
            
            if (rax_6 == 0xffffffff)
            label_14099e180_1:
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
                        goto label_14099e180_2
                
                if (rax_6 == 0xffffffff)
                label_14099e180_2:
                    rcx_3 = nullptr
        
        result = *(*(*(rcx_3 + 8) + 0x18) + r14_1 * 0x10)
        *(result + rdi_1 * 0x10) = *(arg1 + 0x10)
    case 1
        int64_t* rbx_3 = arg2[1]
        int64_t* rsi_2 = *arg2
        int64_t rdi_2 = sx.q(arg2[2].d)
        int64_t r14_2 = sx.q(rbx_3[1].d)
        int64_t rbx_4 = *rbx_3
        void* const rcx_9
        
        if (rsi_2[1].d == *(rsi_2 + 0x34))
        label_14099e220:
            rcx_9 = nullptr
        else
            int32_t rax_11 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
            void* r8_5 = &rsi_2[7]
            void* rcx_7 = *(r8_5 + 8)
            
            if (rcx_7 != 0)
                r8_5 = rcx_7
            
            int32_t rax_13 = *(r8_5 + (((sx.q(rsi_2[9].d) - 1) & sx.q(rax_11)) << 2))
            
            if (rax_13 == 0xffffffff)
            label_14099e220_1:
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
                        goto label_14099e220_2
                
                if (rax_13 == 0xffffffff)
                label_14099e220_2:
                    rcx_9 = nullptr
        
        int64_t r9_1 = rdi_2 * 3
        int64_t r8_7 = *(*(*(rcx_9 + 8) + 0x18) + r14_2 * 0x10)
        *(r8_7 + (r9_1 << 2)) = *(arg1 + 0x20)
        result = zx.q(*(arg1 + 0x28))
        *(r8_7 + (r9_1 << 2) + 8) = result.d
    case 2
        int64_t* rbx_5 = arg2[1]
        int64_t* rsi_3 = *arg2
        int64_t rdi_3 = sx.q(arg2[2].d)
        int64_t r14_3 = sx.q(rbx_5[1].d)
        int64_t rbx_6 = *rbx_5
        void* const rcx_14
        
        if (rsi_3[1].d == *(rsi_3 + 0x34))
        label_14099e2c1:
            rcx_14 = nullptr
        else
            int32_t rax_17 = sub_140b5ead0(rbx_6.d) + rbx_6:4.d
            void* r8_8 = &rsi_3[7]
            void* rcx_12 = *(r8_8 + 8)
            
            if (rcx_12 != 0)
                r8_8 = rcx_12
            
            int32_t rax_19 = *(r8_8 + (((sx.q(rsi_3[9].d) - 1) & sx.q(rax_17)) << 2))
            
            if (rax_19 == 0xffffffff)
            label_14099e2c1_1:
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
                        goto label_14099e2c1_2
                
                if (rax_19 == 0xffffffff)
                label_14099e2c1_2:
                    rcx_14 = nullptr
        
        result = *(*(rcx_14 + 8) + 0x18)
        *(*(result + r14_3 * 0x10) + (rdi_3 << 3)) = *(arg1 + 0x2c)
    case 3
        int64_t* rbx_7 = arg2[1]
        int64_t* rsi_4 = *arg2
        int64_t rdi_4 = sx.q(arg2[2].d)
        int64_t r14_4 = sx.q(rbx_7[1].d)
        int64_t rbx_8 = *rbx_7
        void* const rcx_21
        
        if (rsi_4[1].d == *(rsi_4 + 0x34))
        label_14099e360:
            rcx_21 = nullptr
        else
            int32_t rax_23 = sub_140b5ead0(rbx_8.d) + rbx_8:4.d
            void* r8_10 = &rsi_4[7]
            void* rcx_19 = *(r8_10 + 8)
            
            if (rcx_19 != 0)
                r8_10 = rcx_19
            
            int32_t rax_25 = *(r8_10 + (((sx.q(rsi_4[9].d) - 1) & sx.q(rax_23)) << 2))
            
            if (rax_25 == 0xffffffff)
            label_14099e360_1:
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
                        goto label_14099e360_2
                
                if (rax_25 == 0xffffffff)
                label_14099e360_2:
                    rcx_21 = nullptr
        
        result = zx.q(*(arg1 + 0x34))
        *(*(*(*(rcx_21 + 8) + 0x18) + r14_4 * 0x10) + (rdi_4 << 2)) = result.d
    case 4
        int64_t* rbx_9 = arg2[1]
        int64_t* rsi_5 = *arg2
        int64_t rdi_5 = sx.q(arg2[2].d)
        int64_t r14_5 = sx.q(rbx_9[1].d)
        int64_t rbx_10 = *rbx_9
        void* const rcx_28
        
        if (rsi_5[1].d == *(rsi_5 + 0x34))
        label_14099e3f0:
            rcx_28 = nullptr
        else
            int32_t rax_30 = sub_140b5ead0(rbx_10.d) + rbx_10:4.d
            void* r8_12 = &rsi_5[7]
            void* rcx_26 = *(r8_12 + 8)
            
            if (rcx_26 != 0)
                r8_12 = rcx_26
            
            int32_t rax_32 = *(r8_12 + (((sx.q(rsi_5[9].d) - 1) & sx.q(rax_30)) << 2))
            
            if (rax_32 == 0xffffffff)
            label_14099e3f0_1:
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
                        goto label_14099e3f0_2
                
                if (rax_32 == 0xffffffff)
                label_14099e3f0_2:
                    rcx_28 = nullptr
        
        result = zx.q(*(arg1 + 0x38))
        *(*(*(*(rcx_28 + 8) + 0x18) + r14_5 * 0x10) + (rdi_5 << 2)) = result.d
    case 5
        int64_t* r8_14 = arg2[1]
        return sub_14099ce80(*arg2, arg2[2].d, *r8_14, r8_14[1].d, &arg1[0x3c])
    case 6
        int64_t* rbx_11 = arg2[1]
        int64_t* rsi_6 = *arg2
        int64_t rdi_6 = sx.q(arg2[2].d)
        int64_t r14_6 = sx.q(rbx_11[1].d)
        int64_t rbx_12 = *rbx_11
        void* const rcx_36
        
        if (rsi_6[1].d == *(rsi_6 + 0x34))
        label_14099e4b0:
            rcx_36 = nullptr
        else
            int32_t rax_38 = sub_140b5ead0(rbx_12.d) + rbx_12:4.d
            void* r8_16 = &rsi_6[7]
            void* rcx_34 = *(r8_16 + 8)
            
            if (rcx_34 != 0)
                r8_16 = rcx_34
            
            int32_t rax_40 = *(r8_16 + (((sx.q(rsi_6[9].d) - 1) & sx.q(rax_38)) << 2))
            
            if (rax_40 == 0xffffffff)
            label_14099e4b0_1:
                rcx_36 = nullptr
            else
                int64_t r8_17 = *rsi_6
                
                while (true)
                    int64_t rdx_28 = sx.q(rax_40) * 3
                    rcx_36 = r8_17 + (rdx_28 << 3)
                    
                    if (*(r8_17 + (rdx_28 << 3)) == rbx_12)
                        break
                    
                    rax_40 = *(rcx_36 + 0x10)
                    
                    if (rax_40 == 0xffffffff)
                        goto label_14099e4b0_2
                
                if (rax_40 == 0xffffffff)
                label_14099e4b0_2:
                    rcx_36 = nullptr
        
        result = *(arg1 + 0x40)
        *(*(*(*(rcx_36 + 8) + 0x18) + r14_6 * 0x10) + (rdi_6 << 3)) = result

return result
