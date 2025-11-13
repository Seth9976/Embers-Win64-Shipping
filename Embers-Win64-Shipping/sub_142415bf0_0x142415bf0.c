// 函数: sub_142415bf0
// 地址: 0x142415bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r9 = arg3
int64_t rax_27

if (*arg2 != data_143e1df78)
    if (arg3 == 0)
        int32_t arg_10
        sub_14240da20(arg1 + 0x260, &arg_10, arg2)
        int64_t rax_25 = sx.q(arg_10)
        
        if (rax_25.d == 0xffffffff)
            rax_27 = 0
        else
            rax_27 = rax_25 * 0xf0 + *(arg1 + 0x260)
        
        r9 = rax_27 + 0x18
        
        if (rax_27 == 0)
            r9 = nullptr
    
    if (arg3 != 0 || r9 != 0)
        int64_t* rbx_7 = arg2[2]
        uint8_t rdi_2 = *(r9 + 0x1c) u>> 2 & 1
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                int64_t rdx_12 = *rbx_7
                (*rdx_12)(rbx_7, rdx_12)
                int32_t temp3_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_4 = *rbx_7
                    (*(r8_4 + 8))(rbx_7, 1, r8_4)
        
        return zx.q(rdi_2)
else
    int32_t r8 = 0
    int32_t rbx_1 = *(arg1 + 0x288)
    int32_t var_98_1 = 0
    int32_t rcx = 0
    int32_t var_94_1 = 1
    void* var_90_1 = arg1 + 0x270
    int32_t var_88_1 = 0xffffffff
    int32_t var_84_1 = 0
    int32_t var_80_1 = 0
    
    if (rbx_1 != 0)
        void* rax_1 = *(arg1 + 0x280)
        void* r9_1 = arg1 + 0x270
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        int32_t var_84_3
        
        if (rdx_2 != 0)
        label_142415ca8:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_94_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_1
            
            int32_t var_84_2 = rcx - rax_9 + 0x1f
            
            if (rcx - rax_9 + 0x1f s> rbx_1)
                var_84_3 = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(r8)
                rcx += 0x20
                r8 += 1
                int32_t var_80_2 = rcx
                var_98_1 = r8
                
                if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_142415ca8
            
            var_84_3 = rbx_1
    
    int32_t rdx_5 = *(arg1 + 0x288)
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_2 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r12_1
    int32_t var_84_4 = rdx_5
    int128_t var_78 = (arg1 + 0x260).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_5 != rbx_1)
        void* rax_11 = *(arg1 + 0x280)
        void* r10_1 = arg1 + 0x270
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r12_1
        int32_t var_84_6
        
        if (rdx_9 != 0)
        label_142415d72:
            int32_t rax_18 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t r11_1
            
            if (rax_18 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_3
            
            int32_t var_84_5 = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_84_6 = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_2)
                r9_3 += 0x20
                r8_2 += 1
                
                if (rcx_5.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_142415d72
            
            var_84_6 = rbx_1
    
    while (true)
        int32_t var_5c
        rax_27 = sx.q(var_5c)
        int64_t* rdx_10 = var_78.q
        
        if (rax_27.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x270
                && rdx_10 == arg1 + 0x260)
            break
        
        if ((*(rax_27 * 0xf0 + *rdx_10 + 0x34) & 4) != 0)
            int64_t* rbx_4 = arg2[2]
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp9_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            int64_t rax_20
            rax_20.b = 1
            return rax_20
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

int64_t* rbx_6 = arg2[2]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp8_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

rax_27.b = 0
return rax_27
