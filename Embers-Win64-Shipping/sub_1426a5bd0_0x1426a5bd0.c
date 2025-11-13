// 函数: sub_1426a5bd0
// 地址: 0x1426a5bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t result = *(arg1 + 0xc0)
int64_t* rbp

if (result == 0 || arg2 == 0xff)
    rbp = nullptr
else
    char r8 = *(result + 0x4c)
    
    if (arg2 u< r8)
        void* rcx_2 = *(result + 0x30)
        
        if (rcx_2 == 0)
            rbp = nullptr
        else
            rbp = sub_1426b21a0(rcx_2, arg2)
    else
        rbp = *(result + 0x38) + (zx.q(arg2) - zx.q(r8)) * 0x18

if (rbp == 0)
    result.b = 0
else
    void* rbx_1 = rbp[1]
    
    if (rbx_1 == 0)
        result.b = 0
    else if (*(rbx_1 + 0x10) != sub_14272e8c0())
        result.b = 0
    else
        void* r9_1 = rbp[1]
        uint8_t rcx_3 = *(r9_1 + 0x2b) u>> 1 & 1
        uint32_t rax_3
        
        if (*(arg1 + 0xd0) != 0)
            rax_3.b = zx.d(arg2) s< *(arg1 + 0xe0)
        
        int64_t rdx_3
        uint64_t r8_1
        
        if (*(arg1 + 0xd0) == 0 || rax_3.b == 0)
            rdx_3 = 0
            r8_1 = zx.q(arg2)
        else
            r8_1 = zx.q(arg2)
            rdx_3 = zx.q(*(*(arg1 + 0xd8) + (r8_1 << 1))) + *(arg1 + 0xc8)
        
        uint64_t r14_1 = zx.q(rcx_3) << 2
        
        if (rdx_3 == neg.q(r14_1))
            result.b = 0
        else
            if (rcx_3 != 0)
                r9_1 = *(*(arg1 + 0xe8) + (r8_1 << 3))
            
            if (sub_1426bf3c0(r9_1, rdx_3 + r14_1, arg3).b != 0)
                sub_1426b7ab0(arg1, arg2)
                
                if ((*(*(arg1 + 0xc0) + 0x48) & 1) != 0)
                    result = sub_1426b6360(arg1, arg2)
                    
                    if (result.b != 0)
                        void* rax_6 = *(arg1 + 0xa8)
                        void* const rbx_3
                        
                        if (rax_6 != 0)
                        label_1426a5d44:
                            rbx_3 = *(rax_6 + 0x138)
                            
                            if (rbx_3 == 0)
                                rbx_3 = nullptr
                            else
                                void* rax_7 = sub_14272b250()
                                void* rdx_7 = *(rbx_3 + 0x10)
                                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                                
                                if (rax_8.d s> *(rdx_7 + 0x38)
                                        || *(*(rdx_7 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                                    rbx_3 = nullptr
                        else
                            rax_6 = sub_141ee69e0(arg1)
                            
                            if (rax_6 != 0)
                                goto label_1426a5d44
                            
                            rbx_3 = nullptr
                        
                        int32_t var_108
                        sub_1426a6560(&var_108, rbx_3 + 0xd8, *(arg1 + 0xc0))
                    label_1426a5d8d:
                        uint64_t r9_2 = zx.q(var_108)
                        void* var_40
                        void* r10_1 = var_40
                        
                        while (true)
                            void var_100
                            int32_t var_38
                            void* rdx_9
                            
                            if (r9_2.d s< var_38)
                                result = sx.q(r9_2.d)
                                rdx_9 = &var_100
                                
                                if (r10_1 != 0)
                                    rdx_9 = r10_1
                            
                            if (r9_2.d s>= var_38 || *(rdx_9 + result * 0x18 + 0x10) == 0xffffffff)
                                result.b = 0
                            else
                                result.b = 1
                            
                            if (result.b == 0)
                                if (r10_1 != 0)
                                    sub_140a74f90(r10_1)
                                
                                break
                            
                            void* r8_5 = &var_100
                            
                            if (r10_1 != 0)
                                r8_5 = r10_1
                            
                            int64_t rcx_11 = sx.q(r9_2.d) * 3
                            void* rax_13 = sub_140d3c6e0(**(r8_5 + (rcx_11 << 3))
                                + ((sx.q(*(r8_5 + (rcx_11 << 3) + 0x10)) * 3 + 1) << 3))
                            
                            if (rax_13 != 0 && sub_1426bf730(arg1, rax_13) != 0)
                                void* rcx_16 = *(rax_13 + 0xc0)
                                char rdi
                                
                                if (rcx_16 == 0)
                                    rdi = 0xff
                                else
                                    rdi = sub_1426b2260(rcx_16, rbp)
                                
                                uint32_t rax_16 = zx.d(rdi)
                                
                                if (rax_16 != 0xff)
                                    void* r9_3 = rbp[1]
                                    
                                    if ((*(r9_3 + 0x2b) & 2) != 0)
                                        r9_3 = *(*(rax_13 + 0xe8) + (zx.q(rax_16) << 3))
                                    
                                    uint32_t rax_18
                                    
                                    if (*(rax_13 + 0xd0) != 0)
                                        rax_18.b = zx.d(rdi) s< *(rax_13 + 0xe0)
                                    
                                    int64_t rdx_14
                                    
                                    if (*(rax_13 + 0xd0) == 0 || rax_18.b == 0)
                                        rdx_14 = 0
                                    else
                                        rdx_14 = zx.q(*(*(rax_13 + 0xd8) + (zx.q(rdi) << 1)))
                                            + *(rax_13 + 0xc8)
                                    
                                    sub_1426bf3c0(r9_3, rdx_14 + r14_1, arg3)
                                    sub_1426b7ab0(rax_13, rdi)
                            
                            void* rdx_17 = &var_100
                            
                            if (var_40 != 0)
                                rdx_17 = var_40
                            
                            int64_t rcx_21 = sx.q(var_108) * 3
                            int32_t i = *(rdx_17 + (rcx_21 << 3) + 0x14)
                            *(rdx_17 + (rcx_21 << 3) + 0x10) = i
                            void* rbx_5 = rdx_17 + (rcx_21 << 3)
                            
                            if (i != 0xffffffff)
                                int32_t i_1 = i
                                
                                do
                                    int64_t* r8_7 = *rbx_5
                                    int64_t rax_23 = *(rbx_5 + 8)
                                    *(rbx_5 + 0x14) = *(*r8_7 + sx.q(i) * 0x18 + 0x10)
                                    int64_t var_118 = rax_23
                                    int64_t var_110 = *(*r8_7 + sx.q(i_1) * 0x18)
                                    
                                    if (sub_14077a170(&var_110, &var_118) != 0)
                                        break
                                    
                                    i = *(rbx_5 + 0x14)
                                    i_1 = i
                                    *(rbx_5 + 0x10) = i
                                while (i != 0xffffffff)
                            
                            r10_1 = var_40
                            void* rdx_20 = &var_100
                            r9_2 = sx.q(var_108)
                            
                            if (r10_1 != 0)
                                rdx_20 = r10_1
                            
                            if (*(rdx_20 + r9_2 * 0x18 + 0x10) == 0xffffffff)
                                if (r9_2.d s< var_38 - 1)
                                    var_108 = r9_2.d + 1
                                    sub_1426c1000(&var_108)
                                    goto label_1426a5d8d
            
            result.b = 1

__security_check_cookie(rax_1 ^ &var_138)
return result
