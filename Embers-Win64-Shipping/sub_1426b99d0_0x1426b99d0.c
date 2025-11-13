// 函数: sub_1426b99d0
// 地址: 0x1426b99d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_2 = *(arg1 + 0xa8)
void* rbx_1

if (rax_2 != 0)
label_1426b9a0c:
    rbx_1 = *(rax_2 + 0x138)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_3 = sub_14272b250()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            rbx_1 = nullptr
else
    rax_2 = sub_141ee69e0(arg1)
    
    if (rax_2 != 0)
        goto label_1426b9a0c
    
    rbx_1 = nullptr

sub_1426bba60(rbx_1, *(arg1 + 0xc0), arg1)
int32_t var_108
sub_1426a6560(&var_108, rbx_1 + 0xd8, *(arg1 + 0xc0))

while (true)
    uint64_t r9_1 = zx.q(var_108)
    void* var_40
    void* r10_1 = var_40
    
    while (true)
        void var_100
        int32_t var_38
        int32_t* result
        void* rdx_4
        
        if (r9_1.d s< var_38)
            result = sx.q(r9_1.d)
            rdx_4 = &var_100
            
            if (r10_1 != 0)
                rdx_4 = r10_1
        
        if (r9_1.d s>= var_38 || *(rdx_4 + result * 0x18 + 0x10) == 0xffffffff)
            result.b = 0
        else
            result.b = 1
        
        if (result.b != 0)
            void* r8_4 = &var_100
            
            if (r10_1 != 0)
                r8_4 = r10_1
            
            int64_t rcx_4 = sx.q(r9_1.d) * 3
            void* rax_9 = sub_140d3c6e0(**(r8_4 + (rcx_4 << 3))
                + ((sx.q(*(r8_4 + (rcx_4 << 3) + 0x10)) * 3 + 1) << 3))
            void* rbp_1 = rax_9
            int32_t* result_1
            
            if (rax_9 == 0)
            label_1426b9b58:
                void* rdx_8 = &var_100
                
                if (var_40 != 0)
                    rdx_8 = var_40
                
                int64_t rcx_12 = sx.q(var_108) * 3
                int32_t i = *(rdx_8 + (rcx_12 << 3) + 0x14)
                *(rdx_8 + (rcx_12 << 3) + 0x10) = i
                rbx_1 = rdx_8 + (rcx_12 << 3)
                
                if (i != 0xffffffff)
                    int32_t i_2 = i
                    
                    do
                        int64_t* r8_5 = *rbx_1
                        int32_t* result_2 = *(rbx_1 + 8)
                        *(rbx_1 + 0x14) = *(*r8_5 + sx.q(i) * 0x18 + 0x10)
                        result_1 = result_2
                        int64_t var_110 = *(*r8_5 + sx.q(i_2) * 0x18)
                        
                        if (sub_14077a170(&var_110, &result_1) != 0)
                            break
                        
                        i = *(rbx_1 + 0x14)
                        i_2 = i
                        *(rbx_1 + 0x10) = i
                    while (i != 0xffffffff)
                
                r10_1 = var_40
                void* rdx_11 = &var_100
                r9_1 = sx.q(var_108)
                
                if (r10_1 != 0)
                    rdx_11 = r10_1
                
                if (*(rdx_11 + r9_1 * 0x18 + 0x10) != 0xffffffff)
                    continue
                else
                    if (r9_1.d s>= var_38 - 1)
                        continue
                    
                    var_108 = r9_1.d + 1
                    sub_1426c1000(&var_108)
                    break
            else
                if (rax_9 == arg1)
                    rax_9.b = 0
                else
                    void* rcx_8 = *(arg1 + 0xb0)
                    
                    if (rcx_8 == 0)
                        rax_9.b = 1
                    else
                        int64_t* rcx_9 = *(rcx_8 + 0xc0)
                        
                        if (rcx_9 != 0)
                            rax_9 = (*(*rcx_9 + 0x7b0))(rcx_9, rbp_1)
                        
                        if (rcx_9 != 0 && rax_9.b == 1)
                            rax_9.b = 1
                        else
                            void* rcx_10 = *(rbp_1 + 0xb0)
                            
                            if (rcx_10 == 0)
                                rax_9.b = 1
                            else
                                int64_t* rcx_11 = *(rcx_10 + 0xc0)
                                
                                if (rcx_11 == 0)
                                    rax_9.b = 0
                                else if ((*(*rcx_11 + 0x7b0))(rcx_11, arg1).b != 1)
                                    rax_9.b = 0
                                else
                                    rax_9.b = 1
                
                if (rax_9.b == 0)
                    goto label_1426b9b58
                
                void* rax_19 = *(arg1 + 0xc0)
                int64_t* i_1 = *(rax_19 + 0x38)
                result = &i_1[sx.q(*(rax_19 + 0x40)) * 3]
                result_1 = result
                
                for (; i_1 != result; i_1 = &i_1[3])
                    if ((i_1[2].b & 1) != 0)
                        void* r8_6 = *(rbp_1 + 0xc0)
                        
                        if (r8_6 == 0)
                            rbx_1.b = 0xff
                        else
                            int32_t r9_3 = *(r8_6 + 0x40)
                            int32_t rdx_12 = 0
                            
                            if (r9_3 s<= 0)
                            label_1426b9cb4:
                                void* rcx_22 = *(r8_6 + 0x30)
                                
                                if (rcx_22 == 0)
                                    result = result_1
                                    rbx_1.b = 0xff
                                else
                                    rbx_1 = zx.q(sub_1426b5dd0(rcx_22, i_1, 0))
                                    result = result_1
                            else
                                while (true)
                                    if (*(*(r8_6 + 0x38) + sx.q(rdx_12) * 0x18) == *i_1)
                                        result = result_1
                                        rbx_1.b = *(r8_6 + 0x4c) + rdx_12.b
                                        break
                                    
                                    rdx_12 += 1
                                    
                                    if (rdx_12 s>= r9_3)
                                        goto label_1426b9cb4
                        
                        uint64_t r12_1 = zx.q(rbx_1.b)
                        
                        if (r12_1.d != 0xff)
                            int64_t* r14_1 = i_1[1]
                            int32_t rdx_14 = 0
                            void* r9_4 = *(arg1 + 0xc0)
                            char r13_1 = *(r14_1 + 0x2b)
                            uint32_t r8_7 = *(r9_4 + 0x40)
                            
                            if (r8_7 s<= 0)
                            label_1426b9d44:
                                void* rcx_24 = *(r9_4 + 0x30)
                                
                                if (rcx_24 == 0)
                                    r8_7.b = 0xff
                                else
                                    char rax_24
                                    rax_24, r9_4 = sub_1426b5dd0(rcx_24, i_1, 0)
                                    r8_7 = zx.d(rax_24)
                            else
                                while (true)
                                    if (*(*(r9_4 + 0x38) + sx.q(rdx_14) * 0x18) == *i_1)
                                        r8_7.b = *(r9_4 + 0x4c) + rdx_14.b
                                        break
                                    
                                    rdx_14 += 1
                                    
                                    if (rdx_14 s>= r8_7)
                                        goto label_1426b9d44
                            
                            uint32_t rax_25
                            
                            if (*(arg1 + 0xd0) != 0)
                                rax_25.b = zx.d(r8_7.b) s< *(arg1 + 0xe0)
                            
                            int64_t rdx_17
                            
                            if (*(arg1 + 0xd0) == 0 || rax_25.b == 0)
                                rdx_17 = 0
                            else
                                rdx_17 =
                                    zx.q(*(*(arg1 + 0xd8) + (zx.q(r8_7.b) << 1))) + *(arg1 + 0xc8)
                            
                            uint64_t r9_6 = zx.q((sbb.q(r9_4, r9_4, (r13_1 & 2) != 0)).d) & 4
                            uint32_t rax_27
                            
                            if (*(rbp_1 + 0xd0) != 0)
                                rax_27.b = zx.d(rbx_1.b) s< *(rbp_1 + 0xe0)
                            
                            int64_t rdx_19
                            
                            if (*(rbp_1 + 0xd0) == 0 || rax_27.b == 0)
                                rdx_19 = 0
                            else
                                rdx_19 = zx.q(*(*(rbp_1 + 0xd8) + (zx.q(rbx_1.b) << 1)))
                                    + *(rbp_1 + 0xc8)
                            
                            int64_t* r9_7
                            
                            if ((r13_1 & 2) == 0)
                                r9_7 = r14_1
                            else
                                r14_1 = *(*(arg1 + 0xe8) + (zx.q(r8_7.b) << 3))
                                r9_7 = *(*(rbp_1 + 0xe8) + (r12_1 << 3))
                            
                            (*(*r14_1 + 0x290))(r14_1, arg1, rdx_17 + r9_6, r9_7, rdx_19 + r9_6)
                            result = result_1
                
                r10_1 = var_40
        
        if (r10_1 != 0)
            result = sub_140a74f90(r10_1)
        
        *(arg1 + 0x1a8) |= 2
        __security_check_cookie(rax_1 ^ &var_148)
        return result
