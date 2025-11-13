// 函数: sub_140a823e0
// 地址: 0x140a823e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int32_t var_c4 = 1
int32_t var_c8 = 0
int32_t rbx = arg1[0x10].d
void* var_c0 = &arg1[0xd]
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0
int32_t r8 = 0

if (rbx != 0)
    void* rax_1 = arg1[0xf]
    void* r9 = &arg1[0xd]
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r9
    
    if (rcx != 0)
    label_140a82489:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_b4.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r10)
            r8 += 0x20
            r10 += 1
            var_b4:4.d = r8
            var_c8 = r10
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r9 + (rcx_1 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rcx != 0)
                goto label_140a82489
        
        var_b4.d = rbx

int32_t rbx_1 = arg1[0x10].d
int32_t r15 = arg1[0x10].d
double zmm2[0x2] = var_b8.o
int128_t var_60 = var_c8.o
int32_t r8_3 = rbx_1 s>> 5
int128_t result = (&arg1[0xb]).o
int32_t r9_2 = rbx_1 & 0xffffffe0
double var_50[0x2] = zmm2
int64_t var_88 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t result_1 = result
int128_t var_98 = var_60

if (rbx_1 != r15)
    void* rax_11 = arg1[0xf]
    void* r10_1 = &arg1[0xd]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r15 - 1)
    int32_t rdx_5 = *(r10_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (rbx_1.b & 0x1f)
    
    if (rdx_5 != 0)
    label_140a8254b:
        int32_t rax_18 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rsi_1
        
        if (rax_18 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        rbx_1 = r9_2 - rsi_1 + 0x1f
        
        if (rbx_1 s> r15)
            rbx_1 = r15
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r10_1 + (rcx_6 << 2) + 4)
            
            if (rdx_5 != 0)
                goto label_140a8254b
        
        rbx_1 = r15

while (true)
    int64_t rcx_8 = sx.q(var_98:0xc.d)
    void** rdx_6 = result_1.q
    
    if (rcx_8.d == rbx_1 && var_98.q == &arg1[0xd] && rdx_6 == &arg1[0xb])
        return result
    
    int32_t var_70_1 = arg3[1].d
    var_c8.o = (*arg3).o
    result = sub_140a68db0(arg1, *rdx_6 + rcx_8 * 0xd8 + 0x18, arg2, &var_c8, arg4, arg5)
    var_98:8.d &= not.d(result_1:0xc.d)
    sub_14059bdd0(&result_1:8)
