// 函数: sub_141de1ba0
// 地址: 0x141de1ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* arg_8 = arg1
void* r11_1 = arg2

if (*(arg2 + 8) - *(arg2 + 0x34) s<= 0)
    return 

int32_t rbx_1 = *(arg1 + 0x170)
int64_t rsi_1 = sx.q(arg4[1].d)

if (rbx_1 s> rsi_1.d)
    arg4[1].d = rbx_1
    
    if (rbx_1 s> *(arg4 + 0xc))
        sub_1406105e0(arg4)
    
    memset(*arg4 + (rsi_1 << 2), 0, sx.q(rbx_1 - rsi_1.d) << 2)
    r11_1 = arg2
else if (rbx_1 s< rsi_1.d && rbx_1 != rsi_1.d)
    arg4[1].d = rbx_1
    sub_1405dac90(arg4)
    r11_1 = arg2

if (rbx_1 s<= 0)
    return 

int32_t rbx_2 = *(r11_1 + 0x28)
int32_t rcx_3 = 0
int32_t r8_2 = 0
void* r13_1 = r11_1 + 0x10
int32_t var_d8_1 = 0
int32_t var_d4_1 = 1
void* var_d0_1 = r13_1
int32_t var_c8_1 = 0xffffffff
int64_t var_c4_1 = 0

if (rbx_2 != 0)
    void* rax_3 = *(r13_1 + 0x10)
    void* r9 = r13_1
    
    if (rax_3 != 0)
        r9 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_2 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141de1ce5:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_d4_2 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_c4_1.d = r8_2 - rax_11 + 0x1f
        
        if (r8_2 - rax_11 + 0x1f s> rbx_2)
            var_c4_1.d = rbx_2
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_3)
            r8_2 += 0x20
            rcx_3 += 1
            var_c4_1:4.d = r8_2
            var_d8_1 = rcx_3
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_c8_2 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141de1ce5
        
        var_c4_1.d = rbx_2
    
    r11_1 = arg2

int32_t r12_1 = *(r11_1 + 0x28)
uint32_t var_80_1[0x4] = var_d8_1.o
int32_t r8_5 = r12_1 s>> 5
int32_t r9_2 = r12_1 & 0xffffffe0
int128_t var_70_1 = 0xffffffff
int64_t var_90_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
uint32_t var_b0[0x4] = r11_1.o

if (r12_1 != rbx_2)
    void* rax_13 = *(r13_1 + 0x10)
    void* r11_2 = r13_1
    
    if (rax_13 != 0)
        r11_2 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_2 - 1)
    int32_t rdx_8 = *(r11_2 + (sx.q(r8_5) << 2)) & 0xffffffff << (r12_1.b & 0x1f)
    
    if (rdx_8 != 0)
    label_141de1d9b:
        int32_t rax_20 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rsi_2
        
        if (rax_20 == 0)
            rsi_2 = 0x20
        else
            rsi_2 = 0x1f - temp0_4
        
        r12_1 = r9_2 - rsi_2 + 0x1f
        
        if (r12_1 s> rbx_2)
            r12_1 = rbx_2
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_5)
            r9_2 += 0x20
            r8_5 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r11_2 + (rcx_8 << 2) + 4)
            
            if (rdx_8 != 0)
                goto label_141de1d9b
        
        r12_1 = rbx_2
    
    r11_1 = arg2

void* rsi_3 = arg_8
uint32_t zmm6[0x4]
uint32_t var_48_1[0x4] = zmm6

while (true)
    uint64_t rax = sx.q(var_80_1[3])
    int64_t* rdx_9 = var_b0[0].q
    
    if (rax.d == r12_1 && var_80_1[0].q == r13_1 && rdx_9 == r11_1)
        break
    
    int64_t rdx_10 = *rdx_9
    uint64_t rcx_10 = rax * 5
    arg_8.d = 0xffffffff
    zmm6 = *(rdx_10 + (rcx_10 << 2) + 8)
    int64_t i_1 = sub_142310a20(rsi_3, *(rdx_10 + (rcx_10 << 2)), &arg_8)
    
    if (i_1 != 0)
        int64_t rbx_3 = sx.q(arg3[1].d)
        
        if (_mm_and_ps(zmm6, 0x7fffffff)[0] f<= 9.99999994e-09f)
            int32_t i = 0
            
            if (rbx_3.d s> 0)
                int64_t* rcx_18 = *arg3
                
                do
                    if (*rcx_18 == i_1)
                        if (i != 0xffffffff)
                            *(*arg4 + (sx.q(arg_8.d) << 2)) = 0
                        
                        break
                    
                    i += 1
                    rcx_18 = &rcx_18[2]
                while (i s< rbx_3.d)
        else
            int32_t rcx_12 = 0
            
            if (rbx_3.d s> 0)
                int64_t* rax_21 = *arg3
                
                while (*rax_21 != i_1)
                    rcx_12 += 1
                    rax_21 = &rax_21[2]
                    
                    if (rcx_12 s>= rbx_3.d)
                        goto label_141de1e62
            
            if (rbx_3.d s<= 0 || rcx_12 == 0xffffffff)
            label_141de1e62:
                var_d0_1.d = arg_8.d
                int32_t rax_23 = (rbx_3 + 1).d
                var_d8_1.q = i_1
                arg3[1].d = rax_23
                
                if (rax_23 s> *(arg3 + 0xc))
                    sub_1405a4f90(arg3)
                
                *(*arg3 + rbx_3 * 0x10) = var_d8_1.o
                *(*arg4 + (sx.q(arg_8.d) << 2)) = zmm6[0]
            else
                *(*arg4 + (sx.q(arg_8.d) << 2)) = zmm6[0]
    
    var_80_1[2] &= not.d(var_b0[3])
    sub_14059bdd0(&var_b0[2])
    r11_1 = arg2
