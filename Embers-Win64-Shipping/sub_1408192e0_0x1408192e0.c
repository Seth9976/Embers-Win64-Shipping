// 函数: sub_1408192e0
// 地址: 0x1408192e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
int64_t* r12 = arg2
int64_t result_2 = sx.q(arg1[3].d)
int64_t rdi = sx.q(arg2[3].d)
TEB* gsbase

if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

int32_t rax_2 = result_2.d

if (rdi.d s>= result_2.d)
    rax_2 = rdi.d

float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(rax_2)).d) f* data_143cda910
int32_t rax_3 = result_2.d

if (rdi.d s<= result_2.d)
    rax_3 = rdi.d

uint64_t result = zx.q((result_2 + rdi).d)
int64_t var_a8
void* var_a0
int16_t arg_22

if ((int.d(zmm0_1 + zmm0_1 + 0.5f) s>> 1) * rax_3 s< result.d)
    int64_t* rcx_18 = arg1
    result = zx.q(rcx_18[3].d)
    int64_t var_80
    void* var_78
    
    if (result.d s> r12[3].d)
        void* r15_5 = r12[2]
        void* rdi_16 = (sx.q(r12[3].d) << 5) + r15_5
        void* var_c8_3 = rdi_16
        
        if (r15_5 != rdi_16)
            void** r15_6 = r15_5 + 8
            int32_t r14_4 = -1
            
            do
                int64_t rax_52 = r15_6[-1]
                void* rsi_8 = *r15_6
                int16_t r13_3 = r15_6[1].w
                var_a8 = rax_52
                var_80 = rax_52
                int64_t rax_53 = *rcx_18
                var_a0 = rsi_8
                int16_t var_98_3 = r13_3
                int32_t var_96_3 = 0xffffffff
                int64_t var_90_3 = 0
                int64_t var_88_3 = 0
                var_78 = rsi_8
                int16_t var_70_2 = r13_3
                int32_t var_6e_2 = 0xffffffff
                int64_t var_68_2 = 0
                int64_t var_60_2 = 0
                int32_t* rax_54 = (*(rax_53 + 0x30))()
                
                if (rax_54 != 0)
                    r14_4 = *rax_54
                
                int32_t r12_3 = r15_6[2].d
                
                if (r12_3 != 0xffffffff && r14_4 != 0xffffffff)
                    **arg3 = 1
                    
                    if (sub_140834780(&var_78) == 0)
                        void* rdi_19
                        
                        if (r13_3 == 3)
                            rdi_19 = data_143ce3880
                        else if (rsi_8 == 0)
                            rdi_19 = nullptr
                        else
                            void* rax_59 = sub_140be01c0()
                            void* rdx_17 = *(rsi_8 + 0x10)
                            int64_t rax_60 = sx.q(*(rax_59 + 0x38))
                            
                            if (rax_60.d s> *(rdx_17 + 0x38))
                                rdi_19 = nullptr
                            else
                                rdi_19 = rsi_8
                                
                                if (*(*(rdx_17 + 0x30) + (rax_60 << 3)) != rax_59 + 0x30)
                                    rdi_19 = nullptr
                        
                        void* rax_62 = sub_140d41340()
                        int64_t rax_63
                        
                        if (rax_62 != 0)
                            rax_63 = sx.q(*(rax_62 + 0x38))
                        
                        if (rax_62 == 0 || rax_63.d s> *(rdi_19 + 0x38)
                                || *(*(rdi_19 + 0x30) + (rax_63 << 3)) != rax_62 + 0x30)
                            int16_t rdi_21
                            
                            if (rsi_8 == 0 || r13_3 == 1)
                                rdi_21 = 0
                            else
                                void* rax_68 = sub_140761a70(&var_78)
                                int16_t rcx_40 = *(rax_68 + 0x5c)
                                rdi_21 = (*(rax_68 + 0x58) - 1 + rcx_40) & not.w(rcx_40 - 1)
                            
                            int16_t var_be_3 = r14_4.w
                            int64_t* rsi_11 = arg3[1]
                            int64_t r14_5 = sx.q(rsi_11[1].d)
                            int32_t rax_70 = (r14_5 + 1).d
                            rsi_11[1].d = rax_70
                            
                            if (rax_70 s> *(rsi_11 + 0xc))
                                sub_14083a900(rsi_11)
                            
                            int64_t rcx_42 = *rsi_11
                            int64_t rdx_21 = r14_5 * 3
                            *(rcx_42 + (rdx_21 << 1)) = r12_3.w.d
                            *(rcx_42 + (rdx_21 << 1) + 4) = rdi_21
                        else
                            arg_22 = r14_4.w
                            void* rdi_20 = arg3[1]
                            int64_t rsi_10 = sx.q(*(rdi_20 + 0x28))
                            int32_t rax_66 = (rsi_10 + 1).d
                            *(rdi_20 + 0x28) = rax_66
                            
                            if (rax_66 s> *(rdi_20 + 0x2c))
                                sub_1405a4cf0(rdi_20 + 0x20)
                            
                            *(*(rdi_20 + 0x20) + (rsi_10 << 2)) = r12_3.w.d
                    else
                        void* rdi_18 = arg3[1]
                        int64_t* arg_10
                        arg_10.w = r12_3.w
                        arg_10:2.w = r14_4.w
                        int64_t rsi_9 = sx.q(*(rdi_18 + 0x18))
                        int32_t rax_57 = (rsi_9 + 1).d
                        *(rdi_18 + 0x18) = rax_57
                        
                        if (rax_57 s> *(rdi_18 + 0x1c))
                            sub_1405a4cf0(rdi_18 + 0x10)
                        
                        *(*(rdi_18 + 0x10) + (rsi_9 << 2)) = arg_10.d
                    
                    rdi_16 = var_c8_3
                
                if (var_90_3 != 0)
                    sub_140a74f90(var_90_3)
                
                rcx_18 = arg1
                r15_6 = &r15_6[4]
                r14_4 = -1
                result = &r15_6[-1]
            while (result != rdi_16)
    else
        void* r15_3 = rcx_18[2]
        void* rdi_8 = (sx.q(result.d) << 5) + r15_3
        void* var_c8_2 = rdi_8
        
        if (r15_3 != rdi_8)
            void** r15_4 = r15_3 + 8
            int32_t r14_2 = -1
            
            do
                int64_t rax_32 = r15_4[-1]
                void* rsi_4 = *r15_4
                int16_t r13_2 = r15_4[1].w
                var_80 = rax_32
                var_a8 = rax_32
                int64_t rax_33 = *r12
                var_78 = rsi_4
                int16_t var_70_1 = r13_2
                int32_t var_6e_1 = 0xffffffff
                int64_t var_68_1 = 0
                int64_t var_60_1 = 0
                var_a0 = rsi_4
                int16_t var_98_2 = r13_2
                int32_t var_96_2 = 0xffffffff
                int64_t var_90_2 = 0
                int64_t var_88_2 = 0
                int32_t* rax_34 = (*(rax_33 + 0x30))(r12, &var_80)
                
                if (rax_34 != 0)
                    r14_2 = *rax_34
                
                int32_t r12_2 = r15_4[2].d
                
                if (r14_2 != 0xffffffff && r12_2 != 0xffffffff)
                    **arg3 = 1
                    
                    if (sub_140834780(&var_a0) == 0)
                        void* rdi_11
                        
                        if (r13_2 == 3)
                            rdi_11 = data_143ce3880
                        else if (rsi_4 == 0)
                            rdi_11 = nullptr
                        else
                            void* rax_39 = sub_140be01c0()
                            void* rdx_11 = *(rsi_4 + 0x10)
                            int64_t rax_40 = sx.q(*(rax_39 + 0x38))
                            
                            if (rax_40.d s> *(rdx_11 + 0x38))
                                rdi_11 = nullptr
                            else
                                rdi_11 = rsi_4
                                
                                if (*(*(rdx_11 + 0x30) + (rax_40 << 3)) != rax_39 + 0x30)
                                    rdi_11 = nullptr
                        
                        void* rax_42 = sub_140d41340()
                        int64_t rax_43
                        
                        if (rax_42 != 0)
                            rax_43 = sx.q(*(rax_42 + 0x38))
                        
                        if (rax_42 == 0 || rax_43.d s> *(rdi_11 + 0x38)
                                || *(*(rdi_11 + 0x30) + (rax_43 << 3)) != rax_42 + 0x30)
                            int16_t rdi_13
                            
                            if (rsi_4 == 0 || r13_2 == 1)
                                rdi_13 = 0
                            else
                                void* rax_48 = sub_140761a70(&var_a0)
                                int16_t rcx_28 = *(rax_48 + 0x5c)
                                rdi_13 = (*(rax_48 + 0x58) - 1 + rcx_28) & not.w(rcx_28 - 1)
                            
                            int16_t var_be_2 = r12_2.w
                            int64_t* rsi_7 = arg3[1]
                            int64_t r14_3 = sx.q(rsi_7[1].d)
                            int32_t rax_50 = (r14_3 + 1).d
                            rsi_7[1].d = rax_50
                            
                            if (rax_50 s> *(rsi_7 + 0xc))
                                sub_14083a900(rsi_7)
                            
                            int64_t rcx_30 = *rsi_7
                            int64_t rdx_15 = r14_3 * 3
                            *(rcx_30 + (rdx_15 << 1)) = r14_2.w.d
                            *(rcx_30 + (rdx_15 << 1) + 4) = rdi_13
                        else
                            arg_22 = r12_2.w
                            void* rdi_12 = arg3[1]
                            int64_t rsi_6 = sx.q(*(rdi_12 + 0x28))
                            int32_t rax_46 = (rsi_6 + 1).d
                            *(rdi_12 + 0x28) = rax_46
                            
                            if (rax_46 s> *(rdi_12 + 0x2c))
                                sub_1405a4cf0(rdi_12 + 0x20)
                            
                            *(*(rdi_12 + 0x20) + (rsi_6 << 2)) = r14_2.w.d
                    else
                        void* rdi_10 = arg3[1]
                        int64_t* arg_8
                        arg_8.w = r14_2.w
                        arg_8:2.w = r12_2.w
                        int64_t rsi_5 = sx.q(*(rdi_10 + 0x18))
                        int32_t rax_37 = (rsi_5 + 1).d
                        *(rdi_10 + 0x18) = rax_37
                        
                        if (rax_37 s> *(rdi_10 + 0x1c))
                            sub_1405a4cf0(rdi_10 + 0x10)
                        
                        *(*(rdi_10 + 0x10) + (rsi_5 << 2)) = arg_8.d
                    
                    rdi_8 = var_c8_2
                
                if (var_68_1 != 0)
                    sub_140a74f90(var_68_1)
                
                r12 = arg2
                r15_4 = &r15_4[4]
                r14_2 = -1
                result = &r15_4[-1]
            while (result != rdi_8)
