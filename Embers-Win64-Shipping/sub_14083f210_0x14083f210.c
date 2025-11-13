// 函数: sub_14083f210
// 地址: 0x14083f210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1 + 0x50
int32_t var_94 = 1
int32_t rbx = *(r15 + 0x28)
void* r13 = r15 + 0x10
void* var_90 = r13
int32_t rcx = 0
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int32_t var_98 = 0
int64_t var_84 = 0

if (rbx != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14083f2b8:
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
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
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
                goto label_14083f2b8
        
        var_84.d = rbx

int32_t rdx_5 = *(r15 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_5
int128_t var_78 = r15.o
int96_t var_68 = var_48:8.12

if (rdx_5 != rbx)
    void* rax_11 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_9 != 0)
    label_14083f382:
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
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
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
                goto label_14083f382
        
        var_84.d = rbx

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t result = var_78.q
    
    if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == r13 && result == r15)
        return result
    
    char r8_4 = (*(arg1 + 0xb0)).b
    int64_t* r14_3 = (rcx_7 << 6) + *result
    void* rbx_1 = *r14_3
    
    if ((r8_4 & 1) != 0)
        int16_t* rdi_1 = r14_3[1]
        void* r15_1 = &rdi_1[sx.q(r14_3[2].d) * 3]
        
        if (rdi_1 != r15_1)
            do
                int64_t rdx_11 = zx.q(*rdi_1) + *(arg1 + 0x20)
                int64_t rcx_10 = zx.q(rdi_1[1]) + *(rbx_1 + 0x20)
                
                if (rcx_10 != rdx_11)
                    memcpy(rcx_10, rdx_11, zx.d(rdi_1[2]))
                
                *(rbx_1 + 0xb0) |= 1
                rdi_1 = &rdi_1[3]
            while (rdi_1 != r15_1)
            
            r8_4 = (*(arg1 + 0xb0)).b
        
        r15 = arg1 + 0x50
    
    if ((r8_4 & 2) != 0)
        int16_t* rdx_12 = r14_3[3]
        void* r9_5 = &rdx_12[sx.q(r14_3[4].d) * 2]
        
        if (rdx_12 != r9_5)
            do
                uint32_t rax_22 = zx.d(*rdx_12)
                int64_t r8_6
                
                if (rax_22 s>= *(arg1 + 0x38))
                    r8_6 = 0
                else
                    r8_6 = *(*(arg1 + 0x30) + (zx.q(rax_22) << 3))
                
                uint64_t rcx_12 = zx.q(rdx_12[1])
                rdx_12 = &rdx_12[2]
                *(*(rbx_1 + 0x30) + (rcx_12 << 3)) = r8_6
                *(rbx_1 + 0xb0) |= 2
            while (rdx_12 != r9_5)
            
            r8_4 = (*(arg1 + 0xb0)).b
    
    if ((r8_4 & 4) != 0)
        int16_t* rdx_13 = r14_3[5]
        void* r9_6 = &rdx_13[sx.q(r14_3[6].d) * 2]
        
        while (rdx_13 != r9_6)
            uint32_t rax_26 = zx.d(*rdx_13)
            int64_t r8_7
            
            if (rax_26 s>= *(arg1 + 0x48))
                r8_7 = 0
            else
                r8_7 = *(*(arg1 + 0x40) + (zx.q(rax_26) << 3))
            
            uint64_t rcx_14 = zx.q(rdx_13[1])
            rdx_13 = &rdx_13[2]
            *(*(rbx_1 + 0x40) + (rcx_14 << 3)) = r8_7
            *(rbx_1 + 0xb0) |= 4
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
