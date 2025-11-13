// 函数: sub_14194e2d0
// 地址: 0x14194e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143eff638 == 0)
    return 

int32_t* r11_2 = sx.q(*(arg1 + 0x20)) * 0x58 + *arg1
int32_t rsi_1 = r11_2[4]
int32_t rsi_2 = rsi_1 - r11_2[0xf]

if (rsi_1 != r11_2[0xf])
    void* r10_1 = &r11_2[2]
    void* r9_1 = r10_1 + 0x10
    int32_t rdi_1 = *(r9_1 + 0x18)
    int32_t var_84_1 = 1
    int32_t rcx = 0
    int32_t var_88_1 = 0
    int32_t r8_1 = 0
    void* var_80 = r9_1
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (rdi_1 != 0)
        void* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp24_1
        int32_t temp25_1
        temp24_1:temp25_1 = sx.q(rdi_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_14194e3a8:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_84_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_1
            
            int64_t rax = zx.q(r8_1 - rax_8 + 0x1f)
            var_74_1.d = rax.d
            
            if (rax.d s> rdi_1)
                var_74_1.d = rdi_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_74_1:4.d = r8_1
                var_88_1 = rcx
                
                if (rdx_4.d s>= (temp25_1 + (temp24_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_14194e3a8
            
            var_74_1.d = rdi_1
    
    if (*r11_2 s<= rsi_2)
        rsi_2 = *r11_2
    
    int32_t rsi_3 = rsi_2 - 1
    int128_t var_50_1 = var_88_1.o
    void* var_60_1 = r10_1
    int128_t var_40_1 = 0xffffffff
    var_88_1.o = r10_1.o
    var_78_1.o = var_50_1
    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    
    if (rsi_2 - 1 s>= 0)
        while (true)
            int32_t var_6c
            int64_t rdx_5 = sx.q(var_6c)
            void* rbx_1 = *(*var_88_1.q + rdx_5 * 0x10)
            sub_1418ebff0(r10_1, rdx_5.d)
            var_74_1:4.d &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
            data_143eff87c = 1
            *(rbx_1 + 0x668) = 0xfffffffd
            sub_14193d1f0()
            int32_t arg_10
            sub_14193a410(&data_1439c76c8, &arg_10, rbx_1 + 0x450)
            int64_t rcx_4 = sx.q(arg_10)
            
            if (rcx_4.d != 0xffffffff)
                int64_t rbx_3 = rcx_4 << 4
                
                if (rbx_3 != neg.q(data_1439c76c8))
                    int128_t* rbx_5 = *(rbx_3 + data_1439c76c8)
                    void* r14_1 = *(rbx_5 + 0x88)
                    
                    if (rbx_5 != 0)
                        sub_14194b680(&data_1439c76c8, rbx_5)
                        
                        if (rbx_5 == data_1439c7718)
                            data_1439c7718 = rbx_5[8].q
                        
                        if (rbx_5 == data_1439c7720)
                            data_1439c7720 = *(rbx_5 + 0x78)
                        
                        void* rcx_5 = *(rbx_5 + 0x78)
                        
                        if (rcx_5 != 0)
                            *(rcx_5 + 0x80) = rbx_5[8].q
                        
                        void* rcx_6 = rbx_5[8].q
                        
                        if (rcx_6 != 0)
                            *(rcx_6 + 0x78) = *(rbx_5 + 0x78)
                        
                        *(rbx_5 + 0x78) = 0
                        rbx_5[8].q = 0
                        j_sub_140a74f90(rbx_5)
                    
                    sub_141939cd0(&data_1439c76c0, r14_1)
            
            int32_t temp26_1 = rsi_3
            rsi_3 -= 1
            data_143eff87c = 0
            
            if (temp26_1 - 1 s< 0)
                break
            
            r10_1 = var_60_1

int32_t temp4_1 = *(arg1 + 0x18)
*(arg1 + 0x18) -= 1

if (temp4_1 != 1)
    return 

int32_t r9_4 = *(arg1 + 0x14)
int32_t temp5_1
int32_t temp6_1
temp5_1:temp6_1 = sx.q(*(arg1 + 0x20) + 1)
*(arg1 + 0x18) = r9_4
int64_t rcx_8 = sx.q(mods.dp.d(temp5_1:temp6_1, *(arg1 + 8)))
int32_t temp11_1
int32_t temp12_1
temp11_1:temp12_1 = sx.q(*(arg1 + 0x1c) + 1)
*(arg1 + 0x20) = rcx_8.d
*(arg1 + 0x1c) = mods.dp.d(temp11_1:temp12_1, *(arg1 + 8))
int32_t* r8_6 = rcx_8 * 0x58 + *arg1
*r8_6 = divs.dp.d(sx.q(r8_6[4] - r8_6[0xf] - 1), r9_4) + 1
