// 函数: sub_142373aa0
// 地址: 0x142373aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_10 = 0xffffffff
int32_t arg_14 = 0
int32_t arg_8

if (arg2 != 0)
    sub_140d3a3a0(&arg_8, arg2)
    arg_10.q = arg_8.q

sub_1423611b0(arg1 + 0x40, &arg_8, &arg_10)
int64_t rax_2 = sx.q(arg_8)
int64_t rbx_2
void* rbx_3

if (rax_2.d != 0xffffffff)
    rbx_2 = rax_2 << 5
    rbx_3 = rbx_2 + *(arg1 + 0x40)

int64_t* result
int64_t* rbx_4
int32_t var_a8

if (rax_2.d == 0xffffffff || rbx_2 == neg.q(*(arg1 + 0x40)))
    rbx_4 = nullptr
label_142373bca:
    int32_t r10_1 = *(arg1 + 0x68)
    int32_t rcx_8 = 0
    var_a8 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = arg1 + 0x50
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    int32_t var_90_1 = 0
    
    if (r10_1 != 0)
        void* rax_9 = *(arg1 + 0x60)
        void* r8_1 = arg1 + 0x50
        
        if (rax_9 != 0)
            r8_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r8_1
        int32_t var_94_3
        
        if (rdx_4 != 0)
        label_142373c56:
            int32_t rax_16 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
            int32_t var_a4_2 = rax_16
            int32_t rax_17
            
            if (rax_16 == 0)
                rax_17 = 0x20
            else
                rax_17 = 0x1f - temp0_2
            
            int32_t var_94_2 = rcx_8 - rax_17 + 0x1f
            
            if (rcx_8 - rax_17 + 0x1f s> r10_1)
                var_94_3 = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rdi)
                rcx_8 += 0x20
                rdi += 1
                int32_t var_90_2 = rcx_8
                var_a8 = rdi
                
                if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r8_1 + (rdx_5 << 2) + 4)
                var_98_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_142373c56
            
            var_94_3 = r10_1
    
    int32_t rdx_7 = *(arg1 + 0x68)
    double zmm2[0x2] = var_98_1.o
    double var_48_1[0x2] = zmm2
    int32_t r12_1 = 0xffffffff << (rdx_7.b & 0x1f)
    int128_t var_58_1 = var_a8.o
    int32_t r8_3 = rdx_7 s>> 5
    int32_t r9_2 = rdx_7 & 0xffffffe0
    int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_98_2 = r12_1
    int32_t var_94_4 = rdx_7
    int128_t var_88 = (arg1 + 0x40).o
    int128_t var_78_1 = var_58_1
    
    if (rdx_7 != r10_1)
        void* rax_19 = *(arg1 + 0x60)
        void* r10_2 = arg1 + 0x50
        
        if (rax_19 != 0)
            r10_2 = rax_19
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *(r10_2 + (sx.q(r8_3) << 2)) & r12_1
        int32_t var_94_6
        
        if (rdx_11 != 0)
        label_142373d22:
            int32_t rax_26 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
            int32_t r11_1
            
            if (rax_26 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_94_5 = r9_2 - r11_1 + 0x1f
            
            if (r9_2 - r11_1 + 0x1f s> r10_1)
                var_94_6 = r10_1
        else
            while (true)
                int64_t rcx_13 = sx.q(r8_3)
                r9_2 += 0x20
                r8_3 += 1
                
                if (rcx_13.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r10_2 + (rcx_13 << 2) + 4)
                var_98_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_142373d22
            
            var_94_6 = r10_1
    
    while (true)
        int64_t rcx_15 = sx.q(var_78_1:0xc.d)
        result = var_88.q
        
        if (rcx_15.d == (var_98_2.q u>> 0x20).d && var_78_1.q == arg1 + 0x50
                && result == arg1 + 0x40)
            break
        
        void* rdx_14 = (rcx_15 << 5) + *result
        var_a8.q = *arg3
        void* rax_30 = arg3[1]
        void* var_a0_2 = rax_30
        
        if (rax_30 != 0)
            *(rax_30 + 8) += 1
        
        result = sub_140e215b0(*(*(rdx_14 + 8) + 0x10), &var_a8)
        
        if (result.b != 0)
            break
        
        var_78_1:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
else
    void* rcx_2 = *(rbx_3 + 8)
    rbx_4 = *(rbx_3 + 0x10)
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    if (rcx_2 == 0)
        goto label_142373bca
    
    var_a8.q = *arg3
    void* rax_4 = arg3[1]
    void* var_a0 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    result = sub_140e215b0(*(rcx_2 + 0x10), &var_a8)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = arg3[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp9_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp9_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
