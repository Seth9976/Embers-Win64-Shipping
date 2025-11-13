// 函数: sub_140aa9660
// 地址: 0x140aa9660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg2
EnterCriticalSection(arg1 + 0x50)
int32_t r11 = *(arg1 + 0x28)
int32_t r8 = 0
int32_t var_d4 = 1
int32_t var_d8 = 0
int32_t rcx_1 = 0
void* var_d0 = arg1 + 0x10
int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0
int32_t var_c0 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r9_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_c4_2
    
    if (rdx_2 != 0)
    label_140aa9718:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
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
        
        int32_t var_c4_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_c4_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            int32_t var_c0_1 = rcx_1
            var_d8 = r8
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140aa9718
        
        var_c4_2 = r11

int32_t rdx_5 = *(arg1 + 0x28)
int32_t r8_2 = rdx_5 s>> 5
int32_t r14 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
void* var_b8
var_b8.d = r8_2
int128_t var_a0 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_b0
var_b0:8.d = r14
var_b0:0xc.d = rdx_5
var_a0.d = r9_3
int128_t var_78 = arg1.o
int96_t var_68 = var_d8.o:8.12

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r14
    
    if (rdx_9 != 0)
    label_140aa97fa:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_20 = temp0_3
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_3
        
        var_b0:0xc.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_b0:0xc.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            var_a0.d = r9_3
            var_b8.d = r8_2
            
            if (rcx_6.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_b0:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140aa97fa
        
        var_b0:0xc.d = r11

uint64_t result

while (true)
    int32_t var_5c
    int64_t rcx_8 = sx.q(var_5c)
    result = var_78.q
    
    if (rcx_8.d == (var_b0:8.q u>> 0x20).d && var_68.q == arg1 + 0x10 && result == arg1)
        break
    
    void* rdx_12 = (rcx_8 << 5) + *result
    int64_t* rdi_2 = *(rdx_12 + 0x10)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    int64_t var_88 = *(rdx_12 + 8)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    result = (*r15)(*(r15 + 8), rdx_12, &var_88)
    r15.b = result.b == 0
    
    if (rdi_2 != 0)
        result = zx.q(rdi_2[1].d)
        rdi_2[1].d -= 1
        
        if (result.d == 1)
            (**rdi_2)(rdi_2)
            result = zx.q(*(rdi_2 + 0xc))
            *(rdi_2 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (rdi_2 != 0)
        result = zx.q(rdi_2[1].d)
        rdi_2[1].d -= 1
        
        if (result.d == 1)
            (**rdi_2)(rdi_2)
            result = zx.q(*(rdi_2 + 0xc))
            *(rdi_2 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (r15.b != 0)
        break
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
    r15 = arg2

if (arg1 == -0x50)
    return result

return LeaveCriticalSection(arg1 + 0x50)
