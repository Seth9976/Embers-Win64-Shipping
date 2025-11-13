// 函数: sub_14147c530
// 地址: 0x14147c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t result = __security_cookie ^ &var_188
uint64_t result_1 = result
int32_t r8 = arg3[1].d
uint64_t r15 = arg2
void* r12 = arg1

if (r8 s> 0 && *(arg1 + 0x3b0) s>= 3)
    char rcx_1 = (data_1439c7a00).b - 1
    int32_t var_d8 = 1
    int16_t rax_1 = (1 << rcx_1).w
    int32_t r14_1 = 0
    rcx_1 = 0
    int64_t var_d4_1 = 1
    int16_t var_cc_1 = 0
    int64_t* var_60_1 = nullptr
    int32_t var_54_1 = 5
    int32_t var_58_1 = 1
    int64_t var_c8 = -1
    int32_t var_c0_1 = 0
    int16_t var_bc_1 = rax_1
    int16_t var_ba_1 = rax_1
    char var_b8_1 = 0
    
    if (r8 s> 0)
        int64_t* r15_1 = nullptr
        
        while (true)
            void* rsi_1 = *(r15_1 + *arg3)
            int32_t rdi_1 = *(rsi_1 + 0x548)
            int32_t rbx_1 = *(rsi_1 + 0x54c)
            
            if (rdi_1 == 0 || rbx_1 == 0)
                *(rsi_1 + 0x540) = 0
                *(rsi_1 + 0x570) |= 1
            else
                if (rcx_1 != 0)
                    rdi_1 = (rdi_1 + 3) & 0xfffffffc
                    rbx_1 = (rbx_1 + 3) & 0xfffffffc
                
                int32_t rax_3 = sub_141479db0(&var_d8, 0, rdi_1, rbx_1, 0)
                int32_t rcx_3 = rax_3
                int32_t rax_4
                
                if (rax_3 == 0xffffffff)
                    rax_4 = sub_141479db0(&var_d8, 0, rdi_1, rbx_1, 1)
                    rcx_3 = rax_4
                
                if (rax_3 != 0xffffffff || rax_4 != 0xffffffff)
                    int64_t* r9_3 = &var_c8
                    
                    if (var_60_1 != 0)
                        r9_3 = var_60_1
                    
                    int64_t r10_1 = sx.q(rcx_3) * 5
                    uint32_t rax_7 = zx.d(*(r9_3 + (r10_1 << 2) + 8))
                    *(r9_3 + (r10_1 << 2) + 0x10) = 1
                    *(rsi_1 + 0x540) = rax_7
                    *(rsi_1 + 0x544) = zx.d(*(r9_3 + (r10_1 << 2) + 0xa))
                    int32_t rdx_1 = zx.d(*(r9_3 + (r10_1 << 2) + 8)) + rdi_1
                    char temp0_1 = var_cc_1.b
                    
                    if (temp0_1 == 0)
                        if (var_d8 u>= rdx_1)
                            rdx_1 = var_d8
                        
                        var_d8 = rdx_1
                        int32_t rcx_19 = zx.d(*(r9_3 + (r10_1 << 2) + 0xa)) + rbx_1
                        
                        if (var_d4_1.d u>= rcx_19)
                            rcx_19 = var_d4_1.d
                        
                        var_d4_1.d = rcx_19
                    else
                        uint64_t rflags_1
                        char temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rdx_1)
                        int32_t rcx_5
                        
                        if (temp0_1 == 0)
                            rcx_5 = 0x20
                        else
                            rcx_5 = 0x1f - temp0_2
                        
                        int32_t rcx_7 = rcx_5 << 0x1a s>> 0x1f
                        uint64_t rflags_2
                        char temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(rdx_1 - 1)
                        char rdx_2
                        
                        if (rcx_7 == 0)
                            rdx_2 = 0x20
                        else
                            rdx_2 = 0x1f - temp0_3
                        
                        int32_t r8_4 = 1 << ((not.d(rcx_7)).b & (0x20 - rdx_2))
                        
                        if (var_d8 u>= r8_4)
                            r8_4 = var_d8
                        
                        var_d8 = r8_4
                        uint32_t rax_12 = zx.d(*(r9_3 + (r10_1 << 2) + 0xa))
                        int32_t rax_13 = rax_12 + rbx_1
                        uint64_t rflags_3
                        char temp0_4
                        temp0_4, rflags_3 = _bit_scan_reverse(rax_13)
                        int32_t rcx_10
                        
                        if (rax_12 == neg.d(rbx_1))
                            rcx_10 = 0x20
                        else
                            rcx_10 = 0x1f - temp0_4
                        
                        uint64_t rflags_4
                        char temp0_5
                        temp0_5, rflags_4 = _bit_scan_reverse(rax_13 - 1)
                        char rdx_4
                        
                        if (rax_13 == 1)
                            rdx_4 = 0x20
                        else
                            rdx_4 = 0x1f - temp0_5
                        
                        int32_t rdx_5 = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - rdx_4))
                        int32_t rcx_15 = var_d4_1:4.d
                        
                        if (var_d4_1.d u>= rdx_5)
                            rdx_5 = var_d4_1.d
                        
                        var_d4_1.d = rdx_5
                        
                        if (rcx_15 == 1)
                            int32_t rax_16 = rdx_5 * 2
                            
                            if (r8_4 u>= rax_16)
                                rax_16 = r8_4
                            
                            var_d8 = rax_16
                            uint32_t rax_17 = rax_16 u>> 1
                            
                            if (rdx_5 u>= rax_17)
                                rax_17 = rdx_5
                            
                            var_d4_1.d = rax_17
                        else if (rcx_15 == 2)
                            if (r8_4 u>= rdx_5)
                                rdx_5 = r8_4
                            
                            var_d8 = rdx_5
                            var_d4_1.d = rdx_5
                    
                    *(rsi_1 + 0x570) |= 1
            
            r14_1 += 1
            r15_1 = &r15_1[1]
            
            if (r14_1 s>= arg3[1].d)
                break
            
            rcx_1 = var_cc_1:1.b
        
        r12 = arg1
        r15 = arg2
    
    int64_t rdi_3 = sx.q(*(r12 + 0x328))
    int32_t rax_18 = (rdi_3 + 1).d
    *(r12 + 0x328) = rax_18
    
    if (rax_18 s> *(r12 + 0x32c))
        sub_14149c2e0(r12 + 0x320, rdi_3.d)
    
    int64_t rax_19 = *(r12 + 0x320)
    int64_t rcx_21 = rdi_3 * 9
    int64_t r12_1 = 0
    *(rax_19 + (rcx_21 << 3) + 0x20) = 0
    *(rax_19 + (rcx_21 << 3) + 0x28) = 0
    *(rax_19 + (rcx_21 << 3) + 0x2c) = 4
    *(rax_19 + (rcx_21 << 3) + 0x30) = 0
    *(rax_19 + (rcx_21 << 3) + 0x38) = 0
    *(rax_19 + (rcx_21 << 3) + 0x40) = 0
    void* rsi_2 = *(r12 + 0x320) + ((sx.q(*(r12 + 0x328)) * 9 - 9) << 3)
    sub_141489200(rsi_2, 2)
    int64_t rbx_4 = sx.q(*(rsi_2 + 0x28))
    int32_t rax_22 = (rbx_4 + 2).d
    *(rsi_2 + 0x28) = rax_22
    
    if (rax_22 s> *(rsi_2 + 0x2c))
        sub_14083a490(rsi_2, rbx_4.d)
    
    void* rax_23 = *(rsi_2 + 0x20)
    char var_150_1 = 0
    char var_158_1 = 0
    void* rcx_26 = rsi_2
    char var_160_1 = 1
    
    if (rax_23 != 0)
        rcx_26 = rax_23
    
    int16_t var_f0_1 = 0
    int64_t* r9_5 = rsi_2
    int32_t var_10c_1 = 0
    int32_t var_104_1 = 0x10000
    int64_t var_fc_1 = 0x25
    *(rcx_26 + (rbx_4 << 3)) = 0
    *(rcx_26 + (rbx_4 << 3) + 8) = 0
    int32_t rdi_4 = var_d8
    int32_t rbx_5 = var_d4_1.d
    int32_t var_118_1 = data_143f02318
    int32_t var_108_1 = 1
    int16_t var_100_1 = 1
    int16_t var_e0_1 = 1
    int64_t* rax_25 = *(rsi_2 + 0x20)
    int128_t var_128 = data_143f02308
    int32_t var_114_1 = rdi_4
    
    if (rax_25 != 0)
        r9_5 = rax_25
    
    int32_t var_110_1 = rbx_5
    int32_t var_f4_1 = 9
    wchar16 const* const var_e8_1 = u"UnknownTexture2D"
    char var_de_1 = 0
    sub_1419a0ce0(&data_1439c9260, r15, &var_128, r9_5, RSMNormal", var_160_1, var_158_1, var_150_1)
    int32_t var_118_2 = data_143f02318
    char var_150_2 = 0
    int32_t var_108_2 = 1
    void* r9_6 = rsi_2
    int16_t var_100_2 = 1
    int16_t var_e0_2 = 1
    void* rax_27 = *(rsi_2 + 0x20)
    char var_158_2 = 0
    char var_160_2 = 1
    
    if (rax_27 != 0)
        r9_6 = rax_27
    
    int16_t var_f0_2 = 0
    var_128 = data_143f02308
    int32_t var_114_2 = rdi_4
    int32_t var_110_2 = rbx_5
    int32_t var_10c_2 = 0
    int32_t var_104_2 = 0x10000
    int64_t var_fc_2 = 0x1a
    int32_t var_f4_2 = 9
    wchar16 const* const var_e8_2 = u"UnknownTexture2D"
    char var_de_2 = 0
    sub_1419a0ce0(&data_1439c9260, r15, &var_128, r9_6 + 8, RSMDiffuse", var_160_2, var_158_2, 
        var_150_2)
    int32_t var_118_3 = data_143f02318
    int32_t var_108_3 = 1
    var_128 = data_143f02308
    int16_t var_f0_3 = 0
    int32_t var_114_3 = rdi_4
    int32_t var_110_3 = rbx_5
    int32_t var_10c_3 = 0
    int32_t var_104_3 = 0x10000
    int16_t var_100_3 = 1
    int64_t var_fc_3 = 0xb
    int32_t var_f4_3 = 0xc
    wchar16 const* const var_e8_3 = u"UnknownTexture2D"
    int16_t var_e0_3 = 1
    char var_de_3 = 0
    result = sub_1419a0ce0(&data_1439c9260, r15, &var_128, rsi_2 + 0x30, u"RSMDepth", 1, 0, 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (arg3[1].d s> 0)
        do
            result = *arg3
            void* r15_2 = *(r12_1 + result)
            
            if ((*(r15_2 + 0x570) & 1) != 0)
                int64_t rdi_5 = sx.q(*(rsi_2 + 0x28))
                int32_t r14_2 = 0
                *(r15_2 + 0x30) = 0
                
                if (*(r15_2 + 0x34) != rdi_5.d)
                    sub_14083ad10(r15_2 + 0x28, rdi_5.d)
                    r14_2 = *(r15_2 + 0x30)
                
                int32_t rax_29 = rdi_5.d + r14_2
                *(r15_2 + 0x30) = rax_29
                
                if (rax_29 s> *(r15_2 + 0x34))
                    sub_14083a440(r15_2 + 0x28, r14_2)
                
                memset(*(r15_2 + 0x28) + (sx.q(r14_2) << 3), 0, rdi_5 << 3)
                int64_t r8_9 = 0
                
                if (rdi_5 s> 0)
                    do
                        void* rax_31 = *(rsi_2 + 0x20)
                        void* rdx_13 = rsi_2
                        
                        if (rax_31 != 0)
                            rdx_13 = rax_31
                        
                        *(*(r15_2 + 0x28) + (r8_9 << 3)) = *(rdx_13 + (r8_9 << 3))
                        r8_9 += 1
                    while (r8_9 s< rdi_5)
                
                *(r15_2 + 0x38) = *(rsi_2 + 0x30)
                sub_1414a2f50(r15_2, arg2, arg1)
                int64_t rdi_6 = sx.q(*(rsi_2 + 0x40))
                int32_t rax_34 = (rdi_6 + 1).d
                *(rsi_2 + 0x40) = rax_34
                
                if (rax_34 s> *(rsi_2 + 0x44))
                    sub_14083a310(rsi_2 + 0x38, rdi_6.d)
                
                result = *(rsi_2 + 0x38)
                i = i_1
                *(result + (rdi_6 << 3)) = r15_2
            
            i += 1
            r12_1 += 8
            i_1 = i
        while (i s< arg3[1].d)
    
    if (var_60_1 != 0)
        result = sub_140a74f90(var_60_1)

__security_check_cookie(result_1 ^ &var_188)
return result
