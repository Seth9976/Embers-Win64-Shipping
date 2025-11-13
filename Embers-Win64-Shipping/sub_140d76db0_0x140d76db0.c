// 函数: sub_140d76db0
// 地址: 0x140d76db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t var_3c = 0x80
int64_t var_68
__builtin_memset(&var_68, 0, 0x2c)
int64_t* rax_2 = nullptr
int32_t r9 = 0
int32_t var_38 = 0xffffffff
int32_t var_34 = 0
void* var_28 = nullptr
int32_t var_20 = 0
int64_t* var_48

if (&var_68 != arg1 + 0xb0)
    int64_t rbx_1 = sx.q(*(arg1 + 0xf8))
    void var_30
    sub_1405a4aa0(&var_30, 0, rbx_1.d, 4)
    void* rax_3 = *(arg1 + 0xf0)
    void* rdx_1 = arg1 + 0xe8
    void* rcx_1 = &var_30
    
    if (rax_3 != 0)
        rdx_1 = rax_3
    
    if (var_28 != 0)
        rcx_1 = var_28
    
    memcpy(rcx_1, rdx_1, (rbx_1 << 2).d)
    int32_t var_20_1 = rbx_1.d
    sub_140d73360(&var_68, arg1 + 0xb0)
    int32_t var_40
    r9 = var_40
    rax_2 = var_48

int32_t var_d4 = 1
int32_t rcx_3 = 0
int32_t var_d8 = 0
int64_t var_58
int64_t* var_d0 = &var_58
int32_t var_c8 = 0xffffffff
int32_t r8_4 = 0
int64_t var_c4 = 0

if (r9 != 0)
    int64_t* r11_1 = &var_58
    
    if (rax_2 != 0)
        r11_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_5 = *r11_1
    
    if (rdx_5 != 0)
    label_140d76ee5:
        int32_t rax_11 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_d4_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        int32_t rax_13 = r8_4 - rax_12 + 0x1f
        
        if (rax_13 s> r9)
            rax_13 = r9
        
        var_c4.d = rax_13
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_3)
            r8_4 += 0x20
            rcx_3 += 1
            var_c4:4.d = r8_4
            var_d8 = rcx_3
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_c4.d = r9
                break
            
            rdx_5 = *(r11_1 + (rdx_6 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140d76ee5

int128_t var_78 = 0xffffffff
int128_t var_88 = var_d8.o
var_c4.d = r9
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_b8 = (&var_68).o
int128_t var_a8 = var_88
int64_t var_98 = temp0_3

while (true)
    int64_t rax_14 = sx.q(var_a8:0xc.d)
    int64_t* rdx_7 = var_b8.q
    
    if (rax_14.d == ((0xffffffff << (r9.b & 0x1f)).q u>> 0x20).d && var_a8.q == &var_58
            && rdx_7 == &var_68)
        int32_t var_20_2 = 0
        
        if (var_28 != 0)
            sub_140a74f90(var_28)
        
        int64_t result = sub_140d7a1a0(&var_68, 0)
        
        if (var_48 != 0)
            result = sub_140a74f90(var_48)
        
        int64_t rcx_13 = var_68
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        __security_check_cookie(rax_1 ^ &var_f8)
        return result
    
    int64_t rcx_7 = rax_14 * 3
    int64_t rax_15 = *rdx_7
    int64_t* rdx_8 = rax_15 + (rcx_7 << 3)
    void* rax_16
    
    if (*(rax_15 + (rcx_7 << 3)) != 0)
        rax_16 = rdx_8[1]
    
    if (*(rax_15 + (rcx_7 << 3)) == 0 || rax_16 == 0 || *(rax_16 + 8) s<= 0)
        sub_140d85a50(arg1 + 0xb0, rdx_8)
    
    var_a8:8.d &= not.d(var_b8:0xc.d)
    sub_14059bdd0(&var_b8:8)
