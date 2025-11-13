// 函数: sub_141972dc0
// 地址: 0x141972dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128

if (arg3 != *(arg1 + 0x80))
    sub_141989140(arg1 + 0x88, arg3)
    *(arg1 + 0x80) = arg3

int32_t rcx_1 = 0
int32_t var_fc = 1
void* rdx_1 = arg1 + 0x88
int32_t var_100 = 0
int32_t rbx_1 = *(rdx_1 + 0x28)
void* r13 = rdx_1 + 0x10
int32_t r8 = 0
void* var_108 = rdx_1
void* var_f8 = r13
int32_t var_f0 = 0xffffffff
int64_t var_ec = 0

if (rbx_1 != 0)
    void* rax_2 = *(r13 + 0x10)
    void* r9 = r13
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_141972ea8:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_fc_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_ec.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rbx_1)
            var_ec.d = rbx_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_ec:4.d = r8
            var_100 = rcx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_f0 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141972ea8
        
        var_ec.d = rbx_1
    
    rdx_1 = var_108

int32_t r12 = *(rdx_1 + 0x28)
int128_t var_c8 = var_100.o
int32_t r8_3 = r12 s>> 5
int32_t r9_2 = r12 & 0xffffffe0
int128_t var_b8 = 0xffffffff
int64_t var_e0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_100.o = rdx_1.o
var_f0.o = var_c8

if (r12 != rbx_1)
    void* rax_12 = *(r13 + 0x10)
    void* r11_1 = r13
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (r12.b & 0x1f)
    
    if (rdx_9 != 0)
    label_141972f6b:
        int32_t rax_19 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r14_1
        
        if (rax_19 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        r12 = r9_2 - r14_1 + 0x1f
        
        if (r12 s> rbx_1)
            r12 = rbx_1
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_6 << 2) + 4)
            
            if (rdx_9 != 0)
                goto label_141972f6b
        
        r12 = rbx_1
    
    rdx_1 = var_108

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t rcx_8 = var_100.q
    
    if (result.d == r12 && var_f0.q == r13 && rcx_8 == rdx_1)
        __security_check_cookie(rax_1 ^ &var_128)
        return result
    
    int32_t* rbx_3 = result * 0xb8 + *rcx_8
    
    if ((rbx_3[0x2a].b & 1) == 0 && data_1439c79f8(data_143f0f158, *(rbx_3 + 0xa0)) != 0
            && *(rbx_3 + 0x40) s>= arg4)
        int32_t rax_22
        int64_t r9_4
        
        if (arg5[1].d != *(arg5 + 0x34))
            void* rdx_11 = arg5[8]
            void* r8_4 = &arg5[7]
            r9_4 = sx.q(*rbx_3)
            
            if (rdx_11 != 0)
                r8_4 = rdx_11
            
            rax_22 = *(r8_4 + (((sx.q(arg5[9].d) - 1) & r9_4) << 2))
        
        if (arg5[1].d == *(arg5 + 0x34) || rax_22 == 0xffffffff)
        label_141973047:
            rax_22 = -1
        else
            int64_t r8_5 = *arg5
            
            while (true)
                int64_t rdx_12 = sx.q(rax_22) * 3
                
                if (*(r8_5 + (rdx_12 << 2)) == r9_4.d)
                    break
                
                rax_22 = *(r8_5 + (rdx_12 << 2) + 4)
                
                if (rax_22 == 0xffffffff)
                    goto label_141973047
        
        if (rax_22 == 0xffffffff)
            int32_t var_78_1 = rax_22
            int32_t rax_23 = *rbx_3
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x2c)
            int32_t var_74_1 = 0
            int64_t var_68_1 = 0
            int32_t var_60_1 = 0
            int32_t var_7c_1 = 0x80
            sub_141823260(&var_a8, &rbx_3[0x14])
            int64_t rbx_4 = sx.q(arg2[1].d)
            int32_t rax_24 = (rbx_4 + 1).d
            arg2[1].d = rax_24
            
            if (rax_24 s> *(arg2 + 0xc))
                sub_1407755b0(arg2)
            
            int64_t* rbx_6 = rbx_4 * 0x58 + *arg2
            int64_t* rcx_16 = &rbx_6[2]
            *rbx_6 = 0
            rbx_6[1] = 0
            rcx_16[2] = 0
            rcx_16[3].d = 0
            *(rcx_16 + 0x1c) = 0x80
            int64_t* rax_25 = rcx_16[2]
            
            if (rax_25 != 0)
                rcx_16 = rax_25
            
            *rcx_16 = 0
            rcx_16[1] = 0
            rbx_6[6].d = 0xffffffff
            *(rbx_6 + 0x34) = 0
            rbx_6[8] = 0
            rbx_6[9].d = 0
            sub_141823260(rbx_6, &var_a8)
            rbx_6[0xa].d = rax_23
            int32_t var_60_2 = 0
            
            if (var_68_1 != 0)
                sub_140a74f90(var_68_1)
            
            int64_t var_a0_1
            var_a0_1.d = 0
            int32_t var_78_2 = 0xffffffff
            int32_t var_74_2 = 0
            int64_t var_98
            sub_14059a8e0(&var_98, 0)
            int64_t var_88
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            int64_t rcx_22 = var_a8
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
    
    var_ec:4.d &= not.d(var_f8:4.d)
    sub_14059bdd0(&var_f8)
    rdx_1 = var_108
