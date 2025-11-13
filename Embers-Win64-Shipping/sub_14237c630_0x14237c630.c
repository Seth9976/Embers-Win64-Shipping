// 函数: sub_14237c630
// 地址: 0x14237c630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_c4 = 1
int32_t var_b8 = 0xffffffff
int32_t r11 = *(arg1 + 0x38)
void* r9 = arg1 + 0x20
void* var_c0 = r9
int32_t rcx = 0
int32_t var_c8 = 0
int64_t var_b4 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_14237c6c8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t arg_8 = temp0_2
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_b4:4.d = r8
            var_c8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14237c6c8
        
        var_b4.d = r11

int64_t* var_80 = arg1 + 0x10
int128_t var_90 = 0xffffffff
int16_t var_40 = 0
int128_t zmm3 = var_c8.o
int128_t zmm2 = (arg1 + 0x10).o
void* result = zmm3.q
int96_t var_68 = zmm3.12
int128_t var_78 = zmm2
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rdi_1 = *(*var_78.q + sx.q(i) * 0x18 + 8)
        void* rsi_1 = *(rdi_1 + 0x10)
        
        if (rsi_1 != 0)
            int32_t rax_13 = *(arg2 + 0xe00)
            
            if (rax_13 u>= 0x70)
                r9.b = 1
                r9, zmm2, zmm3 = sub_14198a900(&data_143f02b98, arg2, rax_13, r9.b, zmm2, zmm3)
                rax_13 = 0
            
            uint64_t rcx_4 = zx.q(rax_13) << 5
            *(arg2 + 0xe00) = rax_13 + 1
            int64_t var_30_1 = 0
            *(rcx_4 + arg2) = 0
            *(rcx_4 + arg2 + 8) = rsi_1.o
            *(rsi_1 + 8) += 1
        
        void* rsi_2 = *(rdi_1 + 0x18)
        int128_t var_a0
        
        if (rsi_2 != 0)
            int32_t rax_15 = *(arg2 + 0xe00)
            
            if (rax_15 u>= 0x70)
                r9.b = 1
                r9, zmm2, zmm3 = sub_14198a900(&data_143f02b98, arg2, rax_15, r9.b, zmm2, zmm3)
                rax_15 = 0
            
            int32_t* rcx_6 = zx.q(rax_15) << 5
            *(arg2 + 0xe00) = rax_15 + 1
            var_a0.q = 0
            var_a0:8.d = 0
            var_a0:0xc.b = 0
            *(rcx_6 + arg2 + 8) = rsi_2.o
            *(rcx_6 + arg2) = 2
            *(rcx_6 + arg2 + 0x18) = 0
            *(rsi_2 + 8) += 1
        
        void* rsi_3 = *(rdi_1 + 0x58)
        
        if (rsi_3 != 0)
            int32_t rax_17 = *(arg2 + 0xe00)
            
            if (rax_17 u>= 0x70)
                r9.b = 1
                r9, zmm2, zmm3 = sub_14198a900(&data_143f02b98, arg2, rax_17, r9.b, zmm2, zmm3)
                rax_17 = 0
            
            int32_t* rcx_8 = zx.q(rax_17) << 5
            *(arg2 + 0xe00) = rax_17 + 1
            int64_t var_20_1 = 0
            *(rcx_8 + arg2) = 0
            *(rcx_8 + arg2 + 8) = rsi_3.o
            *(rsi_3 + 8) += 1
        
        void* rdi_2 = *(rdi_1 + 0x60)
        
        if (rdi_2 != 0)
            int32_t rax_19 = *(arg2 + 0xe00)
            
            if (rax_19 u>= 0x70)
                r9.b = 1
                zmm2, zmm3 = sub_14198a900(&data_143f02b98, arg2, rax_19, r9.b, zmm2, zmm3)
                rax_19 = 0
            
            int32_t* rcx_10 = zx.q(rax_19) << 5
            *(arg2 + 0xe00) = rax_19 + 1
            var_a0.q = 0
            var_a0:8.d = 0
            var_a0:0xc.b = 0
            *(rcx_10 + arg2 + 8) = rdi_2.o
            *(rcx_10 + arg2) = 2
            *(rcx_10 + arg2 + 0x18) = 0
            *(rdi_2 + 8) += 1
        
        var_68:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
        result = var_68.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        return sub_1405b6730(arg1 + 0x10, *(arg1 + 0x18) - *(arg1 + 0x44), 1)

return result
