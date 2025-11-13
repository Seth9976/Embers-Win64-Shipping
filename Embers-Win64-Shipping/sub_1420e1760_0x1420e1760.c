// 函数: sub_1420e1760
// 地址: 0x1420e1760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[5].d
int64_t rbx = 0
int32_t var_54 = 1
int32_t var_58 = 0
void* var_50 = &arg1[2]
int32_t var_48 = 0xffffffff
int32_t r8 = 0
int64_t var_44 = 0
int32_t rcx = 0

if (r9 != 0)
    void* rax_1 = arg1[4]
    void* r10_1 = &arg1[2]
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_2 = *r10_1
    
    if (rdx_2 != 0)
    label_1420e17f8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r9)
            var_44.d = r9
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_44:4.d = rcx
            var_58 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10_1 + (rdx_3 << 2) + 4)
            int32_t var_48_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1420e17f8
        
        var_44.d = r9

int64_t* rdx_5 = arg1
int64_t* var_38 = rdx_5
int128_t var_30 = var_58.o
int64_t var_20 = 0xffffffff

if (0 s< r9)
    int32_t rcx_2 = 0
    
    while (true)
        int64_t* rcx_4 = *(*rdx_5 + sx.q(rcx_2) * 0x18 + 8)
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
        
        var_20.d &= not.d(var_30:4.d)
        sub_14059bdd0(&var_30)
        rcx_2 = var_20:4.d
        
        if (rcx_2 s>= *(var_30:8.q + 0x18))
            break
        
        rdx_5 = var_38

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a5130(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
sub_14059a8e0(&arg1[2], arg2)
void* result = sub_1405b6470(arg1, arg2, 1)

if (result.b == 0)
    result = zx.q(arg1[9].d)
    
    if (result.d s> 0)
        uint64_t i_1 = zx.q(result.d)
        uint64_t i
        
        do
            void* result_1 = arg1[8]
            result = &arg1[7]
            int64_t rdx_11 = (sx.q(arg1[9].d) - 1) & rbx
            
            if (result_1 != 0)
                result = result_1
            
            rbx += 1
            *(result + (rdx_11 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
