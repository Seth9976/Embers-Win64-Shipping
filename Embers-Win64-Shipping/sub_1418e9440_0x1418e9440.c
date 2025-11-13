// 函数: sub_1418e9440
// 地址: 0x1418e9440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t rbx = arg4.d
void* rax_3 = (*(*arg2 + 0x18))(arg2)
void* r12 = rax_3
int32_t r14_1 = arg4:4.d - rbx
int32_t rdx_1 = arg3[3] - arg3[1]
int32_t rcx_2 = arg3[2] - *arg3
uint64_t rax_6 = zx.q(r14_1 * rdx_1 * rcx_2)
int32_t var_dc = rax_6.d
uint32_t r15 = (rax_6 << 3).d

if (r15 s> *(arg5 + 0xc))
    sub_1405c5570(arg5, r15)

int64_t result

if (data_143efb330 != 2)
    sub_1418c2d40(*(arg1 + 0x58))
    void*** rax_10 = sub_1418c0d30(*(*(*(arg1 + 0x58) + 0x1a50) + 0x240))
    void*** rax_11 = sub_1418ba820(*(arg1 + 0x58) + 0x3f0, r15, 2, 8)
    void*** var_110 = rax_11
    void*** r13_1 = rax_11
    void* r14_4
    
    if (data_143efb330 != 0)
        r14_4 = &rax_10[8]
        data_143efba20(*r14_4, rax_11[3], 0, zx.q(r15), 0x3c003c00)
    else
        int32_t var_68_1 = *arg3
        int32_t var_64_1 = arg3[1]
        int32_t var_5c_1 = rcx_2
        int32_t var_80_1 = *(r12 + 0x98)
        int32_t var_58_1 = rdx_1
        int32_t var_7c_1 = *(r12 + 0x9c)
        int32_t rcx_13 = *(r12 + 0xe8)
        int64_t r12_1 = *(r12 + 0x88)
        void* rax_17 = *(arg1 + 0x58)
        int64_t var_88 = 0
        int64_t var_74_1 = 0
        int32_t var_78_1 = rcx_13
        int32_t var_6c_1 = 1
        int32_t var_60_1 = rbx
        int32_t var_54_1 = r14_1
        void* r14_2 = *(rax_17 + 0x1a50)
        int32_t var_118 = 0
        int64_t var_c8 = r12_1
        int32_t var_e0
        sub_140865c40(r14_2 + 0x2e8, &var_e0, r12_1)
        int64_t rax_18 = sx.q(var_e0)
        void* const rcx_15
        
        if (rax_18.d == 0xffffffff)
            rcx_15 = nullptr
        else
            rcx_15 = *(r14_2 + 0x2e8) + rax_18 * 0x18
        
        int32_t* r15_1 = rcx_15 + 8
        
        if (rcx_15 == 0)
            r15_1 = nullptr
        
        if (r15_1 == 0)
            r15_1 = sub_1418ca3c0(r14_2 + 0x2e8, &var_c8, &var_118)
            r13_1 = var_110
            r12_1 = *(rax_3 + 0x88)
        
        int32_t rax_21 = *r15_1
        r14_4 = &rax_10[8]
        var_118 = rax_21
        int64_t var_f8
        
        if (rax_21 != 6)
            __builtin_memcpy(&var_f8, 
                "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00", 
                0x14)
            int32_t var_148
            var_148.q = &var_f8
            sub_1418f0770(*r14_4, r12_1, rax_21, 6, var_148)
            r13_1 = var_110
            r12_1 = *(rax_3 + 0x88)
        
        data_143efba10(*r14_4, r12_1, 6, r13_1[3], 1, &var_88)
        int32_t r9_1
        
        if (var_118 != 0)
            r9_1 = *r15_1
        
        if (var_118 == 0 || r9_1 == 6)
            r12 = rax_3
            *r15_1 = 6
        else
            r12 = rax_3
            int64_t rcx_19 = *r14_4
            __builtin_memcpy(&var_f8, 
                "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00", 
                0x14)
            int32_t var_148_1
            var_148_1.q = &var_f8
            sub_1418f0770(rcx_19, *(r12 + 0x88), 6, r9_1, var_148_1)
    
    void*** rax_23 = var_110
    int64_t var_120_1 = 0
    int32_t var_128_1 = 0
    int32_t var_c0
    int32_t* var_130_1 = &var_c0
    int64_t var_a0_1 = rax_23[3]
    uint64_t var_90_1 = zx.q(*(rax_23 + 0x24))
    int32_t var_138_1 = 1
    int64_t var_140_2 = 0
    int32_t var_148_3 = 0
    int64_t var_bc_1 = 0
    int32_t var_b4_1 = 0
    int64_t var_a8_1 = 0
    var_c0 = 0x2c
    int32_t var_b0_1 = 0x1000
    int32_t var_ac_1 = 0x2000
    int64_t var_98_1 = 0
    data_143efba60(*r14_4, 0x1000, 0x4000, 0, var_148_3, var_140_2, var_138_1, var_130_1, 
        var_128_1, var_120_1)
    void* r14_6 = arg1
    sub_1418c86c0(*(*(*(r14_6 + 0x58) + 0x1a50) + 0x240), 0, 0)
    sub_1418c2e90(*(r14_6 + 0x58))
    void* rcx_25 = var_110[2]
    sub_1418c2300(*(rcx_25 + 0x28), zx.q(*(rcx_25 + 0x1c)), zx.q(*(rcx_25 + 0x18)))
    sub_1418edbe0(arg5, var_dc, 1)
    int32_t rax_26 = arg4:4.d
    uint64_t r11_1 = *arg5
    
    if (rbx s< rax_26)
        do
            int32_t i = arg3[1]
            
            if (i s< arg3[3])
                int32_t j = arg3[2]
                
                do
                    int64_t r10_1 = sx.q(*arg3)
                    void* r8_8 = var_110[2]
                    int16_t* r9_4 = *(*(r8_8 + 0x28) + 0x18)
                        + ((zx.q(*(r12 + 0x98) * i) + zx.q(rbx * rdx_1 * rcx_2) + r10_1) << 3)
                        + zx.q(*(r8_8 + 0x24))
                    
                    for (; r10_1.d s< j; j = arg3[2])
                        int16_t rax_30 = *r9_4
                        r9_4 = &r9_4[4]
                        uint64_t rcx_29 = r11_1
                        r10_1 = zx.q(r10_1.d + 1)
                        r11_1 += 8
                        *rcx_29 = rax_30
                        *(rcx_29 + 2) = r9_4[-3]
                        *(rcx_29 + 4) = r9_4[-2]
                        *(rcx_29 + 6) = r9_4[-1]
                    
                    i += 1
                while (i s< arg3[3])
                
                rax_26 = arg4:4.d
            
            rbx += 1
        while (rbx s< rax_26)
        
        r14_6 = arg1
    
    sub_1418c5270(*(r14_6 + 0x58) + 0x3f0, rax_10, &var_110)
    result = sub_1418c2ee0(*(*(*(r14_6 + 0x58) + 0x1a50) + 0x240))
else
    int64_t rbx_1 = sx.q(arg5[1].d)
    int32_t rax_7 = rbx_1.d + r15
    arg5[1].d = rax_7
    
    if (rax_7 s> *(arg5 + 0xc))
        sub_1405a4d70(arg5)
    
    result = memset(*arg5 + (rbx_1 << 3), 0, sx.q(r15) << 3)

__security_check_cookie(rax_1 ^ &var_168)
return result
