// 函数: sub_14145a6d0
// 地址: 0x14145a6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg1
float zmm6[0x4] = sub_141986d90(arg1)
void* r15 = *(arg3 + 8)
int32_t r8 = data_143ed579c
int64_t rdx_1 = sx.q((*U"1111")[sx.q(*(arg2 + 8))])

if (rdx_1.d u> 0x18)
    if (*(rdx_1 * 0x14 + &data_143f025f0) == data_143f025b8 || (rdx_1 - 0x19).d u<= 1
            || *(rdx_1 * 0x14 + &data_143f025f0) == data_143f025d0 || r8 == 0)
        goto label_14145a76e
    
    arg5 = 1
else if (test_bit(0x100a040, rdx_1.d) || *(rdx_1 * 0x14 + &data_143f025f0) == data_143f025b8
    || (rdx_1 - 0x19).d u<= 1 || *(rdx_1 * 0x14 + &data_143f025f0) == data_143f025d0 || r8 == 0)
label_14145a76e:
    arg5 = 0
    
    if (r8 == 2)
        arg5 = 1
else
    arg5 = 1

int32_t rdi = 1
int32_t var_128

if (*(arg3 + 0x4fd8) != 0)
    void* var_c0_1 = arg3
    void* var_b8_1 = arg3
    void** const var_c8 = &data_142f29fd0
    int64_t var_b0_1 = (zx.o(0)).q
    int64_t var_a0_1 = 0
    int32_t r8_1 = 0
    int32_t r11_1 = *(arg3 + 0x15d0)
    int32_t rsi_1 = 1
    var_128 = 0
    int32_t r15_1 = -1
    int32_t var_124_1 = 1
    int32_t rcx_2 = 0
    int32_t r9 = 0
    int32_t var_114_1 = 0
    
    if (r11_1 != 0)
        void* rax_4 = *(arg3 + 0x15c8)
        void* r10_1 = arg3 + 0x15b8
        rcx_2 = r11_1
        
        if (rax_4 != 0)
            r10_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rax_7 = *r10_1
        
        if (rax_7 != 0)
        label_14145a84b:
            rsi_1 = neg.d(rax_7) & rax_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rsi_1)
            var_124_1 = rsi_1
            int32_t rax_9
            
            if (rsi_1 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            int32_t rax_10 = r9 - rax_9 + 0x1f
            
            if (rax_10 s> rcx_2)
                rax_10 = rcx_2
            
            rcx_2 = rax_10
            var_114_1 = rax_10
        else
            while (true)
                int64_t rax_8 = sx.q(r8_1)
                r9 += 0x20
                r8_1 += 1
                var_114_1 = r9
                var_128 = r8_1
                
                if (rax_8.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    var_114_1 = rcx_2
                    break
                
                rax_7 = *(r10_1 + (rax_8 << 2) + 4)
                r15_1 = -1
                
                if (rax_7 != 0)
                    goto label_14145a84b
    
    if (rcx_2 s< r11_1)
        int128_t zmm9 = zx.o(0)
        float var_58_1[0x4] = zmm6
        int128_t zmm7
        int128_t var_68_1 = zmm7
        float zmm8[0x4]
        float var_78_1[0x4] = zmm8
        
        while (true)
            int64_t r9_2 = sx.q(rcx_2)
            
            if ((*(r9_2 + *(arg2 + 0xe18)) & 9) == 9)
                int64_t rdx_7 = *(*(arg2 + 0xe08) + (r9_2 << 3))
                
                if ((*(sx.q(rdx_7.d) + *(arg3 + 0x4fd8)) & (rdx_7 u>> 0x20).b) == 0)
                    void* rax_14 = *(arg3 + 0x15c8)
                    void* rdx_9 = arg3 + 0x15b8
                    int64_t rcx_5 = sx.q(r8_1)
                    
                    if (rax_14 != 0)
                        rdx_9 = rax_14
                    
                    *(rdx_9 + (rcx_5 << 2)) &= not.d(rsi_1)
                    
                    if (data_143ed57a0 != 0)
                        int32_t arg_18 = 0xff643232
                        int128_t* rbx_2 = r9_2 * 0x1c + *(arg2 + 0xe28)
                        void var_98
                        sub_140acc920(&var_98, &arg_18)
                        zmm6 = *rbx_2
                        float zmm2[0x4] = *(rbx_2 + 8)
                        int128_t zmm5_1 = *(rbx_2 + 4)
                        zmm2[0] = zmm2[0] f+ *(rbx_2 + 0x14)
                        zmm2[0] = zmm2[0] f- *(rbx_2 + 0x14)
                        zmm6[0] = zmm6[0] f- *(rbx_2 + 0xc)
                        zmm6[0] = zmm6[0] f+ *(rbx_2 + 0xc)
                        float var_d0_1 = zmm2[0]
                        zmm7 = zmm5_1
                        zmm5_1.d = zmm5_1.d f- rbx_2[1].d
                        zmm7.d = zmm7.d f+ rbx_2[1].d
                        float var_f8_1 = zmm2[0]
                        int64_t var_100 = (_mm_unpacklo_ps(zmm6, zmm5_1.q)).q
                        int64_t var_f4_1 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
                        float var_ec_1 = var_d0_1
                        char var_e8_1 = 1
                        zmm9 = sub_14229ae30(&var_c8, &var_100, &var_98, 1, zmm9.d, zmm9.d, 0)
            
            sub_14059bdd0(&var_128)
            rcx_2 = var_114_1
            
            if (rcx_2 s>= *(arg3 + 0x15d0))
                break
            
            r15_1 &= not.d(rsi_1)
            rsi_1 = var_124_1
            r8_1 = var_128
        
        if (var_b0_1 != 0)
            int32_t temp4_1 = *(var_b0_1 + 8)
            *(var_b0_1 + 8) -= 1
            
            if (temp4_1 == 1)
                (**var_b0_1)(var_b0_1, 1)
    
    r12 = arg1

int32_t rdi_1

if (r15 == 0)
    rdi_1 = 0
else
    int64_t* rcx_10 = *(r15 + 0x418)
    
    if (rcx_10 != 0)
        rdi_1 = sub_141422f70(rcx_10, r12, arg2, arg3)
    else if (*(arg2 + 8) s< 1)
        void* r10_2 = arg3 + 0x15b8
        var_128 = 0
        int32_t rsi_6 = *(r10_2 + 0x18)
        int32_t r8_5 = 0
        int32_t var_124_2 = 1
        int32_t r9_5 = -1
        void* var_120_2 = r10_2
        int32_t r11_2 = 0
        int32_t var_114_2 = 0
        int32_t rcx_18 = 0
        
        if (rsi_6 != 0)
            void* rax_29 = *(r10_2 + 0x10)
            r11_2 = rsi_6
            
            if (rax_29 != 0)
                r10_2 = rax_29
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rsi_6 - 1)
            int32_t rdx_19 = *r10_2
            
            if (rdx_19 != 0)
            label_14145abd9:
                rdi = neg.d(rdx_19) & rdx_19
                uint64_t rflags_2
                int32_t temp0_5
                temp0_5, rflags_2 = _bit_scan_reverse(rdi)
                var_124_2 = rdi
                int32_t r15_4
                
                if (rdi == 0)
                    r15_4 = 0x20
                else
                    r15_4 = 0x1f - temp0_5
                
                int32_t rax_35 = rcx_18 - r15_4 + 0x1f
                
                if (rax_35 s> rsi_6)
                    rax_35 = rsi_6
                
                r11_2 = rax_35
                var_114_2 = rax_35
            else
                while (true)
                    int64_t rdx_20 = sx.q(r8_5)
                    rcx_18 += 0x20
                    r8_5 += 1
                    var_114_2 = rcx_18
                    var_128 = r8_5
                    
                    if (rdx_20.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        var_114_2 = rsi_6
                        break
                    
                    rdx_19 = *(r10_2 + (rdx_20 << 2) + 4)
                    r9_5 = -1
                    
                    if (rdx_19 != 0)
                        goto label_14145abd9
        
        if (r11_2 s< rsi_6)
            while (true)
                void* rax_36 = *(arg3 + 0x15e8)
                void* rcx_20 = arg3 + 0x15d8
                
                if (rax_36 != 0)
                    rcx_20 = rax_36
                
                int64_t rax_37 = sx.q(r8_5)
                *(rcx_20 + (rax_37 << 2)) |= rdi
                sub_14059bdd0(&var_128)
                
                if (var_114_2 s>= *(var_120_2 + 0x18))
                    break
                
                r9_5 &= not.d(rdi)
                rdi = var_124_2
                r8_5 = var_128
        
        rdi_1 = 0
    else
        uint8_t rbx_4 = not.b((*(arg3 + 0x497c) u>> 5).b) & 1
        
        if (arg5 != 0)
            sub_1414217e0(r15 + 0x138, r12)
        
        if (*(*(arg3 + 0x15a8) + 0x4c1) != 0 && *(arg3 + 0xd72) == 0
                && (*(arg3 + 0x497c) & 0x10) == 0 && sub_142391f10(arg3) != 0)
            char rax_26
            
            if ((*(*(arg3 + 0x15a8) + 0x1a0) & 1) == 0)
                rax_26 = sub_142391cc0(arg3)
            else
                rax_26 = sub_142391c60(arg3)
            
            if (rax_26 == 0)
                rbx_4 = 0
        
        rdi_1 = sub_141453840(arg2, arg3, rbx_4, arg5, arg4)
        
        if (arg5 != 0)
            sub_141430580(r15 + 0x138, r12)
            
            if (rbx_4 != 0)
                sub_1414297c0(r15 + 0x138, *(r15 + 0x214))

sub_141986d90(r12)
return zx.q(rdi_1)
