// 函数: sub_141dcfd60
// 地址: 0x141dcfd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[3]
int64_t r15 = 0
char rax = *(arg1 + 0x183)

if (r9 != 0 && (rax & 0x10) == 0)
    void* rcx = arg1[0xa]
    void* r8_3
    
    if (rcx == 0)
        r8_3 = nullptr
    else
        int32_t* rdx_3
        
        if (*(r9 + 0x40) == *(r9 + 0x6c))
            rdx_3 = nullptr
        else
            int64_t r10_1 = sx.q(*(rcx + 0x28))
            void* r8_1 = r9 + 0x70
            void* rdx = *(r8_1 + 8)
            
            if (rdx != 0)
                r8_1 = rdx
            
            int32_t rax_2 = *(r8_1 + (((sx.q(*(r9 + 0x80)) - 1) & r10_1) << 2))
            
            if (rax_2 == 0xffffffff)
                rdx_3 = nullptr
            else
                while (true)
                    rdx_3 = (sx.q(rax_2) << 4) + *(r9 + 0x38)
                    
                    if (*rdx_3 == r10_1.d)
                        break
                    
                    rax_2 = rdx_3[2]
                    
                    if (rax_2 == 0xffffffff)
                        r8_3 = nullptr
                        goto label_141dcfe2f
                
                if (rax_2 == 0xffffffff)
                    rdx_3 = nullptr
        
        r8_3 = &rdx_3[1]
        
        if (rdx_3 == 0)
            r8_3 = nullptr
    
label_141dcfe2f:
    
    if (r8_3 != 0)
        int32_t rax_3 = *r8_3
        int32_t rcx_4 = 0
        
        if (rax_3 - 1 s>= 0)
            rcx_4 = rax_3 - 1
        
        *r8_3 = rcx_4
        
        if (rcx_4 == 0)
            sub_140d6dfe0(arg1[3] + 0x38, *(arg1[0xa] + 0x28))
    
    void* rax_6 = arg1[0xa]
    
    if ((*(rax_6 + 0x358) & 0x10) != 0 && *(rax_6 + 0x60) != 0 && (*(*arg1 + 8))(arg1) != 0)
        int64_t* rcx_8 = *(arg1[0xa] + 0x60)
        (*(*rcx_8 + 0x30))(rcx_8, arg1)

void* r10_2 = &arg1[0x28]
int64_t* var_d8 = nullptr
int32_t r11 = *(r10_2 + 0x18)
int32_t rcx_9 = 0
int32_t var_cc = 0
int64_t* r12 = nullptr
int32_t var_c8 = 0
int32_t result_1 = 0
int32_t var_c4 = 1
int32_t r8_4 = 0
void* var_c0 = r10_2
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r11 != 0)
    void* rax_11 = *(r10_2 + 0x10)
    void* r9_1 = r10_2
    
    if (rax_11 != 0)
        r9_1 = rax_11
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *r9_1
    
    if (rdx_8 != 0)
    label_141dcff18:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
        int32_t var_c4_1 = rax_18
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_2
        
        var_b4.d = r8_4 - rax_19 + 0x1f
        
        if (r8_4 - rax_19 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_9)
            r8_4 += 0x20
            rcx_9 += 1
            var_b4:4.d = r8_4
            var_c8 = rcx_9
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141dcff18
        
        var_b4.d = r11
    
    r10_2 = var_c0

int32_t rdi = *(r10_2 + 0x18)
void* r11_1 = &arg1[0x26]
int32_t rdx_10 = *(r11_1 + 0x28)
void* var_a8 = r11_1
uint128_t var_a0 = var_c8.o
uint128_t zmm0 = var_a8.o
int32_t r13 = 0xffffffff << (rdx_10.b & 0x1f)
int128_t var_90 = 0xffffffff
int32_t r8_7 = rdx_10 s>> 5
int32_t r9_3 = rdx_10 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
uint128_t zmm1 = var_a0
var_a0:8.d = r13
var_a0:0xc.d = rdx_10
uint128_t var_68 = zmm0
uint128_t var_58 = zmm1

if (rdx_10 != rdi)
    void* rax_21 = *(r10_2 + 0x10)
    
    if (rax_21 != 0)
        r10_2 = rax_21
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_14 = *(r10_2 + (sx.q(r8_7) << 2)) & r13
    
    if (rdx_14 != 0)
    label_141dcfff2:
        int32_t rax_28 = neg.d(rdx_14) & rdx_14
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_28)
        int32_t rbx_1
        
        if (rax_28 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_a0:0xc.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> rdi)
            var_a0:0xc.d = rdi
    else
        while (true)
            int64_t rcx_14 = sx.q(r8_7)
            r9_3 += 0x20
            r8_7 += 1
            
            if (rcx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r10_2 + (rcx_14 << 2) + 4)
            var_a0:8.d = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_141dcfff2
        
        var_a0:0xc.d = rdi
    
    r10_2 = var_c0
    r11_1 = &arg1[0x26]

uint64_t rcx_17 = var_a0:8.q u>> 0x20
uint64_t arg_18 = rcx_17

while (true)
    int64_t rax_30 = sx.q(var_58:0xc.d)
    int64_t* rdx_15 = var_68.q
    
    if (rax_30.d == rcx_17.d && var_58.q == r10_2 && rdx_15 == r11_1)
        uint64_t result = sx.q(result_1)
        int64_t* rbx_3 = r12
        void* rcx_28 = &r12[result]
        uint64_t rdi_5 = (rcx_28 - r12 + 7) u>> 3
        
        if (r12 u> rcx_28)
            rdi_5 = 0
        
        if (rdi_5 != 0)
            do
                result = sub_141dd4b30(arg1, *(*rbx_3 + 0x230))
                r15 += 1
                rbx_3 = &rbx_3[1]
            while (r15 != rdi_5)
        
        if (arg2 != 0)
            *(arg1 + 0x183) &= 0xef
        
        if ((rax & 0x10) == 0)
            result = sub_141e84960(arg1[0xa], arg1)
        
        if (r12 == 0)
            return result
        
        return sub_140a74f90(r12)
    
    void* rcx_19 = arg1[0xa]
    int64_t r13_1 = _mm_bsrli_si128(*(*rdx_15 + rax_30 * 0x18), 8).q
    int64_t* rax_32 = sub_141e7ed60(rcx_19, r13_1)
    
    if (rax_32 != 0)
        void* rax_33 = arg1[0xa]
        
        if ((*(rax_33 + 0x352) & 0x28) != 0x28 || (arg2 == 0 && *(rax_33 + 0x148) != 0))
            (*(*rax_32 + 0x38))(rax_32)
        else
            (*(*rax_32 + 0x40))(rax_32)
    
    if ((*(arg1 + 0x183) & 0x10) == 0)
        var_a0:8.q = 0
        var_90:8.q = &data_142da2668
        int64_t var_80_1 = r13_1
        var_a8 = sub_141dbb930
        sub_141e85f30(&var_a8)
    
    if (rax_32 == 0)
        goto label_141dd00f8
    
    if ((*(*rax_32 + 0x48))(rax_32) != 0)
        *(arg1 + 0x183) |= 0x10
    else
        (*(*rax_32 + 0x40))(rax_32)
    label_141dd00f8:
        int64_t result_2 = sx.q(result_1)
        result_1 = (result_2 + 1).d
        
        if (result_1 s> var_cc)
            sub_1405a4d70(&var_d8)
            r12 = var_d8
        
        r12[result_2] = r13_1
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
    rcx_17 = arg_18
    r11_1 = &arg1[0x26]
    r10_2 = var_c0
