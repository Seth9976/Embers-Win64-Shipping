// 函数: sub_140a40760
// 地址: 0x140a40760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memcpy(arg1 + 0x9820, &data_143db1900, 0x1c28)
int32_t* rdx = arg1 + 0x9410
int64_t i_2 = 4
char* rax = &data_143db3540
int64_t i

do
    rdx = &rdx[0x20]
    int128_t zmm0_1 = *rax
    rax = &rax[0x80]
    *(rdx - 0x80) = zmm0_1
    *(rdx - 0x70) = *(rax - 0x70)
    *(rdx - 0x60) = *(rax - 0x60)
    *(rdx - 0x50) = *(rax - 0x50)
    *(rdx - 0x40) = *(rax - 0x40)
    *(rdx - 0x30) = *(rax - 0x30)
    *(rdx - 0x20) = *(rax - 0x20)
    *(rdx - 0x10) = *(rax - 0x10)
    i = i_2
    i_2 -= 1
while (i != 1)
*rdx = *rax
memset(arg1 + 0xb460, 0, 0x8000)
*(arg1 + 0xb44c) = 0
*(arg1 + 0xb448) = data_143db3750
int64_t* i_1 = data_143db3748

for (void* r15_2 = &i_1[sx.q(data_143db3750) * 2]; i_1 != r15_2; i_1 = &i_1[2])
    wchar16* _Source
    
    if (i_1[1].d == 0)
        _Source = &data_142d40450
    else
        _Source = *i_1
    
    int64_t rcx_2 = -1
    
    do
        rcx_2 += 1
    while (*(arg1 + 0xb460 + (rcx_2 << 1)) != 0)
    
    void* _Destination = arg1 + 0xb460 + (sx.q(rcx_2.d) << 1)
    
    if (0x4000 - rcx_2.d s> 0)
        int64_t rbx_1 = sx.q(0x4000 - rcx_2.d)
        wcsncpy(_Destination, _Source, rbx_1 - 1)
        *(_Destination + (rbx_1 << 1) - 2) = 0
    
    int64_t rcx_4 = -1
    
    do
        rcx_4 += 1
    while (*(arg1 + 0xb460 + (rcx_4 << 1)) != 0)
    
    void* _Destination_1 = arg1 + 0xb460 + (sx.q(rcx_4.d) << 1)
    
    if (0x4000 - rcx_4.d s> 0)
        int64_t rbx_2 = sx.q(0x4000 - rcx_4.d)
        wcsncpy(_Destination_1, data_14399e8b0, rbx_2 - 1)
        *(_Destination_1 + (rbx_2 << 1) - 2) = 0

int64_t rax_7 = -1
bool cond:0_1

do
    cond:0_1 = *(arg1 + 0xb460 + (rax_7 << 1) + 2) != 0
    rax_7 += 1
while (cond:0_1)
int32_t rcx_6 = (rax_7 + 1).d
int32_t var_94 = 1
*(arg1 + 0xb454) = rcx_6
void* r9 = &data_14399e8e0
int32_t rcx_7 = 0
void* var_90 = &data_14399e8e0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
void* rdi = arg1 + 0xb460 + (sx.q(rcx_6) << 1)
int64_t var_84 = 0
int32_t r8_2 = 0
*(arg1 + 0xb450) = data_14399e8d8 - data_14399e904
int32_t r10 = (data_14399e8f8).d

if (r10 != 0)
    void* rax_11 = data_14399e8f0
    
    if (rax_11 != 0)
        r9 = rax_11
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_140a409c4:
        int32_t rax_18 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_18)
        int32_t var_94_1 = rax_18
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_1
        
        int32_t rax_20 = r8_2 - rax_19 + 0x1f
        
        if (rax_20 s> r10)
            rax_20 = r10
        
        var_84.d = rax_20
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_7)
            r8_2 += 0x20
            rcx_7 += 1
            var_84:4.d = r8_2
            var_98 = rcx_7
            
            if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_84.d = r10
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140a409c4

int128_t var_38 = 0xffffffff
var_84.d = r10
int128_t var_48 = var_98.o
int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = (&data_14399e8d0).o
int96_t var_68 = var_48.12
int64_t var_58 = temp0_2

