// 函数: sub_1420deea0
// 地址: 0x1420deea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rcx = *(arg1 + 0xc0)

if (*(rcx + 0x218) != 0)
    int32_t i_3 = 0
    
    if (*(rcx + 0x219) == 0)
        int32_t i = 0
        
        if (*(arg1 + 0xd0) s> 0)
            int64_t* r14_1 = nullptr
            
            do
                int64_t* rcx_1 = *(r14_1 + *(arg1 + 0xc8))
                
                if (rcx_1 != 0 && (rcx_1[0x11].b & 1) != 0)
                    sub_141efdf10(rcx_1)
                
                i += 1
                r14_1 = &r14_1[1]
            while (i s< *(arg1 + 0xd0))
            
            rcx = *(arg1 + 0xc0)
    
    sub_14213d9c0(rcx)
    sub_1419a21e0(0)
    sub_1420e1760(*(arg1 + 0xc0) + 0x88, 0)
    sub_142158250(*(arg1 + 0xc0))
    int32_t i_1 = 0
    
    if (*(arg1 + 0xd0) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            void* rcx_5 = *(rsi_1 + *(arg1 + 0xc8))
            
            if (rcx_5 != 0)
                sub_141f09f30(rcx_5)
            
            i_1 += 1
            rsi_1 = &rsi_1[1]
        while (i_1 s< *(arg1 + 0xd0))
    
    int32_t rcx_6 = 0
    int32_t r8_1 = 0
    int32_t var_78_1 = 0
    int32_t var_74_1 = 1
    *(*(arg1 + 0xc0) + 0x218) = 0
    int64_t* rsi_3 = *(arg1 + 0xc0) + 0x88
    int32_t var_68_1 = 0xffffffff
    int32_t r11_1 = rsi_3[5].d
    void* r9_1 = &rsi_3[2]
    void* var_70 = r9_1
    int64_t var_64_1 = 0
    
    if (r11_1 != 0)
        void* rax_3 = *(r9_1 + 0x10)
        
        if (rax_3 != 0)
            r9_1 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_1420df028:
            int32_t rax_10 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_74_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            var_64_1.d = r8_1 - rax_11 + 0x1f
            
            if (r8_1 - rax_11 + 0x1f s> r11_1)
                var_64_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_6)
                r8_1 += 0x20
                rcx_6 += 1
                var_64_1:4.d = r8_1
                var_78_1 = rcx_6
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_68_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1420df028
            
            var_64_1.d = r11_1
    
    double zmm4_1[0x2] = var_68_1.o
    int64_t* var_10_1 = rsi_3
    int16_t var_40_1 = 0
    double zmm3_1[0x2] = var_78_1.o
    double rax_13 = zmm3_1[0]
    var_68_1.o = zmm3_1
    var_78_1.o = rsi_3.o
    double rcx_8 = zmm4_1[0]
    zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
    double var_58_1[0x2] = zmm4_1
    
    if ((rcx_8 u>> 0x20).d s< *(rax_13 i+ 0x18))
        int32_t i_4
        int32_t i_2 = i_4
        
        do
            int64_t rdx_5 = sx.q(i_2) * 3
            sub_141997e80(*(*var_78_1.q + (rdx_5 << 3) + 8), rdx_5)
            var_64_1:4.d &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
            i_2 = i_4
        while (i_2 s< *(var_68_1.q + 0x18))
        
        if (var_40_1.b != 0 && var_40_1:1.b != 0)
            sub_1405b6470(rsi_3, rsi_3[1].d - *(rsi_3 + 0x34), 1)
    
    if (*(arg1 + 0xd0) s> 0)
        int64_t* rsi_4 = nullptr
        
        do
            int64_t* rcx_14 = *(rsi_4 + *(arg1 + 0xc8))
            
            if (rcx_14 != 0)
                if (*(*(arg1 + 0xc0) + 0x219) == 0)
                    sub_141ef14c0(rcx_14, *(arg1 + 0xb8), 0)
                else
                    sub_141ef12d0(rcx_14)
            
            i_3 += 1
            rsi_4 = &rsi_4[1]
        while (i_3 s< *(arg1 + 0xd0))
    
    result = *(arg1 + 0xc0)
    *(result + 0x219) = 0

return result
