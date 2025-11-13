// 函数: sub_140ac71b0
// 地址: 0x140ac71b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dba220 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dba220)
    
    if (data_143dba220 == 0xffffffff)
        sub_140af2b60()
        data_143dba21c = sub_140b21a10(&data_143dbb3f0, u"LEETIFYUnlocalized")
        _Init_thread_footer(&data_143dba220)

EnterCriticalSection(arg1 + 8)
int32_t rdi_1 = arg2[1].d - *(arg2 + 0x34)

if (rdi_1 s> *(arg1 + 0x38) - *(arg1 + 0x64))
    sub_140ac0530(arg1 + 0x30, rdi_1)
    int32_t rdx_2
    
    if (rdi_1 u< 4)
        rdx_2 = 1
    else
        uint32_t rdi_2 = rdi_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdi_2 + 8)
        int32_t arg_20 = temp0_1
        int32_t rcx_2
        
        if (rdi_2 == 0xfffffff8)
            rcx_2 = 0x20
        else
            rcx_2 = 0x1f - temp0_1
        
        int32_t rcx_4 = rcx_2 << 0x1a s>> 0x1f
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdi_2 + 7)
        int32_t var_b8_1 = temp0_2
        char rdx_1
        
        if (rcx_4 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_2.b
        
        rdx_2 = 1 << ((not.d(rcx_4)).b & (0x20 - rdx_1))
    
    int32_t rax_7 = *(arg1 + 0x78)
    
    if (rax_7 == 0 || rax_7 s< rdx_2)
        *(arg1 + 0x78) = rdx_2
        sub_140abf450(arg1 + 0x30)

int32_t rdi_5 = arg2[1].d - *(arg2 + 0x34)
void* arg_10 = arg1 + 0x80

if (rdi_5 s> *(arg1 + 0x88) - *(arg1 + 0xb4))
    sub_140ac0210(arg1 + 0x80, rdi_5)
    int32_t rdx_5
    
    if (rdi_5 u< 4)
        rdx_5 = 1
    else
        uint32_t rdi_6 = rdi_5 u>> 1
        uint64_t rflags_3
        int32_t temp0_3
        temp0_3, rflags_3 = _bit_scan_reverse(rdi_6 + 8)
        int32_t var_b4_1 = temp0_3
        int32_t rcx_9
        
        if (rdi_6 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_3
        
        int32_t rcx_11 = rcx_9 << 0x1a s>> 0x1f
        uint64_t rflags_4
        int32_t temp0_4
        temp0_4, rflags_4 = _bit_scan_reverse(rdi_6 + 7)
        int32_t var_b0_1 = temp0_4
        char rdx_4
        
        if (rcx_11 == 0)
            rdx_4 = 0x20
        else
            rdx_4 = 0x1f - temp0_4.b
        
        rdx_5 = 1 << ((not.d(rcx_11)).b & (0x20 - rdx_4))
    
    int32_t rax_13 = *(arg1 + 0xc8)
    
    if (rax_13 == 0 || rax_13 s< rdx_5)
        *(arg1 + 0xc8) = rdx_5
        sub_140abe590(arg1 + 0x80)

int32_t r10 = arg2[5].d
int32_t rcx_15 = 0
int32_t var_144 = 1
int32_t r8_2 = 0
int32_t var_148 = 0
void* var_140 = &arg2[2]
int32_t var_138 = 0xffffffff
int64_t var_134 = 0

if (r10 != 0)
    void* rax_14 = arg2[4]
    void* r9_2 = &arg2[2]
    
    if (rax_14 != 0)
        r9_2 = rax_14
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *r9_2
    
    if (rdx_8 != 0)
    label_140ac73bc:
        int32_t rax_21 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_5
        int32_t temp0_5
        temp0_5, rflags_5 = _bit_scan_reverse(rax_21)
        int32_t var_144_1 = rax_21
        int32_t var_ac_1 = temp0_5
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0x20
        else
            rax_22 = 0x1f - temp0_5
        
        var_134.d = r8_2 - rax_22 + 0x1f
        
        if (r8_2 - rax_22 + 0x1f s> r10)
            var_134.d = r10
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_15)
            r8_2 += 0x20
            rcx_15 += 1
            var_134:4.d = r8_2
            var_148 = rcx_15
            
            if (rdx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_2 + (rdx_9 << 2) + 4)
            int32_t var_138_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140ac73bc
        
        var_134.d = r10

int32_t rdx_10 = arg2[5].d
int64_t* var_e0 = arg2
int32_t var_ec = rdx_10
int128_t var_d8 = var_148.o
int128_t zmm0 = var_e0.o
int32_t r12 = 0xffffffff << (rdx_10 & 0x1f).b
int128_t var_c8 = 0xffffffff
int32_t r8_5 = rdx_10 s>> 5
int32_t r9_4 = rdx_10 & 0xffffffe0
int64_t var_50 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_100 = r8_5
int32_t var_f0 = r12
int32_t var_e8 = r9_4
int128_t var_70 = zmm0
int128_t var_60 = var_d8

if (rdx_10 != r10)
    void* rax_26 = arg2[4]
    void* r11_1 = &arg2[2]
    
    if (rax_26 != 0)
        r11_1 = rax_26
    
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(r10 - 1)
    int32_t rdx_14 = *(r11_1 + (sx.q(r8_5) << 2)) & r12
    int32_t var_ec_2
    
    if (rdx_14 != 0)
    label_140ac74af:
        int32_t rax_32 = ((rdx_14 - 1) & rdx_14) ^ rdx_14
        uint64_t rflags_6
        int32_t temp0_7
        temp0_7, rflags_6 = _bit_scan_reverse(rax_32)
        int32_t var_a8_1 = temp0_7
        int32_t rsi_1
        
        if (rax_32 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_7
        
        int32_t var_ec_1 = r9_4 - rsi_1 + 0x1f
        
        if (r9_4 - rsi_1 + 0x1f s> r10)
            var_ec_2 = r10
    else
        while (true)
            int64_t rcx_19 = sx.q(r8_5)
            r9_4 += 0x20
            r8_5 += 1
            int32_t var_e8_1 = r9_4
            int32_t var_100_1 = r8_5
            
            if (rcx_19.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r11_1 + (rcx_19 << 2) + 4)
            var_f0 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_140ac74af
        
        var_ec_2 = r10

void* r12_1 = arg_10

while (true)
    int64_t rdx_15 = sx.q(var_60:0xc.d)
    int32_t rax_25
    
    if (rdx_15.d != (var_f0.q u>> 0x20).d || var_60.q != &arg2[2])
        rax_25.b = 0
    else
        rax_25.b = 1
    
    int64_t rcx_21 = var_70.q
    
    if (rax_25.b == 0 || rcx_21 != arg2)
        rax_25.b = 1
    else
        rax_25.b = 0
    
    if (rax_25.b == 0)
        break
    
    int128_t* rdi_11 = rdx_15 * 0x50 + *rcx_21
    var_e0.o = *rdi_11
    var_d8 = rdi_11[1]
    sub_140aaaf00(arg1 + 0x30, &arg_10, &var_e0)
    int64_t rax_33 = sx.q(arg_10.d)
    
    if (rax_33.d == 0xffffffff)
    label_140ac75c1:
        void*** rax_38 = j_sub_140a82f30(0x20)
        int64_t* r8_7 = rax_38
        
        if (rax_38 == 0)
            r8_7 = nullptr
        else
            rax_38[1].d = 1
            *(rax_38 + 0xc) = 1
            *rax_38 = &data_142df7bd8
            rax_38[2] = 0
            rax_38[2] = rdi_11[2].q
            rdi_11[2].q = 0
            r8_7[3].d = *(rdi_11 + 0x28)
            *(r8_7 + 0x1c) = *(rdi_11 + 0x2c)
            *(rdi_11 + 0x28) = 0
        
        int32_t rsi_4 = rdi_11[4].d
        int64_t* rdi_13 = r8_7
        int64_t* var_120_1 = rdi_13
        
        if (rdi_13 != 0)
            rdi_13[1].d += 1
            
            if (r8_7 != 0)
                r8_7[1].d -= 1
                
                if (r8_7[1].d == 1)
                    (**r8_7)(r8_7)
                    int32_t rax_44 = *(r8_7 + 0xc)
                    *(r8_7 + 0xc) -= 1
                    
                    if (rax_44 == 1)
                        (*(*r8_7 + 8))(r8_7, 1)
            
            rdi_13 = var_120_1
        
        int32_t var_90
        sub_140a9e7a0(arg1 + 0x30, &var_90)
        int64_t* var_88
        int64_t* r9_6 = var_88
        void* rcx_31 = &r9_6[4]
        *r9_6 = var_e0.o
        *(r9_6 + 0x10) = var_d8
        *rcx_31 = &r8_7[2]
        *(rcx_31 + 8) = rdi_13
        
        if (rdi_13 != 0)
            rdi_13[1].d += 1
            rdi_13 = var_120_1
            r9_6 = var_88
        
        *(rcx_31 + 0x10) = rsi_4
        *(rcx_31 + 0x14) = 1
        r9_6[7].d = 0xffffffff
        int32_t rdx_19 = r9_6[3].d
        int32_t rcx_34 = (r9_6[1].d - rdx_19) ^ rdx_19 u>> 0xd
        int32_t r8_10 = (0x9e3779b9 - rcx_34 - rdx_19) ^ rcx_34 << 8
        int32_t rdx_22 = (rdx_19 - r8_10 - rcx_34) ^ r8_10 u>> 0xd
        int32_t rcx_37 = (rcx_34 - r8_10 - rdx_22) ^ rdx_22 u>> 0xc
        int32_t r8_13 = (r8_10 - rdx_22 - rcx_37) ^ rcx_37 << 0x10
        int32_t rdx_25 = (rdx_22 - r8_13 - rcx_37) ^ r8_13 u>> 5
        int32_t rcx_40 = (rcx_37 - r8_13 - rdx_25) ^ rdx_25 u>> 3
        int32_t r8_16 = (r8_13 - rdx_25 - rcx_40) ^ rcx_40 << 0xa
        void var_a4
        sub_140aa8150(arg1 + 0x30, &var_a4, r8_16 u>> 0xf ^ (rdx_25 - (r8_16 + rcx_40)), r9_6, 
            var_90, nullptr)
        int32_t var_80
        sub_140783a30(r12_1, &var_80)
        int64_t* var_78
        int64_t* r9_7 = var_78
        *r9_7 = &r8_7[2]
        r9_7[1] = rdi_13
        
        if (rdi_13 != 0)
            rdi_13[1].d += 1
            rdi_13 = var_120_1
            r9_7 = var_78
        
        *(r9_7 + 0x10) = var_e0.o
        *(r9_7 + 0x20) = var_d8
        r9_7[6].d = 0xffffffff
        uint32_t rcx_44 = (*r9_7 u>> 4).d
        int32_t rdx_31 = rcx_44 << 8 ^ (0x9e3779b9 - rcx_44)
        int32_t r8_21 = neg.d(rdx_31 + rcx_44) ^ rdx_31 u>> 0xd
        int32_t rcx_47 = (rcx_44 - r8_21 - rdx_31) ^ r8_21 u>> 0xc
        int32_t rdx_34 = (rdx_31 - rcx_47 - r8_21) ^ rcx_47 << 0x10
        int32_t r8_24 = (r8_21 - rcx_47 - rdx_34) ^ rdx_34 u>> 5
        int32_t rcx_50 = (rcx_47 - r8_24 - rdx_34) ^ r8_24 u>> 3
        int32_t rdx_37 = (rdx_34 - rcx_50 - r8_24) ^ rcx_50 << 0xa
        void var_a0
        sub_140aa6f60(r12_1, &var_a0, (r8_24 - rcx_50 - rdx_37) ^ rdx_37 u>> 0xf, r9_7, var_80, 
            nullptr)
        
        if (rdi_13 != 0)
            rdi_13[1].d -= 1
            
            if (rdi_13[1].d == 1)
                (**var_120_1)(var_120_1)
                int32_t rax_82 = *(var_120_1 + 0xc)
                *(var_120_1 + 0xc) -= 1
                
                if (rax_82 == 1)
                    (*(*var_120_1 + 8))(var_120_1, 1)
    else
        int64_t rcx_24 = rax_33 << 6
        
        if (rcx_24 == neg.q(*(arg1 + 0x30)))
            goto label_140ac75c1
        
        int64_t* rsi_2 = rcx_24 + *(arg1 + 0x30) + 0x20
        
        if (rsi_2 == 0)
            goto label_140ac75c1
        
        if (rsi_2[2].d == rdi_11[4].d)
            *(rsi_2 + 0x14) = 1
            int64_t* rsi_3 = *rsi_2
            
            if (rsi_3 != &rdi_11[2])
                int64_t rcx_26 = *rsi_3
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                *rsi_3 = rdi_11[2].q
                rdi_11[2].q = 0
                rsi_3[1].d = *(rdi_11 + 0x28)
                *(rsi_3 + 0xc) = *(rdi_11 + 0x2c)
                *(rdi_11 + 0x28) = 0
    
    var_60:8.d &= not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)

uint64_t result = sub_140ac0a10(arg2)

if (arg1 != -8)
    result = LeaveCriticalSection(arg1 + 8)

if (arg3 == 0)
    return result

return sub_140aa65e0(arg1)
