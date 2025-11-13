// 函数: sub_140da27c0
// 地址: 0x140da27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
void* result = EnterCriticalSection(arg1 + 0x148)

if (*(arg1 + 0x178) s> 0)
    int32_t r8_1 = 0
    int32_t var_78_1 = 0
    int32_t r10_1 = *(arg1 + 0x68)
    void* r9_1 = arg1 + 0x50
    int32_t rcx_1 = 0
    int32_t var_74_1 = 1
    void* var_70 = r9_1
    int32_t var_68_1 = 0xffffffff
    int64_t var_64_1 = 0
    
    if (r10_1 != 0)
        void* rax = *(r9_1 + 0x10)
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_140da2888:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_74_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_64_1.d = rcx_1 - rax_8 + 0x1f
            
            if (rcx_1 - rax_8 + 0x1f s> r10_1)
                var_64_1.d = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(r8_1)
                rcx_1 += 0x20
                r8_1 += 1
                var_64_1:4.d = rcx_1
                var_78_1 = r8_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_68_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140da2888
            
            var_64_1.d = r10_1
    
    void* var_10_1 = arg1 + 0x40
    int128_t var_20_1 = 0xffffffff
    int16_t var_40_1 = 0
    int128_t zmm3 = var_78_1.o
    result = zmm3.q
    var_78_1.o = (arg1 + 0x40).o
    int128_t zmm0
    zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_68_1.o = zmm3
    
    if (0 s< *(result + 0x18))
        int32_t i_1
        int32_t i = i_1
        
        do
            for (int64_t* j = *(arg1 + 0x170); j != &j[sx.q(*(arg1 + 0x178))]; j = &j[1])
                if (*j == *(*var_78_1.q + sx.q(i) * 0x90))
                    rsi.b = 1
                    sub_140dbaab0(zmm0:8.q, i)
                    var_40_1.b = 1
                    break
            
            var_64_1:4.d &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
            result = var_68_1.q
            i = i_1
        while (i s< *(result + 0x18))
        
        if (var_40_1.b != 0 && var_40_1:1.b != 0)
            result = sub_140d9c190(arg1 + 0x40, *(arg1 + 0x48) - *(arg1 + 0x74), 1)
    
    bool cond:1_1 = *(arg1 + 0x17c) == 0
    *(arg1 + 0x178) = 0
    
    if (not(cond:1_1))
        result = sub_1405c5570(arg1 + 0x170, 0)

if (arg1 != -0x148)
    result = LeaveCriticalSection(arg1 + 0x148)

if (rsi.b == 0)
    return result

return sub_140da2730(arg1)
