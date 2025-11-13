// 函数: sub_141c41030
// 地址: 0x141c41030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int32_t i_2 = 0

if (*(arg1 + 8) s> 0)
    int64_t r13_1 = 0
    int64_t* r12 = arg2
    int32_t i
    
    do
        void* rdi_1 = *(arg1 + 0x48)
        int64_t r14_1 = *r12
        int64_t rsi_1 = *(rdi_1 + r13_1 + 0x18)
        int64_t rbx_1 = *(rdi_1 + r13_1 + 0x28)
        int64_t r8 = sx.q(*(rdi_1 + r13_1)) << 2
        memcpy(r8 + rsi_1, r14_1, r8.d)
        int64_t* rcx_1 = *(rdi_1 + r13_1 + 8)
        (*(*rcx_1 + 0x20))(rcx_1, rsi_1, rbx_1)
        memcpy(rsi_1, r14_1, *(rdi_1 + r13_1) << 2)
        r12 = &r12[1]
        i = i_2 + 1
        r13_1 += 0x38
        i_2 = i
    while (i s< *(arg1 + 8))
    i_1 = 0

void* r14_2 = arg1 + 0x78
int32_t var_c4 = 1
int32_t rdi_2 = *(r14_2 + 0x28)
void* r10 = r14_2 + 0x10
void* var_c0 = r10
int32_t rcx_3 = 0
int32_t var_c8 = 0
int32_t r8_4 = 0
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (rdi_2 != 0)
    void* rax_4 = *(r10 + 0x10)
    void* r9_1 = r10
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_2 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_141c41168:
        int32_t rax_11 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_c4_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_1
        
        var_b4.d = r8_4 - rax_12 + 0x1f
        
        if (r8_4 - rax_12 + 0x1f s> rdi_2)
            var_b4.d = rdi_2
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_3)
            r8_4 += 0x20
            rcx_3 += 1
            var_b4:4.d = r8_4
            var_c8 = rcx_3
            
            if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141c41168
        
        var_b4.d = rdi_2

int32_t rdx_7 = *(r14_2 + 0x28)
int32_t rsi_2 = 0xffffffff << (rdx_7.b & 0x1f)
int32_t r8_7 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int128_t var_90 = 0xffffffff
int64_t var_50 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
uint128_t var_a0
var_a0:8.d = rsi_2
var_a0:0xc.d = rdx_7
uint128_t var_70 = r14_2.o

if (rdx_7 != rdi_2)
    void* rax_14 = *(r10 + 0x10)
    
    if (rax_14 != 0)
        r10 = rax_14
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(rdi_2 - 1)
    int32_t rdx_11 = *(r10 + (sx.q(r8_7) << 2)) & rsi_2
    
    if (rdx_11 != 0)
    label_141c41232:
        int32_t rax_21 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t r11_1
        
        if (rax_21 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_3
        
        var_a0:0xc.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi_2)
            var_a0:0xc.d = rdi_2
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_7)
            r9_3 += 0x20
            r8_7 += 1
            
            if (rcx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10 + (rcx_8 << 2) + 4)
            var_a0:8.d = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141c41232
        
        var_a0:0xc.d = rdi_2
    
    r10 = var_c0

uint64_t rcx_11 = var_a0:8.q u>> 0x20
uint64_t var_78 = rcx_11

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t* rdx_12 = var_70.q
    
    if (result.d == rcx_11.d && var_c8.o:8.q == r10 && rdx_12 == r14_2)
        if (*(arg1 + 0xc) s> 0)
            int64_t rbx_3 = arg3
            int64_t r13_2 = 0
            void* r14_4 = nullptr
            
            do
                if ((*(arg1 + 0xc8))[r13_2] == 0)
                    int64_t rsi_4 = *(arg1 + 0x58)
                    int64_t* rcx_22 = *(r14_4 + rsi_4 + 0x10)
                    int64_t rdi_4 = *(arg3 + (r13_2 << 3))
                    int64_t rbx_4 = *(r14_4 + rsi_4 + 0x20)
                    int64_t r9_11 = *rcx_22
                    (*(r9_11 + 0x28))(rcx_22, 
                        *(*(r14_4 + rsi_4 + 0x38) + sx.q(*(r14_4 + rsi_4 + 0x30)) * 0x10), rbx_4, 
                        r9_11, var_c8, var_c0, 0xffffffff)
                    int64_t r8_15 = sx.q(*(r14_4 + rsi_4 + 4)) << 2
                    memcpy(rdi_4, r8_15 + rbx_4, r8_15.d)
                    int64_t rcx_24 = sx.q(*(r14_4 + rsi_4 + 0x30))
                    uint64_t count_1 = sx.q(*(r14_4 + rsi_4 + 8)) << 2
                    int64_t rcx_25 = *(r14_4 + rsi_4 + 0x38)
                    *(r14_4 + rsi_4 + 0x30) = mods.dp.d(sx.q((rcx_24 + 1).d), *(r14_4 + rsi_4))
                    result = memset(*(rcx_25 + rcx_24 * 0x10), 0, count_1)
                    rbx_3 = arg3
                else
                    memset(*(rbx_3 + (r13_2 << 3)), 0, sx.q(*(arg1 + 0x18)) << 2)
                    int64_t r9_10 = *(arg1 + 0x58)
                    int64_t rcx_19 = sx.q(*(r14_4 + r9_10 + 0x30))
                    uint64_t count = sx.q(*(r14_4 + r9_10 + 8)) << 2
                    int64_t rcx_20 = *(r14_4 + r9_10 + 0x38)
                    *(r14_4 + r9_10 + 0x30) = mods.dp.d(sx.q((rcx_19 + 1).d), *(r14_4 + r9_10))
                    result = memset(*(rcx_20 + rcx_19 * 0x10), 0, count)
                
                i_1 += 1
                r13_2 += 1
                r14_4 += 0x48
            while (i_1 s< *(arg1 + 0xc))
        
        return result
    
    int64_t r8_8 = *(arg1 + 0x68)
    int64_t r14_3 = *(arg1 + 0x58)
    uint128_t zmm0 = *(*rdx_12 + result * 0x18)
    int64_t r9_5 = zmm0.q
    void* var_a8
    var_a8.o = zmm0
    int64_t rdx_13 = sx.q((r9_5 u>> 0x20).d) * 9
    int64_t rcx_13 = sx.q(_mm_bsrli_si128(zmm0, 8).d)
    int32_t rax_28 = *(r8_8 + (rdx_13 << 3) + 0x1c)
    int64_t rsi_3 = rcx_13 * 9
    
    if (rax_28 s> 0)
        sub_141c47590(arg1, *(arg1 + 0x48) + 0x28 + sx.q(r9_5.d) * 0x38, var_a0:4.d, arg1 + 0x28)
        int32_t rbx_2 = 0
        int64_t rdi_3 = 0
        
        do
            sub_141c47470(arg1, arg1 + 0x28, *(r8_8 + (rdx_13 << 3) + 0x38) + rdi_3, 
                (sx.q(mods.dp.d(sx.q(*(r14_3 + (rsi_3 << 3) + 0x30) + rbx_2), 
                    *(r14_3 + (rsi_3 << 3)))) << 4) + *(r14_3 + (rsi_3 << 3) + 0x38))
            rbx_2 += 1
            rdi_3 += 0x10
        while (rbx_2 s< rax_28)
        
        i_1 = 0
    
    int32_t var_58 = var_58 & not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)
    r10 = var_c0
    r14_2 = arg1 + 0x78
    rcx_11 = var_78
