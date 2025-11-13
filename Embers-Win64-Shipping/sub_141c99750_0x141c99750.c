// 函数: sub_141c99750
// 地址: 0x141c99750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg2 + 0x28)
int32_t r8 = 0
int32_t var_124 = 1
int32_t r9 = 0
int32_t var_128 = 0
void* var_120 = arg2 + 0x10
int32_t var_118 = 0xffffffff
int64_t var_114 = 0

if (r10 != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r11_1 = arg2 + 0x10
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rcx = *r11_1
    
    if (rcx != 0)
    label_141c997fe:
        int32_t rax_8 = ((rcx - 1) & rcx) ^ rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_124_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_114.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r10)
            var_114.d = r10
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_114:4.d = r9
            var_128 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r11_1 + (rcx_1 << 2) + 4)
            var_118 = 0xffffffff
            
            if (rcx != 0)
                goto label_141c997fe
        
        var_114.d = r10

int32_t rdx_2 = *(arg2 + 0x28)
double zmm2[0x2] = var_118.o
var_114.d = rdx_2
double var_50[0x2] = zmm2
int128_t var_60 = var_128.o
int32_t rsi = 0xffffffff << (rdx_2 & 0x1f).b
int32_t r8_2 = rdx_2 s>> 5
int32_t r9_3 = rdx_2 & 0xffffffe0
int64_t var_a0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_118_1 = rsi
int128_t var_c0 = arg2.o
int128_t var_58
int128_t var_b0 = var_58

if (rdx_2 != r10)
    void* rax_12 = *(arg2 + 0x20)
    void* r11_2 = arg2 + 0x10
    
    if (rax_12 != 0)
        r11_2 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_6 = *(r11_2 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_6 != 0)
    label_141c998d7:
        int32_t rax_18 = ((rdx_6 - 1) & rdx_6) ^ rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_114.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r10)
            var_114.d = r10
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r11_2 + (rcx_5 << 2) + 4)
            var_118_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141c998d7
        
        var_114.d = r10

int32_t result

while (true)
    int64_t rcx_7 = sx.q(var_b0:0xc.d)
    
    if (rcx_7.d != (var_118_1.q u>> 0x20).d || var_b0.q != arg2 + 0x10)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rdx_7 = var_c0.q
    
    if (result.b == 0 || rdx_7 != arg2)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    void* rdi_2 = *(*rdx_7 + rcx_7 * 0x18 + 8)
    
    if (rdi_2 != 0)
        int64_t* rdx_9 = *(rdi_2 + 0x10)
        int64_t* arg_18 = rdx_9
        
        if (sub_141c99350(arg1 + 0x448, rdx_9) != 0)
            sub_140920c10(arg1 + 0x560, sub_140b63b70(&arg_18, &var_128))
            int64_t rcx_12 = var_128.q
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        
        int64_t* rbx_2 = *(rdi_2 + 0x20)
        int32_t rax_21 = *(arg1 + 0x6c8)
        arg_18 = rbx_2
        
        if (rax_21 != *(arg1 + 0x6f4))
            int32_t rax_23 = sub_140b5ead0(rbx_2.d) + arg_18:4.d
            void* r8_3 = arg1 + 0x6f8
            void* rcx_14 = *(r8_3 + 8)
            
            if (rcx_14 != 0)
                r8_3 = rcx_14
            
            int32_t i = *(r8_3 + (((sx.q(*(arg1 + 0x708)) - 1) & sx.q(rax_23)) << 2))
            
            if (i != 0xffffffff)
                int64_t rdx_15 = *(arg1 + 0x6c0)
                
                do
                    int64_t rcx_16 = sx.q(i) * 2
                    
                    if (*(rdx_15 + (rcx_16 << 3)) == rbx_2)
                        if (i != 0xffffffff)
                            int64_t rdx_16 = data_143e1a358
                            int64_t var_f8 = 0
                            int32_t var_f0_1 = 0
                            sub_1408301c0(rdi_2, rdx_16, &var_f8)
                            int64_t rdx_17 = data_143e1a360
                            uint64_t var_108 = 0
                            int32_t var_100_1 = 0
                            sub_1408301c0(rdi_2, rdx_17, &var_108)
                            
                            if (var_f0_1 s> 1 && var_100_1 s> 1)
                                int64_t var_98
                                sub_140ba5860(&var_98, &var_f8)
                                int16_t* var_e0
                                sub_140baf740(&var_e0, &var_98)
                                int64_t rcx_21 = var_98
                                
                                if (rcx_21 != 0)
                                    sub_140a74f90(rcx_21)
                                
                                int16_t* const rdx_20 = &data_142d40450
                                int32_t var_d8
                                
                                if (var_d8 != 0)
                                    rdx_20 = var_e0
                                
                                int64_t arg_20
                                sub_140b58260(&arg_20, rdx_20, 1)
                                int16_t* rcx_23 = var_e0
                                
                                if (rcx_23 != 0)
                                    sub_140a74f90(rcx_23)
                                
                                int64_t var_88
                                sub_140ba5860(&var_88, &var_108)
                                int16_t* var_d0
                                sub_140baf740(&var_d0, &var_88)
                                int64_t rcx_26 = var_88
                                
                                if (rcx_26 != 0)
                                    sub_140a74f90(rcx_26)
                                
                                int16_t* const rdx_23 = &data_142d40450
                                int32_t var_c8
                                
                                if (var_c8 != 0)
                                    rdx_23 = var_d0
                                
                                int64_t var_e8
                                sub_140b58260(&var_e8, rdx_23, 1)
                                int16_t* rcx_28 = var_d0
                                
                                if (rcx_28 != 0)
                                    sub_140a74f90(rcx_28)
                                
                                int32_t var_78
                                sub_1405b3620(arg1 + 0x350, &var_78)
                                int64_t* var_70
                                *var_70 = arg_20
                                var_70[1] = var_e8
                                var_70[2].d = 0xffffffff
                                int64_t rbx_3 = *var_70
                                void arg_10
                                sub_1405b8300(arg1 + 0x350, &arg_10, 
                                    (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d), var_70, var_78, 
                                    nullptr)
                            
                            uint64_t rcx_32 = var_108
                            
                            if (rcx_32 != 0)
                                sub_140a74f90(rcx_32)
                            
                            int64_t rcx_33 = var_f8
                            
                            if (rcx_33 != 0)
                                sub_140a74f90(rcx_33)
                        
                        break
                    
                    i = *(rdx_15 + (rcx_16 << 3) + 8)
                while (i != 0xffffffff)
    
    var_b0:8.d &= not.d(var_c0:0xc.d)
    sub_14059bdd0(&var_c0:8)

return result
