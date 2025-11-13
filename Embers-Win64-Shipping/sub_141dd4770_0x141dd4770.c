// 函数: sub_141dd4770
// 地址: 0x141dd4770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xd8))

if ((result.b & 2) != 0)
    int32_t r8_1 = 0
    *(arg1 + 0xd8) = result.d & 0xfffffffe
    int32_t rbx_1 = *(arg1 + 0x80)
    int32_t rcx = 0
    char arg_8 = 0
    int32_t var_b8_1 = 0
    int32_t var_b4_1 = 1
    void* var_b0_1 = arg1 + 0x68
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (rbx_1 != 0)
        void* rax_1 = *(arg1 + 0x78)
        void* r9_1 = arg1 + 0x68
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_141dd4848:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_b4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_a4_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> rbx_1)
                var_a4_1.d = rbx_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_a4_1:4.d = r8_1
                var_b8_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_a8_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141dd4848
            
            var_a4_1.d = rbx_1
    
    int32_t rdx_5 = *(arg1 + 0x80)
    int128_t var_58_1 = 0xffffffff
    int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_68_1 = var_b8_1.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_a8_3 = rsi_1
    var_a4_1.d = rdx_5
    int128_t var_98 = (arg1 + 0x58).o
    int128_t var_88_1 = var_68_1
    
    if (rdx_5 != rbx_1)
        void* rax_11 = *(arg1 + 0x78)
        void* r10_1 = arg1 + 0x68
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & rsi_1
        
        if (rdx_9 != 0)
        label_141dd4912:
            int32_t rax_18 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t r11_1
            
            if (rax_18 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_a4_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_a4_1.d = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_a8_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141dd4912
            
            var_a4_1.d = rbx_1
    
    while (true)
        result = sx.q(var_88_1:0xc.d)
        int64_t* rdx_10 = var_98.q
        
        if (result.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == arg1 + 0x68
                && rdx_10 == arg1 + 0x58)
            break
        
        uint64_t rcx_7 = result * 9
        int64_t rax_20 = *rdx_10
        int128_t zmm1
        zmm1.d = (*(arg1 + 0x30)).d f* 0.5f
        int128_t zmm0 = *(rax_20 + (rcx_7 << 3) + 0x1c)
        
        if (not(zmm0.d f<= zmm1.d))
            zmm0.d = zmm0.d f- zmm1.d
            arg_8 = 1
            *(rax_20 + (rcx_7 << 3) + 0x1c) = zmm0.d
        else if (not(zmm0.d f<= 0f))
            int32_t i = *(rax_20 + (rcx_7 << 3))
            *(rax_20 + (rcx_7 << 3) + 0x1c) = 0
            int32_t* rdx_11 = *(arg1 + 0xa8)
            int64_t r8_5 = sx.q(*(arg1 + 0xb0))
            int32_t* rax_21 = rdx_11
            void* rcx_8 = &rdx_11[r8_5]
            
            if (rdx_11 != rcx_8)
                while (*rax_21 != i)
                    rax_21 = &rax_21[1]
                    
                    if (rax_21 == rcx_8)
                        goto label_141dd49e0
            
            if (rdx_11 == rcx_8 || ((rax_21 - rdx_11) s>> 2).d == 0xffffffff)
            label_141dd49e0:
                int32_t rax_24 = (r8_5 + 1).d
                *(arg1 + 0xb0) = rax_24
                
                if (rax_24 s> *(arg1 + 0xb4))
                    sub_1405a4cf0(arg1 + 0xa8)
                
                *(*(arg1 + 0xa8) + (r8_5 << 2)) = i
        
        var_88_1:8.d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
    
    if (arg_8 != 0)
        return sub_141dd4e80(arg1)

return result
