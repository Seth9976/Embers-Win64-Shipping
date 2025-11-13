// 函数: sub_14203a7d0
// 地址: 0x14203a7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143e20d18
int64_t* rbx = *(result + 0x10)
int64_t* r14 = *(result + 8)

if (rbx != 0)
    rbx[1].d += 1

if (r14 != 0)
    int32_t rdi_1 = *(arg1 + 0x188)
    int32_t rcx = 0
    int32_t var_94_1 = 1
    int32_t var_98_1 = 0
    int32_t r8_1 = 0
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (rdi_1 != 0)
        void* rax = *(arg1 + 0x180)
        void* r9_1 = arg1 + 0x170
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_14203a8b8:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_94_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_1
            
            var_84_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> rdi_1)
                var_84_1.d = rdi_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_84_1:4.d = r8_1
                var_98_1 = rcx
                
                if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_14203a8b8
            
            var_84_1.d = rdi_1
    
    int32_t rdx_5 = *(arg1 + 0x188)
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int32_t var_88_3 = r12_1
    var_84_1.d = rdx_5
    int128_t var_78 = (arg1 + 0x160).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_5 != rdi_1)
        void* rax_10 = *(arg1 + 0x180)
        void* r10_1 = arg1 + 0x170
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rdi_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_9 != 0)
        label_14203a982:
            int32_t rax_17 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r11_1
            
            if (rax_17 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_3
            
            var_84_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rdi_1)
                var_84_1.d = rdi_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_14203a982
            
            var_84_1.d = rdi_1
    
    while (true)
        int32_t result_1
        result = sx.q(result_1)
        int64_t* rdx_10 = var_78.q
        
        if (result.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x170
                && rdx_10 == arg1 + 0x160)
            break
        
        int64_t r9_5 = *r14
        (*(r9_5 + 0x50))(r14, zx.q(*(*rdx_10 + result * 0x18)), 0, r9_5, var_98_1, arg1 + 0x170, 
            var_88_3)
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
