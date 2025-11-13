// 函数: sub_1426ab290
// 地址: 0x1426ab290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t result = *(arg1 + 0xc0)

if (result != 0)
    int64_t* result_1
    
    if (arg2 == 0xff)
        result_1 = nullptr
    else
        char rcx = *(result + 0x4c)
        
        if (arg2 u< rcx)
            void* rcx_3 = *(result + 0x30)
            
            if (rcx_3 == 0)
                result_1 = nullptr
            else
                result = sub_1426b21a0(rcx_3, arg2)
                result_1 = result
        else
            int64_t rdx = *(result + 0x38)
            result = (zx.q(arg2) - zx.q(rcx)) * 3
            result_1 = rdx + (result << 3)
    
    if (*(arg1 + 0xd0) != 0)
        result.b = zx.d(arg2) s< *(arg1 + 0xe0)
        
        if (result.b != 0)
            result = *(arg1 + 0xd8)
            uint64_t rbp_1 = zx.q(arg2)
            uint64_t rbx_1 = zx.q(*(result + (rbp_1 << 1)))
            int32_t* rbx_2 = rbx_1 + *(arg1 + 0xc8)
            
            if (rbx_1 != neg.q(*(arg1 + 0xc8)))
                int64_t* rcx_4 = result_1[1]
                void* r8_1
                
                if ((*(rcx_4 + 0x2b) & 2) == 0)
                    r8_1 = rbx_2
                else
                    int64_t rax_3 = sx.q(*rbx_2)
                    
                    if (rax_3.d s< 0 || rax_3.d s>= *(arg1 + 0xf0))
                        rcx_4.b = 0
                    else
                        rcx_4.b = 1
                    
                    if (rcx_4.b == 0)
                        rcx_4 = nullptr
                        r8_1 = &rbx_2[1]
                    else
                        r8_1 = &rbx_2[1]
                        rcx_4 = *(*(arg1 + 0xe8) + (rax_3 << 3))
                
                result = (*(*rcx_4 + 0x2c0))(rcx_4, arg1, r8_1)
                
                if (result.b == 0)
                    int64_t* rcx_6 = result_1[1]
                    void* r8_2
                    
                    if ((*(rcx_6 + 0x2b) & 2) == 0)
                        r8_2 = rbx_2
                    else
                        int64_t rax_5 = sx.q(*rbx_2)
                        
                        if (rax_5.d s< 0 || rax_5.d s>= *(arg1 + 0xf0))
                            rcx_6.b = 0
                        else
                            rcx_6.b = 1
                        
                        if (rcx_6.b == 0)
                            rcx_6 = nullptr
                            r8_2 = &rbx_2[1]
                        else
                            r8_2 = &rbx_2[1]
                            rcx_6 = *(*(arg1 + 0xe8) + (rax_5 << 3))
                    
                    (*(*rcx_6 + 0x2b8))(rcx_6, arg1, r8_2)
                    sub_1426b7ab0(arg1, arg2)
                    result = *(arg1 + 0xc0)
                    
                    if ((*(result + 0x48) & 1) != 0)
                        result = sub_1426b6360(arg1, arg2)
                        
                        if (result.b != 0)
                            void* r13_1 = result_1[1]
                            char r15_1 = *(r13_1 + 0x2b)
                            
                            if ((r15_1 & 2) != 0)
                                r13_1 = *(*(arg1 + 0xe8) + (rbp_1 << 3))
                            
                            uint64_t r12_1 = (zx.q(r15_1) & 2) * 2
                            void* rax_10 = *(arg1 + 0xa8)
                            void* const rbx_3
                            
                            if (rax_10 != 0)
                            label_1426ab480:
                                rbx_3 = *(rax_10 + 0x138)
                                
                                if (rbx_3 == 0)
                                    rbx_3 = nullptr
                                else
                                    void* rax_11 = sub_14272b250()
                                    void* rdx_6 = *(rbx_3 + 0x10)
                                    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                                    
                                    if (rax_12.d s> *(rdx_6 + 0x38)
                                            || *(*(rdx_6 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                                        rbx_3 = nullptr
                            else
                                rax_10 = sub_141ee69e0(arg1)
                                
                                if (rax_10 != 0)
                                    goto label_1426ab480
                                
                                rbx_3 = nullptr
                            
                            int32_t var_118
                            sub_1426a6560(&var_118, rbx_3 + 0xd8, *(arg1 + 0xc0))
                        label_1426ab4c9:
                            uint64_t r9_1 = zx.q(var_118)
                            void* var_50
                            void* r10_1 = var_50
                            
                            while (true)
                                void var_110
                                int32_t var_48
                                void* rdx_8
                                
                                if (r9_1.d s< var_48)
                                    result = sx.q(r9_1.d)
                                    rdx_8 = &var_110
                                    
                                    if (r10_1 != 0)
                                        rdx_8 = r10_1
                                
                                if (r9_1.d s>= var_48
                                        || *(rdx_8 + result * 0x18 + 0x10) == 0xffffffff)
                                    result.b = 0
                                else
                                    result.b = 1
                                
                                if (result.b == 0)
                                    if (r10_1 != 0)
                                        result = sub_140a74f90(r10_1)
                                    
                                    break
                                
                                void* r8_5 = &var_110
                                
                                if (r10_1 != 0)
                                    r8_5 = r10_1
                                
                                int64_t rcx_14 = sx.q(r9_1.d) * 3
                                void* rax_17 = sub_140d3c6e0(**(r8_5 + (rcx_14 << 3))
                                    + ((sx.q(*(r8_5 + (rcx_14 << 3) + 0x10)) * 3 + 1) << 3))
                                
                                if (rax_17 != 0 && sub_1426bf730(arg1, rax_17) != 0)
                                    void* rcx_19 = *(rax_17 + 0xc0)
                                    char rdi
                                    
                                    if (rcx_19 == 0)
                                        rdi = 0xff
                                    else
                                        rdi = sub_1426b2260(rcx_19, result_1)
                                    
                                    uint32_t rax_20 = zx.d(rdi)
                                    
                                    if (rax_20 != 0xff)
                                        int64_t* r10_2
                                        
                                        if ((r15_1 & 2) == 0)
                                            r10_2 = result_1[1]
                                        else
                                            r10_2 = *(*(rax_17 + 0xe8) + (zx.q(rax_20) << 3))
                                        
                                        uint32_t rax_22
                                        
                                        if (*(rax_17 + 0xd0) != 0)
                                            rax_22.b = zx.d(rdi) s< *(rax_17 + 0xe0)
                                        
                                        void* const rdx_13
                                        
                                        if (*(rax_17 + 0xd0) == 0 || rax_22.b == 0)
                                            rdx_13 = nullptr
                                        else
                                            rdx_13 = zx.q(*(*(rax_17 + 0xd8) + (zx.q(rdi) << 1)))
                                                + *(rax_17 + 0xc8)
                                        
                                        (*(*r10_2 + 0x290))(r10_2, rax_17, rdx_13 + r12_1, r13_1, 
                                            r12_1 + rbx_2)
                                        sub_1426b7ab0(rax_17, rdi)
                                
                                void* rdx_16 = &var_110
                                
                                if (var_50 != 0)
                                    rdx_16 = var_50
                                
                                int64_t rcx_24 = sx.q(var_118) * 3
                                int32_t i = *(rdx_16 + (rcx_24 << 3) + 0x14)
                                *(rdx_16 + (rcx_24 << 3) + 0x10) = i
                                void* rbx_5 = rdx_16 + (rcx_24 << 3)
                                
                                if (i != 0xffffffff)
                                    int32_t i_1 = i
                                    
                                    do
                                        int64_t* r8_7 = *rbx_5
                                        int64_t rax_28 = *(rbx_5 + 8)
                                        *(rbx_5 + 0x14) = *(*r8_7 + sx.q(i) * 0x18 + 0x10)
                                        int64_t var_128 = rax_28
                                        int64_t var_120 = *(*r8_7 + sx.q(i_1) * 0x18)
                                        
                                        if (sub_14077a170(&var_120, &var_128) != 0)
                                            break
                                        
                                        i = *(rbx_5 + 0x14)
                                        i_1 = i
                                        *(rbx_5 + 0x10) = i
                                    while (i != 0xffffffff)
                                
                                r10_1 = var_50
                                void* rdx_19 = &var_110
                                r9_1 = sx.q(var_118)
                                
                                if (r10_1 != 0)
                                    rdx_19 = r10_1
                                
                                if (*(rdx_19 + r9_1 * 0x18 + 0x10) == 0xffffffff)
                                    if (r9_1.d s< var_48 - 1)
                                        var_118 = r9_1.d + 1
                                        sub_1426c1000(&var_118)
                                        goto label_1426ab4c9

__security_check_cookie(rax_1 ^ &var_158)
return result
