// 函数: sub_140bbfb20
// 地址: 0x140bbfb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* rax =
    sub_140af5690(data_143ddb400, /Script/Engine.StreamingSettings", 0, 1, &data_143de5780)

if (rax != 0)
    int32_t r11_1 = rax[5].d
    void* r9_1 = &rax[2]
    int32_t var_84_1 = 1
    int32_t rcx_1 = 0
    int32_t var_88_1 = 0
    int32_t r8_1 = 0
    void* var_80 = r9_1
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_140bbfbe8:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_84_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_74_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r11_1)
                var_74_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_74_1:4.d = r8_1
                var_88_1 = rcx_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140bbfbe8
            
            var_74_1.d = r11_1
    
    int64_t* var_20_1 = rax
    int128_t zmm0_1 = var_88_1.o
    int128_t var_30_1 = 0xffffffff
    int16_t var_50_1 = 0
    void* rax_11 = zmm0_1.q
    var_78_1.o = zmm0_1
    var_88_1.o = rax.o
    zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_68_1 = zmm0_1
    
    if (0 s< *(rax_11 + 0x18))
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t* rsi_1 = var_88_1.q
            int64_t rdi_2 = sx.q(i) * 0x30
            
            if (sub_140b5b9d0(*rsi_1 + rdi_2, u"FixedBootOrder") != 0)
                void* rdx_6 = *rsi_1 + rdi_2
                int32_t rax_14 = *(rdx_6 + 0x20)
                int32_t rcx_5 = rax_14 - 1
                int64_t* rax_15 = 0x18
                
                if (rax_14 == 0)
                    rcx_5 = 0
                
                if (rcx_5 s<= 0)
                    rax_15 = 8
                
                int16_t* rdx_7
                
                if (*(rax_15 + rdx_6 + 8) == 0)
                    rdx_7 = &data_142d40450
                else
                    rdx_7 = *(rax_15 + rdx_6)
                
                void arg_8
                int64_t* rax_16 = sub_140b58260(&arg_8, rdx_7, 1)
                int64_t rdi_3 = sx.q(arg1[1].d)
                int32_t rcx_7 = (rdi_3 + 1).d
                arg1[1].d = rcx_7
                
                if (rcx_7 s> *(arg1 + 0xc))
                    sub_1405a4d70(arg1)
                
                *(*arg1 + (rdi_3 << 3)) = *rax_16
            
            var_74_1:4.d &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
            i = i_1
        while (i s< *(var_78_1.q + 0x18))
        
        if (var_50_1.b != 0 && var_50_1:1.b != 0)
            sub_140a6d3f0(rax, rax[1].d - *(rax + 0x34), 1)

return arg1
