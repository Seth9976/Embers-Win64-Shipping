// 函数: sub_142373350
// 地址: 0x142373350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int32_t var_c4 = 1
void* r11 = arg1 + 0x3d0
void** var_a8 = nullptr
int32_t r10 = *(r11 + 0x28)
void* rbx = r11 + 0x10
int32_t var_9c = 0
int32_t rcx = 0
void* arg_18 = r11
void** r15 = nullptr
int32_t var_c8 = 0
int32_t result_1 = 0
void* var_c0 = rbx
int32_t r13 = 0
int32_t var_b8 = 0xffffffff
int32_t r8 = 0
int32_t var_b4 = 0
int32_t var_b0 = 0

if (r10 != 0)
    void* rax_1 = *(rbx + 0x10)
    void* r9_1 = rbx
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_b4_2
    
    if (rdx_2 != 0)
    label_142373409:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_b4_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_b4_2 = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_b0_1 = rcx
            var_c8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_142373409
        
        var_b4_2 = r10

int32_t rdx_5 = *(r11 + 0x28)
int128_t var_90 = var_c8.o
int32_t r12 = 0xffffffff << (rdx_5 & 0x1f).b
int32_t r9_3 = rdx_5 & 0xffffffe0
int128_t var_80 = 0xffffffff
int32_t r8_2 = rdx_5 s>> 5
int64_t var_50 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int64_t zmm1 = var_90:8.q
var_90:8.d = r12
var_90:0xc.d = rdx_5
int128_t var_70 = r11.o

if (rdx_5 != r10)
    void* rax_13 = *(rbx + 0x10)
    void* r11_1 = rbx
    
    if (rax_13 != 0)
        r11_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_9 != 0)
    label_1423734d8:
        int32_t rax_19 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rdi_1
        
        if (rax_19 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_90:0xc.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r10)
            var_90:0xc.d = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_4 << 2) + 4)
            var_90:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1423734d8
        
        var_90:0xc.d = r10
    
    r11 = arg_18
    rbx = var_c0

while (true)
    int32_t var_54
    int64_t rcx_6 = sx.q(var_54)
    int32_t rax_12
    
    if (rcx_6.d != (var_90:8.q u>> 0x20).d || zmm1 != rbx)
        rax_12.b = 0
    else
        rax_12.b = 1
    
    int64_t rdx_10 = var_70.q
    
    if (rax_12.b == 0 || rdx_10 != r11)
        rax_12.b = 1
    else
        rax_12.b = 0
    
    if (rax_12.b == 0)
        break
    
    int32_t* rcx_8 = (rcx_6 << 5) + *rdx_10
    int32_t arg_20 = *rcx_8
    int32_t arg_24 = rcx_8[1]
    void* i_1 = sub_140d3c6e0(&arg_20)
    void* const i = i_1
    void* rax_22
    void* rcx_10
    int64_t rdx_11
    
    if (i_1 != 0)
        rax_22 = sub_142531230()
        rcx_10 = *(i + 0x10)
        rdx_11 = sx.q(*(rax_22 + 0x38))
    
    if (i_1 == 0 || rdx_11.d s> *(rcx_10 + 0x38)
            || *(*(rcx_10 + 0x30) + (rdx_11 << 3)) != rax_22 + 0x30)
        i = nullptr
    
    int64_t* rax_24 = *arg2
    void* rdx_12 = &rax_24[sx.q(arg2[1].d)]
    
    if (rax_24 == rdx_12)
    label_1423735ae:
        int64_t result_2 = sx.q(result_1)
        result_1 = (result_2 + 1).d
        
        if (result_1 s> r13)
            sub_1405a4d70(&var_a8)
            r13 = var_9c
            r15 = var_a8
        
        r15[result_2] = i
    else
        while (*rax_24 != i)
            rax_24 = &rax_24[1]
            
            if (rax_24 == rdx_12)
                goto label_1423735ae
    
    int32_t var_58 = var_58 & not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)
    r11 = arg_18
    rbx = var_c0

uint64_t result = sx.q(result_1)
void** rbx_2 = r15
void* rcx_16 = &r15[result]
uint64_t rdi_5 = (rcx_16 - r15 + 7) u>> 3

if (r15 u> rcx_16)
    rdi_5 = 0

if (rdi_5 != 0)
    do
        result = sub_142373660(arg1, *rbx_2)
        rsi += 1
        rbx_2 = &rbx_2[1]
    while (rsi != rdi_5)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
