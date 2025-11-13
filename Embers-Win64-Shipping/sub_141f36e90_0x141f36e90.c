// 函数: sub_141f36e90
// 地址: 0x141f36e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
arg2[1].d = 0
int64_t* rsi = arg2
void* rdi = arg1

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405947f0(rsi, 0)

uint64_t result = zx.q(*(arg3 + 0xc))
arg3[1].d = 0
int32_t temp0 = result.d

if (temp0 s< 0 && temp0 != 0)
    result = sub_1405947f0(arg3, 0)

if (*(rdi + 0x430) != 0)
    result = sub_141f66020(rdi)
    
    if (result != 0)
        int32_t rcx_3 = *(result + 8)
        
        if (rcx_3 != 0)
            int32_t rcx_4 = rcx_3 - 1
            
            if (arg4 s< 0)
                rcx_4 = 0
            else if (arg4 s< rcx_4)
                rcx_4 = arg4
            
            sub_140597df0(rsi, *(*result + (sx.q(rcx_4) << 3)) + 0x3d0)
            sub_141f41f90(rsi, *(rdi + 0x430) + 0x268)
            void* rax_1 = sub_141f64a80(rdi)
            int16_t* var_70
            int32_t var_64
            
            if (arg5 == 0 && rax_1 != 0)
                int32_t rbx_1 = 0
                int16_t* r15_1 = nullptr
                int32_t i = 0
                int32_t var_68 = 0
                var_70 = nullptr
                var_64 = 0
                
                if (*(rax_1 + 0x48) s> 0)
                    int64_t* rsi_1 = nullptr
                    
                    do
                        int64_t rdx_4 = *(rsi_1 + *(rax_1 + 0x40))
                        
                        if (rdx_4 != 0)
                            int32_t rax_3 = sub_14078ee20(*(rdi + 0x430) + 0x188, rdx_4 + 0x80)
                            
                            if (rax_3 != 0xffffffff)
                                int64_t rdi_1 = sx.q(rbx_1)
                                rbx_1 = (rdi_1 + 1).d
                                
                                if (rbx_1 s> var_64)
                                    sub_140594770(&var_70)
                                    r15_1 = var_70
                                
                                r15_1[rdi_1] = rax_3.w
                                rdi = arg1
                        
                        i += 1
                        rsi_1 = &rsi_1[1]
                    while (i s< *(rax_1 + 0x48))
                    
                    rsi = arg2
                    r12 = 0
                
                sub_141e366b0(r15_1, rbx_1)
                sub_141f41f90(rsi, &var_70)
                
                if (r15_1 != 0)
                    sub_140a74f90(r15_1)
            
            if (sub_141f73db0(rdi) != 0)
                int32_t rax_5 = rsi[1].d
                void* r10_4 = ((sx.q(*(rdi + 0x490)) + 0x58) << 4) + rdi
                
                if (*(r10_4 + 8) s>= rax_5)
                    int32_t rdi_2 = 0
                    int32_t rdx_9 = 0
                    
                    if (rax_5 s> 0)
                        int64_t r9 = 0
                        int64_t r8_1 = 0
                        
                        do
                            int16_t* r11_1 = *rsi
                            uint64_t rbx_2 = zx.q(*(r11_1 + r8_1))
                            
                            if (*(rbx_2 + *r10_4) == 1)
                                rdi_2 += 1
                                *(r11_1 + r9) = rbx_2.w
                                r9 += 2
                            
                            rax_5 = rsi[1].d
                            rdx_9 += 1
                            r8_1 += 2
                        while (rdx_9 s< rax_5)
                    
                    if (rax_5 - rdi_2 s> 0)
                        rsi[1].d = rdi_2
                        sub_1405a50a0(rsi)
                    
                    rdi = arg1
            
            int32_t rcx_17 = *(*(rdi + 0x430) + 0xd0)
            int16_t* var_60
            int32_t var_54
            
            if (rcx_17 s> 0 && rcx_17 == *(rdi + 0x680))
                int32_t rdx_10 = *(rdi + 0x7e8)
                int16_t* rbx_3 = nullptr
                var_60 = nullptr
                var_54 = 0
                
                if (rdx_10 s> 0)
                    sub_140594770(&var_60)
                    rbx_3 = var_60
                
                int32_t i_1 = 0
                
                if (rsi[1].d s> 0)
                    int64_t r9_1 = 0
                    
                    do
                        r9_1 += 2
                        i_1 += 1
                        *(rbx_3 + r9_1 - 2) =
                            *(*(*(rdi + 0x430) + 0xc8) + (zx.q(*(*rsi + r9_1 - 2)) << 3))
                    while (i_1 s< rsi[1].d)
                
                sub_141e366b0(rbx_3, rdx_10)
                sub_141f41f90(rsi, &var_60)
                
                if (rbx_3 != 0)
                    sub_140a74f90(rbx_3)
            
            void* rcx_23 = *(rdi + 0x430)
            int16_t* rbx_4 = nullptr
            __builtin_memset(&var_70, 0, 0x1c)
            int16_t* r13_2 = nullptr
            int32_t r15_2 = 0
            int64_t* var_50
            sub_1423118a0(rcx_23, &var_50)
            int64_t* rdx_14 = var_50
            int64_t* var_90_1 = rdx_14
            int64_t var_88_1 = 0
            int32_t var_48
            void* rcx_24 = &rdx_14[sx.q(var_48)]
            uint64_t rax_16 = (rcx_24 - rdx_14 + 7) u>> 3
            
            if (rdx_14 u> rcx_24)
                rax_16 = 0
            
            if (rax_16 != 0)
                int16_t* rsi_2 = nullptr
                int64_t rax_29
                
                do
                    void* r14_1 = *rdx_14
                    void* rdi_3 = *(rdi + 0x430)
                    int32_t rcx_25
                    rcx_25.b = sub_140b5b8a0(*(r14_1 + 0x30), 0) == 0
                    
                    if ((*(r14_1 + 0x34) != 0 | rcx_25.b) != 0)
                        int64_t rbx_5 = *(r14_1 + 0x30)
                        void* const rcx_29
                        
                        if (*(rdi_3 + 0x220) == *(rdi_3 + 0x24c))
                        label_141f37282:
                            rcx_29 = nullptr
                        else
                            int32_t rax_20 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
                            void* r8_4 = rdi_3 + 0x250
                            void* rcx_27 = *(r8_4 + 8)
                            
                            if (rcx_27 != 0)
                                r8_4 = rcx_27
                            
                            int32_t rax_22 =
                                *(r8_4 + (((sx.q(*(rdi_3 + 0x260)) - 1) & sx.q(rax_20)) << 2))
                            
                            if (rax_22 == 0xffffffff)
                            label_141f37282_1:
                                rcx_29 = nullptr
                            else
                                int64_t r8_5 = *(rdi_3 + 0x218)
                                
                                while (true)
                                    int64_t rdx_18 = sx.q(rax_22) * 5
                                    rcx_29 = r8_5 + (rdx_18 << 2)
                                    
                                    if (*(r8_5 + (rdx_18 << 2)) == rbx_5)
                                        break
                                    
                                    rax_22 = *(rcx_29 + 0xc)
                                    
                                    if (rax_22 == 0xffffffff)
                                        goto label_141f37282_2
                                
                                if (rax_22 == 0xffffffff)
                                label_141f37282_2:
                                    rcx_29 = nullptr
                        
                        void* rax_23 = rcx_29 + 8
                        
                        if (rcx_29 == 0)
                            rax_23 = nullptr
                        
                        if (rax_23 != 0)
                            int32_t rbx_6 = *rax_23
                            
                            if (rbx_6 != 0xffffffff)
                                if (*(r14_1 + 0x5c) == 0)
                                    int16_t* rax_25 = r13_2
                                    void* rdx_22 = &r13_2[sx.q(r15_2)]
                                    
                                    if (r13_2 != rdx_22)
                                        while (*rax_25 != rbx_6.w)
                                            rax_25 = &rax_25[1]
                                            
                                            if (rax_25 == rdx_22)
                                                goto label_141f3733b
                                    
                                    if (r13_2 == rdx_22 || ((rax_25 - r13_2) s>> 1).d == 0xffffffff)
                                    label_141f3733b:
                                        int64_t rdi_5 = sx.q(r15_2)
                                        r15_2 = (rdi_5 + 1).d
                                        
                                        if (r15_2 s> var_54)
                                            sub_140594770(&var_60)
                                            r13_2 = var_60
                                        
                                        r13_2[rdi_5] = rbx_6.w
                                else
                                    int16_t* rcx_30 = rsi_2
                                    void* rdx_19 = &rsi_2[sx.q(r12)]
                                    
                                    if (rsi_2 != rdx_19)
                                        while (*rcx_30 != rbx_6.w)
                                            rcx_30 = &rcx_30[1]
                                            
                                            if (rcx_30 == rdx_19)
                                                goto label_141f372df
                                    
                                    if (rsi_2 == rdx_19 || ((rcx_30 - rsi_2) s>> 1).d == 0xffffffff)
                                    label_141f372df:
                                        int64_t rdi_4 = sx.q(r12)
                                        r12 = (rdi_4 + 1).d
                                        
                                        if (r12 s> var_64)
                                            sub_140594770(&var_70)
                                            rsi_2 = var_70
                                        
                                        rsi_2[rdi_4] = rbx_6.w
                    
                    rdx_14 = &var_90_1[1]
                    rdi = arg1
                    rax_29 = var_88_1 + 1
                    var_90_1 = rdx_14
                    var_88_1 = rax_29
                while (rax_29 != rax_16)
                rdx_14 = var_50
                rsi = arg2
                rbx_4 = var_70
            
            if (rdx_14 != 0)
                sub_140a74f90(rdx_14)
            
            sub_141e366b0(rbx_4, r12)
            sub_141f41f90(rsi, &var_70)
            
            if (rbx_4 != 0)
                sub_140a74f90(rbx_4)
            
            void* rax_30 = *(rdi + 0x3e8)
            
            if (rax_30 != 0 && *(rax_30 + 0x1b0) != 0)
                sub_141f41f90(rsi, rax_30 + 0x1a8)
            
            operator new[]<4>(rsi, *(rdi + 0x430) + 0x188)
            int32_t rdx_31 = rsi[1].d + r15_2
            arg3[1].d = 0
            
            if (rdx_31 s> *(arg3 + 0xc))
                sub_1405947f0(arg3, rdx_31)
            
            if (arg3 != rsi)
                int32_t rbx_7 = rsi[1].d
                int64_t rdi_6 = *rsi
                int32_t r8_7 = *(arg3 + 0xc)
                arg3[1].d = rbx_7
                
                if (rbx_7 != 0 || r8_7 != 0)
                    sub_1405a4c70(arg3, rbx_7, r8_7)
                    memcpy(*arg3, rdi_6, rbx_7 * 2)
                else
                    *(arg3 + 0xc) = 0
                
                rdi = arg1
            
            sub_141e366b0(r13_2, r15_2)
            sub_141f41f90(arg3, &var_60)
            result = operator new[]<4>(arg3, *(rdi + 0x430) + 0x188)
            
            if (r13_2 != 0)
                return sub_140a74f90(r13_2)

return result
