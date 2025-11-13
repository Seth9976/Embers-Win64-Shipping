// 函数: sub_140bc3c70
// 地址: 0x140bc3c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1aaa8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1aaa8)
    
    if (data_143e1aaa8 == 0xffffffff)
        sub_140bbfb20(&data_143e1aa98)
        atexit(sub_142cc1920)
        _Init_thread_footer(&data_143e1aaa8)

int32_t rcx = data_143e1aaa0
uint64_t r14
r14.b = 0
int64_t arg_20 = 0
char arg_10 = 0
int32_t var_b8
int64_t rsi_1

if (rcx != 0)
    void* rax_14
    int64_t rcx_11
    
    while (true)
        int64_t r10_1 = data_143e1aa98
        int64_t arg_18 = *(r10_1 + (sx.q(rcx - 1) << 3))
        
        if (0 != 0)
            memmove(r10_1 + (sx.q(rcx - 1) << 3), r10_1 + (sx.q(rcx) << 3), 0 << 3)
            rcx = data_143e1aaa0
        
        data_143e1aaa0 = rcx - 1
        sub_1405c53d0(&data_143e1aa98)
        EnterCriticalSection(arg1 + 0xd8)
        int64_t rbx_1 = arg_18
        void* const rcx_8
        
        if (*(arg1 + 0x10) == *(arg1 + 0x3c))
        label_140bc3dc0:
            rcx_8 = nullptr
        else
            int32_t rax_11 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* r8_3 = arg1 + 0x40
            void* rcx_6 = *(r8_3 + 8)
            
            if (rcx_6 != 0)
                r8_3 = rcx_6
            
            int32_t rax_13 = *(r8_3 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_11)) << 2))
            
            if (rax_13 == 0xffffffff)
            label_140bc3dc0_1:
                rcx_8 = nullptr
            else
                int64_t r8_4 = *(arg1 + 8)
                
                while (true)
                    int64_t rdx_5 = sx.q(rax_13) * 5
                    rcx_8 = r8_4 + (rdx_5 << 3)
                    
                    if (*(r8_4 + (rdx_5 << 3)) == rbx_1)
                        break
                    
                    rax_13 = *(rcx_8 + 0x20)
                    
                    if (rax_13 == 0xffffffff)
                        goto label_140bc3dc0_2
                
                if (rax_13 == 0xffffffff)
                label_140bc3dc0_2:
                    rcx_8 = nullptr
        
        rax_14 = rcx_8 + 8
        
        if (rcx_8 == 0)
            rax_14 = nullptr
        
        if (rax_14 != 0)
            rcx_11 = *(rax_14 + 8)
            
            if (rcx_11 != 0)
                break
        else
            int64_t* rax_15 = sub_140b63b70(&arg_18, &var_b8)
            int16_t* const r9_2
            
            if (rax_15[1].d == 0)
                r9_2 = &data_142d40450
            else
                r9_2 = *rax_15
            
            sub_140af98a0("Unknown", 0xe6, %s was listed as a fixed load order but was not found,", 
                r9_2)
            int64_t rcx_10 = var_b8.q
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            sub_140afbb40()
        
        if (arg1 != -0xd8)
            LeaveCriticalSection(arg1 + 0xd8)
        
        rcx = data_143e1aaa0
        
        if (rcx == 0)
            goto label_140bc3e7d
    
    rsi_1 = rcx_11
    arg_20 = rcx_11
    r14.b = *rax_14 == 1
    *(rax_14 + 8) = 0
    arg_10 = r14.b
    
    if (arg1 != -0xd8)
        LeaveCriticalSection(arg1 + 0xd8)
    
    if (rsi_1 != 0)
        goto label_140bc40f2

label_140bc3e7d:
EnterCriticalSection(arg1 + 0xd8)
int32_t var_b4_1 = 1
int32_t rcx_15 = 0
int32_t var_a8_1 = 0xffffffff
var_b8 = 0
int32_t r11_1 = *(arg1 + 0x80)
void* var_b0_1 = arg1 + 0x68
int64_t var_a4_1 = 0
int32_t r8_5 = 0

