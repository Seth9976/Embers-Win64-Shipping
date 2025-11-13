// 函数: sub_1426d5470
// 地址: 0x1426d5470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* const rbx

if ((*(arg1 + 0x44) & 1) == 0)
    rbx = *arg1
else
    void* rax_2 = sub_1426a2600(arg3, arg1[7].b)
    rbx = rax_2
    void* rax_3
    int64_t rax_4
    void* rdx_1
    
    if (rax_2 != 0)
        rax_3 = sub_142737760()
        rdx_1 = *(rbx + 0x10)
        rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_2 == 0 || rax_4.d s> *(rdx_1 + 0x38)
            || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        rbx = nullptr
    
    *arg1 = rbx

uint64_t result

if (rbx == 0)
    result = 0xffffffff
else
    void* const var_f8 = rbx
    int128_t var_e8
    __builtin_memset(&var_e8, 0, 0x34)
    int64_t var_f0_1 = arg2
    int32_t var_b4_1 = 0x80
    int32_t var_b0_1 = 0xffffffff
    int32_t var_ac_1 = 0
    int64_t var_a0_1 = 0
    int32_t var_98_1 = 0
    
    if (arg1[2].d s> 0)
        void* r14_1 = arg1[1]
        void* i = sx.q(arg1[2].d) * 0x38 + r14_1
        
        if (r14_1 != i)
            char* r14_2 = r14_1 + 0x30
            int128_t zmm6
            int128_t var_48_1 = zmm6
            
            do
                char rdi_1 = *r14_2
                uint32_t rcx_2 = zx.d(r14_2[-0x28])
                int32_t r8_3
                
                if (rdi_1 == 0xff)
                    if (rcx_2 == 0)
                        zmm6 = *(r14_2 - 0x24)
                        int64_t rbx_15 = *(r14_2 - 0x30)
                        int32_t var_110
                        sub_140b33170(&var_e8:8, &var_110)
                        int64_t* var_108
                        var_108[1].d = zmm6.d
                        *var_108 = rbx_15
                        *(var_108 + 0xc) = 0xffffffff
                        r8_3 = (rbx_15 u>> 0x20).d + sub_140b5ead0(rbx_15.d)
                        void var_16c
                        sub_140e0e750(&var_e8:8, &var_16c, r8_3, var_108, var_110, nullptr)
                    else if (rcx_2 == 1)
                        int32_t rax_26 = int.d(fconvert.t(*(r14_2 - 0x24)))
                        int64_t rbx_13 = *(r14_2 - 0x30)
                        int32_t var_120
                        sub_140b33170(&var_e8:8, &var_120)
                        int64_t* var_118
                        var_118[1].d = rax_26
                        *var_118 = rbx_13
                        *(var_118 + 0xc) = 0xffffffff
                        r8_3 = (rbx_13 u>> 0x20).d + sub_140b5ead0(rbx_13.d)
                        void var_170
                        sub_140e0e750(&var_e8:8, &var_170, r8_3, var_118, var_120, nullptr)
                    else if (rcx_2 == 2)
                        float temp2_1 = *(r14_2 - 0x24)
                        0f - temp2_1
                        int64_t rbx_11 = *(r14_2 - 0x30)
                        int64_t rax_6
                        rax_6.b = 0f < temp2_1
                        
                        zmm6 = rax_6.b == 0 ? 0xbf800000 : 0x3f800000
                        
                        int32_t var_130
                        sub_140b33170(&var_e8:8, &var_130)
                        int64_t* var_128
                        var_128[1].d = zmm6.d
                        *var_128 = rbx_11
                        *(var_128 + 0xc) = 0xffffffff
                        r8_3 = (rbx_11 u>> 0x20).d + sub_140b5ead0(rbx_11.d)
                        void var_174
                        sub_140e0e750(&var_e8:8, &var_174, r8_3, var_128, var_130, nullptr)
                else if (rcx_2 == 0)
                    int128_t zmm0_2 = sub_1426a2500(arg3, rdi_1)
                    int64_t rbx_9 = *(r14_2 - 0x30)
                    int32_t var_140
                    sub_140b33170(&var_e8:8, &var_140)
                    int64_t* var_138
                    var_138[1].d = zmm0_2.d
                    *var_138 = rbx_9
                    *(var_138 + 0xc) = 0xffffffff
                    r8_3 = (rbx_9 u>> 0x20).d + sub_140b5ead0(rbx_9.d)
                    void var_178
                    sub_140e0e750(&var_e8:8, &var_178, r8_3, var_138, var_140, nullptr)
                else if (rcx_2 == 1)
                    void* rcx_10 = *(arg3 + 0xc0)
                    int32_t rax_22
                    
                    if (rcx_10 == 0)
                        rax_22 = 0
                    else
                        void* rax_16 = sub_1426b21a0(rcx_10, rdi_1)
                        
                        if (rax_16 == 0)
                            rax_22 = 0
                        else
                            void* rbx_5 = *(rax_16 + 8)
                            
                            if (rbx_5 == 0)
                                rax_22 = 0
                            else if (*(rbx_5 + 0x10) != sub_14272e220())
                                rax_22 = 0
                            else
                                void* r9_1 = *(rax_16 + 8)
                                uint8_t rdx_8 = *(r9_1 + 0x2b) u>> 1 & 1
                                
                                if (rdx_8 != 0)
                                    r9_1 = *(*(arg3 + 0xe8) + (zx.q(rdi_1) << 3))
                                
                                uint32_t rax_19
                                
                                if (*(arg3 + 0xd0) != 0)
                                    rax_19.b = zx.d(rdi_1) s< *(arg3 + 0xe0)
                                
                                int64_t r8_5
                                
                                if (*(arg3 + 0xd0) == 0 || rax_19.b == 0)
                                    r8_5 = 0
                                else
                                    r8_5 = zx.q(*(*(arg3 + 0xd8) + (zx.q(rdi_1) << 1)))
                                        + *(arg3 + 0xc8)
                                
                                int32_t* rdx_9 = r8_5 + (zx.q(rdx_8) << 2)
                                
                                if (rdx_9 == 0)
                                    rax_22 = 0
                                else
                                    rax_22 = sub_1405d9360(r9_1, rdx_9)
                    
                    int64_t rbx_7 = *(r14_2 - 0x30)
                    int32_t var_150
                    sub_140b33170(&var_e8:8, &var_150)
                    int64_t* var_148
                    var_148[1].d = rax_22
                    *var_148 = rbx_7
                    *(var_148 + 0xc) = 0xffffffff
                    r8_3 = (rbx_7 u>> 0x20).d + sub_140b5ead0(rbx_7.d)
                    void var_17c
                    sub_140e0e750(&var_e8:8, &var_17c, r8_3, var_148, var_150, nullptr)
                else if (rcx_2 == 2)
                    void* rcx_4 = *(arg3 + 0xc0)
                    char rax_13
                    
                    if (rcx_4 == 0)
                        rax_13 = 0
                    else
                        void* rax_7 = sub_1426b21a0(rcx_4, rdi_1)
                        
                        if (rax_7 == 0)
                            rax_13 = 0
                        else
                            void* rbx_1 = *(rax_7 + 8)
                            
                            if (rbx_1 == 0)
                                rax_13 = 0
                            else if (*(rbx_1 + 0x10) != sub_14272de20())
                                rax_13 = 0
                            else
                                void* r9 = *(rax_7 + 8)
                                uint8_t rdx_3 = *(r9 + 0x2b) u>> 1 & 1
                                
                                if (rdx_3 != 0)
                                    r9 = *(*(arg3 + 0xe8) + (zx.q(rdi_1) << 3))
                                
                                uint32_t rax_10
                                
                                if (*(arg3 + 0xd0) != 0)
                                    rax_10.b = zx.d(rdi_1) s< *(arg3 + 0xe0)
                                
                                int64_t r8_2
                                
                                if (*(arg3 + 0xd0) == 0 || rax_10.b == 0)
                                    r8_2 = 0
                                else
                                    r8_2 = zx.q(*(*(arg3 + 0xd8) + (zx.q(rdi_1) << 1)))
                                        + *(arg3 + 0xc8)
                                
                                char* rdx_4 = r8_2 + (zx.q(rdx_3) << 2)
                                
                                if (rdx_4 == 0)
                                    rax_13 = 0
                                else
                                    rax_13 = sub_1426b3c60(r9, rdx_4)
                    
                    int64_t rbx_3 = *(r14_2 - 0x30)
                    
                    zmm6 = rax_13 == 0 ? 0xbf800000 : 0x3f800000
                    
                    int32_t var_160
                    sub_140b33170(&var_e8:8, &var_160)
                    int64_t* var_158
                    var_158[1].d = zmm6.d
                    *var_158 = rbx_3
                    *(var_158 + 0xc) = 0xffffffff
                    r8_3 = (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d)
                    void var_180
                    sub_140e0e750(&var_e8:8, &var_180, r8_3, var_158, var_160, nullptr)
                r14_2 = &r14_2[0x38]
            while (&r14_2[-0x30] != i)
    
    int32_t result_1 = sub_1426d59d0(&var_f8, zx.d(arg1[8].b), arg4)
    sub_1405ae200(&var_e8:8)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
