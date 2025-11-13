// 函数: sub_14084aae0
// 地址: 0x14084aae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = 0
int32_t rdi = 0

if (data_143ce42d8 != 0)
    return 6

uint32_t rcx = zx.d(*(arg1 + 0x38))

if (rcx == 1)
    rbx = 6
    uint32_t rcx_15 = zx.d(*(*(arg1 + 0x28) + 0x38))
    
    if (rcx_15 u< 6)
        rbx = rcx_15
else if (rcx != 2)
    if (rcx == 3)
        return 6
    
    void* rax_2 = *(arg1 + 0x30)
    
    if (rax_2 != 0)
        char rcx_3 = *(rax_2 + 0x39)
        char rax_3 = *(rax_2 + 0x38)
        
        if (rax_3 u>= rcx_3)
            rcx_3 = rax_3
        
        uint32_t rdi_1 = zx.d(rcx_3)
        rdi = rdi_1 + 1
        
        if (rdi_1 == 0xffffffff)
            rdi = 0
    
    if ((*(arg1 + 0x6b8) & 0x40) != 0)
        int32_t rcx_4 = 0
        int32_t r8_1 = 0
        int32_t rsi_1 = *(arg1 + 0x128)
        int32_t var_98_1 = 0
        int32_t var_94_1 = 1
        void* var_90_1 = arg1 + 0x110
        int32_t var_88_1 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (rsi_1 != 0)
            void* rax_4 = *(arg1 + 0x120)
            void* r9_1 = arg1 + 0x110
            
            if (rax_4 != 0)
                r9_1 = rax_4
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(rsi_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_14084ac08:
                int32_t rax_11 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_11)
                int32_t var_94_2 = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_1
                
                var_84_1.d = r8_1 - rax_12 + 0x1f
                
                if (r8_1 - rax_12 + 0x1f s> rsi_1)
                    var_84_1.d = rsi_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_4)
                    r8_1 += 0x20
                    rcx_4 += 1
                    var_84_1:4.d = r8_1
                    var_98_1 = rcx_4
                    
                    if (rdx_4.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_14084ac08
                
                var_84_1.d = rsi_1
        
        int32_t rdx_5 = *(arg1 + 0x128)
        var_84_1.d = rdx_5
        int32_t r9_2 = 0xffffffff << (rdx_5.b & 0x1f)
        int32_t var_88_3 = r9_2
        int128_t var_48_1 = var_98_1.o
        int32_t r9_4 = rdx_5 & 0xffffffe0
        int32_t r8_4 = rdx_5 s>> 5
        int128_t var_38_1 = 0xffffffff
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t var_78 = (arg1 + 0x100).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_5 != rsi_1)
            void* rax_14 = *(arg1 + 0x120)
            void* r10_1 = arg1 + 0x110
            
            if (rax_14 != 0)
                r10_1 = rax_14
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(rsi_1 - 1)
            int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r9_2
            
            if (rdx_9 != 0)
            label_14084acd4:
                int32_t rax_21 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_21)
                int32_t r11_1
                
                if (rax_21 == 0)
                    r11_1 = 0x20
                else
                    r11_1 = 0x1f - temp0_3
                
                var_84_1.d = r9_4 - r11_1 + 0x1f
                
                if (r9_4 - r11_1 + 0x1f s> rsi_1)
                    var_84_1.d = rsi_1
            else
                while (true)
                    int64_t rcx_9 = sx.q(r8_4)
                    r9_4 += 0x20
                    r8_4 += 1
                    
                    if (rcx_9.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r10_1 + (rcx_9 << 2) + 4)
                    var_88_3 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_14084acd4
                
                var_84_1.d = rsi_1
        
        while (true)
            int32_t var_5c
            int64_t rax_23 = sx.q(var_5c)
            int64_t* rdx_10 = var_78.q
            
            if (rax_23.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x110
                    && rdx_10 == arg1 + 0x100)
                break
            
            int32_t* rsi_2 = *rdx_10 + rax_23 * 0x14
            int64_t* rax_25 = sub_140d3c6e0(rsi_2)
            
            if (rax_25 != 0)
                int64_t r8_5 = *rax_25
                int32_t rax_26 = (*(r8_5 + 0x308))(rax_25, sx.q(rsi_2[2]) + *(arg1 + 0xf0), r8_5)
                
                if (rdi s>= rax_26)
                    rax_26 = rdi
                
                rdi = rax_26
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    if (rdi s>= 0)
        int32_t rbx_1 = 6
        
        if (rdi s< 6)
            rbx_1 = rdi
        
        return zx.q(rbx_1)

return zx.q(rbx)
