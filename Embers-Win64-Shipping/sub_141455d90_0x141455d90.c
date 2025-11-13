// 函数: sub_141455d90
// 地址: 0x141455d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rdi = arg5
int32_t r15 = 0
int64_t* rsi_1 = arg4 + 0x10 + sx.q(arg3) * 0x58
int32_t arg_18 = 0
int64_t* arg_20 = rsi_1
sub_14108daf0(rdi, arg1 + 0x128, *rsi_1)
int32_t rcx_1 = rsi_1[8].d
int32_t rbx = 0
void* r9 = arg1
arg_18 = 0
uint64_t result = zx.q(*(r9 + 0x120))

if (result.d s<= rcx_1)
    rcx_1 = result.d

int64_t r14 = sx.q(rcx_1)
int64_t var_130 = r14

if (rcx_1 s> 0)
    int64_t r13_1 = 0
    
    do
        int64_t r12_2 = sx.q(rbx) << 4
        int16_t* rax_1 = sub_141455900(r9, rsi_1[7] + r12_2, arg2)
        int16_t* r11_1 = rax_1
        
        if (rax_1 == 0)
            int32_t r11_2 = (data_143a2eb28).d
            int16_t* var_168 = rax_1
            int32_t rcx_3 = rax_1.d
            int32_t var_160_1 = rax_1.d
            int32_t r8_3 = rax_1.d
            int32_t var_158_1 = rax_1.d
            int32_t var_154_1 = 1
            void* var_150_1 = &data_143a2eb10
            int32_t var_148_1 = 0xffffffff
            int16_t* var_144_1 = rax_1
            
            if (r11_2 != 0)
                void* rax_2 = data_143a2eb20
                void* r9_1 = &data_143a2eb10
                
                if (rax_2 != 0)
                    r9_1 = rax_2
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r11_2 - 1)
                int32_t rdx_5 = *r9_1
                
                if (rdx_5 != 0)
                label_141455efb:
                    int32_t rax_9 = neg.d(rdx_5) & rdx_5
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                    int32_t var_154_2 = rax_9
                    int32_t rax_10
                    
                    if (rax_9 == 0)
                        rax_10 = 0x20
                    else
                        rax_10 = 0x1f - temp0_2
                    
                    var_144_1.d = r8_3 - rax_10 + 0x1f
                    
                    if (r8_3 - rax_10 + 0x1f s> r11_2)
                        var_144_1.d = r11_2
                else
                    while (true)
                        int64_t rdx_6 = sx.q(rcx_3)
                        r8_3 += 0x20
                        rcx_3 += 1
                        var_144_1:4.d = r8_3
                        var_158_1 = rcx_3
                        
                        if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                        int32_t var_148_2 = 0xffffffff
                        
                        if (rdx_5 != 0)
                            goto label_141455efb
                    
                    var_144_1.d = r11_2
            
            int16_t var_f0_1 = 0
            int64_t* var_50_1 = &data_143a2eb00
            int64_t* rdi_1 = &data_143a2eb00
            int64_t* var_f8_1 = &data_143a2eb00
            int128_t var_88_1 = 0xffffffff
            int128_t zmm0_1
            zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_108_1 = zmm0_1
            int128_t var_128 = (&data_143a2eb00).o
            int128_t var_118_1 = var_158_1.o
            int128_t var_58 = zmm0_1
            int32_t var_178
            int16_t* const rsi_3
            
            if (0 s< r11_2)
                int32_t i = var_118_1:0xc.d
                
                do
                    int64_t* r14_1 = var_128.q
                    int64_t rdi_3 = sx.q(i) << 5
                    void* rsi_2 = *(rdi_3 + *r14_1 + 0x10)
                    int64_t var_b0
                    
                    if (rsi_2 != 0)
                        int64_t var_e8 = *(rsi_2 + 0x10)
                        r15 |= 1
                        int64_t* rax_14 = sub_140b63b70(&var_e8, &var_b0)
                        
                        if (rax_14[1].d != 0)
                            *rax_14
                    
                    int16_t* var_d0
                    sub_140b291e0(*r14_1 + rdi_3, &var_d0, 0)
                    int16_t* const rax_15 = &data_142d40450
                    int32_t var_c8
                    
                    if (var_c8 != 0)
                        rax_15 = var_d0
                    
                    var_178.q = rax_15
                    int64_t var_e0
                    sub_140a2e390(&var_e0, u"\n0x%p: %s: %s", rsi_2)
                    int32_t var_d8
                    int32_t r8_7
                    
                    if (var_d8 == 0)
                        r8_7 = 0
                    else
                        r8_7 = var_d8 - 1
                    
                    sub_140a20ba0(&var_168, var_e0, r8_7)
                    int64_t rcx_10 = var_e0
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                    
                    int16_t* rcx_11 = var_d0
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                    
                    if ((r15.b & 1) != 0)
                        int64_t rcx_12 = var_b0
                        r15 &= 0xfffffffe
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                    
                    var_118_1:8.d &= not.d(var_128:0xc.d)
                    sub_14059bdd0(&var_128:8)
                    i = var_118_1:0xc.d
                while (i s< *(var_118_1.q + 0x18))
                
                rdi_1 = var_f8_1
                rsi_3 = var_168
            
            if (0 s>= r11_2 || var_160_1 == 0)
                rsi_3 = &data_142d40450
            
            int32_t rbx_3 = data_143a2eb08 - data_143a2eb34
            int16_t* var_c0
            sub_140b291e0(arg_20[7] + r12_2, &var_c0, 0)
            int16_t* const r9_3 = &data_142d40450
            int16_t* const var_170_1 = rsi_3
            int32_t var_b8
            
            if (var_b8 != 0)
                r9_3 = var_c0
            
            var_178 = rbx_3
            sub_140af98a0("Unknown", 0x1ee, 
                Failed to find parameter collection buffer with GUID '%s'.\nCurrently %i listed default "
            "instances: %s", r9_3)
            int16_t* rcx_16 = var_c0
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            sub_140afbb40()
            
            if (var_f0_1.b != 0 && var_f0_1:1.b != 0)
                sub_140cb1970(rdi_1, rdi_1[1].d - *(rdi_1 + 0x34), 1)
            
            int16_t* rcx_18 = var_168
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            r14 = var_130
            rsi_1 = arg_20
            rdi = arg5
            r11_1 = rax_1
            rbx = arg_18
        
        r9 = arg1
        void* rax_20 = *(r9 + 0x118)
        
        if ((rax_20.b & 1) != 0)
            rax_20 = (rax_20 s>> 1) + r9 + 0x118
        
        int16_t r10_2 = *(rax_20 + (r13_1 << 1))
        result = 0xffff
        
        if (r10_2 != 0xffff)
            result = *rdi
            int64_t r9_4 = *result
            
            if ((r9_4.b & 1) != 0)
                r9_4 = (r9_4 s>> 1) + result
            
            int32_t rcx_20 = 0
            int32_t r8_10 = *(result + 8) - 1
            
            if (r8_10 s> 0)
                do
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r8_10 + rcx_20)
                    result = zx.q((temp3_1 - temp2_1) s>> 1)
                    
                    if (*(r9_4 + (sx.q(result.d) << 2)) u>= r10_2)
                        r8_10 = result.d
                    else if (rcx_20 != result.d)
                        rcx_20 = result.d
                    else
                        rcx_20 += 1
                while (rcx_20 s< r8_10)
            
            if (rcx_20 != r8_10)
                r9 = arg1
            else
                int64_t rdx_15 = sx.q(rcx_20)
                r9 = arg1
                
                if (*(r9_4 + (rdx_15 << 2)) == r10_2 && rcx_20 s>= 0)
                    result = rdi[1]
                    *(result + (rdx_15 << 3)) = r11_1
        
        rbx += 1
        r13_1 += 1
        arg_18 = rbx
    while (r13_1 s< r14)

return result
