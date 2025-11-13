// 函数: sub_14100f850
// 地址: 0x14100f850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142effb50

if (&arg1[0x18] != &arg1[0x40])
    int64_t* rsi_1 = &arg1[0x1c]
    
    do
        int32_t r10_1 = rsi_1[1].d
        int32_t rcx = 0
        int32_t var_94_1 = 1
        int32_t r8_1 = 0
        int32_t var_98_1 = 0
        void* var_90_1 = &rsi_1[-2]
        int32_t var_88_1 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r10_1 != 0)
            void* rax_1 = *rsi_1
            void* r9_1 = &rsi_1[-2]
            
            if (rax_1 != 0)
                r9_1 = rax_1
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r10_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_14100f918:
                int32_t rax_8 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
                int32_t var_94_2 = rax_8
                int32_t rax_9
                
                if (rax_8 == 0)
                    rax_9 = 0x20
                else
                    rax_9 = 0x1f - temp0_1
                
                var_84_1.d = r8_1 - rax_9 + 0x1f
                
                if (r8_1 - rax_9 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx)
                    r8_1 += 0x20
                    rcx += 1
                    var_84_1:4.d = r8_1
                    var_98_1 = rcx
                    
                    if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_14100f918
                
                var_84_1.d = r10_1
        
        int128_t var_38_1 = 0xffffffff
        var_84_1.d = r10_1
        int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        uint128_t var_78 = (&rsi_1[-4]).o
        int96_t var_68_1 = var_98_1.o:8.12
        int64_t var_58_1 = temp0_2
        
        while (true)
            int32_t var_5c
            int64_t rax_11 = sx.q(var_5c)
            int64_t* rdx_6 = var_78.q
            
            if (rax_11.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d
                    && var_68_1.q == &rsi_1[-2] && rdx_6 == &rsi_1[-4])
                break
            
            void* rbx_1 = _mm_bsrli_si128(*(*rdx_6 + rax_11 * 0x18), 8).q
            
            if (rbx_1 != 0)
                sub_14100faf0(rbx_1)
                j_sub_140a74f90(rbx_1)
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
        
        rsi_1 = &rsi_1[0xa]
    while (&rsi_1[-4] != &arg1[0x40])

int64_t i_2 = 4
void* rdi_3 = &arg1[0x40]
int64_t i_3 = 4
int64_t i

do
    rdi_3 -= 0x50
    sub_1405ae080(rdi_3)
    i = i_3
    i_3 -= 1
while (i != 1)
int64_t rcx_9 = arg1[0x14]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

void* r15_2 = &arg1[8]
int64_t i_1 = 4
void* rsi_2 = r15_2 + 0x58

do
    int32_t j_1 = *(rsi_2 - 8)
    rsi_2 -= 0x10
    int64_t* rbx_2 = *rsi_2
    i_1 -= 1
    
    if (j_1 != 0)
        int32_t j
        
        do
            void* rcx_10 = *rbx_2
            
            if (rcx_10 != 0)
                (*(*(rcx_10 + 0x20) + 0x10))(rcx_10 + 0x20)
            
            rbx_2 = &rbx_2[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_2 = *rsi_2
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
while (i_1 != 0)

sub_14100dbf0(&arg1[9])

do
    void* rcx_14 = *(r15_2 - 8)
    r15_2 -= 8
    i_2 -= 1
    
    if (rcx_14 != 0)
        (*(*(rcx_14 + 0x20) + 0x10))(rcx_14 + 0x20)
while (i_2 != 0)

sub_1405ec8a0(&arg1[3])
*arg1 = &data_142d3ff08
return &data_142d3ff08
