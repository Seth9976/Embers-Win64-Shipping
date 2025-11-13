// 函数: sub_14066cbf0
// 地址: 0x14066cbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[5].d
int32_t r8 = 0
int32_t var_64 = 1
int32_t var_68 = 0
int32_t rcx = 0
void* var_60 = &arg1[2]
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

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
    label_14066cc88:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_64_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_54.d = rcx - rax_8 + 0x1f
        
        if (rcx - rax_8 + 0x1f s> r9)
            var_54.d = r9
    else
        while (true)
            r8 += 1
            rcx += 0x20
            var_68 = r8
            var_54:4.d = rcx
            
            if (r8 s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            int32_t var_58_1 = 0xffffffff
            rdx_2 = *(r10_1 + (sx.q(r8) << 2))
            
            if (rdx_2 != 0)
                goto label_14066cc88
        
        var_54.d = r9

int64_t* rdx_4 = arg1
int64_t* var_48 = rdx_4
int128_t var_40 = var_68.o
int64_t var_30 = 0xffffffff

if (0 s< r9)
    int32_t rcx_2 = 0
    
    while (true)
        int64_t rcx_3 = sx.q(rcx_2) * 5
        int64_t rax_11 = *rdx_4
        int64_t* rbx_1 = *(rax_11 + (rcx_3 << 3) + 0x18)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t rcx_6 = *(rax_11 + (rcx_3 << 3))
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        var_30.d &= not.d(var_40:4.d)
        sub_14059bdd0(&var_40)
        rcx_2 = var_30:4.d
        
        if (rcx_2 s>= *(var_40:8.q + 0x18))
            break
        
        rdx_4 = var_48

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405c5660(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
return sub_14059a8e0(&arg1[2], arg2) __tailcall
