// 函数: sub_142390a00
// 地址: 0x142390a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
bool cond:0 = data_143de5480 == 0
int64_t* r13 = arg5
void* r14 = arg2
int64_t rbx = data_143f5a310
int64_t* var_178 = r13
char var_188 = arg4
int64_t* var_158 = arg3
int64_t rcx
int64_t r12

if (cond:0)
    r12 = 0
    rcx = 0
else
    arg4 = var_188
    r12 = 0
    rcx.b = GetCurrentThreadId() != data_143de5470

uint64_t result = zx.q(arg1[8].b)
*(rbx + (rcx << 2))
void* var_180
int512_t zmm3

if (result.d u<= 5)
    switch (result)
        case 0
            int32_t rsi_1 = *(*arg1 + 0x130)
            
            if (rsi_1 s> arg1[0xe].d - *(arg1 + 0x9c))
                sub_140f5bc50(&arg1[0xd], rsi_1)
                int32_t r8_1
                
                if (rsi_1 u< 4)
                    r8_1 = 1
                else
                    uint32_t rsi_2 = rsi_1 u>> 1
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rsi_2 + 8)
                    int32_t rcx_4
                    
                    if (rsi_2 == 0xfffffff8)
                        rcx_4 = 0x20
                    else
                        rcx_4 = 0x1f - temp0_2
                    
                    int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
                    uint64_t rflags_2
                    char temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rsi_2 + 7)
                    char r8
                    
                    if (rcx_6 == 0)
                        r8 = 0x20
                    else
                        r8 = 0x1f - temp0_3
                    
                    r8_1 = 1 << ((not.d(rcx_6)).b & (0x20 - r8))
                
                int32_t rax_8 = arg1[0x16].d
                
                if (rax_8 == 0 || rax_8 s< r8_1)
                    arg1[0x16].d = r8_1
                    sub_141845760(&arg1[0xd])
            
            uint64_t rcx_11 = *arg1
            int32_t i = 0
            var_180.d = 0
            
            if (*(rcx_11 + 0x130) s> 0)
                do
                    sub_141818040(&arg1[0xd], (sx.q(i) << 4) + *(*arg1 + 0x128), &var_180)
                    rcx_11 = *arg1
                    i = var_180.d + 1
                    var_180.d = i
                while (i s< *(rcx_11 + 0x130))
            
            *r13 -= sx.q(*(rcx_11 + 0x130))
            arg1[8].b = 1
            void var_150
            int64_t* rax_12 = sub_1423a4f80(&var_150, 3, *arg1, &arg1[0xd])
            *arg3 = *rax_12
            arg3[1].b = rax_12[1].b
            *(arg3 + 0xc) = *(rax_12 + 0xc)
            arg3[2] = rax_12[2]
            
            if (&arg3[3] != &rax_12[3])
                int64_t rsi_4 = sx.q(rax_12[4].d)
                int64_t r14_1 = rax_12[3]
                int32_t r8_4 = *(arg3 + 0x24)
                arg3[4].d = rsi_4.d
                
                if (rsi_4.d != 0 || r8_4 != 0)
                    sub_1405a4be0(&arg3[3], rsi_4.d, r8_4)
                    memcpy(arg3[3], r14_1, (rsi_4 << 4).d)
                else
                    *(arg3 + 0x24) = 0
            
            arg3[5].d = rax_12[5].d
            *(arg3 + 0x2c) = *(rax_12 + 0x2c)
            result = sub_1423a6360(&var_150)
        case 1
            uint64_t rcx_20 = *arg1
            int64_t* rsi_5 = *(rcx_20 + 0x98)
            int64_t* var_160_1 = rsi_5
            var_180 = &rsi_5[sx.q(*(rcx_20 + 0xa0))]
            int32_t rdx_8 = 1
            
            if (rsi_5 != var_180)
                void* rcx_21 = var_180
                
                do
                    void* rsi_6 = *rsi_5
                    
                    if (rsi_6 != 0)
                        char rax_17 = sub_141dce740(rsi_6)
                        void** var_60_1 = nullptr
                        int32_t var_54_1 = 0x18
                        int32_t var_58_1 = 0
                        void* rax_18 = sub_142577430()
                        void* const r14_2
                        
                        if (rax_18 == 0)
                            r14_2 = nullptr
                        else
                            void* rax_19 = sub_142459c10()
                            
                            if (rax_19 == 0)
                                r14_2 = nullptr
                            else
                                int64_t rax_20 = sx.q(*(rax_19 + 0x38))
                                
                                if (rax_20.d s> *(rax_18 + 0x38))
                                    r14_2 = nullptr
                                else
                                    r14_2 = rax_18
                                    
                                    if (*(*(rax_18 + 0x30) + (rax_20 << 3)) != rax_19 + 0x30)
                                        r14_2 = nullptr
                        
                        void var_120
                        void* r8_7 = &var_120
                        
                        if (r14_2 != sub_142459c10())
                            sub_1419f71f0(rsi_6, rax_18, r8_7)
                        else
                            sub_1419f6fe0(rsi_6, rax_18, r8_7)
                        
                        void** rcx_28 = var_60_1
                        void** r15_1 = &var_120
                        int64_t rdx_11 = sx.q(var_58_1)
                        
                        if (rcx_28 != 0)
                            r15_1 = rcx_28
                        
                        uint64_t r13_2 = rdx_11 << 3 u>> 3
                        
                        if (r15_1 u> &r15_1[rdx_11])
                            r13_2 = 0
                        
                        if (r13_2 != 0)
                            char rax_24 = rax_17
                            
                            do
                                void* rbx_3 = *r15_1
                                
                                if (rax_24 == 0 || *(rbx_3 + 0x14f) != 0)
                                    *(rbx_3 + 0x208) &= 0xf7
                                    
                                    if ((*(rbx_3 + 0x208) & 0x20) == 0)
                                        zmm3.o = zx.o(0)
                                        sub_142384930(arg2, rbx_3)
                                        rax_24 = rax_17
                                else
                                    *(rbx_3 + 0x208) |= 8
                                    
                                    if ((*(rbx_3 + 0x208) & 0x20) != 0)
                                        sub_142395410(arg2, rbx_3, 0)
                                        *(rbx_3 + 0x208) &= 0xdf
                                    
                                    int64_t r14_3 = sx.q(arg1[0xa].d)
                                    int32_t rax_25 = (r14_3 + 1).d
                                    arg1[0xa].d = rax_25
                                    
                                    if (rax_25 s> *(arg1 + 0x54))
                                        sub_1405a4d70(&arg1[9])
                                    
                                    *(arg1[9] + (r14_3 << 3)) = rbx_3
                                    rax_24 = rax_17
                                
                                r15_1 = &r15_1[1]
                                r12 += 1
                            while (r12 != r13_2)
                            
                            rdx_11 = zx.q(var_58_1)
                            rcx_28 = var_60_1
                        
                        r13 = var_178
                        int32_t rax_27 = 1
                        
                        if (rdx_11.d s>= 1)
                            rax_27 = rdx_11.d
                        
                        *r13 -= sx.q(rax_27)
                        
                        if (rcx_28 != 0)
                            sub_140a74f90(rcx_28)
                        
                        rcx_21 = var_180
                    
                    r12 = 0
                    rsi_5 = &var_160_1[1]
                    var_160_1 = rsi_5
                while (rsi_5 != rcx_21)
                
                rcx_20 = *arg1
                rdx_8 = 1
            
            int32_t rax_29 = *(rcx_20 + 0xa0)
            
            if (rax_29 s>= 1)
                rdx_8 = rax_29
            
            *r13 -= sx.q(rdx_8)
            result = *arg1
            *(result + 0x1f4) |= 0x10
            arg1[8].b = 2
        case 2
            char r12_1 = *(*arg1 + 0x1f4)
            
            while (true)
                if (arg4 != 0 || *r13 s> 0)
                    int32_t rax_32 = arg1[0xa].d
                    
                    if (rax_32 != 0)
                        int64_t rdx_15 = sx.q(rax_32)
                        int64_t* rbx_4 = *(arg1[9] + (rdx_15 << 3) - 8)
                        arg1[0xa].d = (rdx_15 - 1).d
                        char rax_35
                        
                        if (arg1[6] == 0)
                            zmm3.o = sub_14239a450(&arg1[4])
                            rax_35, zmm3 = sub_1423a9220(arg1[3], rbx_4, arg3)
                        
                        if (arg1[6] != 0 || rax_35 == 0)
                            if ((r12_1 & 0x20) != 0)
                            label_142390e9f:
                                rbx_4[0x41].b &= 0xf7
                                
                                if ((rbx_4[0x41].b & 0x20) == 0)
                                    zmm3.o = zx.o(0)
                                    sub_142384930(r14, rbx_4)
                            else
                                int64_t r14_4 = sx.q(arg1[0xc].d)
                                int32_t rax_36 = (r14_4 + 1).d
                                arg1[0xc].d = rax_36
                                
                                if (rax_36 s> *(arg1 + 0x64))
                                    sub_1405a4d70(&arg1[0xb])
                                
                                arg4 = var_188
                                *(arg1[0xb] + (r14_4 << 3)) = rbx_4
                                r14 = arg2
                                *r13 -= 1
                                continue
                        else if (rax_35 != 2)
                            goto label_142390e9f
                        
                        *r13 -= 1
                        arg4 = var_188
                        continue
                else
                    result = zx.q(arg1[0xa].d)
                    
                    if (result.d != 0)
                        break
                
                result = 0
                arg1[0xa].d = 0
                
                if (*(arg1 + 0x54) != 0)
                    result = sub_1405c5570(&arg1[9], 0)
                
                arg1[8].b = 3
                break
        case 3
            if (arg1[6] == 0)
                sub_14239a450(&arg1[4])
                result = arg1[3]
                
                if (*(result + 0x130) s> 0)
                    void* rbx_5 = arg1[5]
                    int64_t* rcx_35 = *(rbx_5 + 0x10)
                    *(rbx_5 + 0x10) = result
                    *(result + 8) += 1
                    
                    if (rcx_35 != 0)
                        rcx_35[1].d -= 1
                        
                        if (rcx_35[1].d == 1)
                            result = (**rcx_35)(rcx_35, 1)
                    
                    *(rbx_5 + 0x18) = 1
            
            arg1[8].b = 4
        case 4
            sub_14239a450(&arg1[4])
            result = sub_1423ac150(arg1[3])
            *r13 -= sx.q(result.d)
            arg1[8].b = 5
        case 5
            result = *arg1
            
            if ((*(result + 0x1f4) & 0x20) != 0)
                var_178 = nullptr
                int32_t var_170_1 = 0
                sub_14239a450(&arg1[4])
                int32_t rax_39
                int512_t zmm3_1
                rax_39, zmm3_1 = sub_1423ab9a0(arg1[3], &var_178)
                int64_t* rbx_6 = var_178
                int64_t rsi_8 = 0
                *r13 -= sx.q(rax_39)
                int64_t rdx_20 = *r13
                void* rcx_42 = &rbx_6[sx.q(var_170_1)]
                uint64_t r12_5 = (rcx_42 - rbx_6 + 7) u>> 3
                
                if (rbx_6 u> rcx_42)
                    r12_5 = 0
                
                if (r12_5 != 0)
                    do
                        void* rdx_21 = *rbx_6
                        *(rdx_21 + 0x208) &= 0xf7
                        
                        if ((*(rdx_21 + 0x208) & 0x20) == 0)
                            zmm3_1.o = zx.o(0)
                            sub_142384930(r14, rdx_21)
                        
                        rbx_6 = &rbx_6[1]
                        rsi_8 += 1
                    while (rsi_8 != r12_5)
                    
                    rdx_20 = *r13
                
                *r13 = rdx_20 - sx.q(arg1[0xc].d)
                
                while (arg1[0xc].d != 0)
                    int64_t rdx_23 = sx.q(arg1[0xc].d)
                    int64_t* rbx_7 = *(arg1[0xb] + (rdx_23 << 3) - 8)
                    arg1[0xc].d = (rdx_23 - 1).d
                    char rax_44
                    
                    if (arg1[6] == 0)
                        zmm3_1.o = sub_14239a450(&arg1[4])
                        rax_44, zmm3_1 = sub_1423a9220(arg1[3], rbx_7, arg3)
                    
                    if (arg1[6] != 0 || rax_44 != 2)
                        rbx_7[0x41].b &= 0xf7
                        
                        if ((rbx_7[0x41].b & 0x20) == 0)
                            zmm3_1.o = zx.o(0)
                            sub_142384930(r14, rbx_7)
                
                arg1[0xc].d = 0
                
                if (*(arg1 + 0x64) != 0)
                    sub_1405c5570(&arg1[0xb], 0)
                
                result = sub_14238b380(&arg1[0xd], 0)
                int64_t* rcx_49 = var_178
                arg1[8].b = 6
                
                if (rcx_49 != 0)
                    result = sub_140a74f90(rcx_49)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
