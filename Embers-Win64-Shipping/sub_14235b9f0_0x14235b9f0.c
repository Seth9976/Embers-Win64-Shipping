// 函数: sub_14235b9f0
// 地址: 0x14235b9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140f6bcb0(arg1[0x18])
int32_t var_18

while (arg1[9].d != *(arg1 + 0x74))
    int32_t r11_1 = arg1[0xd].d
    int32_t r8_1 = 0
    var_18 = 0xffffffff
    int32_t r9_1 = 0
    int32_t var_14_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = arg1[0xc]
        void* r10_1 = &arg1[0xa]
        
        if (rax_1 != 0)
            r10_1 = rax_1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rcx_1 = *r10_1
        int32_t var_14_3
        
        if (rcx_1 != 0)
        label_14235ba93:
            int32_t rax_8 = neg.d(rcx_1) & rcx_1
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_1
            
            int32_t var_14_2 = r9_1 - rax_9 + 0x1f
            
            if (r9_1 - rax_9 + 0x1f s> r11_1)
                var_14_3 = r11_1
        else
            while (true)
                int64_t rcx_2 = sx.q(r8_1)
                r9_1 += 0x20
                r8_1 += 1
                
                if (rcx_2.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rcx_1 = *(r10_1 + (rcx_2 << 2) + 4)
                var_18 = 0xffffffff
                
                if (rcx_1 != 0)
                    goto label_14235ba93
            
            var_14_3 = r11_1
    
    int64_t rax_11 = arg1[8]
    int64_t* rbx_1 = *(rax_11 + 0x10)
    void* rdx_3 = *(rax_11 + 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (rdx_3 != 0)
        *(rdx_3 + 0x20) = 0
    
    sub_142372590(&arg1[8], arg1[8])
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rax_15 = *arg1
int128_t var_28 = zx.o(0)
int64_t result = (*(rax_15 + 0x60))(arg1, &var_28, 0, 0, 0, 0, var_28, var_18)
int64_t* rbx_2 = var_28:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
