// 函数: sub_142174860
// 地址: 0x142174860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_10
sub_141fb31d0(arg1, &arg_10, arg2)
int64_t rax = sx.q(arg_10)

if (rax.d == 0xffffffff)
    return 

int64_t rdi_1 = *arg1 + rax * 0x18

if (rdi_1 == 0)
    return 

int32_t rcx_1 = 0
int64_t* rdi_3 = *rdi_1 + 0x30
int32_t var_98_1 = 0
int32_t r10_1 = rdi_3[5].d
void* r9_1 = &rdi_3[2]
int32_t var_94_1 = 1
int32_t r8_2 = 0
void* var_90 = r9_1
int32_t var_88_1 = 0xffffffff
int64_t var_84_1 = 0

if (r10_1 != 0)
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_142174938:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84_1.d = r8_2 - rax_9 + 0x1f
        
        if (r8_2 - rax_9 + 0x1f s> r10_1)
            var_84_1.d = r10_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_2 += 0x20
            rcx_1 += 1
            var_84_1:4.d = r8_2
            var_98_1 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142174938
        
        var_84_1.d = r10_1

int64_t* var_70_1 = rdi_3
int128_t var_50_1 = 0xffffffff
double var_60_1[0x2] = var_98_1.o
var_98_1.o = rdi_3.o
int64_t var_78_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_58
var_88_1.o = var_58

if (0 s< r10_1)
    int32_t var_7c
    int32_t rbx_1 = var_7c
    
    while (true)
        void* rax_12 = sub_140d3c6e0((sx.q(rbx_1) << 4) + *var_98_1.q)
        
        if (rax_12 == 0 || *(rax_12 + 0x134) == 1)
            sub_1418ebff0(rdi_3, rbx_1)
        else
            sub_140d3a3a0(&arg_10, rax_12)
            int64_t rax_13 = arg_10.q
            int32_t r14_3 = (rax_13 u>> 0x20).d ^ rax_13.d
            
            if (arg1[0x1f].d == *(arg1 + 0x124))
            label_142174aad:
                int32_t* rax_20 = sub_14215b1f0(&arg1[0x1e], r14_3, &arg_10)
                *rax_20 -= 1
            else
                void* rdx_6 = arg1[0x26]
                void* r9_2 = &arg1[0x25]
                
                if (rdx_6 != 0)
                    r9_2 = rdx_6
                
                int32_t rbx_2 = *(r9_2 + (((sx.q(arg1[0x27].d) - 1) & sx.q(r14_3)) << 2))
                
                if (rbx_2 == 0xffffffff)
                    goto label_142174aad
                
                int64_t rcx_9 = arg1[0x1e]
                int64_t rsi_1
                
                while (true)
                    int64_t arg_18 = rax_13
                    int64_t rdx_7 = sx.q(rbx_2) * 5
                    rsi_1 = rdx_7 << 2
                    int64_t arg_20 = *(rcx_9 + (rdx_7 << 2))
                    
                    if (sub_14077a170(&arg_20, &arg_18) != 0)
                        break
                    
                    rcx_9 = arg1[0x1e]
                    rbx_2 = *(rsi_1 + rcx_9 + 0xc)
                    
                    if (rbx_2 == 0xffffffff)
                        goto label_142174aad
                    
                    rax_13 = arg_10.q
                
                if (rbx_2 == 0xffffffff)
                    goto label_142174aad
                
                void* rax_17 = arg1[0x1e]
                
                if (rax_17 == neg.q(rsi_1))
                    goto label_142174aad
                
                *(rax_17 + rsi_1 + 8) -= 1
        
        var_84_1:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        rbx_1 = var_7c
        
        if (rbx_1 s>= *(var_88_1.q + 0x18))
            break
        
        rdi_3 = var_70_1

sub_142174690(arg1, arg2)
sub_142174690(&arg1[0xa], arg2)
sub_142174690(&arg1[0x14], arg2)
