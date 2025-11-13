// 函数: sub_140b81fb0
// 地址: 0x140b81fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
int64_t* var_48
int64_t* result = sub_140b75db0(arg2, &var_48, arg3)
int64_t* rcx_1 = var_48

if (rcx_1 != 0 && rcx_1[1].d == 6)
    int32_t var_b4_1 = 1
    int32_t var_a8_1 = 0xffffffff
    void* r14_1 = *(**rcx_1)(rcx_1)
    int32_t r11_1 = *(r14_1 + 0x28)
    void* r13_1 = r14_1 + 0x10
    void* arg_20 = r14_1
    int32_t rcx_2 = 0
    int32_t var_b8_1 = 0
    int32_t r8 = 0
    void* var_b0_1 = r13_1
    int64_t var_a4_1 = 0
    
    if (r11_1 != 0)
        void* rax_3 = *(r13_1 + 0x10)
        void* r9_1 = r13_1
        
        if (rax_3 != 0)
            r9_1 = rax_3
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_140b820a8:
            int32_t rax_10 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_b4_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_1
            
            var_a4_1.d = r8 - rax_11 + 0x1f
            
            if (r8 - rax_11 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_2)
                r8 += 0x20
                rcx_2 += 1
                var_a4_1:4.d = r8
                var_b8_1 = rcx_2
                
                if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_a8_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140b820a8
            
            var_a4_1.d = r11_1
    
    int32_t rdx_5 = *(r14_1 + 0x28)
    void* var_98 = r14_1
    int128_t var_90_1 = var_b8_1.o
    int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t zmm0_1 = var_98.o
    int32_t r8_3 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int128_t var_80_1 = 0xffffffff
    int64_t var_50_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int64_t zmm1 = var_90_1:8.q
    var_90_1:8.d = rsi_1
    var_90_1:0xc.d = rdx_5
    int128_t var_70 = zmm0_1
    
    if (rdx_5 != r11_1)
        void* rax_13 = *(r13_1 + 0x10)
        void* r10_1 = r13_1
        
        if (rax_13 != 0)
            r10_1 = rax_13
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
        
        if (rdx_9 != 0)
        label_140b82172:
            int32_t rax_20 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t rbx_1
            
            if (rax_20 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_3
            
            var_90_1:0xc.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_90_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_7.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
                var_90_1:8.d = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_140b82172
            
            var_90_1:0xc.d = r11_1
    
    while (true)
        int32_t result_1
        result = sx.q(result_1)
        int64_t* rdx_10 = var_70.q
        
        if (result.d == (var_90_1:8.q u>> 0x20).d && zmm1 == r13_1 && rdx_10 == r14_1)
            break
        
        void* rcx_9 = result * 5
        int64_t rax_22 = *rdx_10
        int64_t* rbx_2 = rax_22 + (rcx_9 << 3)
        int32_t rax_23 = *(rax_22 + (rcx_9 << 3) + 8)
        int16_t* rdx_11
        
        if (rax_23 == 0)
            rdx_11 = &data_142d40450
        else
            rdx_11 = *rbx_2
        
        int32_t rcx_10 = rax_23 - 1
        
        if (rax_23 == 0)
            rcx_10 = 0
        
        int64_t* rax_25 = sub_140b76e00(r15, sub_1405969c0(rcx_10, rdx_11), rbx_2)
        int64_t* rcx_12 = rbx_2[2]
        
        if (rcx_12 != 0 && rcx_12[1].d == 5)
            int64_t*** rax_26 = sub_140b74a70(rcx_12)
            int64_t** rbx_3 = *rax_26
            void* r15_3 = &rbx_3[sx.q(rax_26[1].d) * 2]
            
            if (rbx_3 != r15_3)
                do
                    int64_t* rcx_13 = *rbx_3
                    
                    if (rcx_13[1].d == 2)
                        int64_t* rax_27 = sub_140b74df0(rcx_13, &var_98)
                        int64_t r14_2 = sx.q(rax_25[1].d)
                        int32_t rcx_14 = (r14_2 + 1).d
                        rax_25[1].d = rcx_14
                        
                        if (rcx_14 s> *(rax_25 + 0xc))
                            sub_1405a4f90(rax_25)
                        
                        int64_t* rcx_18 = (r14_2 << 4) + *rax_25
                        *rcx_18 = 0
                        *rcx_18 = *rax_27
                        *rax_27 = 0
                        rcx_18[1].d = rax_27[1].d
                        *(rcx_18 + 0xc) = *(rax_27 + 0xc)
                        rax_27[1] = 0
                        void* rcx_19 = var_98
                        
                        if (rcx_19 != 0)
                            sub_140a74f90(rcx_19)
                    
                    rbx_3 = &rbx_3[2]
                while (rbx_3 != r15_3)
                
                r13_1 = var_b0_1
                r14_1 = arg_20
            
            r15 = arg1
        
        int32_t var_58 = var_58 & not.d(var_70:0xc.d)
        sub_14059bdd0(&var_70:8)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        result = (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_40 + 8))(var_40, 1)

return result
