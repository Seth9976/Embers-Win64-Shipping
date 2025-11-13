// 函数: sub_140b81730
// 地址: 0x140b81730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t var_84 = 1
int32_t rdi = *(arg1 + 0x30)
void* r10 = arg1 + 0x18
int32_t rcx = 0
void* var_80 = r10
int32_t r9 = 0
int32_t var_88 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0
int64_t rbx = arg3

if (rdi != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_2 = *r10
    
    if (rdx_2 != 0)
    label_140b817d8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rdi)
            var_74.d = rdi
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r9 += 0x20
            rcx += 1
            var_74:4.d = r9
            var_88 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10 + (rdx_3 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140b817d8
        
        var_74.d = rdi

int64_t* var_20 = arg1 + 8
int128_t zmm0 = var_88.o
int128_t var_30 = 0xffffffff
int16_t var_50 = 0
void* rax_11 = zmm0.q
var_78.o = zmm0
var_88.o = (arg1 + 8).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = zmm0

if (0 s>= *(rax_11 + 0x18))
label_140b81926:
    *arg2 = rbx
else
    int32_t var_6c
    int32_t rcx_2 = var_6c
    
    while (true)
        void* r9_2 = *(*var_88.q + sx.q(rcx_2) * 0x28 + 0x10)
        int64_t rcx_4 = 0
        int64_t rax_14 = sx.q(*(r9_2 + 0x108))
        
        if (rax_14.d s> 0)
            int64_t* rax_15 = *(r9_2 + 0x100)
            
            while (*rax_15 != arg3)
                rcx_4 += 1
                rax_15 = &rax_15[0x14]
                
                if (rcx_4 s>= rax_14)
                    goto label_140b818ac
            
            int16_t* rdx_6
            
            if (*(r9_2 + 0x10) == 0)
                rdx_6 = &data_142d40450
            else
                rdx_6 = *(r9_2 + 8)
            
            sub_140b58260(arg2, rdx_6, 1)
            
            if (var_50.b != 0 && var_50:1.b != 0)
                sub_1405e1160(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 1)
            
            break
        
    label_140b818ac:
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        rcx_2 = var_6c
        
        if (rcx_2 s>= *(var_78.q + 0x18))
            if (var_50.b != 0 && var_50:1.b != 0)
                sub_1405e1160(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 1)
            
            goto label_140b81926
        
        arg3 = arg_18

return arg2
