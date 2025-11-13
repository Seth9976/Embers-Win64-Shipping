// 函数: sub_141c82600
// 地址: 0x141c82600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[5].d
int32_t r8 = 0
int32_t var_54 = 1
int32_t var_58 = 0
int32_t rcx = 0
void* var_50 = &arg1[2]
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r9 != 0)
    void* rax_1 = arg1[4]
    void* r10_1 = &arg1[2]
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9 - 1)
    int32_t rdx_3 = *r10_1
    
    if (rdx_3 != 0)
    label_141c82698:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t arg_8 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_44.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r9)
            var_44.d = r9
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_44:4.d = rcx
            var_58 = r8
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
            int32_t var_48_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141c82698
        
        var_44.d = r9

int64_t* rdx_6 = arg1
int128_t var_30 = var_58.o
int64_t var_20 = 0xffffffff

if (0 s< r9)
    int32_t rcx_2 = 0
    
    while (true)
        int64_t* rcx_4 = *(*rdx_6 + sx.q(rcx_2) * 0x28 + 0x18)
        
        if (rcx_4 != 0)
            int32_t rax_13 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (rax_13 == 1 && rcx_4 != 0)
                (*(*rcx_4 + 8))(rcx_4, 1)
        
        var_20.d &= not.d(var_30:4.d)
        sub_14059bdd0(&var_30)
        rcx_2 = var_20:4.d
        
        if (rcx_2 s>= *(var_30:8.q + 0x18))
            break
        
        rdx_6 = arg1

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405c5660(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_8 = arg1[4]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *arg1

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
