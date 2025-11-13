// 函数: sub_141838ce0
// 地址: 0x141838ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t* r14 = arg3
int32_t var_b4 = 1
int32_t r11 = r14[5].d
void* r10 = &r14[2]
int32_t r8 = 0
int32_t var_b0 = r10.d
int32_t r9 = 0
int32_t var_b8 = 0
int32_t var_a8 = 0xffffffff
int64_t* r15 = arg2
int64_t var_a4 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_141838d7a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_a4:4.d = r9
            var_b8 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rcx != 0)
                goto label_141838d7a
        
        var_a4.d = r11
    
    arg1 = arg_8

double zmm2[0x2] = var_a8.o
int64_t* var_48 = r14
double var_80[0x2] = zmm2
double result_1 = var_b8.o[1]
double var_70[0x2] = r14.o
uint64_t result = zmm2[0] u>> 0x20
int64_t var_50 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (result.d s< r11)
    int32_t var_54
    int32_t rbx_1 = var_54
    
    while (true)
        int64_t* r13_1 = *(arg1 + 0x528)
        int32_t rdi_1 = r15[1].d
        int64_t rdx_2 = sx.q(rbx_1) * 3
        int64_t rcx_3 = *var_70[0]
        int32_t rax_14 = *(rcx_3 + (rdx_2 << 3) + 8)
        int32_t rsi_1 = rax_14 - 1
        
        if (rax_14 == 0)
            rsi_1 = 0
        
        int32_t rax_16
        
        if (rdi_1 == 0)
            rax_16 = 2
        
        if (rdi_1 != 0 || rsi_1 == 0xffffffff)
            rax_16 = 1
        
        int64_t r15_1 = *r15
        int32_t rcx_4 = rsi_1 + rax_16
        var_b8.q = 0
        var_b0 = rdi_1
        
        if (rdi_1 != 0 || rcx_4 != 0)
            sub_1405a4c70(&var_b8, rdi_1 + rcx_4, 0)
            memcpy(var_b8.q, r15_1, rdi_1 * 2)
        else
            var_b0 = 0
        
        sub_140a2cf70(&var_b8, *(rcx_3 + (rdx_2 << 3)), rsi_1)
        int16_t* const rdx_6 = &data_142d40450
        
        if (var_b0 != 0)
            rdx_6 = var_b8.q
        
        char rax_18 = (*(*r13_1 + 0x80))(r13_1, rdx_6)
        int64_t rcx_9 = var_b8.q
        rdi_1.b = rax_18 == 0
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (rdi_1.b != 0)
            sub_1418463d0(r14, rbx_1)
        
        int32_t var_58 = var_58 & not.d(var_70[1]:4.d)
        sub_14059bdd0(&var_70[1])
        result = result_1
        rbx_1 = var_54
        
        if (rbx_1 s>= *(result + 0x18))
            break
        
        r14 = var_48
        r15 = arg2
        arg1 = arg_8

return result
