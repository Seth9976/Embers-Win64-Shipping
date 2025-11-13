// 函数: sub_1418eeda0
// 地址: 0x1418eeda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"savevulkanpsocacheonexit") != 0)
    sub_1418ed470()

sub_1418c2e90(*(arg1 + 0x58))
sub_14196cd30()
sub_1418f9af0()

if (data_143f0f19c != 0)
    data_143f0f19c = 0
    data_143f0f1d0 = 0
    sub_1419a2e50()
    data_143f10908 += 1
    int32_t i = 0
    
    if (data_143f1afd0 s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t* rcx_2 = *(rdi_1 + data_143f1afc8)
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x20))(rcx_2)
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< data_143f1afd0)
    
    data_143f10908 -= 1
    sub_1419a2e50()
    data_143f10908 += 1
    int32_t i_1 = 0
    
    if (data_143f1afd0 s> 0)
        int64_t* rdi_2 = nullptr
        
        do
            int64_t* rcx_4 = *(rdi_2 + data_143f1afc8)
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))(rcx_4)
            
            i_1 += 1
            rdi_2 = &rdi_2[1]
        while (i_1 s< data_143f1afd0)
    
    data_143f10908 -= 1
    int32_t rcx_5 = 0
    int32_t r8_1 = 0
    void* rsi_2 = *(arg1 + 0x58) + 0x1a00
    int32_t var_d8_1 = 0
    int32_t r11_1 = *(rsi_2 + 0x28)
    int32_t var_d4_1 = 1
    void* var_d0_1 = rsi_2 + 0x10
    int32_t var_c8_1 = 0xffffffff
    int64_t var_c4_1 = 0
    
    if (r11_1 != 0)
        void* rax_3 = *(rsi_2 + 0x20)
        void* r9_1 = rsi_2 + 0x10
        
        if (rax_3 != 0)
            r9_1 = rax_3
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_1418eef48:
            int32_t rax_10 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_d4_2 = rax_10
            int32_t arg_8 = temp0_1
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_1
            
            var_c4_1.d = r8_1 - rax_11 + 0x1f
            
            if (r8_1 - rax_11 + 0x1f s> r11_1)
                var_c4_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_5)
                r8_1 += 0x20
                rcx_5 += 1
                var_c4_1:4.d = r8_1
                var_d8_1 = rcx_5
                
                if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_c8_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1418eef48
            
            var_c4_1.d = r11_1
    
    int32_t rdx_5 = *(rsi_2 + 0x28)
    int128_t var_58_1 = var_d8_1.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int32_t var_a8_1 = r8_4
    int32_t var_98_1 = r12_1
    int32_t var_94_1 = rdx_5
    int32_t var_90_1 = r9_3
    int128_t var_48_1 = 0xffffffff
    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int128_t var_88 = rsi_2.o
    int128_t var_78_1 = var_58_1
    
    if (rdx_5 != r11_1)
        void* rax_13 = *(rsi_2 + 0x20)
        void* r10_1 = rsi_2 + 0x10
        
        if (rax_13 != 0)
            r10_1 = rax_13
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        int32_t var_94_3
        
        if (rdx_9 != 0)
        label_1418ef02a:
            int32_t rax_20 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t arg_10 = temp0_3
            int32_t rbx_1
            
            if (rax_20 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_3
            
            int32_t var_94_2 = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_94_3 = r11_1
        else
            while (true)
                int64_t rcx_10 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                int32_t var_90_2 = r9_3
                int32_t var_a8_2 = r8_4
                
                if (rcx_10.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_10 << 2) + 4)
                var_98_1 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1418ef02a
            
            var_94_3 = r11_1
    
    while (true)
        int64_t rax_22 = sx.q(var_78_1:0xc.d)
        int64_t* rdx_10 = var_88.q
        
        if (rax_22.d == (var_98_1.q u>> 0x20).d && var_78_1.q == rsi_2 + 0x10 && rdx_10 == rsi_2)
            break
        
        data_143efb8a8(*(*(arg1 + 0x58) + 8), *(*(*rdx_10 + rax_22 * 0x18 + 8) + 0x18), 0)
        var_78_1:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
    
    sub_1418e0310(*(arg1 + 0x58) + 0x1a00, 0)
    sub_1419712f0(0)
    sub_1419712f0(0)

sub_1418bd490(*(arg1 + 0x58))
void* rbx_4 = *(arg1 + 0x58)

if (rbx_4 != 0)
    sub_1418b9f40(rbx_4)
    j_sub_140a74f90(rbx_4)

*(arg1 + 0x58) = 0
data_143efb1c0 = 0
int64_t* var_b0 = nullptr
int64_t var_b8 = 0
sub_1405aeff0(&data_143efb1c8, &var_b0)
int64_t* rcx_21 = var_b0

if (rcx_21 != 0)
    rcx_21[1].d -= 1
    
    if (rcx_21[1].d == 1)
        int64_t* rbx_5 = var_b0
        (**rbx_5)(rbx_5)
        int32_t rdi_4 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (rdi_4 == 1)
            int64_t* rcx_23 = var_b0
            (*(*rcx_23 + 8))(rcx_23, zx.q(rdi_4))

data_143efb698(*(arg1 + 0x20), 0)
int64_t* rcx_25 = data_143db18d0

if (rcx_25 == 0)
    sub_140a53c40()
    rcx_25 = data_143db18d0

int64_t r8_5
r8_5.b = 1
(*(*rcx_25 + 0xa8))(rcx_25, *(arg1 + 0x78), r8_5)
int64_t* rcx_26 = data_143db18d0

if (rcx_26 == 0)
    sub_140a53c40()
    rcx_26 = data_143db18d0

int64_t r8_6
r8_6.b = 1
(*(*rcx_26 + 0xa8))(rcx_26, *(arg1 + 0x80), r8_6)
return sub_1418fa910() __tailcall
