// 函数: sub_1409ab990
// 地址: 0x1409ab990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t rcx = 0
int32_t r8 = 0
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t rbx = arg1[5].d
int32_t var_138 = 0
int32_t var_134 = 1
int32_t* var_130 = &arg1[2]
int32_t var_128 = 0xffffffff
int64_t var_124 = 0

if (rbx != 0)
    int32_t* rax_2 = arg1[4]
    int32_t* r9_1 = &arg1[2]
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1409aba7b:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_134_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_124.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rbx)
            var_124.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_124:4.d = r8
            var_138 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_128_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1409aba7b
        
        var_124.d = rbx

int32_t rdx_8 = arg1[5].d
int64_t* var_e0 = arg1
int128_t var_c8 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_8.b & 0x1f)
int128_t var_d8 = var_138.o
int32_t r8_3 = rdx_8 s>> 5
int32_t r9_3 = rdx_8 & 0xffffffe0
int64_t var_e8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_128_2 = rsi
var_124.d = rdx_8
int128_t var_108 = var_e0.o
int128_t var_f8 = var_d8

if (rdx_8 != rbx)
    int32_t* rax_12 = arg1[4]
    int32_t* r10_1 = &arg1[2]
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    rdx_8 = r10_1[sx.q(r8_3)] & rsi
    
    if (rdx_8 != 0)
    label_1409abb53:
        int32_t rax_19 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_124.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_124.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = r10_1[rcx_5 + 1]
            var_128_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1409abb53
        
        var_124.d = rbx

while (true)
    int64_t rcx_7 = sx.q(var_f8:0xc.d)
    int64_t* rax_21 = var_108.q
    
    if (rcx_7.d == (var_128_2.q u>> 0x20).d && var_f8.q == &arg1[2] && rax_21 == arg1)
        sub_141efdf70(sub_14077e140(&var_e0, &var_88))
        int32_t var_40_1 = 0
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t var_80
        var_80.d = 0
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_78
        sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_21 = var_88
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        arg1[9].d = 0
        int64_t rcx_22 = arg1[8]
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        void* result = sub_140597460(arg1)
        __security_check_cookie(rax_1 ^ &var_158)
        return result
    
    int64_t rax_22 = *rax_21
    int64_t rcx_8 = rcx_7 << 5
    int64_t* rdi_1 = *(rcx_8 + rax_22 + 8)
    int64_t rsi_1 = 0
    uint64_t r15_2 = sx.q(*(rcx_8 + rax_22 + 0x10)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(rcx_8 + rax_22 + 0x10))])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t* rbx_1 = *rdi_1
            
            if (arg1[0xa].b != 0)
                rdx_8.b = 1
                (*(*rbx_1 + 0x360))(rbx_1, rdx_8, 0)
            
            if (*(arg1 + 0x51) != 0)
                (*(*rbx_1 + 0x498))(rbx_1)
            
            char rax_27 = rbx_1[0x11].b
            
            if ((rax_27 & 1) != 0 && (rax_27 & 2) == 0)
                (*(*rbx_1 + 0x2d0))(rbx_1, 0)
                void* var_110 = sub_141ee6400(rbx_1)
                void var_118
                sub_140812a70(&var_88, &var_118, &var_110, nullptr)
            
            rdi_1 = &rdi_1[1]
            rsi_1 += 1
        while (rsi_1 != r15_2)
    
    var_f8:8.d &= not.d(var_108:0xc.d)
    sub_14059bdd0(&var_108:8)
