// 函数: sub_14261e750
// 地址: 0x14261e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
void* r10_1
int32_t temp0_1
int32_t temp1_1

if (arg2 s>= 0 && r11.d s< arg1[1].d)
    void* rax = arg1[4]
    r10_1 = &arg1[2]
    
    if (rax != 0)
        r10_1 = rax
    
    temp0_1:temp1_1 = sx.q(r11.d)

uint32_t i

if (arg2 s< 0 || r11.d s>= arg1[1].d
    || not(test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r11.d & 0x1f)))
label_14261e901:
    i.b = 0
else
    int32_t var_54_1 = 1
    void* rbx_3 = *arg1 + 0x38 + r11 * 0x88
    int32_t var_48_1 = 0xffffffff
    int32_t r11_1 = *(rbx_3 + 0x28)
    void* r9 = rbx_3 + 0x10
    int32_t rcx_3 = 0
    void* var_50 = r9
    int32_t var_58_1 = 0
    int32_t r8 = 0
    int64_t var_44_1 = 0
    
    if (r11_1 != 0)
        void* rax_5 = *(r9 + 0x10)
        
        if (rax_5 != 0)
            r9 = rax_5
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_5 = *r9
        
        if (rdx_5 != 0)
        label_14261e848:
            int32_t rax_12 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_54_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_44_1.d = r8 - rax_13 + 0x1f
            
            if (r8 - rax_13 + 0x1f s> r11_1)
                var_44_1.d = r11_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_3)
                r8 += 0x20
                rcx_3 += 1
                var_44_1:4.d = r8
                var_58_1 = rcx_3
                
                if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9 + (rdx_6 << 2) + 4)
                var_48_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_14261e848
            
            var_44_1.d = r11_1
    
    double zmm2[0x2] = var_48_1.o
    double var_18_1[0x2] = zmm2
    double var_28_1[0x2] = var_58_1.o
    var_58_1.o = rbx_3.o
    i = (zmm2[0] u>> 0x20).d
    int64_t var_38_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_48_1.o = var_28_1
    
    if (i s< r11_1)
        uint32_t i_1
        i = i_1
        
        do
            if (sub_142612750(arg3, *(*var_58_1.q + sx.q(i) * 0x10), arg4).b == 0)
                goto label_14261e901
            
            var_44_1:4.d &= not.d(var_50:4.d)
            sub_14059bdd0(&var_50)
            i = i_1
        while (i s< *(var_48_1.q + 0x18))
    
    i.b = 1

return i
