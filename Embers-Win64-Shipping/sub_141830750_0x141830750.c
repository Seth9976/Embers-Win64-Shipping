// 函数: sub_141830750
// 地址: 0x141830750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2[1]
void* r13 = *arg2

if (rdi != 0)
    rdi[1].d += 1

int32_t rcx = 0
int32_t var_d4 = 1
int32_t var_d8 = 0
int32_t r11 = *(r13 + 0x130)
void* var_d0 = r13 + 0x118
int32_t r8 = 0
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0

if (r11 != 0)
    void* rax_1 = *(r13 + 0x128)
    void* r9_1 = r13 + 0x118
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141830808:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_d4_1 = rax_8
        int32_t arg_10 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_c4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_c4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_c4:4.d = r8
            var_d8 = rcx
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141830808
        
        var_c4.d = r11

int32_t rdx_4 = *(r13 + 0x130)
int128_t var_58 = var_d8.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r9_3 = rdx_4 & 0xffffffe0
int32_t var_b8 = r8_3
int32_t var_a8 = r14
int32_t var_a4 = rdx_4
int32_t var_a0 = r9_3
int128_t var_48 = 0xffffffff
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_88 = (r13 + 0x108).o
int128_t var_78 = var_58

if (rdx_4 != r11)
    void* rax_11 = *(r13 + 0x128)
    void* r10_1 = r13 + 0x118
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    int32_t var_a4_2
    
    if (rdx_8 != 0)
    label_1418308ea:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_20 = temp0_3
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        int32_t var_a4_1 = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_a4_2 = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            int32_t var_a0_1 = r9_3
            int32_t var_b8_1 = r8_3
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1418308ea
        
        var_a4_2 = r11

while (true)
    uint64_t result = sx.q(var_78:0xc.d)
    int64_t* rdx_9 = var_88.q
    
    if (result.d == (var_a8.q u>> 0x20).d && var_78.q == r13 + 0x118 && rdx_9 == r13 + 0x108)
        if (rdi != 0)
            result = zx.q(rdi[1].d)
            rdi[1].d -= 1
            
            if (result.d == 1)
                result = (**rdi)(rdi)
                int32_t rbx_3 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rbx_3 == 1)
                    return (*(*rdi + 8))(rdi, zx.q(rbx_3))
        
        return result
    
    int64_t* rbx_2 = *rdx_9 + result * 0x28
    int32_t* rax_21
    void var_98
    
    if (arg3 == 0)
        rax_21 = sub_14062d6e0(arg1 + 0x108, &var_98, rbx_2)
    
    if (arg3 != 0 || *rax_21 == 0xffffffff)
        sub_1406253f0(arg1 + 0x108, rbx_2, &rbx_2[2])
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
