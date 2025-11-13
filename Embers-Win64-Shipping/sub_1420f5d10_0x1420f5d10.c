// 函数: sub_1420f5d10
// 地址: 0x1420f5d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi = arg1
int32_t rbx = 0
void* rax_1
int64_t rax_2
void* rdx

if (rsi != 0)
    rax_1 = sub_142530fa0()
    rdx = *(rsi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rsi == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rsi = nullptr

int32_t var_78 = 0
int32_t r9 = *(rsi + 0x58)
void* r8_2 = rsi + 0x40
int32_t var_74 = 1
int32_t rcx_1 = 0
void* var_70 = r8_2
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r9 != 0)
    void* rax_4 = *(r8_2 + 0x10)
    
    if (rax_4 != 0)
        r8_2 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_3 = *r8_2
    
    if (rdx_3 != 0)
    label_1420f5dd6:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_74_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_64.d = rcx_1 - rax_12 + 0x1f
        
        if (rcx_1 - rax_12 + 0x1f s> r9)
            var_64.d = r9
    else
        while (true)
            int64_t rdx_4 = sx.q(rbx)
            rcx_1 += 0x20
            rbx += 1
            var_64:4.d = rcx_1
            var_78 = rbx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8_2 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1420f5dd6
        
        var_64.d = r9

void* var_10 = rsi + 0x30
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
var_68.o = zmm0
void* result = zmm0.q
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_78.o = (rsi + 0x30).o
int128_t var_58 = zmm0

if (_mm_bsrli_si128(0xffffffff, 4) s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rbx_3 = sx.q(i) * 0x50 + *var_78.q
        int64_t* rcx_4 = *(rbx_3 + 0x10)
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x10))(rcx_4, arg2)
        
        int64_t* rcx_5 = *(rbx_3 + 0x18)
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x10))(rcx_5, arg2)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        return sub_1420f6fd0(rsi + 0x30, *(rsi + 0x38) - *(rsi + 0x64), 1)

return result
