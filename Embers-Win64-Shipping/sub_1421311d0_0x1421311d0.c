// 函数: sub_1421311d0
// 地址: 0x1421311d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0xd0)
int64_t rsi = 0
int32_t rdi_1 = rdi - *(arg1 + 0xfc)
bool cond:0 = rdi == *(arg1 + 0xfc)
int32_t rax = 0
int64_t* rbx = *(arg1 + 0x118)
int32_t var_ac = 0
int32_t* r15 = nullptr
int32_t arg_8 = rdi_1
int32_t r14 = 0
int32_t* var_b8 = nullptr
int32_t var_b0 = 0

if (not(cond:0))
    sub_1405dadb0(&var_b8, rdi_1)
    rax = var_ac
    r14 = var_b0
    r15 = var_b8
    rdi_1 = arg_8

int32_t rcx_1 = r14 + rdi_1

if (rcx_1 s> rax)
    sub_1405a4cf0(&var_b8)
    r15 = var_b8

if (rdi_1 != 0)
    __builtin_memset(&r15[sx.q(r14)], 0, zx.q(rdi_1) << 2)

int32_t var_a4 = 1
int32_t r10 = *(arg1 + 0xf0)
void* var_a0 = arg1 + 0xd8
int32_t rcx_4 = 0
int32_t var_a8 = 0
int32_t rdi_3 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r10 != 0)
    void* rax_2 = *(arg1 + 0xe8)
    void* r8_1 = arg1 + 0xd8
    
    if (rax_2 != 0)
        r8_1 = rax_2
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_6 = *r8_1
    
    if (rdx_6 != 0)
    label_1421312e6:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_a4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_1
        
        var_94.d = rdi_3 - rax_10 + 0x1f
        
        if (rdi_3 - rax_10 + 0x1f s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_4)
            rdi_3 += 0x20
            rcx_4 += 1
            var_94:4.d = rdi_3
            var_a8 = rcx_4
            
            if (rdx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r8_1 + (rdx_7 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1421312e6
        
        var_94.d = r10

int32_t rdx_8 = *(arg1 + 0xf0)
var_94.d = rdx_8
int32_t r8_2 = 0xffffffff << (rdx_8.b & 0x1f)
int32_t var_98_2 = r8_2
int128_t var_58 = var_a8.o
int32_t r8_4 = rdx_8 & 0xffffffe0
int32_t rdi_6 = rdx_8 s>> 5
int128_t var_48 = 0xffffffff
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int512_t zmm1
zmm1.o = var_58
int128_t var_88 = (arg1 + 0xc8).o
int128_t var_78 = zmm1.o

if (rdx_8 != r10)
    void* rax_12 = *(arg1 + 0xe8)
    void* r9_1 = arg1 + 0xd8
    
    if (rax_12 != 0)
        r9_1 = rax_12
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r10 - 1)
    int32_t rdx_12 = *(r9_1 + (sx.q(rdi_6) << 2)) & r8_2
    
    if (rdx_12 != 0)
    label_1421313b1:
        int32_t rax_19 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_3
        
        var_94.d = r8_4 - r11_1 + 0x1f
        
        if (r8_4 - r11_1 + 0x1f s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rcx_9 = sx.q(rdi_6)
            r8_4 += 0x20
            rdi_6 += 1
            
            if (rcx_9.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r9_1 + (rcx_9 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_1421313b1
        
        var_94.d = r10

while (true)
    int64_t rax_21 = sx.q(var_78:0xc.d)
    int64_t rcx_12 = var_88.q
    
    if (rax_21.d == (var_98_2.q u>> 0x20).d && var_78.q == arg1 + 0xd8 && rcx_12 == arg1 + 0xc8)
        int64_t* rcx_15 = rbx[1]
        int32_t* rdx_13 = *rcx_15
        
        if (&rdx_13[1] u> rcx_15[1])
            int32_t* rdx_14 = &arg_8
            
            if ((*(rbx + 0x29) & 0x20) != 0)
                sub_140b54070(rbx, rdx_14, zmm1)
            else
                (*(*rbx + 0x150))(rbx, rdx_14, 4)
        else
            arg_8 = *rdx_13
            int64_t* rax_29 = rbx[1]
            *rax_29 += 4
        
        int32_t* rdi_9 = r15
        void* rcx_17 = &r15[sx.q(rcx_1)]
        uint64_t r14_5 = (rcx_17 - r15 + 3) u>> 2
        
        if (r15 u> rcx_17)
            r14_5 = 0
        
        if (r14_5 != 0)
            do
                char* rax_32
                int512_t zmm1_1
                rax_32, zmm1_1 = sub_140b5e600(*rdi_9)
                zmm1 = sub_140b640c0(rax_32, rbx, zmm1_1)
                rsi += 1
                rdi_9 = &rdi_9[1]
            while (rsi != r14_5)
        
        sub_1418d5c30(rbx, arg1 + 0xb8, zmm1)
        int32_t arg_10 = *(arg1 + 0xb0)
        int64_t* rcx_21 = rbx[1]
        int32_t* rdx_17 = *rcx_21
        
        if (&rdx_17[1] u> rcx_21[1])
            int32_t* rdx_18 = &arg_10
            
            if ((*(rbx + 0x29) & 0x20) != 0)
                sub_140b54070(rbx, rdx_18, zmm1)
            else
                (*(*rbx + 0x150))(rbx, rdx_18, 4)
        else
            arg_10 = *rdx_17
            int64_t* rax_36 = rbx[1]
            *rax_36 += 4
        
        int64_t result = (*(*rbx + 0x150))(rbx, *(arg1 + 0xa8), sx.q(arg_10))
        
        if (r15 == 0)
            return result
        
        return sub_140a74f90(r15)
    
    int32_t* rax_23 = (rax_21 << 4) + *rcx_12
    r15[sx.q(rax_23[1])] = *rax_23
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
