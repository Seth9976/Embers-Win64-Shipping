// 函数: sub_142175660
// 地址: 0x142175660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142165ea0(&arg1[0x14], 0)

if (&arg1[0xa] != arg1)
    int64_t rdi_1 = sx.q(arg1[9].d)
    void* rbx_1 = &arg1[0x11]
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_1 = arg1[8]
    void* rdx_1 = &arg1[7]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_1 != 0)
        rdx_1 = rax_1
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx_1, (rdi_1 << 2).d)
    arg1[0x13].d = rdi_1.d
    sub_140e999f0(&arg1[0xa], arg1)

int32_t r10 = arg1[5].d
void* r9_2 = &arg1[2]
int32_t var_64 = 1
void* var_60 = r9_2
int32_t rcx_4 = 0
int32_t var_68 = 0
int32_t r8_4 = 0
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r10 != 0)
    void* rax_2 = *(r9_2 + 0x10)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_5 = *r9_2
    
    if (rdx_5 != 0)
    label_142175768:
        int32_t rax_9 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_64_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_54.d = r8_4 - rax_10 + 0x1f
        
        if (r8_4 - rax_10 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_4)
            r8_4 += 0x20
            rcx_4 += 1
            var_54:4.d = r8_4
            var_68 = rcx_4
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_2 + (rdx_6 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_142175768
        
        var_54.d = r10

int64_t* var_40 = arg1
int128_t var_20 = 0xffffffff
double var_30[0x2] = var_68.o
var_68.o = arg1.o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_30

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rdi_2 = *(*var_68.q + sx.q(i) * 0x18)
        *(rdi_2 + 0x38) = 0
        
        if (*(rdi_2 + 0x3c) != 0)
            sub_1405a5410(rdi_2 + 0x30, 0)
        
        *(rdi_2 + 0x60) = 0xffffffff
        *(rdi_2 + 0x64) = 0
        sub_14059a8e0(rdi_2 + 0x40, 0)
        int32_t j_4 = *(rdi_2 + 0x78)
        
        if (j_4 s> 0)
            int64_t r8_6 = 0
            uint64_t j_2 = zx.q(j_4)
            uint64_t j
            
            do
                void* rcx_9 = *(rdi_2 + 0x70)
                void* rax_14 = rdi_2 + 0x68
                int64_t rdx_10 = (sx.q(*(rdi_2 + 0x78)) - 1) & r8_6
                
                if (rcx_9 != 0)
                    rax_14 = rcx_9
                
                r8_6 += 1
                *(rax_14 + (rdx_10 << 2)) = 0xffffffff
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        *(rdi_2 + 0x88) = 0
        
        if (*(rdi_2 + 0x8c) != 0)
            sub_1405a5410(rdi_2 + 0x80, 0)
        
        *(rdi_2 + 0xb0) = 0xffffffff
        *(rdi_2 + 0xb4) = 0
        sub_14059a8e0(rdi_2 + 0x90, 0)
        int32_t j_5 = *(rdi_2 + 0xc8)
        
        if (j_5 s> 0)
            int64_t r8_7 = 0
            uint64_t j_3 = zx.q(j_5)
            uint64_t j_1
            
            do
                void* rcx_12 = *(rdi_2 + 0xc0)
                void* rax_15 = rdi_2 + 0xb8
                int64_t rdx_13 = (sx.q(*(rdi_2 + 0xc8)) - 1) & r8_7
                
                if (rcx_12 != 0)
                    rax_15 = rcx_12
                
                r8_7 += 1
                *(rax_15 + (rdx_13 << 2)) = 0xffffffff
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        i = i_1
    while (i s< *(var_58.q + 0x18))

return sub_14084f020(&arg1[0x1e], 0) __tailcall
