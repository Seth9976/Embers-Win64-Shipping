// 函数: sub_140e55560
// 地址: 0x140e55560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int32_t var_88

if (*(arg2 + 0x138) - *(arg2 + 0x164) s<= 0)
    int32_t rcx_5 = 0
    int32_t rbx_2 = *(arg2 + 0x218)
    var_88 = 0
    int32_t r8_1 = 0
    int32_t var_84_1 = 1
    void* var_80 = arg2 + 0x200
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (rbx_2 != 0)
        void* rax_5 = *(arg2 + 0x210)
        void* r9_1 = arg2 + 0x200
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_2 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_140e556b8:
            int32_t rax_12 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_84_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_74_1.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> rbx_2)
                var_74_1.d = rbx_2
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_5)
                r8_1 += 0x20
                rcx_5 += 1
                var_74_1:4.d = r8_1
                var_88 = rcx_5
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140e556b8
            
            var_74_1.d = rbx_2
    
    int32_t rdx_5 = *(arg2 + 0x218)
    double zmm2[0x2] = var_78_1.o
    double var_28_1[0x2] = zmm2
    int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_38_1 = var_88.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_48_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_78_2 = rsi
    var_74_1.d = rdx_5
    int128_t var_68 = (arg2 + 0x1f0).o
    int128_t var_58_1 = var_38_1
    
    if (rdx_5 != rbx_2)
        void* rax_15 = *(arg2 + 0x210)
        void* r10_1 = arg2 + 0x200
        
        if (rax_15 != 0)
            r10_1 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_2 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & rsi
        
        if (rdx_9 != 0)
        label_140e55782:
            int32_t rax_22 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t r11_1
            
            if (rax_22 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_74_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_2)
                var_74_1.d = rbx_2
        else
            while (true)
                int64_t rcx_10 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_10 << 2) + 4)
                var_78_2 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_140e55782
            
            var_74_1.d = rbx_2
    
    while (true)
        result = sx.q(var_58_1:0xc.d)
        int64_t* rdx_10 = var_68.q
        
        if (result.d == (var_78_2.q u>> 0x20).d && var_58_1.q == arg2 + 0x200
                && rdx_10 == arg2 + 0x1f0)
            break
        
        int64_t rax_24 = *rdx_10
        int64_t rcx_13 = result * 6
        void* i = *(rax_24 + (rcx_13 << 3) + 8)
        
        for (void* rsi_3 = (sx.q(*(rax_24 + (rcx_13 << 3) + 0x10)) << 4) + i; i != rsi_3; i += 0x10)
            int64_t* rbx_3 = *(i + 8)
            
            if (rbx_3 == 0)
                break
            
            int32_t rax_25 = rbx_3[1].d
            
            if (rax_25 == 0)
                break
            
            rbx_3[1].d = rax_25 + 1
            int64_t* rcx_14 = *i
            
            if (rcx_14 == 0)
                rbx_3[1].d = rax_25
                
                if (rax_25 == 0)
                    (**rbx_3)(rbx_3)
                    int32_t temp9_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
                
                break
            
            (*(*rcx_14 + 0x130))(rcx_14)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp10_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int32_t var_5c
        var_58_1:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)
else
    result = sub_140e65450(arg2, &var_88)
    int64_t* r14 = var_88.q
    int32_t i_3
    int32_t i_2 = i_3
    int64_t* rbx = r14
    void* rdi_3 = &r14[sx.q(i_2) * 2]
    
    if (r14 != rdi_3)
        do
            int64_t* rcx_1 = *rbx
            result = (*(*rcx_1 + 0x130))(rcx_1)
            rbx = &rbx[2]
        while (rbx != rdi_3)
    
    if (i_2 != 0)
        void* rdi_4 = &r14[1]
        int32_t i_1
        
        do
            int64_t* rbx_1 = *rdi_4
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp6_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_4 += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r14 != 0)
        return sub_140a74f90(r14)
return result
