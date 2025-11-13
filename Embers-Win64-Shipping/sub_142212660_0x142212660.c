// 函数: sub_142212660
// 地址: 0x142212660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[5].d
void* r14 = &arg1[2]
int32_t r8 = 0
int32_t var_94 = 1
int32_t r9 = 0
int32_t var_98 = 0
void* var_90 = r14
int64_t* r15 = arg1
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx != 0)
    void* rax_1 = *(r14 + 0x10)
    void* r10_1 = r14
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_14221270a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_84:4.d = r9
            var_98 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_14221270a
        
        var_84.d = rbx

int32_t rdx_3 = r15[5].d
int32_t rsi = 0xffffffff << (rdx_3.b & 0x1f)
int32_t r8_2 = rdx_3 s>> 5
int32_t r9_3 = rdx_3 & 0xffffffe0
int128_t var_60 = 0xffffffff
int64_t var_30 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_70
var_70:8.d = rsi
var_70:0xc.d = rdx_3
int128_t var_50 = r15.o
int128_t var_40 = var_98.o

if (rdx_3 != rbx)
    void* rax_11 = *(r14 + 0x10)
    void* r10_2 = r14
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_7 = *(r10_2 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_7 != 0)
    label_1422127d2:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_70:0xc.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_70:0xc.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r10_2 + (rcx_6 << 2) + 4)
            var_70:8.d = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1422127d2
        
        var_70:0xc.d = rbx

while (true)
    int64_t rax_20 = sx.q(var_40:0xc.d)
    int64_t* rdx_8 = var_50.q
    
    if (rax_20.d == (var_70:8.q u>> 0x20).d && var_40.q == r14 && rdx_8 == r15)
        return sub_140754590(r15, 0) __tailcall
    
    int64_t rcx_8 = rax_20 * 9
    int64_t rax_21 = *rdx_8
    int64_t* i = *(rax_21 + (rcx_8 << 3) + 8)
    void* r15_1 = rax_21 + (rcx_8 << 3)
    
    for (void* rdi_3 = &i[sx.q(*(r15_1 + 0x10)) * 2]; i != rdi_3; i = &i[2])
        void* rax_22 = *i
        
        if (rax_22 != 0)
            *(rax_22 + 0x43c) = 0
            int64_t* rcx_9 = *i
            (*(*rcx_9 + 0x3a0))(rcx_9, 0)
    
    int64_t* rbx_1 = *(r15_1 + 0x18)
    int64_t rdi_4 = 0
    uint64_t rsi_2 = sx.q(*(r15_1 + 0x20)) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(*(r15_1 + 0x20))])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t* rcx_10 = *rbx_1
            
            if (rcx_10 != 0)
                int64_t rax_26 = *rcx_10
                *(rcx_10 + 0x43c) = 0
                (*(rax_26 + 0x3a0))(rcx_10, 0)
            
            rbx_1 = &rbx_1[1]
            rdi_4 += 1
        while (rdi_4 != rsi_2)
    
    int64_t rdi_5 = 0
    int64_t* rbx_2 = *(r15_1 + 0x28)
    uint64_t rsi_4 = sx.q(*(r15_1 + 0x30)) << 3 u>> 3
    
    if (rbx_2 u> &rbx_2[sx.q(*(r15_1 + 0x30))])
        rsi_4 = 0
    
    if (rsi_4 != 0)
        do
            int64_t* rcx_11 = *rbx_2
            
            if (rcx_11 != 0)
                int64_t rax_29 = *rcx_11
                *(rcx_11 + 0x43c) = 0
                (*(rax_29 + 0x3a0))(rcx_11, 0)
            
            rbx_2 = &rbx_2[1]
            rdi_5 += 1
        while (rdi_5 != rsi_4)
    
    bool cond:3_1 = *(r15_1 + 0x14) == 0
    *(r15_1 + 0x10) = 0
    
    if (not(cond:3_1))
        sub_1405a5410(r15_1 + 8, 0)
    
    bool cond:4_1 = *(r15_1 + 0x24) == 0
    *(r15_1 + 0x20) = 0
    
    if (not(cond:4_1))
        sub_1405c5570(r15_1 + 0x18, 0)
    
    bool cond:5_1 = *(r15_1 + 0x34) == 0
    *(r15_1 + 0x30) = 0
    
    if (not(cond:5_1))
        sub_1405c5570(r15_1 + 0x28, 0)
    
    var_40:8.d &= not.d(var_50:0xc.d)
    sub_14059bdd0(&var_50:8)
    r14 = var_90
    r15 = arg1
