// 函数: sub_1420fdd70
// 地址: 0x1420fdd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_98 = 0xffffffff
sub_140d3cc80(sub_14255d000(), &var_a8, 1, 0x10, 0)
int32_t r8_1 = var_a0
int64_t rdx_1 = var_a8
int32_t i = var_98 + 1
int32_t i_1 = i
uint64_t result

if (i s< r8_1)
    while (*(rdx_1 + (sx.q(i) << 3)) == 0)
        result = zx.q(i + 1)
        i_1 = result.d
        i = result.d
        
        if (result.d s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    int32_t r8_2 = 0
    int32_t rcx_1 = 0
    int32_t var_8c_1 = 1
    int32_t var_90_1 = 0
    int32_t var_80_1 = 0xffffffff
    void* rsi_2 = *(rdx_1 + (sx.q(i) << 3)) + 0x1a0
    int64_t var_7c_1 = 0
    int32_t r10_1 = *(rsi_2 + 0x28)
    void* var_88_1 = rsi_2 + 0x10
    
    if (r10_1 != 0)
        void* rax_2 = *(rsi_2 + 0x20)
        void* r9_1 = rsi_2 + 0x10
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_1420fde88:
            int32_t rax_9 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_8c_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_7c_1.d = r8_2 - rax_10 + 0x1f
            
            if (r8_2 - rax_10 + 0x1f s> r10_1)
                var_7c_1.d = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_1)
                r8_2 += 0x20
                rcx_1 += 1
                var_7c_1:4.d = r8_2
                var_90_1 = rcx_1
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_80_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1420fde88
            
            var_7c_1.d = r10_1
    
    int32_t rdx_6 = *(rsi_2 + 0x28)
    int128_t var_30_1 = 0xffffffff
    int32_t r14_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_40_1 = var_90_1.o
    int32_t r8_5 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_50_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_80_3 = r14_1
    var_7c_1.d = rdx_6
    int128_t var_70 = rsi_2.o
    
    if (rdx_6 != r10_1)
        void* rax_12 = *(rsi_2 + 0x20)
        void* r11_1 = rsi_2 + 0x10
        
        if (rax_12 != 0)
            r11_1 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_10 = *(r11_1 + (sx.q(r8_5) << 2)) & r14_1
        
        if (rdx_10 != 0)
        label_1420fdf54:
            int32_t rax_19 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_4
            
            var_7c_1.d = r9_3 - rax_20 + 0x1f
            
            if (r9_3 - rax_20 + 0x1f s> r10_1)
                var_7c_1.d = r10_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r11_1 + (rcx_6 << 2) + 4)
                var_80_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_1420fdf54
            
            var_7c_1.d = r10_1
    
    int32_t var_54
    
    while (var_54 != (var_80_3.q u>> 0x20).d || var_40_1:8.q != rsi_2 + 0x10 || var_70.q != rsi_2)
        int32_t var_58 = var_58 & not.d(var_70:0xc.d)
        sub_14059bdd0(&var_70:8)
    
    r8_1 = var_a0
    rdx_1 = var_a8
    i = i_1 + 1
    i_1 = i
    
    if (i s< r8_1)
        while (*(rdx_1 + (sx.q(i) << 3)) == 0)
            result = zx.q(i + 1)
            i_1 = result.d
            i = result.d
            
            if (result.d s>= r8_1)
                break

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

result.b = 1
return result
