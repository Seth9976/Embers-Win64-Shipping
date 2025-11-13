// 函数: sub_1423c5f50
// 地址: 0x1423c5f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423c04b0()
int32_t r8 = 0
int32_t var_a4 = 1
int64_t* rsi = arg1 + 8
int32_t var_a8 = 0
int32_t r10 = rsi[5].d
void* r9 = &rsi[2]
void* var_a0 = r9
int32_t rcx = 0
int32_t var_98 = 0xffffffff
int32_t var_94 = 0
int32_t var_90 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    int32_t var_94_2
    
    if (rdx_3 != 0)
    label_1423c5ff8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_94_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_94_2 = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_90_1 = rcx
            var_a8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1423c5ff8
        
        var_94_2 = r10

int128_t var_70 = 0xffffffff
int64_t* var_38 = rsi
double var_80[0x2] = var_a8.o
double var_60 = rsi.o[0]
int128_t zmm6 = zx.o(0)
int64_t var_40 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r10)
    int32_t rbx_1 = var_80[1]:4.d
    
    while (true)
        void* rdi_1 = *(*var_60 + sx.q(rbx_1) * 0x10)
        zmm6 = sub_1423c65b0(rdi_1, &data_143f5a850, arg1 + 0x110)
        
        if (not(zmm6.d f>= *(rdi_1 + 0xc)))
            sub_1418ebff0(rsi, rbx_1)
            var_a8.q = rdi_1
            int64_t rdi_2 = sx.q(*(arg1 + 0xb8))
            var_a0.d = (*(rdi_1 + 0xc)).d
            var_a0:4.b = 0
            int32_t rax_12 = (rdi_2 + 1).d
            *(arg1 + 0xb8) = rax_12
            
            if (rax_12 s> *(arg1 + 0xbc))
                sub_1405a4f90(arg1 + 0xb0)
            
            *(*(arg1 + 0xb0) + rdi_2 * 0x10) = var_a8.o
        
        int32_t var_54
        var_80[1].d &= not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)
        rbx_1 = var_80[1]:4.d
        
        if (rbx_1 s>= *(var_80[0] i+ 0x18))
            break
        
        rsi = var_38

void* rdi_3 = *(arg1 + 0x58)

if (rdi_3 != 0)
    while (*(rdi_3 + 0xb) == 1)
        zmm6.d = zmm6.d f+ *(*(rdi_3 + 0x20) + 0x20)
        zmm6 = sub_1423c65b0(rdi_3, &data_143f5a850, arg1 + 0x110)
        int64_t rsi_1 = sx.q(*(arg1 + 0xb8))
        var_a8.q = rdi_3
        var_a0:4.b = 0
        int32_t rax_18 = (rsi_1 + 1).d
        int128_t zmm0_2
        zmm0_2.d = (*(rdi_3 + 0xc)).d f- (*(arg1 + 0x110) f- zmm6.d)
        *(arg1 + 0xb8) = rax_18
        var_a0.d = zmm0_2.d
        
        if (rax_18 s> *(arg1 + 0xbc))
            sub_1405a4f90(arg1 + 0xb0)
        
        *(*(arg1 + 0xb0) + rsi_1 * 0x10) = var_a8.o
        rdi_3 = *(*(rdi_3 + 0x20) + 0x18)
        *(arg1 + 0x58) = rdi_3
        
        if (rdi_3 == 0)
            break

return sub_1423c8d00(arg1) __tailcall
