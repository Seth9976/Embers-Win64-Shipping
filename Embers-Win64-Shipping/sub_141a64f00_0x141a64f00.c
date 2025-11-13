// 函数: sub_141a64f00
// 地址: 0x141a64f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[5].d
int32_t r8 = 0
int32_t var_84 = 1
int32_t r9 = 0
int32_t var_88 = 0
void* var_80 = &arg1[2]
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (rbx != 0)
    void* rax_1 = arg1[4]
    void* r10_1 = &arg1[2]
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_141a64faa:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141a64faa
        
        var_74.d = rbx

int32_t rdx_2 = arg1[5].d
int128_t var_28 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_2 = rdx_2 s>> 5
int32_t r9_3 = rdx_2 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
var_74.d = rdx_2
int128_t var_68 = arg1.o
int128_t var_58 = var_38

if (rdx_2 != rbx)
    void* rax_11 = arg1[4]
    void* r10_2 = &arg1[2]
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_6 != 0)
    label_141a65072:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141a65072
        
        var_74.d = rbx

while (true)
    int64_t rax_20 = sx.q(var_58:0xc.d)
    int64_t* rdx_7 = var_68.q
    
    if (rax_20.d == (var_78_2.q u>> 0x20).d && var_58.q == &arg1[2] && rdx_7 == arg1)
        int32_t rax_25 = arg1[0x2f].d
        int64_t rbx_3 = sx.q(rax_25 - 1)
        
        if (rax_25 - 1 s>= 0)
            int64_t rdi_1 = rbx_3 * 0x58
            int64_t temp5_1
            
            do
                void* rcx_12 = arg1[0x2e] + rdi_1
                void* r8_3
                bool cond:4_1
                
                if ((*(rcx_12 + 0x50) & 1) == 0)
                    cond:4_1 = (*(rcx_12 + 0x28) & 2) != 0
                    r8_3 = rcx_12 + 8
                else
                    cond:4_1 = (*(rcx_12 + 0x50) & 2) != 0
                    r8_3 = rcx_12 + 0x30
                
                if (not(cond:4_1))
                    r8_3 = *r8_3
                
                (*(*r8_3 + 8))(r8_3, arg2)
                rdi_1 -= 0x58
                temp5_1 = rbx_3
                rbx_3 -= 1
            while (temp5_1 - 1 s>= 0)
        
        arg1[0x23].d = 0
        
        if (*(arg1 + 0x11c) s<= 0xffffffff)
            sub_141a64260(&arg1[0xa], 0)
        
        int32_t rax_28 = *(arg1 + 0x16c)
        arg1[0x2d].d = 0
        
        if (rax_28 s< 0 && rax_28 != 0)
            sub_140775b80(&arg1[0x24], 0)
        
        sub_141a62d10(&arg1[0x2e], 0)
        sub_141a63530(arg1)
        return sub_141a63270(&arg1[0x31]) __tailcall
    
    sub_141a646c0(rax_20 * 0x148 + *rdx_7 + 8, arg2)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
