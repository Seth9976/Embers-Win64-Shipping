// 函数: sub_141f0ce20
// 地址: 0x141f0ce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rbx_1 = *(arg1 + 0x128)
int32_t rbx_2 = rbx_1 - 1
int64_t* arg_18
int64_t* r14_2

if (rbx_1 - 1 s< 0)
label_141f0ceb7:
    int64_t rdi_2 = sx.q(*(arg1 + 0x128))
    int32_t rax_3 = (rdi_2 + 1).d
    *(arg1 + 0x128) = rax_3
    
    if (rax_3 s> *(arg1 + 0x12c))
        sub_1405fdd60(arg1 + 0x120)
    
    int64_t* rdx_3 = rdi_2 * 0x70 + *(arg1 + 0x120)
    int64_t* rcx_2 = &rdx_3[4]
    *rdx_3 = 0
    rdx_3[1].d = 0
    rdx_3[2] = 0
    rdx_3[3] = 0
    rcx_2[2] = 0
    rcx_2[3].d = 0
    *(rcx_2 + 0x1c) = 0x80
    int64_t* rax_4 = rcx_2[2]
    
    if (rax_4 != 0)
        rcx_2 = rax_4
    
    *rcx_2 = 0
    rcx_2[1] = 0
    rdx_3[8].d = 0xffffffff
    *(rdx_3 + 0x44) = 0
    rdx_3[0xa] = 0
    rdx_3[0xb].d = 0
    rdx_3[0xc] = 0
    rdx_3[0xd] = 0
    r14_2 = sx.q(*(arg1 + 0x128) - 1) * 0x70 + *(arg1 + 0x120)
    arg_18 = r14_2
    *r14_2 = arg2
    goto label_141f0cf53

int64_t rdi_1 = sx.q(rbx_2) * 0x70

while (true)
    r14_2 = *(arg1 + 0x120) + rdi_1
    arg_18 = r14_2
    int64_t rax_2 = *r14_2
    
    if (rax_2 == arg2)
        break
    
    if (rax_2 == 0)
        sub_141f22450(arg1 + 0x120, rbx_2, (rax_2 + 1).d, 0)
    
    rdi_1 -= 0x70
    int32_t temp1_1 = rbx_2
    rbx_2 -= 1
    
    if (temp1_1 - 1 s< 0)
        goto label_141f0ceb7

if (r14_2[1].d == *(arg2 + 0x2b0))
    return 

label_141f0cf53:
int32_t r11_1 = r14_2[7].d
int32_t rcx_3 = 0
int32_t var_c8_1 = 0
int32_t r8_2 = 0
int32_t var_c4_1 = 1
void* var_c0_1 = &r14_2[4]
int32_t var_b8_1 = 0xffffffff
int64_t var_b4_1 = 0

if (r11_1 != 0)
    void* rax_8 = r14_2[6]
    void* r9_1 = &r14_2[4]
    
    if (rax_8 != 0)
        r9_1 = rax_8
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_1 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_141f0cfd8:
        int32_t rax_15 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_c4_2 = rax_15
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_2
        
        var_b4_1.d = r8_2 - rax_16 + 0x1f
        
        if (r8_2 - rax_16 + 0x1f s> r11_1)
            var_b4_1.d = r11_1
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_3)
            r8_2 += 0x20
            rcx_3 += 1
            var_b4_1:4.d = r8_2
            var_c8_1 = rcx_3
            
            if (rdx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            int32_t var_b8_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141f0cfd8
        
        var_b4_1.d = r11_1

int32_t rdx_8 = r14_2[7].d
int128_t var_58_1 = 0xffffffff
int32_t rsi_1 = 0xffffffff << (rdx_8.b & 0x1f)
int128_t var_68_1 = var_c8_1.o
int32_t r8_5 = rdx_8 s>> 5
int32_t r9_3 = rdx_8 & 0xffffffe0
int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int32_t var_b8_3 = rsi_1
var_b4_1.d = rdx_8
int128_t var_98 = (&r14_2[2]).o
int128_t var_88_1 = var_68_1

if (rdx_8 != r11_1)
    void* rax_18 = r14_2[6]
    void* r10_1 = &r14_2[4]
    
    if (rax_18 != 0)
        r10_1 = rax_18
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11_1 - 1)
    int32_t rdx_12 = *(r10_1 + (sx.q(r8_5) << 2)) & rsi_1
    
    if (rdx_12 != 0)
    label_141f0d0b2:
        int32_t rax_25 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t rbx_4
        
        if (rax_25 == 0)
            rbx_4 = 0x20
        else
            rbx_4 = 0x1f - temp0_4
        
        var_b4_1.d = r9_3 - rbx_4 + 0x1f
        
        if (r9_3 - rbx_4 + 0x1f s> r11_1)
            var_b4_1.d = r11_1
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r10_1 + (rcx_8 << 2) + 4)
            var_b8_3 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_141f0d0b2
        
        var_b4_1.d = r11_1

