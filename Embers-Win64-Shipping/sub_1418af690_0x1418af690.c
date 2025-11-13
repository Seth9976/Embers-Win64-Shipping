// 函数: sub_1418af690
// 地址: 0x1418af690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int32_t* var_90 = &arg1[6]
*arg1 = &data_142fea7b0
int32_t r11 = arg1[9].d
int32_t var_84 = 0
int32_t rcx = 0
int32_t var_80 = 0
int32_t r8 = 0

if (r11 != 0)
    int32_t* rax_1 = arg1[8]
    int32_t* r9_1 = &arg1[6]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_84_2
    
    if (rdx_3 != 0)
    label_1418af748:
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
        
        int32_t var_84_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_84_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_80_1 = rcx
            var_98 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1418af748
        
        var_84_2 = r11

int32_t rdx_6 = arg1[9].d
int128_t var_38 = 0xffffffff
int32_t r15 = 0xffffffff << (rdx_6.b & 0x1f)
uint128_t var_48 = var_98.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r15
int32_t var_84_3 = rdx_6
uint128_t var_78 = (&arg1[4]).o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    int32_t* rax_11 = arg1[8]
    int32_t* r10_1 = &arg1[6]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = r10_1[sx.q(r8_2)] & r15
    int32_t var_84_5
    
    if (rdx_10 != 0)
    label_1418af812:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        int32_t var_84_4 = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_84_5 = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = r10_1[rcx_5 + 1]
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1418af812
        
        var_84_5 = r11

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_11 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[6] && rdx_11 == &arg1[4])
        sub_1405b8890(&arg1[4], 0)
        sub_1418b3280(&arg1[0xe], 0)
        sub_1418b3200(&arg1[0x18], 0)
        sub_1418b3180(&arg1[0x2c], 0)
        data_143efaec8 = 0
        int64_t rcx_15 = arg1[0x40]
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        arg1[0x3f].d = 0
        int64_t rcx_16 = arg1[0x3e]
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        sub_1418af500(&arg1[0x36])
        arg1[0x35].d = 0
        int64_t rcx_18 = arg1[0x34]
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        sub_1418b3300(&arg1[0x2c], 0)
        int64_t rcx_20 = arg1[0x30]
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = arg1[0x2c]
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        arg1[0x2b].d = 0
        int64_t rcx_22 = arg1[0x2a]
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        sub_140597460(&arg1[0x22])
        arg1[0x21].d = 0
        int64_t rcx_24 = arg1[0x20]
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        sub_1407ece30(&arg1[0x18], 0)
        int64_t rcx_26 = arg1[0x1c]
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = arg1[0x18]
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        arg1[0x17].d = 0
        int64_t rcx_28 = arg1[0x16]
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        sub_140d79fe0(&arg1[0xe], 0)
        int64_t rcx_30 = arg1[0x12]
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int64_t rcx_31 = arg1[0xe]
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        sub_1405ae080(&arg1[4])
        int32_t i_1 = arg1[3].d
        int64_t* rbx_3 = arg1[2]
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_33 = *rbx_3
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
                
                rbx_3 = &rbx_3[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rbx_3 = arg1[2]
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        *arg1 = &data_142d5a090
        return &data_142d5a090
    
    void* rax_22 = data_143e29f28
    int64_t* rbx_2 = _mm_bsrli_si128(*(*rdx_11 + rax_20 * 0x18), 8).q
    int64_t* rcx_8 = *(rax_22 + 0x20)
    (*(*rcx_8 + 0x88))(rcx_8, rbx_2)
    
    if (rbx_2 != 0)
        (**rbx_2)(rbx_2, 1)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
