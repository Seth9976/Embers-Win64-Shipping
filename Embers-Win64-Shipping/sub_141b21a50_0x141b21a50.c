// 函数: sub_141b21a50
// 地址: 0x141b21a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_10 = arg2
int32_t arg_8
sub_141b1fda0(arg1 + 8, &arg_8, &arg_10)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x60 + *(arg1 + 8)

int64_t* rdi = rax_3 + 8

if (rax_3 == 0)
    rdi = nullptr

if (rdi != 0)
    sub_141b1fb40(rdi, &arg_8, &arg_18)
    int64_t rax_4 = sx.q(arg_8)
    void* rax_6
    
    if (rax_4.d != 0xffffffff)
        rax_6 = *rdi + rax_4 * 0x18
    
    int32_t arg_20
    
    if (rax_4.d == 0xffffffff || rax_6 == 0)
        arg_20 = 0xffffffff
        int32_t arg_24 = 0
    else
        arg_20.q = *(rax_6 + 8)
    
    if (sub_140d3e110(&arg_20) != 0)
        return sub_140d3c6e0(&arg_20)
    
    int32_t rbx_1 = rdi[5].d
    int32_t rcx_4 = 0
    int32_t var_c8 = 0
    int32_t r8_2 = 0
    int32_t var_c4_1 = 1
    void* var_c0_1 = &rdi[2]
    int32_t var_b8_1 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (rbx_1 != 0)
        void* rax_10 = rdi[4]
        void* r9_1 = &rdi[2]
        
        if (rax_10 != 0)
            r9_1 = rax_10
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_141b21ba5:
            int32_t rax_17 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
            int32_t var_c4_2 = rax_17
            int32_t rax_18
            
            if (rax_17 == 0)
                rax_18 = 0x20
            else
                rax_18 = 0x1f - temp0_2
            
            var_b4_1.d = r8_2 - rax_18 + 0x1f
            
            if (r8_2 - rax_18 + 0x1f s> rbx_1)
                var_b4_1.d = rbx_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_4)
                r8_2 += 0x20
                rcx_4 += 1
                var_b4_1:4.d = r8_2
                var_c8 = rcx_4
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                var_b8_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141b21ba5
            
            var_b4_1.d = rbx_1
    
    int32_t rsi_1 = rdi[5].d
    double zmm2[0x2] = var_b8_1.o
    int128_t var_68_1 = var_c8.o
    int32_t r8_5 = rsi_1 s>> 5
    int32_t r9_3 = rsi_1 & 0xffffffe0
    double var_58_1[0x2] = zmm2
    int64_t var_78_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int128_t var_98 = rdi.o
    int128_t var_88_1 = var_68_1
    
    if (rsi_1 != rbx_1)
        void* rax_20 = rdi[4]
        void* r11_1 = &rdi[2]
        
        if (rax_20 != 0)
            r11_1 = rax_20
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_10 = *(r11_1 + (sx.q(r8_5) << 2)) & 0xffffffff << (rsi_1.b & 0x1f)
        
        if (rdx_10 != 0)
        label_141b21c5b:
            int32_t rax_27 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_27)
            int32_t r15_1
            
            if (rax_27 == 0)
                r15_1 = 0x20
            else
                r15_1 = 0x1f - temp0_4
            
            rsi_1 = r9_3 - r15_1 + 0x1f
            
            if (rsi_1 s> rbx_1)
                rsi_1 = rbx_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r11_1 + (rcx_9 << 2) + 4)
                
                if (rdx_10 != 0)
                    goto label_141b21c5b
            
            rsi_1 = rbx_1
    
    while (true)
        int64_t rax_28 = sx.q(var_88_1:0xc.d)
        int64_t* rdx_11 = var_98.q
        
        if (rax_28.d == rsi_1 && var_88_1.q == &rdi[2] && rdx_11 == rdi)
            break
        
        var_c8.o = *(*rdx_11 + rax_28 * 0x18)
        sub_141b1fb40(rdi, &arg_8, &var_c8)
        int64_t rax_30 = sx.q(arg_8)
        void* rax_32
        
        if (rax_30.d != 0xffffffff)
            rax_32 = *rdi + rax_30 * 0x18
        
        int32_t var_a8
        
        if (rax_30.d == 0xffffffff || rax_32 == 0)
            var_a8 = 0xffffffff
            int32_t var_a4_1 = 0
        else
            var_a8.q = *(rax_32 + 8)
        
        int64_t* result = sub_140d3c6e0(&var_a8)
        
        if (result != 0)
            int64_t rdx_14 = *result
            
            if ((*(rdx_14 + 0x540))(result, rdx_14) == 0)
                sub_141b2ef70(rdi, &var_c8)
                sub_140d3a3a0(&var_c8, result)
                var_a8.q = &arg_18
                int32_t* var_a0_1 = &var_c8
                sub_141aee170(rdi, &arg_8, &var_a8, nullptr)
                return result
        
        var_88_1:8.d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)

return nullptr