if (r11_1 != 0)
    void* rax_16 = *(arg1 + 0x78)
    void* r9_3 = arg1 + 0x68
    
    if (rax_16 != 0)
        r9_3 = rax_16
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11_1 - 1)
    int32_t rdx_9 = *r9_3
    
    if (rdx_9 != 0)
    label_140bc3f08:
        int32_t rax_23 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_23)
        int32_t var_b4_2 = rax_23
        int32_t rax_24
        
        if (rax_23 == 0)
            rax_24 = 0x20
        else
            rax_24 = 0x1f - temp0_2
        
        var_a4_1.d = r8_5 - rax_24 + 0x1f
        
        if (r8_5 - rax_24 + 0x1f s> r11_1)
            var_a4_1.d = r11_1
    else
        while (true)
            int64_t rdx_10 = sx.q(rcx_15)
            r8_5 += 0x20
            rcx_15 += 1
            var_a4_1:4.d = r8_5
            var_b8 = rcx_15
            
            if (rdx_10.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r9_3 + (rdx_10 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140bc3f08
        
        var_a4_1.d = r11_1

int32_t rdx_11 = *(arg1 + 0x80)
double zmm2[0x2] = var_a8_1.o
double var_50_1[0x2] = zmm2
int32_t r14_1 = 0xffffffff << (rdx_11.b & 0x1f)
int128_t var_60_1 = var_b8.o
int32_t r8_8 = rdx_11 s>> 5
int32_t r9_5 = rdx_11 & 0xffffffe0
int64_t var_70_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_a8_2 = r14_1
var_a4_1.d = rdx_11
int128_t var_90 = (arg1 + 0x58).o
int128_t var_58
int128_t var_80_1 = var_58

if (rdx_11 != r11_1)
    void* rax_26 = *(arg1 + 0x78)
    void* r10_2 = arg1 + 0x68
    
    if (rax_26 != 0)
        r10_2 = rax_26
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11_1 - 1)
    int32_t rdx_15 = *(r10_2 + (sx.q(r8_8) << 2)) & r14_1
    
    if (rdx_15 != 0)
    label_140bc3fd2:
        int32_t rax_33 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_33)
        int32_t rbx_2
        
        if (rax_33 == 0)
            rbx_2 = 0x20
        else
            rbx_2 = 0x1f - temp0_4
        
        var_a4_1.d = r9_5 - rbx_2 + 0x1f
        
        if (r9_5 - rbx_2 + 0x1f s> r11_1)
            var_a4_1.d = r11_1
    else
        while (true)
            int64_t rcx_20 = sx.q(r8_8)
            r9_5 += 0x20
            r8_8 += 1
            
            if (rcx_20.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_15 = *(r10_2 + (rcx_20 << 2) + 4)
            var_a8_2 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_140bc3fd2
        
        var_a4_1.d = r11_1

int64_t result

while (true)
    result = sx.q(var_80_1:0xc.d)
    int64_t* rbx_3 = var_90.q
    
    if (result.d == (var_a8_2.q u>> 0x20).d && var_80_1.q == arg1 + 0x68 && rbx_3 == arg1 + 0x58)
        rsi_1 = arg_20
        r14 = zx.q(arg_10)
        break
    
    int64_t rbx_5 = *((result << 5) + *rbx_3)
    void* const rcx_25
    
    if (*(arg1 + 0x10) == *(arg1 + 0x3c))
    label_140bc4090:
        rcx_25 = nullptr
    else
        int32_t rax_38 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
        void* r8_9 = arg1 + 0x40
        void* rcx_23 = *(r8_9 + 8)
        
        if (rcx_23 != 0)
            r8_9 = rcx_23
        
        int32_t rax_40 = *(r8_9 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_38)) << 2))
        
        if (rax_40 == 0xffffffff)
        label_140bc4090_1:
            rcx_25 = nullptr
        else
            int64_t r8_10 = *(arg1 + 8)
            
            while (true)
                int64_t rdx_19 = sx.q(rax_40) * 5
                rcx_25 = r8_10 + (rdx_19 << 3)
                
                if (*(r8_10 + (rdx_19 << 3)) == rbx_5)
                    break
                
                rax_40 = *(rcx_25 + 0x20)
                
                if (rax_40 == 0xffffffff)
                    goto label_140bc4090_2
            
            if (rax_40 == 0xffffffff)
            label_140bc4090_2:
                rcx_25 = nullptr
    
    result = rcx_25 + 8
    
    if (rcx_25 == 0)
        result = 0
    
    if (result != 0)
        int64_t rcx_26 = *(result + 8)
        
        if (rcx_26 != 0)
            bool cond:6_1 = *result == 1
            rsi_1 = rcx_26
            *(result + 8) = 0
            r14.b = cond:6_1
            break
    
    var_80_1:8.d &= not.d(var_90:0xc.d)
    sub_14059bdd0(&var_90:8)

if (arg1 != -0xd8)
    LeaveCriticalSection(arg1 + 0xd8)

int64_t rax_46
int64_t* i_4
void* r15_1

