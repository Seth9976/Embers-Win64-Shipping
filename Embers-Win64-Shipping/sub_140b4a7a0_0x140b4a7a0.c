// 函数: sub_140b4a7a0
// 地址: 0x140b4a7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    GetCurrentThreadId()

int32_t var_d4 = 1
void* r15 = arg1 + 8
void* var_e8
__builtin_memset(&var_e8, 0, 0x14)
int32_t rbx_1 = *(r15 + 0x28)
void* r13 = r15 + 0x10
void* rsi = nullptr
void* var_90 = r15
int32_t rcx = 0
int32_t r8 = 0
void* var_d0 = r13
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0
int32_t var_d8_1

if (rbx_1 != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140b4a868:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_d4_1 = rax_8
        int32_t arg_18 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_c4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx_1)
            var_c4.d = rbx_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_c4:4.d = r8
            var_d8_1 = rcx
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140b4a868
        
        var_c4.d = rbx_1

int32_t rdx_5 = *(r15 + 0x28)
int128_t var_b0 = var_d8_1.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r14 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
void* var_b8
var_b8.d = r8_3
int128_t var_a0 = 0xffffffff
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_b0
var_b0:8.d = r14
var_b0:0xc.d = rdx_5
var_a0.d = r9_3
int128_t var_88 = r15.o
int128_t var_78 = zmm1

if (rdx_5 != rbx_1)
    void* rax_11 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rbx_1 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_9 != 0)
    label_140b4a94a:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_20 = temp0_3
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_3
        
        var_b0:0xc.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_1)
            var_b0:0xc.d = rbx_1
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            var_a0.d = r9_3
            var_b8.d = r8_3
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_b0:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140b4a94a
        
        var_b0:0xc.d = rbx_1

while (true)
    int64_t rcx_7 = sx.q(var_78:0xc.d)
    int64_t rax_20 = var_88.q
    int64_t var_e0_1
    
    if (rcx_7.d == (var_b0:8.q u>> 0x20).d && var_78.q == r13 && rax_20 == r15)
        int64_t rbx_3 = sx.q(var_e0_1.d)
        uint64_t result = sub_140b2d2f0(rsi, rbx_3.d, arg1.b)
        void* rdi_5 = rsi + rbx_3 * 0x18
        
        if (rsi != rdi_5)
            int64_t* rbx_4 = rsi + 0x10
            
            do
                int64_t* rcx_19 = *rbx_4
                (*(*rcx_19 + 0x10))(rcx_19)
                *rbx_4 = 0
                rbx_4 = &rbx_4[3]
                result = &rbx_4[-2]
            while (result != rdi_5)
        
        void* rbx_5 = rsi
        
        if (rsi != rdi_5)
            do
                result = sub_140b4a6b0(arg1, *rbx_5, 1)
                rbx_5 += 0x18
            while (rbx_5 != rdi_5)
        
        if (rsi == 0)
            return result
        
        return sub_140a74f90(rsi)
    
    int64_t* rdi_3 = (rcx_7 << 5) + *rax_20
    int64_t rbx_2 = *rdi_3
    void* r15_1 = rdi_3[1]
    int64_t* rdi_4 = rdi_3[2]
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
        rdi_4[1].d += 1
        rsi = var_e8
    
    int64_t* rcx_8 = *(r15_1 + 0x28)
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x30))(rcx_8) != 0)
        int64_t r14_1 = sx.q(var_e0_1.d)
        int32_t rax_23 = (r14_1 + 1).d
        var_e0_1.d = rax_23
        
        if (rax_23 s> var_e0_1:4.d)
            sub_140ac0d60(&var_e8)
            rsi = var_e8
        
        int64_t* rdx_11 = rsi + r14_1 * 0x18
        
        if (rdx_11 != 0)
            int32_t rax_24 = *(r15_1 + 0x34)
            rdx_11[2] = *(r15_1 + 0x28)
            *rdx_11 = rbx_2
            rdx_11[1].d = rax_24
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_27 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
        
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_31 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
        
        rsi = var_e8
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
    r15 = var_90
