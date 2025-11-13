// 函数: sub_141e88d80
// 地址: 0x141e88d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
int128_t var_f8

if (arg3 != 0)
    var_f8 = zx.o(0)
    sub_141e75650(&var_f8)
    sub_141e8d480(&var_f8)
    int64_t* rbx_1 = var_f8:8.q
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x20))(rbx_1, 0xffffffff, 0)
        sub_140a4fc50(rbx_1)
    
    void* rcx_5 = var_f8.q
    
    if (rcx_5 != 0)
        int32_t rax_4 = *(rcx_5 + 0x48)
        *(rcx_5 + 0x48) -= 1
        
        if (rax_4 == 1)
            sub_140a2f6e0(var_f8.q)
else if (sub_140a80ea0() == 0)
    void** const var_58 = &data_142d42ed8
    var_f8.q = rdi
    var_f8:8.q = arg2
    int128_t zmm0 = var_f8
    int64_t (* var_78)(int64_t* arg1) = sub_141e76610
    int64_t* var_68 = arg3
    int128_t var_50 = zmm0
    return sub_141e85cb0(&var_78, arg4)
int32_t rax_5 = *(rdi + 0x380)
int64_t r12 = sx.q(rax_5 - 1)

if (rax_5 - 1 s>= 0)
    int64_t temp6_1
    
    do
        int32_t rcx_7 = 0
        int32_t r8 = 0
        int32_t var_e8_1 = 0
        int32_t var_e4_1 = 1
        int32_t var_d8_1 = 0xffffffff
        void* r13_1 = *(*(rdi + 0x378) + (r12 << 3))
        int64_t var_d4_1 = 0
        int32_t r10_1 = *(r13_1 + 0x158)
        void* var_e0_1 = r13_1 + 0x140
        
        if (r10_1 != 0)
            void* rax_8 = *(r13_1 + 0x150)
            void* r9_1 = r13_1 + 0x140
            
            if (rax_8 != 0)
                r9_1 = rax_8
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_141e88f2b:
                int32_t rax_15 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
                int32_t var_e4_2 = rax_15
                int32_t rax_16
                
                if (rax_15 == 0)
                    rax_16 = 0x20
                else
                    rax_16 = 0x1f - temp0_2
                
                var_d4_1.d = r8 - rax_16 + 0x1f
                
                if (r8 - rax_16 + 0x1f s> r10_1)
                    var_d4_1.d = r10_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_7)
                    r8 += 0x20
                    rcx_7 += 1
                    var_d4_1:4.d = r8
                    var_e8_1 = rcx_7
                    
                    if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    int32_t var_d8_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_141e88f2b
                
                var_d4_1.d = r10_1
        
        int32_t rdx_6 = *(r13_1 + 0x158)
        int128_t var_c0_1 = var_e8_1.o
        int32_t rsi_1 = 0xffffffff << (rdx_6.b & 0x1f)
        int32_t r8_3 = rdx_6 s>> 5
        int32_t r9_3 = rdx_6 & 0xffffffe0
        int128_t var_b0_1 = 0xffffffff
        int64_t var_80_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t zmm1 = var_c0_1
        var_c0_1:8.d = rsi_1
        var_c0_1:0xc.d = rdx_6
        int128_t var_a0 = (r13_1 + 0x130).o
        int128_t var_90_1 = zmm1
        
        if (rdx_6 != r10_1)
            void* rax_18 = *(r13_1 + 0x150)
            void* r11_1 = r13_1 + 0x140
            
            if (rax_18 != 0)
                r11_1 = rax_18
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_1 - 1)
            int32_t rdx_10 = *(r11_1 + (sx.q(r8_3) << 2)) & rsi_1
            
            if (rdx_10 != 0)
            label_141e89002:
                int32_t rax_25 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
                int32_t rax_26
                
                if (rax_25 == 0)
                    rax_26 = 0x20
                else
                    rax_26 = 0x1f - temp0_4
                
                var_c0_1:0xc.d = r9_3 - rax_26 + 0x1f
                
                if (r9_3 - rax_26 + 0x1f s> r10_1)
                    var_c0_1:0xc.d = r10_1
            else
                while (true)
                    int64_t rcx_12 = sx.q(r8_3)
                    r9_3 += 0x20
                    r8_3 += 1
                    
                    if (rcx_12.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r11_1 + (rcx_12 << 2) + 4)
                    var_c0_1:8.d = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_141e89002
                
                var_c0_1:0xc.d = r10_1
        
        while (true)
            int64_t rax_28 = sx.q(var_90_1:0xc.d)
            int64_t* rdx_11 = var_a0.q
            
            if (rax_28.d == (var_c0_1:8.q u>> 0x20).d && var_90_1.q == r13_1 + 0x140
                    && rdx_11 == r13_1 + 0x130)
                rdi = arg1
                break
            
            if (**(*rdx_11 + rax_28 * 0x18 + 8) == arg2)
                if (arg3 != 0)
                    int64_t rax_33 = sub_141ee2150(*(r13_1 + 0x28))
                    
                    if (rax_33 != 0)
                        int64_t rbx_4 = sx.q(arg3[1].d)
                        int32_t rcx_18 = (rbx_4 + 1).d
                        arg3[1].d = rcx_18
                        
                        if (rcx_18 s> *(arg3 + 0xc))
                            sub_1405a4d70(arg3)
                        
                        *(*arg3 + (rbx_4 << 3)) = rax_33
                
                rdi = arg1
                sub_141e744f0(rdi, r13_1)
                break
            
            var_90_1:8.d &= not.d(var_a0:0xc.d)
            sub_14059bdd0(&var_a0:8)
        
        temp6_1 = r12
        r12 -= 1
    while (temp6_1 - 1 s>= 0)

return sub_141e82850(rdi, 0) __tailcall