else
    int64_t var_b8_1 = 0
    int64_t rcx_3 = 0
    
    if (rdi.d s> 0)
        result = result_2
        int64_t var_c8_1 = 0
        uint64_t result_1 = result
        int64_t rdx = 0
        int32_t* r12_1 = nullptr
        int32_t* r14_1 = nullptr
        
        while (rdx s< result)
            int64_t r11_1 = r15[2]
            int64_t r10_1 = arg2[2]
            int32_t rax_5 = *(r14_1 + r10_1)
            uint32_t rax_6 = rax_5 - *(r12_1 + r11_1)
            
            if (rax_5 == *(r12_1 + r11_1))
                rax_6 = *(r14_1 + r10_1 + 4) - *(r12_1 + r11_1 + 4)
            
            bool cond:1_1 = rax_6 s>= 0
            
            if (rax_6 == 0)
                void* rdx_1 = *(r12_1 + r11_1 + 8)
                int64_t rdx_2
                uint32_t r8_1
                uint32_t r9_2
                
                if (rdx_1 != 0)
                    rdx_2 = *(rdx_1 + 0x18)
                    r8_1 = (rdx_2 u>> 0x20).d
                    r9_2 = (rdx_2 u>> 0x20).d
                else
                    rdx_2 = 0
                    r8_1 = 0
                    r9_2 = 0
                
                void* rax_8 = *(r14_1 + r10_1 + 8)
                int64_t rax_9
                uint32_t rcx_4
                
                if (rax_8 != 0)
                    rax_9 = *(rax_8 + 0x18)
                    r8_1 = r9_2
                    rcx_4 = (rax_9 u>> 0x20).d
                else
                    rax_9 = 0
                    rcx_4 = 0
                
                rax_6 = rax_9.d - rdx_2.d
                rdx = var_c8_1
                
                if (rax_9.d == rdx_2.d)
                    rax_6 = rcx_4 - r8_1
                
                rcx_3 = var_b8_1
                cond:1_1 = rax_6 s>= 0
            
            if (not(cond:1_1))
                rcx_3 += 1
                r14_1 = &r14_1[8]
                var_b8_1 = rcx_3
            else if (rax_6 s<= 0)
                int32_t rdi_1 = *(r14_1 + r10_1 + 0x18)
                void* rsi = *(r14_1 + r10_1 + 8)
                int16_t r13_1 = *(r14_1 + r10_1 + 0x10)
                int32_t r15_1 = *(r12_1 + r11_1 + 0x18)
                var_a8 = *(r14_1 + r10_1)
                var_a0 = rsi
                int16_t var_98_1 = r13_1
                int32_t var_96_1 = 0xffffffff
                int64_t var_90_1 = 0
                int64_t var_88_1 = 0
                int16_t var_ac_1 = rdi_1.w
                
                if (rdi_1 != 0xffffffff && r15_1 != 0xffffffff)
                    **arg3 = 1
                    
                    if (sub_140834780(&var_a0) == 0)
                        void* const rdi_3
                        
                        if (r13_1 == 3)
                            rdi_3 = data_143ce3880
                        else if (rsi == 0)
                            rdi_3 = nullptr
                        else
                            void* rax_17 = sub_140be01c0()
                            void* rdx_4 = *(rsi + 0x10)
                            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                            
                            if (rax_18.d s> *(rdx_4 + 0x38))
                                rdi_3 = nullptr
                            else
                                rdi_3 = rsi
                                
                                if (*(*(rdx_4 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                                    rdi_3 = nullptr
                        
                        void* rax_20 = sub_140d41340()
                        int64_t rax_21
                        
                        if (rax_20 != 0)
                            rax_21 = sx.q(*(rax_20 + 0x38))
                        
                        if (rax_20 == 0 || rax_21.d s> *(rdi_3 + 0x38)
                                || *(*(rdi_3 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                            int16_t rdi_5
                            
                            if (rsi == 0 || r13_1 == 1)
                                rdi_5 = 0
                            else
                                void* rax_27 = sub_140761a70(&var_a0)
                                int16_t rcx_15 = *(rax_27 + 0x5c)
                                rdi_5 = (*(rax_27 + 0x58) - 1 + rcx_15) & not.w(rcx_15 - 1)
                            
                            int16_t var_be_1 = r15_1.w
                            int64_t* rsi_3 = arg3[1]
                            int64_t r15_2 = sx.q(rsi_3[1].d)
                            int32_t rax_30 = (r15_2 + 1).d
                            rsi_3[1].d = rax_30
                            
                            if (rax_30 s> *(rsi_3 + 0xc))
                                sub_14083a900(rsi_3)
                            
                            int64_t rcx_17 = *rsi_3
                            int64_t rdx_8 = r15_2 * 3
                            *(rcx_17 + (rdx_8 << 1)) = var_ac_1.d
                            *(rcx_17 + (rdx_8 << 1) + 4) = rdi_5
                        else
                            int16_t var_ae_1 = r15_1.w
                            void* rdi_4 = arg3[1]
                            int64_t rsi_2 = sx.q(*(rdi_4 + 0x28))
                            int32_t rax_25 = (rsi_2 + 1).d
                            *(rdi_4 + 0x28) = rax_25
                            
                            if (rax_25 s> *(rdi_4 + 0x2c))
                                sub_1405a4cf0(rdi_4 + 0x20)
                            
                            *(*(rdi_4 + 0x20) + (rsi_2 << 2)) = var_ac_1.d
                    else
                        arg_22 = r15_1.w
                        void* rdi_2 = arg3[1]
                        int64_t rsi_1 = sx.q(*(rdi_2 + 0x18))
                        int32_t rax_15 = (rsi_1 + 1).d
                        *(rdi_2 + 0x18) = rax_15
                        
                        if (rax_15 s> *(rdi_2 + 0x1c))
                            sub_1405a4cf0(rdi_2 + 0x10)
                        
                        *(*(rdi_2 + 0x10) + (rsi_1 << 2)) = rdi_1.w.d
                    
                    rcx_3 = var_b8_1
                    rdx = var_c8_1
                
                r15 = arg1
                rdx += 1
                rcx_3 += 1
                var_c8_1 = rdx
                r14_1 = &r14_1[8]
                r12_1 = &r12_1[8]
                var_b8_1 = rcx_3
            else
                rdx += 1
                var_c8_1 = rdx
                r12_1 = &r12_1[8]
            
            result = result_1
            
            if (rcx_3 s>= rdi)
                break
return result
