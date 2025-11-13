// 函数: sub_141f7f180
// 地址: 0x141f7f180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[5].d
void* r10 = &arg1[2]
int64_t rsi = sx.q(arg3)
int32_t var_98 = 0
int32_t var_94 = 1
void* var_90 = r10
int32_t r9 = 0
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_141f7f22b:
        int32_t rax_8 = ((rcx - 1) & rcx) ^ rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_84:4.d = r8
            var_98 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rcx != 0)
                goto label_141f7f22b
        
        var_84.d = r11

uint128_t zmm4 = var_88.o
int64_t* var_30 = arg1
uint128_t zmm0 = var_98.o
uint128_t var_40 = zmm4
char var_60 = 0
void* rax_11 = zmm0.q
var_88.o = zmm0
var_98.o = arg1.o
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
uint128_t var_78 = zmm0

if (_mm_bsrli_si128(zmm4, 4).d s< *(rax_11 + 0x18))
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t rdx_3 = sx.q(i) * 2
        int64_t rcx_4 = *var_98.q
        int32_t rax_14 = *(rcx_4 + (rdx_3 << 3) + 4)
        
        if (rax_14 s>= rsi.d)
            *(rcx_4 + (rdx_3 << 3) + 4) = rax_14 + 1
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i = i_2
    while (i s< *(var_88.q + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        sub_1409b3740(arg1, arg1[1].d - *(arg1 + 0x34), 1)

int32_t i_1 = arg1[0xb].d
void arg_18

if (rsi.d s<= i_1)
    arg1[0xb].d = i_1 + 1
    
    if (i_1 + 1 s> *(arg1 + 0x5c))
        sub_1405a4cf0(&arg1[0xa])
    
    int64_t rdx_14 = arg1[0xa] + (rsi << 2)
    memmove(rdx_14 + 4, rdx_14, (i_1 - rsi.d) << 2)
    arg1[0xa][rsi] = *arg2
else
    int32_t rdx_6 = (rsi + 1).d
    
    if (rdx_6 s> *(arg1 + 0x5c))
        sub_1405dadb0(&arg1[0xa], rdx_6)
        i_1 = arg1[0xb].d
    
    for (; i_1 s< rsi.d; i_1 += 1)
        int64_t rbx_1 = sx.q(arg1[0xb].d)
        int32_t rax_19 = (rbx_1 + 1).d
        arg1[0xb].d = rax_19
        
        if (rax_19 s> *(arg1 + 0x5c))
            sub_1405a4cf0(&arg1[0xa])
        
        int32_t rax_21 = data_143a2d8ec + 1
        *(arg1[0xa] + (rbx_1 << 2)) = rax_21
        data_143a2d8ec = rax_21
        void* rbx_2 = arg1[0xa] + (sx.q(arg1[0xb].d) << 2)
        sub_14090a150(arg1, &var_98)
        void* rcx_12 = var_90
        *rcx_12 = *(rbx_2 - 4)
        int32_t rax_24 = var_98
        *(rcx_12 + 4) = i_1
        *(rcx_12 + 8) = 0xffffffff
        sub_141f86230(arg1, &arg_18, *rcx_12, rcx_12, rax_24, nullptr)
    
    int64_t rbx_3 = sx.q(arg1[0xb].d)
    int32_t rax_25 = (rbx_3 + 1).d
    arg1[0xb].d = rax_25
    
    if (rax_25 s> *(arg1 + 0x5c))
        sub_1405a4cf0(&arg1[0xa])
    
    *(arg1[0xa] + (rbx_3 << 2)) = *arg2

sub_14090a150(arg1, &var_98)
int32_t* rcx_20 = var_90
*rcx_20 = *arg2
int32_t rax_30 = var_98
rcx_20[1] = rsi.d
rcx_20[2] = 0xffffffff
return sub_141f86230(arg1, &arg_18, *rcx_20, rcx_20, rax_30, nullptr)
