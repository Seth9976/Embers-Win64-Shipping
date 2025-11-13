// 函数: sub_141190c70
// 地址: 0x141190c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t rbx = sx.q(*(arg3 + 8))
int32_t temp0 = rbx.d
int128_t zmm6

if (temp0 s> 0)
    arg1[1].d = rbx.d
    zmm6 = sub_14083a990(arg1, 0)
    memset(*arg1, 0, rbx << 4)
else if (temp0 s< 0)
    int32_t rdi_2 = neg.d(rbx.d)
    
    if (rbx.d != 0)
        int64_t rdx = *arg1
        int32_t rax_1 = 0
        int32_t rcx_2 = neg.d(rdi_2 + rbx.d)
        
        if (rcx_2 != 0)
            memmove((rbx << 4) + rdx, rdx, rcx_2 << 4)
            rax_1 = arg1[1].d
        
        arg1[1].d = rax_1 - rdi_2
        zmm6 = sub_14119acb0(arg1)

int32_t rcx_7 = 0
int32_t var_84 = 1
int64_t* r9 = arg2 + 0xee8
int32_t var_88 = 0
int32_t r11 = r9[5].d
void* r10 = &r9[2]
int32_t r8_4 = 0
void* var_80 = r10
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r11 != 0)
    void* rax_3 = *(r10 + 0x10)
    
    if (rax_3 != 0)
        r10 = rax_3
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r10
    
    if (rdx_3 != 0)
    label_141190d88:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_84_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        var_74.d = r8_4 - rax_11 + 0x1f
        
        if (r8_4 - rax_11 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_7)
            r8_4 += 0x20
            rcx_7 += 1
            var_74:4.d = r8_4
            var_88 = rcx_7
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r10 + (rdx_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141190d88
        
        var_74.d = r11

int64_t* var_68 = r9
int128_t var_60 = var_88.o
int64_t var_50 = 0xffffffff

if (0 s< r11)
    int32_t rcx_9 = 0
    int128_t var_38_1 = zmm6
    zmm6 = 0x3727c5ac
    
    while (true)
        void* r15_1 = *(*r9 + sx.q(rcx_9) * 0x30 + 0x20)
        void* rax_15 = *(r15_1 + 0x20)
        int128_t zmm0 = *(rax_15 + 0x30)
        zmm0.d = zmm0.d f* zmm0.d
        
        if (zmm0.d f>= zmm6.d)
        label_141190e47:
            char rax_16
            
            if ((*(rax_15 + 0x138) & 4) != 0)
                rax_16 = sub_14122cc00(r15_1)
            
            if ((*(rax_15 + 0x138) & 4) == 0 || rax_16 == 0)
                int32_t i = 0
                
                if (*(arg3 + 8) s> 0)
                    int64_t r14_1 = 0
                    
                    do
                        if (sub_14123dc60(r15_1, sx.q(i) * 0x5240 + *arg3) != 0
                                && (*(*(r15_1 + 0x20) + 0x139) & 2) != 0)
                            int64_t* rbx_2 = *arg1 + r14_1
                            int64_t rsi_1 = sx.q(rbx_2[1].d)
                            int32_t rax_20 = (rsi_1 + 1).d
                            rbx_2[1].d = rax_20
                            
                            if (rax_20 s> *(rbx_2 + 0xc))
                                zmm6 = sub_14083a310(rbx_2, rsi_1.d)
                            
                            *(*rbx_2 + (rsi_1 << 3)) = r15_1
                        
                        i += 1
                        r14_1 += 0x10
                    while (i s< *(arg3 + 8))
        else
            zmm0 = *(rax_15 + 0x34)
            zmm0.d = zmm0.d f* zmm0.d
            
            if (zmm0.d f>= zmm6.d)
                goto label_141190e47
            
            zmm0 = *(rax_15 + 0x38)
            zmm0.d = zmm0.d f* zmm0.d
            
            if (not(zmm0.d f< zmm6.d))
                goto label_141190e47
        
        var_50.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        rcx_9 = var_50:4.d
        
        if (rcx_9 s>= *(var_60:8.q + 0x18))
            break
        
        r9 = var_68

return arg1
