// 函数: sub_141013640
// 地址: 0x141013640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0xa8)
int64_t rbx = sx.q(arg2)
int64_t rdi_1 = rbx * 0x50

if (*(rdi_1 + r8 + 8) == *(rdi_1 + r8 + 0x34))
    int32_t rax_1 = sub_141013640(arg3, zx.q((rbx + 1).d))
    int64_t* rdi_2 = rdi_1 + *(arg1 + 0xa8)
    int32_t rbx_2 = (1 << rbx.b) + rax_1
    int32_t var_18
    sub_1409afd50(rdi_2, &var_18)
    int32_t rdx_2 = var_18
    int32_t* var_10
    *var_10 = rbx_2
    var_10[1] = 0xffffffff
    void arg_10
    sub_140752f60(rdi_2, &arg_10, rbx_2, var_10, rdx_2, nullptr)
    return zx.q(rax_1)

int64_t* rdi_3 = rdi_1 + r8
int32_t r9_1 = 0
int32_t r11 = rdi_3[5].d
void* r10 = &rdi_3[2]
int32_t r8_3 = 0

if (r11 != 0)
    void* rax_3 = *(r10 + 0x10)
    
    if (rax_3 != 0)
        r10 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx_3 = *r10
    
    if (rcx_3 != 0)
    label_14101373b:
        int32_t rax_10 = neg.d(rcx_3) & rcx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        int32_t rax_12 = r8_3 - rax_11 + 0x1f
        
        if (rax_12 s> r11)
            rax_12 = r11
        
        r9_1 = rax_12
    else
        while (true)
            int64_t rcx_4 = sx.q(r9_1)
            r8_3 += 0x20
            r9_1 += 1
            
            if (rcx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                r9_1 = r11
                break
            
            rcx_3 = *(r10 + (rcx_4 << 2) + 4)
            
            if (rcx_3 != 0)
                goto label_14101373b

int32_t rbx_3 = *(*rdi_3 + sx.q(r9_1) * 0xc)
sub_14090a370(rdi_3, rbx_3)
return zx.q(rbx_3)
