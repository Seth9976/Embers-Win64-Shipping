// 函数: sub_1422667e0
// 地址: 0x1422667e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x50)

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0x60)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x260))(rcx_1, arg1 + 0xe0)

int32_t i_6 = *(arg1 + 0xe8)
int32_t r12 = 0
int128_t zmm0

if (i_6 s> 0)
    char* rbx_1 = nullptr
    
    do
        void* rdi = *(arg1 + 0xe0)
        
        if (*(rbx_1 + rdi + 0x48) s> 0)
            if (*(rbx_1 + rdi) != 0 && sub_140d3e110(rdi + 0xc + rbx_1) != 0
                    && sub_140d3e110(rdi + 0x28 + rbx_1) != 0)
                int32_t* rsi_2 = rdi + 4 + rbx_1
                
                if (sub_140d3e110(rsi_2) != 0)
                    int64_t* rax_5 = sub_140d3c6e0(rsi_2)
                    (*(*rax_5 + 0x488))(rax_5, rsi_2, rdi + 0x20 + rbx_1, rdi + 0x40 + rbx_1)
            
            if (*(rbx_1 + rdi + 1) != 0 && sub_140d3e110(rdi + 0xc + rbx_1) != 0
                    && sub_140d3e110(rdi + 0x28 + rbx_1) != 0)
                int32_t* r15_2 = rdi + 0x20 + rbx_1
                
                if (sub_140d3e110(r15_2) != 0)
                    void* rsi_3 = rbx_1 + rdi
                    int32_t i = 0
                    
                    if (*(rsi_3 + 0x48) s> 0)
                        int64_t r10_2 = 0
                        
                        do
                            int64_t r8_3 = *(rsi_3 + 0x40)
                            r10_2 += 0x30
                            i += 1
                            int64_t rcx_14 = *(r10_2 + r8_3 - 0x10)
                            float zmm1[0x4] = *(r10_2 + r8_3 - 0x24) ^ 0x80000000
                            zmm0 = *(r10_2 + r8_3 - 0x1c)
                            int128_t zmm2 = *(r10_2 + r8_3 - 0x20) ^ 0x80000000
                            *(r10_2 + r8_3 - 0x10) = *(r10_2 + r8_3 - 8)
                            *(r10_2 + r8_3 - 8) = rcx_14
                            *(r10_2 + r8_3 - 0x24) = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                            *(r10_2 + r8_3 - 0x1c) = (zmm0 ^ 0x80000000).d
                        while (i s< *(rsi_3 + 0x48))
                    
                    int64_t* rax_11 = sub_140d3c6e0(r15_2)
                    (*(*rax_11 + 0x488))(rax_11, r15_2, rdi + 4 + rbx_1, rsi_3 + 0x40)
        
        i_6 = *(arg1 + 0xe8)
        r12 += 1
        rbx_1 = &rbx_1[0x68]
    while (r12 s< i_6)

int32_t rax_12 = *(arg1 + 0xec)
void* rbx_2 = *(arg1 + 0xe0)

if (rax_12 s< 0)
    if (i_6 != 0)
        void* rbx_4 = rbx_2 + 0x40
        int32_t i_1
        
        do
            int64_t rcx_18 = *rbx_4
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            rbx_4 += 0x68
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
        rax_12 = *(arg1 + 0xec)
    
    *(arg1 + 0xe8) = 0
    
    if (rax_12 != 0)
        sub_1405fdf40(arg1 + 0xe0, 0)
else
    if (i_6 != 0)
        int64_t* rbx_3 = rbx_2 + 0x40
        int32_t i_2
        
        do
            int64_t rcx_17 = *rbx_3
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            rbx_3 = &rbx_3[0xd]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    *(arg1 + 0xe8) = 0

int32_t var_b4 = 1
int32_t r10_4 = *(arg1 + 0x1a0)
void* r9_4 = arg1 + 0x188
void* var_b0 = r9_4
int32_t rcx_20 = 0
int32_t var_b8 = 0
int32_t r8_6 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r10_4 != 0)
    void* rax_13 = *(r9_4 + 0x10)
    
    if (rax_13 != 0)
        r9_4 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10_4 - 1)
    int32_t rdx_6 = *r9_4
    
    if (rdx_6 != 0)
    label_142266ab8:
        int32_t rax_20 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
        int32_t var_b4_1 = rax_20
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_2
        
        var_a4.d = r8_6 - rax_21 + 0x1f
        
        if (r8_6 - rax_21 + 0x1f s> r10_4)
            var_a4.d = r10_4
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_20)
            r8_6 += 0x20
            rcx_20 += 1
            var_a4:4.d = r8_6
            var_b8 = rcx_20
            
            if (rdx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_4 + (rdx_7 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_142266ab8
        
        var_a4.d = r10_4

void* var_40 = arg1 + 0x178
int128_t var_50 = 0xffffffff
int128_t var_60 = var_b8.o
int16_t var_80 = 0
int128_t var_58
var_a8.o = var_58
var_b8.o = (arg1 + 0x178).o
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_98 = zmm0

if (0 s< *(var_58.q + 0x18))
    int32_t i_5
    int32_t i_3 = i_5
    
    do
        int64_t* rdi_1 = var_b8.q
        int64_t rbx_5 = sx.q(i_3) * 3
        void* rsi_4 = *(*rdi_1 + (rbx_5 << 3))
        int64_t* rax_26 = sub_140d3c6e0(rsi_4 + 0xf8)
        
        if (rax_26 != 0)
            void* rax_27 = sub_140d3c6e0(rsi_4 + 0x100)
            sub_141f10620(rax_26, *(*rdi_1 + (rbx_5 << 3) + 8), *(rax_27 + 0x80))
        
        var_a4:4.d &= not.d(var_b0:4.d)
        sub_14059bdd0(&var_b0)
        i_3 = i_5
    while (i_3 s< *(var_a8.q + 0x18))
    
    if (var_80.b != 0 && var_80:1.b != 0)
        sub_1405b6470(arg1 + 0x178, *(arg1 + 0x180) - *(arg1 + 0x1ac), 1)

sub_140865470(arg1 + 0x178, 0)
int64_t* rbx_6 = *(arg1 + 0xf0)
uint64_t rdi_2 = sx.q(*(arg1 + 0xf8))
void* r14_2 = &rbx_6[rdi_2 * 3]

if (rbx_6 != r14_2)
    do
        int32_t rdi_3 = rbx_6[2].d
        
        if (rbx_6[1].d != 0)
            int64_t* rcx_30 = *rbx_6
            
            if (rcx_30 != 0 && (*(*rcx_30 + 0x28))(rcx_30) != 0)
                int64_t* rcx_31
                
                if (rbx_6[1].d == 0)
                    rcx_31 = nullptr
                else
                    rcx_31 = *rbx_6
                
                (*(*rcx_31 + 0x50))(rcx_31, zx.q(rdi_3))
        
        rbx_6 = &rbx_6[3]
    while (rbx_6 != r14_2)
    
    rdi_2 = zx.q(*(arg1 + 0xf8))
    rbx_6 = *(arg1 + 0xf0)

if (rdi_2.d != 0)
    int32_t i_4
    
    do
        sub_140745b20(rbx_6)
        rbx_6 = &rbx_6[3]
        i_4 = rdi_2.d
        rdi_2 = zx.q(rdi_2.d - 1)
    while (i_4 != 1)

bool cond:2 = *(arg1 + 0xfc) == 0
*(arg1 + 0xf8) = 0

if (not(cond:2))
    sub_1405a5130(arg1 + 0xf0, 0)

return sub_140920c10(&data_143a2f370, arg1) __tailcall
