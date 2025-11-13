// 函数: ??$FindHandler@V__FrameHandler3@@@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@EH1@Z
// 地址: 0x141837a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t rbx_1 = arg3[1].d - *(arg3 + 0x34)
void* rsi = arg2
int32_t var_148 = 0
int32_t r13 = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t r9 = 0
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int32_t var_80

if (rbx_1 s> 0)
    sub_1409d9530(&var_a8, rbx_1)
    int32_t rdx_2
    
    if (rbx_1 u< 4)
        rdx_2 = 1
    else
        uint32_t rbx_2 = rbx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
        int32_t rcx_1
        
        if (rbx_2 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        char rdx_1
        
        if (rcx_3 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_3)).b & (0x20 - rdx_1))
    
    if (var_60 == 0 || var_60 s< rdx_2)
        int32_t var_60_1 = rdx_2
        sub_140911b00(&var_a8)
    
    r9 = var_80

void* r14 = *(arg1 + 0xf8)
void* r12_3 = sx.q(*(arg1 + 0x100)) * 0x60 + r14
void var_11c

if (r14 != r12_3)
    int64_t* r13_1 = rsi + 0x20
    
    do
        int64_t* rax_7 = *(rsi + 0x10)
        int64_t* rcx_7 = r13_1
        
        if (rax_7 != 0)
            rcx_7 = rax_7
        
        if ((*rsi)((*(*rcx_7 + 8))(rcx_7), r14) != 0)
            int64_t* i = *(r14 + 0x48)
            
            for (void* rsi_1 = &i[sx.q(*(r14 + 0x50)) * 3]; i != rsi_1; i = &i[3])
                if (*sub_140b162a0(arg3, &var_11c, i) != 0xffffffff)
                    int32_t rax_13 = sub_140a6b260(i, 0x10)
                    int32_t var_120
                    sub_140caa690(&var_a8, &var_120, rax_13, i)
                    int64_t rax_14 = sx.q(var_120)
                    void* rax_16
                    
                    if (rax_14.d != 0xffffffff)
                        rax_16 = var_a8 + rax_14 * 0x28
                    
                    int64_t* rax_17
                    
                    if (rax_14.d == 0xffffffff || rax_16 == 0)
                        rax_17 = sub_141819170(&var_a8, rax_13, i)
                    else
                        rax_17 = rax_16 + 0x10
                    
                    sub_1418286b0(rax_17, zx.q(i[2].d), zx.q(*(i + 0x14)), 1)
            
            rsi = arg2
        
        r14 += 0x60
    while (r14 != r12_3)
    
    r9 = var_80
    r13 = var_148

int32_t var_13c = 1
int64_t var_12c = 0
int32_t rcx_15 = 0
int32_t var_140 = 0
int64_t var_98
int64_t* var_138 = &var_98
int32_t var_130 = 0xffffffff
int32_t r8_5 = 0
int64_t* var_88

if (r9 != 0)
    int64_t* r11_1 = &var_98
    
    if (var_88 != 0)
        r11_1 = var_88
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9 - 1)
    int32_t rdx_11 = *r11_1
    
    if (rdx_11 != 0)
    label_141837ce8:
        int32_t rax_25 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_25)
        int32_t var_13c_1 = rax_25
        int32_t rdi_2
        
        if (rax_25 == 0)
            rdi_2 = 0x20
        else
            rdi_2 = 0x1f - temp0_4
        
        int32_t rax_26 = r8_5 - rdi_2 + 0x1f
        
        if (rax_26 s> r9)
            rax_26 = r9
        
        var_12c.d = rax_26
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_15)
            r8_5 += 0x20
            rcx_15 += 1
            var_12c:4.d = r8_5
            var_140 = rcx_15
            
            if (rdx_12.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_12c.d = r9
                break
            
            rdx_11 = *(r11_1 + (rdx_12 << 2) + 4)
            int32_t var_130_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141837ce8

int128_t var_d0 = var_140.o
int128_t var_c0 = 0xffffffff
var_12c.d = r9
int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_100 = (&var_a8).o
int128_t var_f0 = var_d0
int64_t var_e0 = zmm2

while (true)
    int64_t rax_27 = sx.q(var_f0:0xc.d)
    int64_t* rdx_13 = var_100.q
    
    if (rax_27.d == ((0xffffffff << (r9.b & 0x1f)).q u>> 0x20).d && var_f0.q == &var_98
            && rdx_13 == &var_a8)
        int32_t var_60_2 = 0
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        sub_1418371a0(&var_a8, 0)
        
        if (var_88 != 0)
            sub_140a74f90(var_88)
        
        int64_t rcx_27 = var_a8
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        __security_check_cookie(rax_1 ^ &var_168)
        return zx.q(r13)
    
    int64_t* rbx_4 = *rdx_13 + rax_27 * 0x28
    sub_140cba0f0(arg1 + 0x250, &var_148, rbx_4)
    int64_t rax_29 = sx.q(var_148)
    void* const rax_31
    
    if (rax_29.d == 0xffffffff)
        rax_31 = nullptr
    else
        rax_31 = (rax_29 << 5) + *(arg1 + 0x250)
    
    void* rdx_15 = rbx_4[2]
    
    if (rdx_15 == rbx_4[3] && rdx_15 != 0 && *(rdx_15 + 8) == zx.q(*(*(rax_31 + 0x10) + 0x30)))
        sub_140acafe0(arg4, &var_11c, rbx_4, nullptr)
        r13 += 1
    
    var_f0:8.d &= not.d(var_100:0xc.d)
    sub_14059bdd0(&var_100:8)
