// 函数: sub_140aa8f70
// 地址: 0x140aa8f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[5].d
int32_t var_74 = 1
int32_t var_78 = 0
void* var_70 = &arg1[2]
int32_t rcx = 0
int32_t var_60 = 0
int32_t var_68 = 0xffffffff
int32_t r8 = 0
int32_t var_64 = 0

if (r9 != 0)
    void* rax_1 = arg1[4]
    void* r10_1 = &arg1[2]
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9 - 1)
    int32_t rdx_2 = *r10_1
    int32_t var_64_2
    
    if (rdx_2 != 0)
    label_140aa9008:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t arg_10 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        int32_t var_64_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r9)
            var_64_2 = r9
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_60_1 = rcx
            var_78 = r8
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10_1 + (rdx_3 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140aa9008
        
        var_64_2 = r9

int64_t* rdx_5 = arg1
int64_t* var_58 = rdx_5
int128_t var_50 = var_78.o
int64_t var_40 = 0xffffffff

if (0 s< r9)
    int32_t rcx_2 = 0
    
    while (true)
        int64_t* rbx_2 = sx.q(rcx_2) * 0xd8 + *rdx_5
        int64_t* rdi_1 = rbx_2[0x18]
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_14 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx_2[0x15].d = 0
        int64_t rcx_5 = rbx_2[0x14]
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        sub_140681eb0(&rbx_2[0xc])
        int64_t rcx_7 = rbx_2[0xa]
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = rbx_2[8]
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = rbx_2[6]
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = rbx_2[4]
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = *rbx_2
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        var_40.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        rcx_2 = var_40:4.d
        
        if (rcx_2 s>= *(var_50:8.q + 0x18))
            break
        
        rdx_5 = var_58

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_140ac1010(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
return sub_14059a8e0(&arg1[2], arg2) __tailcall
