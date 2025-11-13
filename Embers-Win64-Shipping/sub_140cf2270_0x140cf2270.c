// 函数: sub_140cf2270
// 地址: 0x140cf2270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t rsi = arg4

if (arg1[0x15].d == arg4)
    return 0

arg1[0x15].d = arg4
int32_t rax_1 = *(*arg1 + 0xc)
int64_t rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = 0
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

if ((*(rax_8 + 8) & 0x4e000000) != 0)
    int64_t* rax_36 = j_sub_140a82f30(0x20)
    int64_t* rbx_4 = rax_36
    
    if (rax_36 == 0)
        rbx_4 = nullptr
    else
        __builtin_memset(rax_36, 0, 0x20)
        
        if (arg3 s> *(rax_36 + 0xc))
            sub_1405c5570(rax_36, arg3)
    
    sub_140d08a20(rbx_4, arg1)
    int64_t rdi_3 = sx.q(arg2[1].d)
    int32_t rax_37 = (rdi_3 + 1).d
    arg2[1].d = rax_37
    
    if (rax_37 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rdi_3 << 3)) = rbx_4
    return 1

void* r9 = &arg1[0xb]
int32_t rbx = *(r9 + 0x28)
void* r12_1 = r9 + 0x10
int32_t var_b4_1 = 1
int32_t rcx_4 = 0
int32_t var_b8_1 = 0
int32_t r8 = 0
void* var_b0_1 = r12_1
int32_t var_a8_1 = 0xffffffff
int64_t var_a4_1 = 0

if (rbx != 0)
    void* rax_9 = *(r12_1 + 0x10)
    void* r9_1 = r12_1
    
    if (rax_9 != 0)
        r9_1 = rax_9
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_140cf2399:
        int32_t rax_15 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_b4_2 = rax_15
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_2
        
        var_a4_1.d = r8 - rax_16 + 0x1f
        
        if (r8 - rax_16 + 0x1f s> rbx)
            var_a4_1.d = rbx
    else
        while (true)
            int64_t rax_12 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_a4_1:4.d = r8
            var_b8_1 = rcx_4
            
            if (rax_12.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rax_12 << 2) + 4)
            int32_t var_a8_2 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140cf2399
        
        var_a4_1.d = rbx
    
    r9 = &arg1[0xb]

int32_t rdx_6 = *(r9 + 0x28)
int32_t rdi_1 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t rcx_9 = rdx_6 & 0xffffffe0
int32_t r8_3 = rdx_6 s>> 5
int128_t var_80_1 = 0xffffffff
int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_90_1
var_90_1:8.d = rdi_1
var_90_1:0xc.d = rdx_6
int128_t var_68 = r9.o
int128_t var_58_1 = var_b8_1.o

if (rdx_6 != rbx)
    void* rax_18 = *(r12_1 + 0x10)
    void* r9_2 = r12_1
    
    if (rax_18 != 0)
        r9_2 = rax_18
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(rbx - 1)
    int32_t rdx_10 = *(r9_2 + (sx.q(r8_3) << 2)) & rdi_1
    
    if (rdx_10 != 0)
    label_140cf2462:
        int32_t rax_25 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t r11_1
        
        if (rax_25 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_90_1:0xc.d = rcx_9 - r11_1 + 0x1f
        
        if (rcx_9 - r11_1 + 0x1f s> rbx)
            var_90_1:0xc.d = rbx
    else
        while (true)
            int64_t rax_22 = sx.q(r8_3)
            rcx_9 += 0x20
            r8_3 += 1
            
            if (rax_22.d s>= ((temp4_1 & 0x1f) + temp5_1) s>> 5)
                break
            
            rdx_10 = *(r9_2 + (rax_22 << 2) + 4)
            var_90_1:8.d = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140cf2462
        
        var_90_1:0xc.d = rbx
    
    r9 = &arg1[0xb]

uint64_t rdx_13 = var_90_1:8.q u>> 0x20
uint64_t var_70_1 = rdx_13

while (true)
    int64_t rcx_11 = sx.q(var_58_1:0xc.d)
    int64_t* rax_27 = var_68.q
    
    if (rcx_11.d == rdx_13.d && var_58_1.q == r12_1 && rax_27 == r9)
        return zx.q(r15)
    
    void* rcx_13 = *(*rax_27 + rcx_11 * 0x10)
    
    if (*(rcx_13 + 0xa8) != rsi)
        int64_t rbx_1 = sx.q(arg2[1].d)
        int32_t rax_29 =
            sub_140cf2270(rcx_13, arg2, zx.q(arg3 + 1), zx.q(rsi), var_b8_1, var_b0_1, 0xffffffff)
        int64_t rsi_1 = rbx_1
        int64_t r12_2 = sx.q(rax_29 + rbx_1.d)
        
        if (rbx_1 s< r12_2)
            do
                int64_t*** rbx_3 = *(*arg2 + (rsi_1 << 3))
                int64_t rdi_2 = sx.q(rbx_3[1].d)
                int32_t rax_31 = (rdi_2 + 1).d
                rbx_3[1].d = rax_31
                
                if (rax_31 s> *(rbx_3 + 0xc))
                    sub_1405a4d70(rbx_3)
                
                int64_t** rdx_16 = *rbx_3
                memmove(&rdx_16[1], rdx_16, (rdi_2 << 3).d)
                rsi_1 += 1
                **rbx_3 = arg1
            while (rsi_1 s< r12_2)
        
        r15 += rax_29
        rsi = arg4
        r12_1 = var_b0_1
    
    int32_t var_5c
    var_58_1:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
    rdx_13 = var_70_1
    r9 = &arg1[0xb]
