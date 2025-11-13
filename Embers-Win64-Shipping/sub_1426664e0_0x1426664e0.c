// 函数: sub_1426664e0
// 地址: 0x1426664e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142656eb0(*arg1, arg2)

if (rax == 0 || (*(rax + 0x90) == 0 && *(rax + 0xa0) == 0 && *(rax + 0xb0) == 0))
    rax.b = 0
    return rax

int32_t* r14 = *(rax + 0x88)
void* r12_2 = &r14[sx.q(*(rax + 0x90)) * 0x14]

if (r14 != r12_2)
    int32_t* r15_1 = &r14[3]
    
    do
        void* rax_2 = sub_140d3c6e0(r15_1)
        void* const rsi_1 = rax_2
        
        if (rax_2 == 0)
            rsi_1 = nullptr
        else
            void* rax_3 = sub_1425492f0()
            
            if (rax_3 == 0)
                rsi_1 = nullptr
            else
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rsi_1 + 0x38) || *(*(rsi_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rsi_1 = nullptr
        
        void* rax_9
        
        if (arg3 == 0)
            rax_9 = nullptr
        else
            void* rax_6 = sub_14269ce80()
            
            if (rax_6 == 0)
                rax_9 = nullptr
            else
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s> *(arg3 + 0x38) || *(*(arg3 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rax_9 = nullptr
                else
                    rax_9 = arg3
        
        if (rsi_1 == rax_9)
        label_142666663:
            void* rdx_5
            
            if (arg4 == 0)
                rdx_5 = nullptr
            else
                void* rax_19 = sub_14269ce80()
                
                if (rax_19 == 0)
                    rdx_5 = nullptr
                else
                    int64_t rax_20 = sx.q(*(rax_19 + 0x38))
                    
                    if (rax_20.d s> *(arg4 + 0x38)
                            || *(*(arg4 + 0x30) + (rax_20 << 3)) != rax_19 + 0x30)
                        rdx_5 = nullptr
                    else
                        rdx_5 = arg4
            
            sub_141dd7400(r14, rdx_5)
        else if (arg5 != 0)
            void* rbp_1
            
            if (arg3 == 0)
                rbp_1 = nullptr
            else
                void* rax_10 = sub_14269ce80()
                
                if (rax_10 == 0)
                    rbp_1 = nullptr
                else
                    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                    
                    if (rax_11.d s> *(arg3 + 0x38)
                            || *(*(arg3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                        rbp_1 = nullptr
                    else
                        rbp_1 = arg3
            
            void* rax_13 = sub_140d3c6e0(r15_1)
            void* const rsi_2 = rax_13
            
            if (rax_13 == 0)
                rsi_2 = nullptr
            else
                void* rax_14 = sub_1425492f0()
                
                if (rax_14 == 0)
                    rsi_2 = nullptr
                else
                    int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                    
                    if (rax_15.d s> *(rsi_2 + 0x38)
                            || *(*(rsi_2 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
                        rsi_2 = nullptr
            
            if (rbp_1 != 0)
                int64_t rax_17 = sx.q(*(rbp_1 + 0x38))
                
                if (rax_17.d s<= *(rsi_2 + 0x38)
                        && *(*(rsi_2 + 0x30) + (rax_17 << 3)) == rbp_1 + 0x30)
                    goto label_142666663
        
        r14 = &r14[0x14]
        r15_1 = &r15_1[0x14]
    while (r14 != r12_2)

void* r13_1 = *(rax + 0x98)
void* rax_25 = sx.q(*(rax + 0xa0)) * 0x70 + r13_1
void* arg_8 = rax_25

if (r13_1 != rax_25)
    void* r15_2 = r13_1 + 0x20
    
    do
        void* i = *(r15_2 - 0x18)
        
        for (void* rbp_3 = i + sx.q(*(r15_2 - 0x10)) * 0x48; i != rbp_3; i += 0x48)
            void* rsi_3
            
            if (arg3 == 0)
                rsi_3 = nullptr
            else
                void* rax_27 = sub_14269ce80()
                
                if (rax_27 == 0)
                    rsi_3 = nullptr
                else
                    int64_t rax_28 = sx.q(*(rax_27 + 0x38))
                    
                    if (rax_28.d s> *(arg3 + 0x38)
                            || *(*(arg3 + 0x30) + (rax_28 << 3)) != rax_27 + 0x30)
                        rsi_3 = nullptr
                    else
                        rsi_3 = arg3
            
            if (sub_141dc5740(i) == rsi_3)
            label_14266679d:
                void* rdx_9
                
                if (arg4 == 0)
                    rdx_9 = nullptr
                else
                    void* rax_36 = sub_14269ce80()
                    
                    if (rax_36 == 0)
                        rdx_9 = nullptr
                    else
                        int64_t rax_37 = sx.q(*(rax_36 + 0x38))
                        
                        if (rax_37.d s> *(arg4 + 0x38)
                                || *(*(arg4 + 0x30) + (rax_37 << 3)) != rax_36 + 0x30)
                            rdx_9 = nullptr
                        else
                            rdx_9 = arg4
                
                sub_141dd7500(i, rdx_9)
            else if (arg5 != 0)
                void* rsi_4
                
                if (arg3 == 0)
                    rsi_4 = nullptr
                else
                    void* rax_31 = sub_14269ce80()
                    
                    if (rax_31 == 0)
                        rsi_4 = nullptr
                    else
                        int64_t rax_32 = sx.q(*(rax_31 + 0x38))
                        
                        if (rax_32.d s> *(arg3 + 0x38)
                                || *(*(arg3 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30)
                            rsi_4 = nullptr
                        else
                            rsi_4 = arg3
                
                void* rax_34 = sub_141dc5740(i)
                
                if (rsi_4 != 0)
                    int64_t rcx_15 = sx.q(*(rsi_4 + 0x38))
                    
                    if (rcx_15.d s<= *(rax_34 + 0x38)
                            && *(*(rax_34 + 0x30) + (rcx_15 << 3)) == rsi_4 + 0x30)
                        goto label_14266679d
        
        void* i_1 = *(r15_2 - 8)
        
        for (void* r14_3 = sx.q(*r15_2) * 0x60 + i_1; i_1 != r14_3; i_1 += 0x60)
            void* const rsi_6
            
            if (arg3 == 0)
                rsi_6 = nullptr
            else
                void* rax_39 = sub_14269ce80()
                
                if (rax_39 == 0)
                    rsi_6 = nullptr
                else
                    int64_t rax_40 = sx.q(*(rax_39 + 0x38))
                    
                    if (rax_40.d s> *(arg3 + 0x38)
                            || *(*(arg3 + 0x30) + (rax_40 << 3)) != rax_39 + 0x30)
                        rsi_6 = nullptr
                    else
                        rsi_6 = arg3
            
            if (sub_141dc5740(i_1) == rsi_6)
            label_14266689d:
                void* rdx_13
                
                if (arg4 == 0)
                    rdx_13 = nullptr
                else
                    void* rax_45 = sub_14269ce80()
                    
                    if (rax_45 == 0)
                        rdx_13 = nullptr
                    else
                        int64_t rax_46 = sx.q(*(rax_45 + 0x38))
                        
                        if (rax_46.d s> *(arg4 + 0x38)
                                || *(*(arg4 + 0x30) + (rax_46 << 3)) != rax_45 + 0x30)
                            rdx_13 = nullptr
                        else
                            rdx_13 = arg4
                
                sub_141dd7500(i_1, rdx_13)
            else if (arg5 != 0)
                void* rsi_7
                
                if (arg3 == 0)
                    rsi_7 = nullptr
                else
                    void* rax_42 = sub_14269ce80()
                    
                    if (rax_42 == 0)
                        rsi_7 = nullptr
                    else
                        int64_t rax_43 = sx.q(*(rax_42 + 0x38))
                        
                        if (rax_43.d s> *(arg3 + 0x38)
                                || *(*(arg3 + 0x30) + (rax_43 << 3)) != rax_42 + 0x30)
                            rsi_7 = nullptr
                        else
                            rsi_7 = arg3
                
                rax_25 = sub_141dc5740(i_1)
                
                if (rsi_7 != 0)
                    int64_t rcx_22 = sx.q(*(rsi_7 + 0x38))
                    
                    if (rcx_22.d s<= *(rax_25 + 0x38)
                            && *(*(rax_25 + 0x30) + (rcx_22 << 3)) == rsi_7 + 0x30)
                        goto label_14266689d
        
        r13_1 += 0x70
        r15_2 += 0x70
    while (r13_1 != arg_8)

rax_25.b = 1
return rax_25
