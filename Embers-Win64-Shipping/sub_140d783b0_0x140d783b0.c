// 函数: sub_140d783b0
// 地址: 0x140d783b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_98 = *arg2
int64_t* var_90 = rbx

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t arg_8
sub_140d7a930(arg1 + 0x60, &arg_8, &var_98)
int64_t rax_1 = sx.q(arg_8)
void* const r14_1

if (rax_1.d == 0xffffffff)
    r14_1 = nullptr
else
    r14_1 = rax_1 * 0x38 + *(arg1 + 0x60)

if (rbx != 0)
    int32_t temp0_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rbx + 8))(rbx, 1)

HWND param0 = *(r14_1 + 0x10)

if (param0 != 0)
    HIMC rax_3 = ImmGetContext(param0)
    *(r14_1 + 0x21) = 1
    ImmNotifyIME(rax_3, NI_COMPOSITIONSTR, CPS_COMPLETE, 0)
    ImmReleaseContext(*(r14_1 + 0x10), rax_3)
    sub_140d76db0(arg1)
    var_98:4.d = 1
    int32_t r11_1 = *(arg1 + 0xd8)
    void* var_90_1 = arg1 + 0xc0
    int32_t rcx_5 = 0
    var_98.d = 0
    int32_t r8_1 = 0
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r11_1 != 0)
        void* rax_4 = *(arg1 + 0xd0)
        void* r9_1 = arg1 + 0xc0
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_140d78508:
            int32_t rax_11 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            var_98:4.d = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_84_1.d = r8_1 - rax_12 + 0x1f
            
            if (r8_1 - rax_12 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_5)
                r8_1 += 0x20
                rcx_5 += 1
                var_84_1:4.d = r8_1
                var_98.d = rcx_5
                
                if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_140d78508
            
            var_84_1.d = r11_1
    
    int32_t rdx_6 = *(arg1 + 0xd8)
    double zmm2_1[0x2] = var_88_1.o
    double var_38_1[0x2] = zmm2_1
    int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_48_1 = var_98.o
    int32_t r8_4 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int32_t var_88_2 = r12_1
    var_84_1.d = rdx_6
    int128_t var_78 = (arg1 + 0xb0).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_6 != r11_1)
        void* rax_14 = *(arg1 + 0xd0)
        void* r10_1 = arg1 + 0xc0
        
        if (rax_14 != 0)
            r10_1 = rax_14
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_10 != 0)
        label_140d785d2:
            int32_t rax_21 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
            int32_t rbx_2
            
            if (rax_21 == 0)
                rbx_2 = 0x20
            else
                rbx_2 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - rbx_2 + 0x1f
            
            if (r9_3 - rbx_2 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rcx_10 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_10.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_10 << 2) + 4)
                var_88_2 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140d785d2
            
            var_84_1.d = r11_1
    
    while (true)
        int32_t var_5c
        int64_t rax_23 = sx.q(var_5c)
        int64_t* rdx_11 = var_78.q
        
        if (rax_23.d == (var_88_2.q u>> 0x20).d && var_68_1.q == arg1 + 0xc0
                && rdx_11 == arg1 + 0xb0)
            break
        
        int64_t rcx_12 = rax_23 * 3
        int64_t rax_24 = *rdx_11
        int64_t* rbx_3 = *(rax_24 + (rcx_12 << 3) + 8)
        
        if (rbx_3 != 0)
            int32_t rax_25 = rbx_3[1].d
            
            if (rax_25 != 0)
                rbx_3[1].d = rax_25 + 1
                
                if (rbx_3 != 0)
                    int64_t* rcx_14 = *(rax_24 + (rcx_12 << 3))
                    
                    if (rcx_14 != 0)
                        int64_t rax_28 = (*(*rcx_14 + 0xc0))(rcx_14)
                        
                        if (rax_28 != 0)
                            int64_t* rcx_15 = *(arg1 + 0x20)
                            (*(*rcx_15 + 0x48))(rcx_15, rax_28, *(arg1 + 0x30), &arg_8)
                            ImmAssociateContext(*(r14_1 + 0x10), nullptr)
                    
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp8_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

void* result = arg1 + 0x50

if (result != &var_98)
    *result = 0
    int64_t* rbx_4 = *(result + 8)
    
    if (rbx_4 != 0)
        *(result + 8) = 0
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            result = (**rbx_4)(rbx_4)
            int32_t temp4_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp4_1 == 1)
                return (*(*rbx_4 + 8))(rbx_4, 1)

return result
