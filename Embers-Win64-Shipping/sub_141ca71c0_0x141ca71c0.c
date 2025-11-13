// 函数: sub_141ca71c0
// 地址: 0x141ca71c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
void var_2b8
sub_141c92d40(&var_2b8)
sub_141cb0600(&var_2b8, arg2, arg1 + 0x278, arg4)

if ((arg2[5].b & 1) != 0)
    int32_t rcx_2 = 0
    int32_t r8_1 = 0
    int32_t rbx_1 = *(arg1 + 0x30)
    int32_t var_338 = 0
    int32_t var_334_1 = 1
    void* var_330_1 = arg1 + 0x18
    int32_t var_328_1 = 0xffffffff
    int64_t var_324_1 = 0
    
    if (rbx_1 != 0)
        void* rax_2 = *(arg1 + 0x28)
        void* r9_1 = arg1 + 0x18
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_141ca72bb:
            int32_t rax_9 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_334_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_324_1.d = r8_1 - rax_10 + 0x1f
            
            if (r8_1 - rax_10 + 0x1f s> rbx_1)
                var_324_1.d = rbx_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_324_1:4.d = r8_1
                var_338 = rcx_2
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_328_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141ca72bb
            
            var_324_1.d = rbx_1
    
    int32_t rdx_5 = *(arg1 + 0x30)
    double zmm2_1[0x2] = var_328_1.o
    double var_2c8_1[0x2] = zmm2_1
    int32_t r15_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_2d8_1 = var_338.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_2e8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int32_t var_328_2 = r15_1
    var_324_1.d = rdx_5
    int128_t var_308 = (arg1 + 8).o
    int128_t var_2f8_1 = var_2d8_1
    
    if (rdx_5 != rbx_1)
        void* rax_12 = *(arg1 + 0x28)
        void* r10_1 = arg1 + 0x18
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r15_1
        
        if (rdx_9 != 0)
        label_141ca7393:
            int32_t rax_19 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t r11_1
            
            if (rax_19 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_324_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_324_1.d = rbx_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
                var_328_2 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141ca7393
            
            var_324_1.d = rbx_1
    
    while (true)
        int64_t rax_21 = sx.q(var_2f8_1:0xc.d)
        int64_t* rdx_10 = var_308.q
        
        if (rax_21.d == (var_328_2.q u>> 0x20).d && var_2f8_1.q == arg1 + 0x18
                && rdx_10 == arg1 + 8)
            break
        
        int64_t* rbx_2 = *(*rdx_10 + rax_21 * 0x18 + 8)
        
        if (rbx_2 != 0)
            int64_t* rax_23 = j_sub_140a82f30(0x50)
            
            if (rax_23 != 0)
                rax_23 = sub_141c913c0(rax_23, rbx_2)
            
            int64_t* var_310 = rax_23
            var_338.q = &rax_23[1]
            int64_t** var_330_2 = &var_310
            int32_t var_318
            sub_140b92a80(arg3, &var_318, &var_338, nullptr)
        
        var_2f8_1:8.d &= not.d(var_308:0xc.d)
        sub_14059bdd0(&var_308:8)

int64_t result = sub_141c94660(&var_2b8)
__security_check_cookie(rax_1 ^ &var_358)
return result