while (true)
    int64_t rax_27 = sx.q(var_88_1:0xc.d)
    int64_t rdx_13 = var_98.q
    
    if (rax_27.d == (var_b8_3.q u>> 0x20).d && var_88_1.q == &r14_2[4] && rdx_13 == &r14_2[2])
        break
    
    void* r14_6 = rax_27 * 0x30 + *rdx_13
    int32_t rax_28 = *(r14_6 + 0x24)
    void* rsi_2 = *(r14_6 + 0x18)
    int32_t i_2 = *(r14_6 + 0x20)
    
    if (rax_28 s< 0)
        if (i_2 != 0)
            void* rsi_4 = rsi_2 + 8
            int32_t i
            
            do
                int64_t* rbx_6 = *rsi_4
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp10_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                
                rsi_4 += 0x10
                i = i_2
                i_2 -= 1
            while (i != 1)
            rax_28 = *(r14_6 + 0x24)
        
        *(r14_6 + 0x20) = 0
        
        if (rax_28 != 0)
            sub_1405a5410(r14_6 + 0x18, 0)
    else
        if (i_2 != 0)
            int64_t* rsi_3 = rsi_2 + 8
            int32_t i_1
            
            do
                int64_t* rbx_5 = *rsi_3
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp11_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
                
                rsi_3 = &rsi_3[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        *(r14_6 + 0x20) = 0
    
    var_88_1:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)

int64_t* r14_7 = arg_18
sub_140e86360(&r14_7[0xc], 0)
int64_t* rsi_5 = *(arg1 + 0x110)
void* r13_4 = &rsi_5[sx.q(*(arg1 + 0x118)) * 2]
void* var_a0_1 = r13_4

if (rsi_5 != r13_4)
    do
        void** rax_35 = sub_142411b20(arg2, *(*rsi_5 + 4))
        void* rbx_7 = *rax_35
        void* r12_4 = rbx_7 + sx.q(rax_35[1].d) * 0x28
        
        if (rbx_7 != r12_4)
            do
                int64_t rax_37 = *(rbx_7 + 0x10)
                int64_t* rcx_25
                
                if (rax_37 == data_143e1df78)
                    int64_t r14_9 = sx.q(r14_7[0xd].d)
                    int32_t rax_41 = (r14_9 + 1).d
                    r14_7[0xd].d = rax_41
                    
                    if (rax_41 s> *(r14_7 + 0x6c))
                        sub_1405a4f90(&r14_7[0xc])
                    
                    rcx_25 = (r14_9 << 4) + r14_7[0xc]
                else
                    void* rax_40 =
                        sub_141f011c0(&r14_2[2], sub_140b5ead0(rax_37.d) + rax_37:4.d, rbx_7 + 0x10)
                    int64_t r15_4 = sx.q(*(rax_40 + 8))
                    int32_t rcx_21 = (r15_4 + 1).d
                    *(rax_40 + 8) = rcx_21
                    
                    if (rcx_21 s> *(rax_40 + 0xc))
                        sub_1405a4f90(rax_40)
                    
                    rcx_25 = (r15_4 << 4) + *rax_40
                
                *rcx_25 = *rsi_5
                void* rax_43 = rsi_5[1]
                rcx_25[1] = rax_43
                
                if (rax_43 != 0)
                    *(rax_43 + 8) += 1
                
                rbx_7 += 0x28
            while (rbx_7 != r12_4)
            
            r13_4 = var_a0_1
        
        rsi_5 = &rsi_5[2]
    while (rsi_5 != r13_4)
    
    r14_7 = arg_18

r14_7[1].d = *(arg2 + 0x2b0)
