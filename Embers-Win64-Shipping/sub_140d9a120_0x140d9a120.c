// 函数: sub_140d9a120
// 地址: 0x140d9a120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return 

void* r14_1 = arg2

if ((*(arg2 + 0xa0)).d f!= arg1[0x14].d || (*(arg2 + 0xa4)).d f!= *(arg1 + 0xa4)
        || (*(arg2 + 0xa8)).d f!= arg1[0x15].d || (*(arg2 + 0xac)).d f!= *(arg1 + 0xac)
        || (*(arg2 + 0xb0)).d f!= arg1[0x16].d || (*(arg2 + 0xb4)).d f!= *(arg1 + 0xb4))
    return 

int32_t rcx = 0
int32_t rbx_1 = *(arg2 + 0x28)
int32_t r8_1 = 0
void* r13_1 = arg2 + 0x10
int32_t var_c8_1 = 0
int32_t var_c4_1 = 1
void* var_c0_1 = r13_1
int32_t var_b8_1 = 0xffffffff
int64_t var_b4_1 = 0

if (rbx_1 != 0)
    void* rax_1 = *(r13_1 + 0x10)
    void* r9_1 = r13_1
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140d9a258:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4_1.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> rbx_1)
            var_b4_1.d = rbx_1
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_b4_1:4.d = r8_1
            var_c8_1 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_b8_2 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140d9a258
        
        var_b4_1.d = rbx_1

int32_t rdx_4 = *(r14_1 + 0x28)
int32_t rsi_1 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r8_4 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int128_t var_90_1 = 0xffffffff
int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_a0_1
var_a0_1:8.d = rsi_1
var_a0_1:0xc.d = rdx_4
int128_t var_78 = r14_1.o
int96_t var_68_1 = var_c8_1.o:8.12

if (rdx_4 != rbx_1)
    void* rax_11 = *(r13_1 + 0x10)
    void* r10_1 = r13_1
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_4) << 2)) & rsi_1
    
    if (rdx_8 != 0)
    label_140d9a322:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_a0_1:0xc.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_1)
            var_a0_1:0xc.d = rbx_1
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_a0_1:8.d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140d9a322
        
        var_a0_1:0xc.d = rbx_1

uint64_t rcx_8 = var_a0_1:8.q u>> 0x20
uint64_t var_80_1 = rcx_8

while (true)
    int32_t var_5c
    void* const* rax = sx.q(var_5c)
    int64_t* rdx_9 = var_78.q
    
    if (rax.d == rcx_8.d && var_68_1.q == r13_1 && rdx_9 == r14_1)
        break
    
    int64_t* rbx_2 = *rdx_9 + rax * 0x18
    int32_t* rax_21 = sub_140d8bae0(arg1, rbx_2)
    int32_t* rdi_1 = rax_21
    int64_t* rdx_13 = (sx.q(rbx_2[1].d) << 6) + *(r14_1 + 0x50)
    int64_t* rdx_14 = rdx_13
    *rdi_1 = sub_140d98130(&arg1[0xa], rdx_13)
    int32_t i = rdx_14[4].d
    
    if (i s<= rdx_14[5].d)
        do
            for (int32_t j = *(rdx_14 + 0x24); j s<= *(rdx_14 + 0x2c); j += 1)
                if (i s>= 0)
                    int32_t rax_23 = arg1[0x13].d
                    
                    if (i s< rax_23 && j s>= 0 && j s< *(arg1 + 0x9c))
                        int32_t rcx_12 = *rdi_1
                        int64_t r13_2 = arg1[0x11]
                        int64_t r12_1 = sx.q(rax_23 * j + i) * 3
                        void* rdi_3 = (r12_1 << 3) + r13_2
                        int64_t r14_2 = sx.q(*(rdi_3 + 0x10))
                        int32_t rax_27 = (r14_2 + 1).d
                        *(rdi_3 + 0x10) = rax_27
                        
                        if (rax_27 s> *(rdi_3 + 0x14))
                            sub_1405a4cf0(rdi_3 + 8)
                            rdx_14 = rdx_13
                        
                        rdi_1 = rax_21
                        *(*(rdi_3 + 8) + (r14_2 << 2)) = rcx_12
                        *(r13_2 + (r12_1 << 3)) = 1
            
            i += 1
        while (i s<= rdx_14[5].d)
        
        r14_1 = arg2
        r13_1 = var_c0_1
    
    var_68_1:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
    rcx_8 = var_80_1
