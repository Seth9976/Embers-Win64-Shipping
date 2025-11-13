// 函数: sub_141cd23b0
// 地址: 0x141cd23b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rcx = arg1[1]
int32_t* r8 = *rcx

if (&r8[1] u<= rcx[1])
    arg2[0xa].d = *r8
    int64_t* rax_4 = arg1[1]
    *rax_4 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xa], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xa], 4)

int32_t var_6c = 0x80
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_68 = 0xffffffff
sub_141cd5840(arg1, &var_98, arg3)
int32_t var_70
int32_t r11 = var_70
int64_t var_88
int64_t* var_100 = &var_88
int32_t rcx_3 = 0
int32_t var_108 = 0
int32_t r8_1 = 0
int32_t var_104 = 1
int32_t var_f8 = 0xffffffff
int64_t var_f4 = 0
int32_t var_e0 = r11
int64_t* var_78

if (r11 != 0)
    int64_t* r9_1 = &var_88
    
    if (var_78 != 0)
        r9_1 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_141cd24eb:
        int32_t rax_13 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
        int32_t var_104_1 = rax_13
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0x20
        else
            rax_14 = 0x1f - temp0_2
        
        int32_t rax_15 = r8_1 - rax_14 + 0x1f
        
        if (rax_15 s> r11)
            rax_15 = r11
        
        var_f4.d = rax_15
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_3)
            r8_1 += 0x20
            rcx_3 += 1
            var_f4:4.d = r8_1
            var_108 = rcx_3
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_f4.d = r11
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_f8 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141cd24eb

int128_t var_c0 = var_108.o
int128_t var_b0 = 0xffffffff
var_108.o = (&var_98).o
var_f8.o = var_c0
int64_t var_e8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

while (true)
    int32_t var_ec
    int64_t rax_16 = sx.q(var_ec)
    int64_t* rdx_6 = var_108.q
    
    if (rax_16.d == r11 && var_f8.q == &var_88 && rdx_6 == &var_98)
        int32_t var_50_1 = 0
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        int64_t result = sub_141cdbd10(&var_98, 0)
        
        if (var_78 != 0)
            result = sub_140a74f90(var_78)
        
        int64_t rcx_17 = var_98
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        __security_check_cookie(rax_1 ^ &var_138)
        return result
    
    int64_t rcx_5 = rax_16 * 9
    int64_t rax_17 = *rdx_6
    int64_t* r15_1 = rax_17 + (rcx_5 << 3)
    int64_t var_d8
    sub_14099c9d0(arg2, *(rax_17 + (rcx_5 << 3)), 0, &var_d8, 0)
    int32_t rax_18 = arg2[1].d
    int64_t rbx_1 = *r15_1
    var_d8 = rbx_1
    void* const rcx_10
    
    if (rax_18 == *(arg2 + 0x34))
    label_141cd2630:
        rcx_10 = nullptr
    else
        int32_t rax_20 = sub_140b5ead0(rbx_1.d) + var_d8:4.d
        void* r8_3 = &arg2[7]
        void* rcx_8 = *(r8_3 + 8)
        
        if (rcx_8 != 0)
            r8_3 = rcx_8
        
        int32_t rax_22 = *(r8_3 + (((sx.q(arg2[9].d) - 1) & sx.q(rax_20)) << 2))
        
        if (rax_22 == 0xffffffff)
        label_141cd2630_1:
            rcx_10 = nullptr
        else
            int64_t r8_4 = *arg2
            
            while (true)
                int64_t rdx_11 = sx.q(rax_22) * 3
                rcx_10 = r8_4 + (rdx_11 << 3)
                
                if (*(r8_4 + (rdx_11 << 3)) == rbx_1)
                    break
                
                rax_22 = *(rcx_10 + 0x10)
                
                if (rax_22 == 0xffffffff)
                    goto label_141cd2630_2
            
            if (rax_22 == 0xffffffff)
            label_141cd2630_2:
                rcx_10 = nullptr
    
    void* rsi_1 = *(rcx_10 + 8)
    *(rsi_1 + 8) = r15_1[2].d
    *(rsi_1 + 0xc) = *(r15_1 + 0x14)
    *(rsi_1 + 0x10) = r15_1[3].d
    
    if (rsi_1 + 0x18 != &r15_1[4])
        int32_t i_1 = *(rsi_1 + 0x20)
        int64_t* rbx_2 = *(rsi_1 + 0x18)
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_11 = *rbx_2
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                rbx_2 = &rbx_2[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_141ccfca0(rsi_1 + 0x18, r15_1[4], r15_1[5].d, *(rsi_1 + 0x24), 0)
    
    *(rsi_1 + 0x28) = r15_1[6]
    *(rsi_1 + 0x30) = r15_1[7].d
    var_f4:4.d &= not.d(var_100:4.d)
    sub_14059bdd0(&var_100)
    r11 = var_e0
