// 函数: sub_142101e90
// 地址: 0x142101e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
char arg_10
sub_141ff4780(&arg_10, arg2, 0, 0xd6)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
int32_t result = (*(*arg2 + 0x1d8))(arg2, &data_1439a94e8)

if ((arg_10 & 2) == 0)
    int512_t zmm1_1 = sub_1420f4a70(arg2, arg1 + 0x30, zmm1)
    
    if ((arg2[5].b & 1) != 0)
        int64_t rcx_4 = *(arg1 + 0x70)
        
        if (rcx_4 != 0)
            *(arg1 + 0x70) = sub_140a84c80(rcx_4, 0, 0)
        
        *(arg1 + 0x78) = 0
        zmm1_1 = sub_1420f6fd0(arg1 + 0x30, *(arg1 + 0x38) - *(arg1 + 0x64), 0)
    
    sub_1420f41b0(arg2, arg1 + 0x80, zmm1_1)
    
    if ((arg2[5].b & 1) != 0)
        int64_t rcx_7 = *(arg1 + 0xc0)
        
        if (rcx_7 != 0)
            *(arg1 + 0xc0) = sub_140a84c80(rcx_7, 0, 0)
        
        *(arg1 + 0xc8) = 0
        sub_140cb1970(arg1 + 0x80, *(arg1 + 0x88) - *(arg1 + 0xb4), 0)
    
    int32_t rax_4
    int512_t zmm1_2
    rax_4, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (rax_4 s>= 0x14)
        zmm1_2 = sub_1420f4450(arg2, arg1 + 0xd0, zmm1_2)
        
        if ((arg2[5].b & 1) != 0)
            int64_t rcx_11 = *(arg1 + 0x110)
            
            if (rcx_11 != 0)
                *(arg1 + 0x110) = sub_140a84c80(rcx_11, 0, 0)
            
            *(arg1 + 0x118) = 0
            zmm1_2 = sub_140cb1970(arg1 + 0xd0, *(arg1 + 0xd8) - *(arg1 + 0x104), 0)
    
    sub_1420f46f0(arg2, arg1 + 0x120, zmm1_2)
    
    if ((arg2[5].b & 1) != 0)
        int64_t rcx_14 = *(arg1 + 0x160)
        
        if (rcx_14 != 0)
            *(arg1 + 0x160) = sub_140a84c80(rcx_14, 0, 0)
        
        *(arg1 + 0x168) = 0
        sub_1420f6f20(arg1 + 0x120, *(arg1 + 0x128) - *(arg1 + 0x154), 0)
    
    if ((arg2[5].b & 2) != 0)
        int32_t var_84_1 = 1
        int32_t r11_1 = *(arg1 + 0x198)
        void* r9_1 = arg1 + 0x180
        void* var_80 = r9_1
        int32_t rcx_16 = 0
        int32_t var_88_1 = 0
        int32_t r8_1 = 0
        int32_t var_78_1 = 0xffffffff
        int64_t var_74_1 = 0
        
        if (r11_1 != 0)
            void* rax_7 = *(r9_1 + 0x10)
            
            if (rax_7 != 0)
                r9_1 = rax_7
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_15 = *r9_1
            
            if (rdx_15 != 0)
            label_1421020a8:
                int32_t rax_14 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
                int32_t var_84_2 = rax_14
                int32_t rax_15
                
                if (rax_14 == 0)
                    rax_15 = 0x20
                else
                    rax_15 = 0x1f - temp0_2
                
                var_74_1.d = r8_1 - rax_15 + 0x1f
                
                if (r8_1 - rax_15 + 0x1f s> r11_1)
                    var_74_1.d = r11_1
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_16)
                    r8_1 += 0x20
                    rcx_16 += 1
                    var_74_1:4.d = r8_1
                    var_88_1 = rcx_16
                    
                    if (rdx_16.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = *(r9_1 + (rdx_16 << 2) + 4)
                    var_78_1 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_1421020a8
                
                var_74_1.d = r11_1
        
        void* var_20_1 = arg1 + 0x170
        int128_t zmm0_1 = var_88_1.o
        int128_t var_30_1 = 0xffffffff
        int16_t var_50_1 = 0
        void* rax_17 = zmm0_1.q
        var_78_1.o = zmm0_1
        var_88_1.o = (arg1 + 0x170).o
        zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_68_1 = zmm0_1
        
        if (0 s< *(rax_17 + 0x18))
            int32_t i
            
            do
                var_74_1:4.d &= not.d(var_80:4.d)
                sub_14059bdd0(&var_80)
            while (i s< *(var_78_1.q + 0x18))
            
            if (var_50_1.b != 0 && var_50_1:1.b != 0)
                sub_1420f7080(arg1 + 0x170, *(arg1 + 0x178) - *(arg1 + 0x1a4), 1)
    
    int32_t rax_21
    int512_t zmm1_4
    rax_21, zmm1_4 = sub_140b4e7c0(arg2, &data_1439a94e8)
    
    if (rax_21 s>= 1)
        sub_1420f4d20(arg2, arg1 + 0x170, zmm1_4)
        
        if ((arg2[5].b & 1) != 0)
            int64_t rcx_23 = *(arg1 + 0x1b0)
            
            if (rcx_23 != 0)
                *(arg1 + 0x1b0) = sub_140a84c80(rcx_23, 0, 0)
            
            *(arg1 + 0x1b8) = 0
            sub_1420f7080(arg1 + 0x170, *(arg1 + 0x178) - *(arg1 + 0x1a4), 0)
    
    int512_t zmm1_5
    result, zmm1_5 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (result s>= 0x20)
        result = sub_1420f4fc0(arg2, arg1 + 0x1c0, zmm1_5)
        
        if ((arg2[5].b & 1) != 0)
            int64_t rcx_27 = *(arg1 + 0x200)
            
            if (rcx_27 != 0)
                *(arg1 + 0x200) = sub_140a84c80(rcx_27, 0, 0)
            
            *(arg1 + 0x208) = 0
            return sub_141a407a0(arg1 + 0x1c0, *(arg1 + 0x1c8) - *(arg1 + 0x1f4), 0)

return result
