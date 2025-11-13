// 函数: sub_140aedcd0
// 地址: 0x140aedcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t* rax_1 = sub_140ac6680(_vfprintf_p_l(&var_38, u"Success", u"UnrealEd"))
int32_t rbx = 0
uint64_t var_98 = 0
int32_t rdi = rax_1[1].d
int64_t rsi = *rax_1
int32_t var_90 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_98, rdi, 0)
    memcpy(var_98, rsi, rdi * 2)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rax_4 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*var_30 + 8))(var_30, 1)

void* var_60
int64_t* rax_7 = sub_140ac6680(_vfprintf_p_l(&var_60, u"Fail", u"UnrealEd"))
uint64_t r14 = 0
uint64_t var_a8 = 0
int32_t rdi_2 = rax_7[1].d
int64_t r15 = *rax_7
int32_t var_a0 = rdi_2

if (rdi_2 != 0)
    sub_1405a4c70(&var_a8, rdi_2, 0)
    r14 = var_a8
    memcpy(r14, r15, rdi_2 * 2)

int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t rsi_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_58 + 8))(var_58, zx.q(rsi_1))
    
    r14 = var_a8

int32_t r9_2 = *(arg2 + 0x28)
void* r8_5 = arg2 + 0x10
int32_t var_c8 = 0
int32_t rcx_12 = 0
int32_t var_c4 = 1
void* var_c0 = r8_5
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r9_2 != 0)
    void* rax_11 = *(r8_5 + 0x10)
    
    if (rax_11 != 0)
        r8_5 = rax_11
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9_2 - 1)
    int32_t rdx_7 = *r8_5
    
    if (rdx_7 != 0)
    label_140aede96:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_1
        int32_t temp0_5
        temp0_5, rflags_1 = _bit_scan_reverse(rax_18)
        int32_t var_c4_1 = rax_18
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_5
        
        var_b4.d = rcx_12 - rax_19 + 0x1f
        
        if (rcx_12 - rax_19 + 0x1f s> r9_2)
            var_b4.d = r9_2
    else
        while (true)
            int64_t rdx_8 = sx.q(rbx)
            rcx_12 += 0x20
            rbx += 1
            var_b4:4.d = rcx_12
            var_c8 = rbx
            
            if (rdx_8.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r8_5 + (rdx_8 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_140aede96
        
        var_b4.d = r9_2

var_60 = arg2
int128_t var_48 = 0xffffffff
var_58.o = var_c8.o
int128_t var_88 = var_60.o
void* result = nullptr
int64_t var_68 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_50
int128_t var_78 = var_50

if (0 s< r9_2)
    do
        var_78:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        result = var_78.q
    while (var_78:0xc.d s< *(result + 0x18))

if (r14 != 0)
    result = sub_140a74f90(r14)

uint64_t rcx_16 = var_98

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
