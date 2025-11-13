// 函数: sub_1407ab630
// 地址: 0x1407ab630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

int64_t r11 = *(arg2 + 0x18)
void* rbx = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* r12_1

if ((not.b(rax_6) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r9
    int32_t r8_2 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_2 = 0
        
        do
            rcx_3 -= rax_7
            rdx_2 += 1
            rax_7 = r9[rdx_2]
            r8_2 += 1
        while (rcx_3 s>= rax_7)
    
    r12_1 = sx.q(rcx_3) + *(r11 + (sx.q(r8_2) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint32_t rax_10 = rax_9 u>> 0xf
int32_t rcx_5 = rax_9 & 0x7fff
uint32_t arg_18 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
int32_t* r15_1

if ((rax_10.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_11 = *r9
    int32_t r8_3 = 0
    
    if (rcx_5 s>= rax_11)
        int64_t rdx_3 = 0
        
        do
            rcx_5 -= rax_11
            rdx_3 += 1
            rax_11 = r9[rdx_3]
            r8_3 += 1
        while (rcx_5 s>= rax_11)
    
    r15_1 = sx.q(rcx_5) + *(r11 + (sx.q(r8_3) << 3))

int32_t rdx_5 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_108 = rdx_5
int32_t result_2
result_2.b = rdx_5 != 0x7fff
int32_t result_3 = result_2
int32_t* rdx_7
void var_100

if (rdx_5 == 0x7fff)
    rdx_7 = &var_100
else
    rdx_7 = zx.q(rdx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t* var_f8 = rdx_7
void* rbx_1 = *(rbx + 8)
uint64_t result = *(rbx_1 + 0x778)
void* r13 = *(result + 0x98)

if (r13 != 0)
    uint64_t result_1
    sub_140b58170(&result_1, "ID", 1)
    int64_t rbx_2 = *(rbx_1 + 0x778)
    uint64_t result_4 = result_1
    int64_t var_e8_1 = data_14396f138
    int16_t var_e0_1 = data_14396f140
    int32_t var_de_1 = 0xffffffff
    int64_t var_d8_1 = 0
    int64_t var_d0_1 = 0
    void* var_c8
    void var_68
    result = sub_14077dde0(&var_c8, rbx_2, sub_140745220(&var_68, &result_4))
    
    if (*(arg2 + 0x40) s> 0)
        result = zx.q(rax_6) << 2
        uint64_t rdx_11 = zx.q(arg_18.b) << 2
        arg_18.q = rdx_11
        result_1 = result
        
        do
            int32_t r10_3 = *r15_1
            int32_t* rcx_10 = r12_1
            r15_1 += rdx_11
            r12_1 += result
            int64_t r8_5 = 0xffffffff
            int64_t rdx_12 = sx.q(*rcx_10)
            
            if (rdx_12.d s>= 0 && rdx_12.d s< *(r13 + 0x40))
                r8_5 = sx.q(*(*(r13 + 0x38) + (rdx_12 << 2)))
                
                if (r8_5.d s>= 0)
                    uint8_t arg_10 = -1
                    int64_t var_90
                    int64_t var_88
                    void* rax_21
                    
                    if (var_90 != 0 && var_88 != 0)
                        rax_21 = *(var_c8 + 0x98)
                    
                    int32_t rcx_11
                    int32_t r9_1
                    
                    if (var_90 == 0 || var_88 == 0 || rax_21 == 0 || r8_5.d u>= *(rax_21 + 0xb0))
                        r9_1 = -1
                        rcx_11 = -1
                    else
                        r9_1 = *(var_90 + (r8_5 << 2))
                        rcx_11 = *(var_88 + (r8_5 << 2))
                    
                    if (r9_1 != rdx_12.d || rcx_11 != r10_3)
                        r8_5 = 0xffffffff
            
            int32_t* rdx_13 = var_f8
            i += 1
            result = result_1
            var_f8 = &rdx_13[sx.q(result_3)]
            *rdx_13 = r8_5.d
            rdx_11 = arg_18.q
        while (i s< *(arg2 + 0x40))
    
    int64_t var_a0
    
    if (var_a0 != 0)
        result = sub_140a74f90(var_a0)
    
    if (var_d8_1 != 0)
        return sub_140a74f90(var_d8_1)
else if (*(arg2 + 0x40) s> 0)
    while (true)
        result = sx.q(result_2)
        i += 1
        int32_t* var_f8_1 = &rdx_7[result]
        *rdx_7 = 0xffffffff
        
        if (i s>= *(arg2 + 0x40))
            break
        
        rdx_7 = var_f8_1
        result_2 = result_3

return result