while (true)
    int32_t result_1
    int64_t result_2 = sx.q(result_1)
    int64_t* rdx_7 = var_78.q
    
    if (result_2.d == ((0xffffffff << (r10.b & 0x1f)).q u>> 0x20).d && var_68.q == &data_14399e8e0
            && rdx_7 == &data_14399e8d0)
        int64_t rax_37 = -1
        
        do
            rax_37 += 1
        while (*(rdi + (rax_37 << 1)) != 0)
        
        void* r9_1 = &data_14399e930
        int32_t var_94_2 = 1
        int32_t r8_8 = 0
        void* var_90_1 = &data_14399e930
        int32_t var_88_3 = 0xffffffff
        int64_t var_84_1 = 0
        int32_t r13_4 = ((rdi + (sx.q(rax_37.d) << 1) + 2 - (arg1 + 0xb460)) s>> 1).d
        *(arg1 + 0xb45c) = r13_4
        *(arg1 + 0xb458) = data_14399e928 - data_14399e954
        int32_t rcx_22 = 0
        int32_t r10_1 = (data_14399e948).d
        int32_t var_98_1 = 0
        
        if (r10_1 != 0)
            void* rax_41 = data_14399e940
            
            if (rax_41 != 0)
                r9_1 = rax_41
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(r10_1 - 1)
            int32_t rdx_12 = *r9_1
            
            if (rdx_12 != 0)
            label_140a40c94:
                int32_t rax_48 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_48)
                int32_t var_94_3 = rax_48
                int32_t r14_1
                
                if (rax_48 == 0)
                    r14_1 = 0x20
                else
                    r14_1 = 0x1f - temp0_3
                
                int32_t rax_49 = r8_8 - r14_1 + 0x1f
                
                if (rax_49 s> r10_1)
                    rax_49 = r10_1
                
                var_84_1.d = rax_49
            else
                while (true)
                    int64_t rdx_13 = sx.q(rcx_22)
                    r8_8 += 0x20
                    rcx_22 += 1
                    var_84_1:4.d = r8_8
                    var_98_1 = rcx_22
                    
                    if (rdx_13.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        var_84_1.d = r10_1
                        break
                    
                    rdx_12 = *(r9_1 + (rdx_13 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_140a40c94
        
        int128_t var_38_1 = 0xffffffff
        int128_t var_48_1 = var_98_1.o
        var_84_1.d = r10_1
        int64_t temp0_4 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_78 = (&data_14399e920).o
        int96_t var_68_1 = var_48_1.12
        int64_t var_58_1 = temp0_4
        
        while (true)
            int64_t result = sx.q(result_1)
            int64_t* rdx_14 = var_78.q
            
            if (result.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d
                    && var_68_1.q == &data_14399e930 && rdx_14 == &data_14399e920)
                return result
            
            int64_t rcx_26 = result * 5
            int64_t rax_50 = *rdx_14
            int64_t* r14_2 = rax_50 + (rcx_26 << 3)
            wchar16* _Source_3
            
            if (*(rax_50 + (rcx_26 << 3) + 8) == 0)
                _Source_3 = &data_142d40450
            else
                _Source_3 = *r14_2
            
            int64_t rcx_27 = -1
            
            do
                rcx_27 += 1
            while (*(rdi + (sx.q(rax_37.d) << 1) + 2 + (rcx_27 << 1)) != 0)
            
            void* _Destination_8 = rdi + (sx.q(rax_37.d) << 1) + 2 + (sx.q(rcx_27.d) << 1)
            int32_t rax_53 = 0x4000 - r13_4 - rcx_27.d
            
            if (rax_53 s> 0)
                int64_t rbx_8 = sx.q(rax_53)
                wcsncpy(_Destination_8, _Source_3, rbx_8 - 1)
                *(_Destination_8 + (rbx_8 << 1) - 2) = 0
            
            int64_t rcx_29 = -1
            
            do
                rcx_29 += 1
            while (*(rdi + (sx.q(rax_37.d) << 1) + 2 + (rcx_29 << 1)) != 0)
            
            void* _Destination_9 = rdi + (sx.q(rax_37.d) << 1) + 2 + (sx.q(rcx_29.d) << 1)
            int32_t rax_56 = 0x4000 - r13_4 - rcx_29.d
            
            if (rax_56 s> 0)
                int64_t rbx_9 = sx.q(rax_56)
                wcsncpy(_Destination_9, data_14399e8b8, rbx_9 - 1)
                *(_Destination_9 + (rbx_9 << 1) - 2) = 0
            
            wchar16* _Source_4
            
            if (r14_2[3].d == 0)
                _Source_4 = &data_142d40450
            else
                _Source_4 = r14_2[2]
            
            int64_t rcx_31 = -1
            
            do
                rcx_31 += 1
            while (*(rdi + (sx.q(rax_37.d) << 1) + 2 + (rcx_31 << 1)) != 0)
            
            void* _Destination_6 = rdi + (sx.q(rax_37.d) << 1) + 2 + (sx.q(rcx_31.d) << 1)
            int32_t rax_59 = 0x4000 - r13_4 - rcx_31.d
            
            if (rax_59 s> 0)
                int64_t rbx_10 = sx.q(rax_59)
                wcsncpy(_Destination_6, _Source_4, rbx_10 - 1)
                *(_Destination_6 + (rbx_10 << 1) - 2) = 0
            
            int64_t rcx_33 = -1
            
            do
                rcx_33 += 1
            while (*(rdi + (sx.q(rax_37.d) << 1) + 2 + (rcx_33 << 1)) != 0)
            
            int32_t rsi_2 = 0x4000 - r13_4 - rcx_33.d
            void* _Destination_7 = rdi + (sx.q(rax_37.d) << 1) + 2 + (sx.q(rcx_33.d) << 1)
            
            if (rsi_2 s> 0)
                int64_t rbx_11 = sx.q(rsi_2)
                wcsncpy(_Destination_7, data_14399e8b0, rbx_11 - 1)
                *(_Destination_7 + (rbx_11 << 1) - 2) = 0
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    int64_t rcx_11 = result_2 * 5
    int64_t rax_21 = *rdx_7
    int64_t* r15_3 = rax_21 + (rcx_11 << 3)
    wchar16* _Source_1
    
    if (*(rax_21 + (rcx_11 << 3) + 8) == 0)
        _Source_1 = &data_142d40450
    else
        _Source_1 = *r15_3
    
    int64_t rcx_12 = -1
    
    do
        rcx_12 += 1
    while (*(rdi + (rcx_12 << 1)) != 0)
    
    void* _Destination_2 = rdi + (sx.q(rcx_12.d) << 1)
    int32_t rax_27 = 0x4000 - ((rdi - (arg1 + 0xb460)) s>> 1).d - rcx_12.d
    
    if (rax_27 s> 0)
        int64_t rbx_3 = sx.q(rax_27)
        wcsncpy(_Destination_2, _Source_1, rbx_3 - 1)
        *(_Destination_2 + (rbx_3 << 1) - 2) = 0
    
    int64_t rcx_14 = -1
    
    do
        rcx_14 += 1
    while (*(rdi + (rcx_14 << 1)) != 0)
    
    void* _Destination_3 = rdi + (sx.q(rcx_14.d) << 1)
    int32_t rax_30 = 0x4000 - ((rdi - (arg1 + 0xb460)) s>> 1).d - rcx_14.d
    
    if (rax_30 s> 0)
        int64_t rbx_4 = sx.q(rax_30)
        wcsncpy(_Destination_3, data_14399e8b8, rbx_4 - 1)
        *(_Destination_3 + (rbx_4 << 1) - 2) = 0
    
    wchar16* _Source_2
    
    if (r15_3[3].d == 0)
        _Source_2 = &data_142d40450
    else
        _Source_2 = r15_3[2]
    
    int64_t rcx_16 = -1
    
    do
        rcx_16 += 1
    while (*(rdi + (rcx_16 << 1)) != 0)
    
    void* _Destination_4 = rdi + (sx.q(rcx_16.d) << 1)
    int32_t rax_33 = 0x4000 - ((rdi - (arg1 + 0xb460)) s>> 1).d - rcx_16.d
    
    if (rax_33 s> 0)
        int64_t rbx_5 = sx.q(rax_33)
        wcsncpy(_Destination_4, _Source_2, rbx_5 - 1)
        *(_Destination_4 + (rbx_5 << 1) - 2) = 0
    
    int64_t rcx_18 = -1
    
    do
        rcx_18 += 1
    while (*(rdi + (rcx_18 << 1)) != 0)
    
    int32_t r12_2 = 0x4000 - ((rdi - (arg1 + 0xb460)) s>> 1).d - rcx_18.d
    void* _Destination_5 = rdi + (sx.q(rcx_18.d) << 1)
    
    if (r12_2 s> 0)
        int64_t rbx_6 = sx.q(r12_2)
        wcsncpy(_Destination_5, data_14399e8b0, rbx_6 - 1)
        *(_Destination_5 + (rbx_6 << 1) - 2) = 0
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
