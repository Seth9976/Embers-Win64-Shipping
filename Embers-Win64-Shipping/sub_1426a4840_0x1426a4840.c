// 函数: sub_1426a4840
// 地址: 0x1426a4840
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
    else if (*(rbx_1 + 0x10) != sub_14272e220())
        result.b = 0
    else
        uint32_t rax_4
        
        if (*(arg1 + 0xd0) != 0)
            rax_4.b = zx.d(arg2) s< *(arg1 + 0xe0)
        
        int64_t r8_2
        
        if (*(arg1 + 0xd0) == 0 || rax_4.b == 0)
            r8_2 = 0
        else
            r8_2 = zx.q(*(*(arg1 + 0xd8) + (zx.q(arg2) << 1))) + *(arg1 + 0xc8)
        
        uint64_t r15_1 = (zx.q(*(rbp[1] + 0x2b) u>> 1) & 1) << 2
        int32_t* rcx_4 = r15_1 + r8_2
        
        if (rcx_4 == 0)
            result.b = 0
        else
            result = zx.q(*rcx_4)
            *rcx_4 = arg3
            
            if (result.d != arg3)
                sub_1426b7ab0(arg1, arg2)
                
                if ((*(*(arg1 + 0xc0) + 0x48) & 1) != 0)
                    result = sub_1426b6360(arg1, arg2)
                    
                    if (result.b != 0)
                        void* rax_6 = *(arg1 + 0xa8)
                        void* const rbx_3
                        
                        if (rax_6 != 0)
                        label_1426a49a0:
                            rbx_3 = *(rax_6 + 0x138)
                            
                            if (rbx_3 == 0)
                                rbx_3 = nullptr
                            else
                                void* rax_7 = sub_14272b250()
                                void* rdx_5 = *(rbx_3 + 0x10)
                                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                                
                                if (rax_8.d s> *(rdx_5 + 0x38)
                                        || *(*(rdx_5 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                                    rbx_3 = nullptr
                        else
                            rax_6 = sub_141ee69e0(arg1)
                            
                            if (rax_6 != 0)
                                goto label_1426a49a0
                            
                            rbx_3 = nullptr
                        
                        int32_t var_108
                        sub_1426a6560(&var_108, rbx_3 + 0xd8, *(arg1 + 0xc0))
                    label_1426a49e9:
                        uint64_t r9_1 = zx.q(var_108)
                        void* var_40
                        void* r10_1 = var_40
                        
                        while (true)
                            void var_100
                            int32_t var_38
                            void* rdx_7
                            
                            if (r9_1.d s< var_38)
                                result = sx.q(r9_1.d)
                                rdx_7 = &var_100
                                
                                if (r10_1 != 0)
                                    rdx_7 = r10_1
                            
                            if (r9_1.d s>= var_38 || *(rdx_7 + result * 0x18 + 0x10) == 0xffffffff)
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
                            
                            int64_t rcx_11 = sx.q(r9_1.d) * 3
                            void* rax_13 = sub_140d3c6e0(**(r8_5 + (rcx_11 << 3))
                                + ((sx.q(*(r8_5 + (rcx_11 << 3) + 0x10)) * 3 + 1) << 3))
                            
                            if (rax_13 != 0 && sub_1426bf730(arg1, rax_13) != 0)
                                void* rcx_16 = *(rax_13 + 0xc0)
                                char rdx_10
                                
                                if (rcx_16 == 0)
                                    rdx_10 = 0xff
                                else
                                    rdx_10 = sub_1426b2260(rcx_16, rbp)
                                
                                if (rdx_10 != 0xff)
                                    uint32_t rax_16
                                    
                                    if (*(rax_13 + 0xd0) != 0)
                                        rax_16.b = zx.d(rdx_10) s< *(rax_13 + 0xe0)
                                    
                                    int64_t r8_7
                                    
                                    if (*(rax_13 + 0xd0) == 0 || rax_16.b == 0)
                                        r8_7 = 0
                                    else
                                        r8_7 = zx.q(*(*(rax_13 + 0xd8) + (zx.q(rdx_10) << 1)))
                                            + *(rax_13 + 0xc8)
                                    
                                    *(r15_1 + r8_7) = arg3
                                    sub_1426b7ab0(rax_13, rdx_10)
                            
                            void* rdx_12 = &var_100
                            
                            if (var_40 != 0)
                                rdx_12 = var_40
                            
                            int64_t rcx_19 = sx.q(var_108) * 3
                            int32_t i = *(rdx_12 + (rcx_19 << 3) + 0x14)
                            *(rdx_12 + (rcx_19 << 3) + 0x10) = i
                            void* rbx_5 = rdx_12 + (rcx_19 << 3)
                            
                            if (i != 0xffffffff)
                                int32_t i_1 = i
                                
                                do
                                    int64_t* r8_8 = *rbx_5
                                    int64_t rax_21 = *(rbx_5 + 8)
                                    *(rbx_5 + 0x14) = *(*r8_8 + sx.q(i) * 0x18 + 0x10)
                                    int64_t var_118 = rax_21
                                    int64_t var_110 = *(*r8_8 + sx.q(i_1) * 0x18)
                                    
                                    if (sub_14077a170(&var_110, &var_118) != 0)
                                        break
                                    
                                    i = *(rbx_5 + 0x14)
                                    i_1 = i
                                    *(rbx_5 + 0x10) = i
                                while (i != 0xffffffff)
                            
                            r10_1 = var_40
                            void* rdx_15 = &var_100
                            r9_1 = sx.q(var_108)
                            
                            if (r10_1 != 0)
                                rdx_15 = r10_1
                            
                            if (*(rdx_15 + r9_1 * 0x18 + 0x10) == 0xffffffff)
                                if (r9_1.d s< var_38 - 1)
                                    var_108 = r9_1.d + 1
                                    sub_1426c1000(&var_108)
                                    goto label_1426a49e9
            
            result.b = 1

__security_check_cookie(rax_1 ^ &var_138)
return result
