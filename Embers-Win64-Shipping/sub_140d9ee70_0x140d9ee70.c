// 函数: sub_140d9ee70
// 地址: 0x140d9ee70
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
    label_140d9ef08:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r9)
            var_54.d = r9
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_54:4.d = rcx
            var_68 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10_1 + (rdx_3 << 2) + 4)
            int32_t var_58_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140d9ef08
        
        var_54.d = r9

uint64_t* rdx_5 = arg1
uint64_t* var_48 = rdx_5
int128_t var_40 = var_68.o
int64_t var_30 = 0xffffffff

if (0 s< r9)
    int32_t rcx_2 = 0
    
    while (true)
        int64_t rdi_3 = (sx.q(rcx_2) << 6) + *rdx_5
        int64_t* rbx_1 = *(rdi_3 + 0x30)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rcx_5 = *(rdi_3 + 8)
        
        if (rcx_5 != 0)
            int32_t temp3_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
        
        var_30.d &= not.d(var_40:4.d)
        sub_14059bdd0(&var_40)
        rcx_2 = var_30:4.d
        
        if (rcx_2 s>= *(var_40:8.q + 0x18))
            break
        
        rdx_5 = var_48

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a52a0(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
return sub_14059a8e0(&arg1[2], arg2) __tailcall
