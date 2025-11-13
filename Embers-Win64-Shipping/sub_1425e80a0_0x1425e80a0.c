// 函数: sub_1425e80a0
// 地址: 0x1425e80a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = zx.q(arg2[7].d) ^ zx.q(*(arg1 + 0x80))

if (((*(arg2 + 0x44) ^ *(arg1 + 0x8c)) | (arg2[8].d ^ *(arg1 + 0x88))
        | (*(arg2 + 0x3c) ^ *(arg1 + 0x84)) | result.d) == 0)
    int32_t r11_1 = *(arg1 + 0x40)
    void* r9_5 = arg1 + 0x28
    int32_t rcx = 0
    int32_t var_74_1 = 1
    int32_t var_78_1 = 0
    int32_t r8 = 0
    void* var_70 = r9_5
    int32_t var_68_1 = 0xffffffff
    int64_t var_64_1 = 0
    
    if (r11_1 != 0)
        void* rax_5 = *(r9_5 + 0x10)
        
        if (rax_5 != 0)
            r9_5 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_5
        
        if (rdx_2 != 0)
        label_1425e8178:
            int32_t rax_12 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_74_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_64_1.d = r8 - rax_13 + 0x1f
            
            if (r8 - rax_13 + 0x1f s> r11_1)
                var_64_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_64_1:4.d = r8
                var_78_1 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_5 + (rdx_3 << 2) + 4)
                var_68_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_1425e8178
            
            var_64_1.d = r11_1
    
    void* var_10_1 = arg1 + 0x18
    int128_t zmm0 = var_78_1.o
    int128_t var_20_1 = 0xffffffff
    int16_t var_40_1 = 0
    result = zmm0.q
    var_68_1.o = zmm0
    var_78_1.o = (arg1 + 0x18).o
    zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_58_1 = zmm0
    
    if (0 s< result[3].d)
        int32_t i_1
        int32_t i = i_1
        void* r8_2
        
        do
            int64_t* rsi_1 = var_78_1.q
            int64_t* rcx_3 = *(*rsi_1 + sx.q(i) * 0x28 + 0x10)
            void* rax_18 = (*(*rcx_3 + 0x28))(rcx_3)
            int32_t r11_2 = arg2[4].d
            int32_t r10_1 = *(arg2 + 0x24)
            int32_t r9_6 = arg2[3].d
            
            if (((*(rax_18 + 4) ^ *(arg2 + 0x1c)) | (*(rax_18 + 8) ^ r11_2)
                    | (*(rax_18 + 0xc) ^ r10_1) | (r9_6 ^ *rax_18)) == 0)
                void* rbx_2 = *(*rsi_1 + sx.q(i) * 0x28 + 0x10)
                result = zx.q(*(rbx_2 + 0x84)) ^ zx.q(r10_1)
                
                if (((*(rbx_2 + 0x7c) ^ *(arg2 + 0x1c)) | (*(rbx_2 + 0x80) ^ r11_2) | result.d
                        | (r9_6 ^ *(rbx_2 + 0x78))) == 0)
                    sub_140597df0(rbx_2 + 0x40, arg2)
                    int64_t* rcx_16 = *arg3
                    *(rbx_2 + 0x60) = *(*(*rcx_16 + 0x48))(rcx_16)
                    *(rbx_2 + 0x70) = arg2[2].d
                    *(rbx_2 + 0x74) = *(arg2 + 0x14)
                    *(rbx_2 + 0xf0) = arg2[9].d
                    result, r8_2 = sub_140597df0(rbx_2 + 0x98, &arg2[5])
                
                break
            
            var_64_1:4.d &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
            result = var_68_1.q
            i = i_1
        while (i s< result[3].d)
        
        if (var_40_1.b != 0 && var_40_1:1.b != 0)
            r8_2.b = 1
            return sub_1425e4330(arg1 + 0x18, *(arg1 + 0x20) - *(arg1 + 0x4c), r8_2.b)

return result
