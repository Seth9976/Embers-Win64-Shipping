// 函数: sub_1426204c0
// 地址: 0x1426204c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
arg2 = arg2 f+ arg1[0x4b].d
arg1[0x4b].d = arg2

if (arg2 f<= *(arg1 + 0x25c))
    return 

int32_t* r9_1 = &rdi[2]
int32_t var_64_1 = 1
int32_t* var_60_1 = r9_1
int32_t var_58_1 = 0xffffffff
*(arg1 + 0x25c) = arg2 + 2f
int32_t rcx = 0
int32_t r10_1 = r9_1[6]
int32_t r8_1 = 0
int32_t var_68_1 = 0
int64_t var_54_1 = 0

if (r10_1 != 0)
    int32_t* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_142620588:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54_1.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r10_1)
            var_54_1.d = r10_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_54_1:4.d = r8_1
            var_68_1 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_58_2 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142620588
        
        var_54_1.d = r10_1

int64_t* var_48_1 = rdi
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t rbx_1 = 0

while (true)
    int64_t rsi_1 = sx.q(rbx_1)
    void* rcx_3 = rsi_1 * 0x88 + *rdi
    int128_t zmm0
    zmm0.d = arg1[0x4b].d.d f- *(rcx_3 + 0x10)
    
    if (not(zmm0.d f< 2f))
        sub_14261b1d0(rcx_3)
        void* r8_3 = &rdi[2]
        int32_t rdx_5 = rol.d(1, rbx_1.b)
        
        if (*(rdi + 0x34) != 0)
            *(sx.q(rdi[6].d) * 0x88 + *rdi) = rbx_1
        
        int32_t* rax_14 = rsi_1 * 0x88 + *rdi
        *rax_14 = 0xffffffff
        int32_t rcx_6
        
        if (*(rdi + 0x34) s<= 0)
            rcx_6 = -1
        else
            rcx_6 = rdi[6].d
        
        rax_14[1] = rcx_6
        *(rdi + 0x34) += 1
        rdi[6].d = rbx_1
        void* rax_15 = *(r8_3 + 0x10)
        
        if (rax_15 != 0)
            r8_3 = rax_15
        
        if (rbx_1 s< 0)
            rbx_1 += 0x1f
        
        int64_t rax_16 = sx.q(rbx_1 s>> 5)
        *(r8_3 + (rax_16 << 2)) &= not.d(rdx_5)
    
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    rbx_1 = var_30_1:4.d
    
    if (rbx_1 s>= *(var_40:8.q + 0x18))
        break
    
    rdi = var_48_1
