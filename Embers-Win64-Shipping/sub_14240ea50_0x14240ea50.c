// 函数: sub_14240ea50
// 地址: 0x14240ea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5426 != 0 && arg2 == 0)
    return 

void var_58
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_58)
void* r14_1 = arg1 + 0x90
int32_t var_d4_1 = 1
int32_t r11_1 = *(r14_1 + 0x28)
void* r15_1 = r14_1 + 0x10
int32_t rcx_1 = 0
void* arg_20 = r14_1
int32_t i_2 = 0
int32_t var_d8_1 = 0
int64_t* r12_1 = nullptr
void* var_d0_1 = r15_1
int32_t r13_1 = 0
int64_t* var_b8 = nullptr
int32_t r8_1 = 0
int32_t var_ac_1 = 0
int32_t var_c8_1 = 0xffffffff
int64_t var_c4_1 = 0

if (r11_1 != 0)
    void* rax_1 = *(r15_1 + 0x10)
    void* r9_1 = r15_1
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14240eb58:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_d4_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_c4_1.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r11_1)
            var_c4_1.d = r11_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_c4_1:4.d = r8_1
            var_d8_1 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_c8_2 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14240eb58
        
        var_c4_1.d = r11_1

int32_t rdx_5 = *(r14_1 + 0x28)
var_c4_1.d = rdx_5
int32_t r9_2 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t var_c8_3 = r9_2
int128_t var_78_1 = var_d8_1.o
int32_t r9_4 = rdx_5 & 0xffffffe0
int32_t r8_4 = rdx_5 s>> 5
int128_t var_68_1 = 0xffffffff
int64_t var_88_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_a8 = r14_1.o
int128_t var_98_1 = var_78_1

if (rdx_5 != r11_1)
    void* rax_11 = *(r15_1 + 0x10)
    void* r10_1 = r15_1
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_1 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r9_2
    
    if (rdx_9 != 0)
    label_14240ec24:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_c4_1.d = r9_4 - rbx_1 + 0x1f
        
        if (r9_4 - rbx_1 + 0x1f s> r11_1)
            var_c4_1.d = r11_1
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_4)
            r9_4 += 0x20
            r8_4 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_c8_3 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14240ec24
        
        var_c4_1.d = r11_1

while (true)
    int64_t rax_20 = sx.q(var_98_1:0xc.d)
    int64_t* rdx_10 = var_a8.q
    
    if (rax_20.d == (var_c8_3.q u>> 0x20).d && var_98_1.q == r15_1 && rdx_10 == r14_1)
        break
    
    void* rax_21 = sub_140d30a00(*rdx_10 + ((rax_20 * 5 + 1) << 3), 0)
    int64_t i_3 = sx.q(i_2)
    i_2 = (i_3 + 1).d
    
    if (i_2 s> r13_1)
        sub_1405a4d70(&var_b8)
        r13_1 = var_ac_1
        r12_1 = var_b8
    
    int32_t rax_23 = not.d(var_a8:0xc.d)
    r12_1[i_3] = rax_21
    var_98_1:8.d &= rax_23
    sub_14059bdd0(&var_a8:8)
    r14_1 = arg_20

if (i_2 s> 0)
    int64_t* r14_3 = r12_1
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdi_1 = *r14_3
        
        if (rdi_1 != 0)
            int32_t rax_24 = *(rdi_1 + 0xc)
            void* const rax_28
            
            if (rax_24 s>= data_143e1d9b4)
                rax_28 = nullptr
            else
                uint32_t rdx_13 = zx.d(rax_24.w)
                
                if (rax_24 s< 0)
                    rax_24 += 0xffff
                    rdx_13 -= 0x10000
                
                rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3)) + sx.q(rdx_13) * 0x18
            
            *(rax_28 + 8) |= 0x40000000
            int64_t rsi_3 = sx.q(*(arg1 + 0x240))
            int32_t rax_29 = (rsi_3 + 1).d
            *(arg1 + 0x240) = rax_29
            
            if (rax_29 s> *(arg1 + 0x244))
                sub_1405a4d70(arg1 + 0x238)
            
            *(*(arg1 + 0x238) + (rsi_3 << 3)) = rdi_1
        
        r14_3 = &r14_3[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x248) = sub_1423fa5f0(arg1 + 0x190)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_58)
