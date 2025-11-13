// 函数: sub_140aa94a0
// 地址: 0x140aa94a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg1[5].d
int32_t var_64 = 1
int32_t var_68 = 0
void* var_60 = &arg1[2]
int32_t var_58 = 0xffffffff
int32_t r8 = 0
int64_t var_54 = 0
int32_t r9 = 0

if (r10 != 0)
    void* rax_1 = arg1[4]
    void* r11_1 = &arg1[2]
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rcx = *r11_1
    
    if (rcx != 0)
    label_140aa953a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_54:4.d = r9
            var_68 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r11_1 + (rcx_1 << 2) + 4)
            int32_t var_58_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_140aa953a
        
        var_54.d = r10

int64_t* rdx_2 = arg1
int64_t* var_48 = rdx_2
int128_t var_40 = var_68.o
int64_t var_30 = 0xffffffff

if (0 s< r10)
    int32_t rcx_3 = 0
    
    while (true)
        void* rbx_2 = sx.q(rcx_3) * 0xb0 + *rdx_2
        *(rbx_2 + 0xa0) = 0
        int64_t rcx_4 = *(rbx_2 + 0x98)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        sub_14065d900(rbx_2 + 0x58)
        *(rbx_2 + 0x50) = 0
        int64_t rcx_6 = *(rbx_2 + 0x48)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        sub_14065d900(rbx_2 + 8)
        var_30.d &= not.d(var_40:4.d)
        sub_14059bdd0(&var_40)
        rcx_3 = var_30:4.d
        
        if (rcx_3 s>= *(var_40:8.q + 0x18))
            break
        
        rdx_2 = var_48

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_140a05f70(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
return sub_14059a8e0(&arg1[2], arg2) __tailcall