if (rsi_1 != 0)
label_140bc40f2:
    int64_t* i_2
    int64_t rdx_20
    i_2, rdx_20 = rsi_1()
    rdx_20.b = 1
    sub_140d315a0(i_2)
    
    if (r14.b == 0)
        result.b = 1
    else
        int64_t* i = i_2
        
        if (i_2 == 0)
        label_140bc4147:
            r15_1 = arg1 + 0xb8
            int64_t rdi_3 = sx.q(*(r15_1 + 8))
            int32_t rax_44 = (rdi_3 + 1).d
            *(r15_1 + 8) = rax_44
            
            if (rax_44 s> *(r15_1 + 0xc))
                sub_1405a4d70(r15_1)
            
            *(*r15_1 + (rdi_3 << 3)) = i_2
            
            if (i_2[0x23] != 0)
                goto label_140bc433a
            
            rax_46 = *i_2
            i_4 = i_2
        label_140bc432b:
            (*(rax_46 + 0x390))(i_4)
        label_140bc433a:
            *(r15_1 + 8) -= 1
            sub_1405c53d0(r15_1)
            result.b = 1
        else
            int64_t* r8_11 = *(arg1 + 0xb8)
            
            while (true)
                void* rdx_21 = &r8_11[sx.q(*(arg1 + 0xc0))]
                int64_t* rax_43 = r8_11
                
                if (r8_11 != rdx_21)
                    while (*rax_43 != i)
                        rax_43 = &rax_43[1]
                        
                        if (rax_43 == rdx_21)
                            goto label_140bc413e
                    
                    int64_t rdi_4 = sx.q(*(arg1 + 0xd0))
                    int32_t rax_47 = (rdi_4 + 1).d
                    *(arg1 + 0xd0) = rax_47
                    
                    if (rax_47 s> *(arg1 + 0xd4))
                        sub_1405a4d70(arg1 + 0xc8)
                    
                    *(*(arg1 + 0xc8) + (rdi_4 << 3)) = i_2
                    result.b = 1
                    break
                
            label_140bc413e:
                i = i[8]
                
                if (i == 0)
                    goto label_140bc4147
else if (*(arg1 + 0xd0) == 0)
    result.b = 0
else
    int64_t** rsi_4 = *(arg1 + 0xc8)
    int64_t rdi_5 = sx.q(*(arg1 + 0xd0))
    int64_t** r9_8 = rsi_4
    int64_t r8_12 = rdi_5
    arg_10.q = rdi_5
    void* rbx_7 = &rsi_4[rdi_5]
    
    if (rsi_4 != rbx_7)
    label_140bc4200:
        int64_t* i_3 = *r9_8
        int64_t* i_1 = i_3
        
        if (i_3 == 0)
            goto label_140bc435c
        
        int64_t* r10_3 = *(arg1 + 0xb8)
        
        do
            void* rdx_24 = &r10_3[sx.q(*(arg1 + 0xc0))]
            int64_t* rax_48 = r10_3
            
            if (r10_3 != rdx_24)
                while (*rax_48 != i_1)
                    rax_48 = &rax_48[1]
                    
                    if (rax_48 == rdx_24)
                        goto label_140bc4242
                
                r9_8 = &r9_8[1]
                
                if (r9_8 != rbx_7)
                    goto label_140bc4200
                
                goto label_140bc435c
            
        label_140bc4242:
            i_1 = i_1[8]
        while (i_1 != 0)
        
        if (i_3 == 0)
            goto label_140bc435c
        
        if (rdi_5.d != 0)
            int32_t r12_2 = 0
            int32_t rdi_6 = 0
            int64_t rbx_8 = 0
            void* r13_1
            r13_1.b = *rsi_4 != i_3
            
            do
                int64_t r9_9 = sx.q(rdi_6)
                rbx_8 += 1
                rdi_6 += 1
                
                if (rbx_8 s< r8_12)
                    int64_t rcx_32 = *(arg1 + 0xc8) + (rbx_8 << 3)
                    
                    do
                        int32_t rax_50
                        rax_50.b = *rcx_32 != i_3
                        
                        if (zx.d(r13_1.b) != rax_50)
                            break
                        
                        rdi_6 += 1
                        rbx_8 += 1
                        rcx_32 += 8
                    while (rbx_8 s< r8_12)
                
                int32_t rsi_6 = rdi_6 - r9_9.d
                
                if (r13_1.b != 0)
                    if (r12_2 != r9_9.d)
                        int64_t rcx_33 = *(arg1 + 0xc8)
                        memmove(rcx_33 + (sx.q(r12_2) << 3), rcx_33 + (r9_9 << 3), rsi_6 << 3)
                        r8_12 = arg_10.q
                    
                    r12_2 += rsi_6
                
                r13_1.b ^= 1
            while (rbx_8 s< r8_12)
            
            *(arg1 + 0xd0) = r12_2
        
        r15_1 = arg1 + 0xb8
        int64_t rbx_9 = sx.q(*(r15_1 + 8))
        int32_t rax_52 = (rbx_9 + 1).d
        *(r15_1 + 8) = rax_52
        
        if (rax_52 s> *(r15_1 + 0xc))
            sub_1405a4d70(r15_1)
        
        *(*r15_1 + (rbx_9 << 3)) = i_3
        
        if (i_3[0x23] != 0)
            goto label_140bc433a
        
        rax_46 = *i_3
        i_4 = i_3
        goto label_140bc432b
    
label_140bc435c:
    sub_140b73230(0x3a83126f)
    result.b = 1
return result
