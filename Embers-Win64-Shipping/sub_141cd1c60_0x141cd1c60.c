// 函数: sub_141cd1c60
// 地址: 0x141cd1c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
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
uint64_t var_98 = 0
int64_t var_90
__builtin_memset(&var_90, 0, 0x24)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_68 = 0xffffffff
sub_141cd56a0(arg1, &var_98, arg3)
int32_t var_70
int32_t r11 = var_70
int64_t var_88
int64_t* var_f0 = &var_88
int32_t rcx_3 = 0
int32_t var_f8 = 0
int32_t r8_1 = 0
int32_t var_f4 = 1
int32_t var_e8 = 0xffffffff
int64_t var_e4 = 0
int32_t var_d0 = r11
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
    label_141cd1d9b:
        int32_t rax_13 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
        int32_t var_f4_1 = rax_13
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0x20
        else
            rax_14 = 0x1f - temp0_2
        
        int32_t rax_15 = r8_1 - rax_14 + 0x1f
        
        if (rax_15 s> r11)
            rax_15 = r11
        
        var_e4.d = rax_15
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_3)
            r8_1 += 0x20
            rcx_3 += 1
            var_e4:4.d = r8_1
            var_f8 = rcx_3
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_e4.d = r11
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_e8 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141cd1d9b

int128_t var_b8 = var_f8.o
int128_t var_a8 = 0xffffffff
var_f8.o = (&var_98).o
var_e8.o = var_b8
int64_t var_d8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

while (true)
    int32_t var_dc
    int64_t rax_16 = sx.q(var_dc)
    int64_t rcx_5 = var_f8.q
    
    if (rax_16.d == r11 && var_e8.q == &var_88 && rcx_5 == &var_98)
        int32_t var_50_1 = 0
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        int64_t result = sub_141cdbb00(&var_98, 0)
        
        if (var_78 != 0)
            result = sub_140a74f90(var_78)
        
        uint64_t rcx_17 = var_98
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        __security_check_cookie(rax_1 ^ &var_128)
        return result
    
    int64_t* rsi_3 = (rax_16 << 6) + *rcx_5
    int64_t var_c8
    sub_14099c6c0(arg2, *rsi_3, 0, &var_c8, 0)
    int32_t rax_17 = arg2[1].d
    int64_t rbx_1 = *rsi_3
    var_c8 = rbx_1
    void* const rcx_10
    
    if (rax_17 == *(arg2 + 0x34))
    label_141cd1ee0:
        rcx_10 = nullptr
    else
        int32_t rax_19 = sub_140b5ead0(rbx_1.d) + var_c8:4.d
        void* r8_3 = &arg2[7]
        void* rcx_8 = *(r8_3 + 8)
        
        if (rcx_8 != 0)
            r8_3 = rcx_8
        
        int32_t rax_21 = *(r8_3 + (((sx.q(arg2[9].d) - 1) & sx.q(rax_19)) << 2))
        
        if (rax_21 == 0xffffffff)
        label_141cd1ee0_1:
            rcx_10 = nullptr
        else
            int64_t r8_4 = *arg2
            
            while (true)
                int64_t rdx_10 = sx.q(rax_21) * 3
                rcx_10 = r8_4 + (rdx_10 << 3)
                
                if (*(r8_4 + (rdx_10 << 3)) == rbx_1)
                    break
                
                rax_21 = *(rcx_10 + 0x10)
                
                if (rax_21 == 0xffffffff)
                    goto label_141cd1ee0_2
            
            if (rax_21 == 0xffffffff)
            label_141cd1ee0_2:
                rcx_10 = nullptr
    
    void* r15_1 = *(rcx_10 + 8)
    *(r15_1 + 8) = rsi_3[2].d
    *(r15_1 + 0xc) = *(rsi_3 + 0x14)
    *(r15_1 + 0x10) = rsi_3[3].d
    
    if (r15_1 + 0x18 != &rsi_3[4])
        int32_t i_1 = *(r15_1 + 0x20)
        int64_t* rbx_2 = *(r15_1 + 0x18)
        
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
        
        sub_141ccfb20(r15_1 + 0x18, rsi_3[4], rsi_3[5].d, *(r15_1 + 0x24), 0)
    
    var_e4:4.d &= not.d(var_f0:4.d)
    *(r15_1 + 0x28) = rsi_3[6]
    sub_14059bdd0(&var_f0)
    r11 = var_d0
