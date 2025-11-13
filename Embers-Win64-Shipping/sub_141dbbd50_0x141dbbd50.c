// 函数: sub_141dbbd50
// 地址: 0x141dbbd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
int32_t var_98 = 0
int32_t rdi = *(arg1 + 0x1c8)
void* var_90 = arg1 + 0x1b0
int32_t var_88 = 0xffffffff
uint64_t rbx
rbx.b = 1
int64_t var_84 = 0
int32_t rcx = 0
int32_t r8 = 0

if (rdi != 0)
    void* rax_1 = *(arg1 + 0x1c0)
    void* r9_1 = arg1 + 0x1b0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141dbbe08:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
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
        
        if (r8 - rax_9 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141dbbe08
        
        var_84.d = rdi

int32_t rdx_5 = *(arg1 + 0x1c8)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_5
int128_t var_78 = (arg1 + 0x1a0).o
int96_t var_68 = var_48:8.12

if (rdx_5 != rdi)
    void* rax_11 = *(arg1 + 0x1c0)
    void* r10_1 = arg1 + 0x1b0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_9 != 0)
    label_141dbbed2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141dbbed2
        
        var_84.d = rdi

int64_t* r12_1 = nullptr

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* rax_20 = var_78.q
    
    if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x1b0 && rax_20 == arg1 + 0x1a0)
        int32_t i = 0
        
        if (*(arg1 + 0x208) s> 0)
            do
                void* rdi_3 = *(r12_1 + *(arg1 + 0x200))
                
                if (rdi_3 != 0)
                    char r14_1 = 0
                    
                    if (*(rdi_3 + 0x20) == arg1)
                        r14_1 = rbx.b
                    
                    rbx = zx.q(r14_1)
                    
                    if (sub_140d23dc0(rdi_3, 0x30) != 0)
                        rbx = zx.q(r14_1)
                        
                        if (sub_140d23dc0(arg1, 0x30) == 0)
                            rbx = 0
                    
                    void* rax_30 = sub_140d209c0(rdi_3)
                    int64_t* r14_2 = *(rdi_3 + 0x10)
                    int64_t rcx_15 = r14_2[0x23]
                    
                    if (rcx_15 == 0)
                        int64_t rdx_10 = *r14_2
                        (*(rdx_10 + 0x390))(r14_2, rdx_10)
                        rcx_15 = r14_2[0x23]
                    
                    if (rax_30 != rcx_15)
                        rbx = zx.q(rbx.b)
                        
                        if (rax_30 != sub_140bdd980(*(arg1 + 0x10), *(rdi_3 + 0x18)))
                            rbx = 0
                
                i += 1
                r12_1 = &r12_1[1]
            while (i s< *(arg1 + 0x208))
        
        return zx.q(rbx.b)
    
    void* rcx_9 = *(*rax_20 + rcx_7 * 0x10)
    
    if (rcx_9 != 0 && sub_140d23dc0(rcx_9, 0x30) != 0)
        rbx = zx.q(rbx.b)
        
        if (sub_140d23dc0(arg1, 0x30) == 0)
            rbx = 0
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
