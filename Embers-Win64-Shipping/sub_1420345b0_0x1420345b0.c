// 函数: sub_1420345b0
// 地址: 0x1420345b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1

if (arg2 != 0)
    int64_t* rax_1 = sub_1424c7800()
    void* rax_2 = rax_1[0x23]
    
    if (rax_2 == 0)
        int64_t rdx_1 = *rax_1
        (*(rdx_1 + 0x390))(rax_1, rdx_1)
        rax_2 = rax_1[0x23]
    
    if ((*(rax_2 + 0x38) & 4) != 0)
        void* rcx_1 = *(rdi + 0x90)
        
        if (rcx_1 != 0 && *(rcx_1 + 0xbc) == data_143f58d48 && rcx_1 != 8 && *(rcx_1 + 0x298) == 0)
            sub_140e88cf0(data_143e29f28, 1, nullptr)

int64_t result = data_143e20d18
int64_t* rbx_2 = *(result + 0x10)
int64_t* r14 = *(result + 8)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (r14 != 0)
    int32_t rcx_4 = 0
    int32_t r8_1 = 0
    int32_t r11_1 = *(rdi + 0x160)
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r11_1 != 0)
        void* rax_4 = *(rdi + 0x158)
        void* r9_1 = rdi + 0x148
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_142034708:
            int32_t rax_11 = neg.d(rdx_4) & rdx_4
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
            
            if (r8_1 - rax_12 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_4)
                r8_1 += 0x20
                rcx_4 += 1
                var_84_1:4.d = r8_1
                var_98_1 = rcx_4
                
                if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_142034708
            
            var_84_1.d = r11_1
    
    int32_t rdx_6 = *(rdi + 0x160)
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_4 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int32_t var_88_3 = r12_1
    var_84_1.d = rdx_6
    int128_t var_78 = (rdi + 0x138).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_6 != r11_1)
        void* rax_14 = *(rdi + 0x158)
        void* r10_1 = rdi + 0x148
        
        if (rax_14 != 0)
            r10_1 = rax_14
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_10 != 0)
        label_1420347d2:
            int32_t rax_21 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_21)
            int32_t rdi_1
            
            if (rax_21 == 0)
                rdi_1 = 0x20
            else
                rdi_1 = 0x1f - temp0_3
            
            var_84_1.d = r9_3 - rdi_1 + 0x1f
            
            if (r9_3 - rdi_1 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_9.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_9 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_1420347d2
            
            var_84_1.d = r11_1
    
    while (true)
        int32_t result_1
        result = sx.q(result_1)
        int64_t* rdx_11 = var_78.q
        
        if (result.d == (var_88_3.q u>> 0x20).d && var_68_1.q == rdi + 0x148
                && rdx_11 == rdi + 0x138)
            break
        
        int64_t r9_5 = *r14
        void* rcx_11 = result * 3
        int64_t rax_23 = *rdx_11
        (*(r9_5 + 0x50))(r14, zx.q(*(rax_23 + (rcx_11 << 3))), *(rax_23 + (rcx_11 << 3) + 8), r9_5, 
            var_98_1, rdi + 0x148, var_88_3)
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    rdi = arg1

*(rdi + 0x306) = 1

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
