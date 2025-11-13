// 函数: sub_14242e1a0
// 地址: 0x14242e1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
sub_140cd7d40(arg1)
void* rsi = *(arg1 + 0x158)
void* r14_1 = sx.q(*(arg1 + 0x160)) * 0x78 + rsi
int64_t var_f8

if (rsi != r14_1)
    int64_t* rdi_1 = rsi + 0x28
    
    do
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x2c)
        int32_t var_5c_1 = 0x80
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        sub_140cd48b0(&var_88, rdi_1)
        int64_t var_78
        int64_t* var_f0_1 = &var_78
        int32_t rcx_1 = 0
        var_f8.d = 0
        int32_t r8_1 = 0
        var_f8:4.d = 1
        int32_t var_e8_1 = 0xffffffff
        int64_t var_e4_1 = 0
        int64_t* var_68
        int32_t var_60
        
        if (var_60 != 0)
            int64_t* r9_1 = &var_78
            
            if (var_68 != 0)
                r9_1 = var_68
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_60 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_14242e2db:
                int32_t rax_10 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                var_f8:4.d = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_2
                
                int32_t rax_12 = r8_1 - rax_11 + 0x1f
                
                if (rax_12 s> var_60)
                    rax_12 = var_60
                
                var_e4_1.d = rax_12
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_1)
                    r8_1 += 0x20
                    rcx_1 += 1
                    var_e4_1:4.d = r8_1
                    var_f8.d = rcx_1
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_e4_1.d = var_60
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    var_e8_1 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_14242e2db
        
        double zmm2_1[0x2] = var_e8_1.o
        double var_98_1[0x2] = zmm2_1
        var_e4_1.d = var_60
        int128_t var_a8_1 = var_f8.o
        double temp0_3[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
        int128_t var_d8 = (&var_88).o
        int128_t var_c8_1 = var_a8_1
        int64_t var_b8_1 = temp0_3.q
        
        while (true)
            int64_t rax_13 = sx.q(var_c8_1:0xc.d)
            int64_t* rdx_7 = var_d8.q
            
            if (rax_13.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d
                    && var_c8_1.q == &var_78 && rdx_7 == &var_88)
                break
            
            void* rdx_9 = *(*rdx_7 + rax_13 * 0x10)
            
            if (rdx_9 != 0)
                *(rdx_9 + 0x248) = 0
                sub_1409740e0(rdi_1, rdx_9)
            
            var_c8_1:8.d &= not.d(var_d8:0xc.d)
            sub_14059bdd0(&var_d8:8)
        
        int32_t var_40_2 = 0
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        int64_t var_80_1
        var_80_1.d = 0
        int32_t var_58_2 = 0xffffffff
        int32_t var_54_2 = 0
        sub_14059a8e0(&var_78, 0)
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_11 = var_88
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rsi += 0x78
        rdi_1 = &rdi_1[0xf]
    while (rsi != r14_1)

int64_t* rcx_12 = *(arg1 + 0x1b0)

if (rcx_12 != 0)
    var_f8 = 0
    int64_t var_f0_2 = 0
    (*(*rcx_12 + 0x280))(rcx_12, &var_f8)
    int64_t rcx_13 = var_f8
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

int64_t result = sub_141e85b60(arg1 + 0x170)
__security_check_cookie(rax_1 ^ &var_118)
return result
