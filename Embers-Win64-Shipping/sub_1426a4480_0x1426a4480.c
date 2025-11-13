// 函数: sub_1426a4480
// 地址: 0x1426a4480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t result = *(arg1 + 0xc0)
int64_t* rbp

if (result == 0 || arg2 == 0xff)
    rbp = nullptr
else
    char r8_1 = *(result + 0x4c)
    
    if (arg2 u< r8_1)
        void* rcx_2 = *(result + 0x30)
        
        if (rcx_2 == 0)
            rbp = nullptr
        else
            rbp = sub_1426b21a0(rcx_2, arg2)
    else
        rbp = *(result + 0x38) + (zx.q(arg2) - zx.q(r8_1)) * 0x18

if (rbp == 0)
    result.b = 0
else
    void* rbx_1 = rbp[1]
    
    if (rbx_1 == 0)
        result.b = 0
    else if (*(rbx_1 + 0x10) != sub_14272e150())
        result.b = 0
    else
        uint32_t rax_4
        
        if (*(arg1 + 0xd0) != 0)
            rax_4.b = zx.d(arg2) s< *(arg1 + 0xe0)
        
        int64_t r8_3
        
        if (*(arg1 + 0xd0) == 0 || rax_4.b == 0)
            r8_3 = 0
        else
            r8_3 = zx.q(*(*(arg1 + 0xd8) + (zx.q(arg2) << 1))) + *(arg1 + 0xc8)
        
        uint64_t r14_1 = zx.q(*(rbp[1] + 0x2b) u>> 1) & 1
        result = r8_3 + (r14_1 << 2)
        
        if (result == 0)
            result.b = 0
        else
            bool cond:0_1 = *result f== arg3.d
            *result = arg3.d
            
            if (not(cond:0_1))
                sub_1426b7ab0(arg1, arg2)
                
                if ((*(*(arg1 + 0xc0) + 0x48) & 1) != 0)
                    result = sub_1426b6360(arg1, arg2)
                    
                    if (result.b != 0)
                        void* rax_6 = *(arg1 + 0xa8)
                        void* const rbx_3
                        
                        if (rax_6 != 0)
                        label_1426a45e2:
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
                                goto label_1426a45e2
                            
                            rbx_3 = nullptr
                        
                        int32_t var_108
                        sub_1426a6560(&var_108, rbx_3 + 0xd8, *(arg1 + 0xc0))
                    label_1426a462b:
                        uint64_t r8_6 = zx.q(var_108)
                        void* var_40
                        void* r9_1 = var_40
                        
                        while (true)
                            void var_100
                            int32_t var_38
                            void* rdx_7
                            
                            if (r8_6.d s< var_38)
                                result = sx.q(r8_6.d)
                                rdx_7 = &var_100
                                
                                if (r9_1 != 0)
                                    rdx_7 = r9_1
                            
                            if (r8_6.d s>= var_38 || *(rdx_7 + result * 0x18 + 0x10) == 0xffffffff)
                                result.b = 0
                            else
                                result.b = 1
                            
                            if (result.b == 0)
                                if (r9_1 != 0)
                                    sub_140a74f90(r9_1)
                                
                                break
                            
                            void* rdx_8 = &var_100
                            
                            if (r9_1 != 0)
                                rdx_8 = r9_1
                            
                            int64_t rax_11 = sx.q(r8_6.d) * 3
                            void* rax_14 = sub_140d3c6e0(**(rdx_8 + (rax_11 << 3))
                                + ((sx.q(*(rdx_8 + (rax_11 << 3) + 0x10)) * 3 + 1) << 3))
                            
                            if (rax_14 != 0 && sub_1426bf730(arg1, rax_14) != 0)
                                void* rcx_15 = *(rax_14 + 0xc0)
                                char rdx_11
                                
                                if (rcx_15 == 0)
                                    rdx_11 = 0xff
                                else
                                    rdx_11 = sub_1426b2260(rcx_15, rbp)
                                
                                if (rdx_11 != 0xff)
                                    uint32_t rax_17
                                    
                                    if (*(rax_14 + 0xd0) != 0)
                                        rax_17.b = zx.d(rdx_11) s< *(rax_14 + 0xe0)
                                    
                                    int64_t r8_8
                                    
                                    if (*(rax_14 + 0xd0) == 0 || rax_17.b == 0)
                                        r8_8 = 0
                                    else
                                        r8_8 = zx.q(*(*(rax_14 + 0xd8) + (zx.q(rdx_11) << 1)))
                                            + *(rax_14 + 0xc8)
                                    
                                    *(r8_8 + (r14_1 << 2)) = arg3.d
                                    sub_1426b7ab0(rax_14, rdx_11)
                            
                            void* rbx_5 = &var_100
                            
                            if (var_40 != 0)
                                rbx_5 = var_40
                            
                            int64_t rdi_1 = sx.q(var_108) * 3
                            int32_t i = *(rbx_5 + (rdi_1 << 3) + 0x14)
                            *(rbx_5 + (rdi_1 << 3) + 0x10) = i
                            
                            if (i != 0xffffffff)
                                int32_t i_1 = i
                                
                                do
                                    int64_t* rdx_13 = *(rbx_5 + (rdi_1 << 3))
                                    int64_t rax_23 = *(rbx_5 + (rdi_1 << 3) + 8)
                                    *(rbx_5 + (rdi_1 << 3) + 0x14) =
                                        *(*rdx_13 + sx.q(i) * 0x18 + 0x10)
                                    int64_t var_118 = rax_23
                                    int64_t var_110 = *(*rdx_13 + sx.q(i_1) * 0x18)
                                    
                                    if (sub_14077a170(&var_110, &var_118) != 0)
                                        break
                                    
                                    i = *(rbx_5 + (rdi_1 << 3) + 0x14)
                                    i_1 = i
                                    *(rbx_5 + (rdi_1 << 3) + 0x10) = i
                                while (i != 0xffffffff)
                            
                            r9_1 = var_40
                            void* rdx_15 = &var_100
                            r8_6 = sx.q(var_108)
                            
                            if (r9_1 != 0)
                                rdx_15 = r9_1
                            
                            if (*(rdx_15 + r8_6 * 0x18 + 0x10) == 0xffffffff)
                                if (r8_6.d s< var_38 - 1)
                                    var_108 = r8_6.d + 1
                                    sub_1426c1000(&var_108)
                                    goto label_1426a462b
            
            result.b = 1

__security_check_cookie(rax_1 ^ &var_138)
return result
