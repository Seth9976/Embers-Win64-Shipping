// 函数: sub_140afbb70
// 地址: 0x140afbb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[1].d
int32_t r14 = 0
int32_t rax = r8 - 1

if (r8 == 0)
    rax = 0

int16_t* i

if (rax s<= 0)
    i = nullptr
else if (r8 == 0)
    i = &data_142d40450
else
    i = *arg2

int16_t* i_3 = i
int64_t* r15 = nullptr
int64_t r12
r12.b = 0
int32_t var_e8
void* var_e0
int32_t var_d8

while (i != 0)
    while (true)
        int16_t rax_1 = *i
        
        if (rax_1 != 0xd && rax_1 != 0xa)
            break
        
        i = &i[1]
        i_3 = i
    
    int16_t* wcs1_1 = nullptr
    int32_t var_80_1 = 0
    int32_t arg_8 = 0
    sub_140b1e510(&i_3, &wcs1_1, &arg_8, 0)
    i = i_3
    
    if (i == 0 || *i == 0)
        r12.b = 1
    
    int16_t* rcx_7
    int16_t rdx_5
    int16_t* wcs1
    
    if (var_80_1 == 0)
        rdx_5 = 0
        wcs1 = &data_142d40450
    else
        wcs1 = wcs1_1
        
        if (*wcs1 != 0)
            do
                int64_t rax_2 = -1
                
                do
                    rax_2 += 1
                while (wcs1[rax_2] != 0)
                
                if (iswspace(wcs1[sx.q(rax_2.d) - 1]) == 0)
                    break
                
                int64_t rax_5 = -1
                
                do
                    rax_5 += 1
                while (wcs1[rax_5] != 0)
                
                wcs1[sx.q(rax_5.d) - 1] = 0
            while (*wcs1 != 0)
            
            i = i_3
        
        rdx_5 = *wcs1
        
        if (rdx_5 != 0x5b)
            goto label_140afbd5b
        
        int64_t rax_7 = -1
        
        do
            rax_7 += 1
        while (wcs1[rax_7] != 0)
        
        if (wcs1[sx.q(rax_7.d) - 1] == 0x5d)
            int64_t rax_9 = -1
            
            do
                rax_9 += 1
            while (wcs1[1 + rax_9] != 0)
            
            int32_t rdx_1 = 0
            int16_t* var_a8 = nullptr
            int32_t rcx_2 = 0
            int32_t var_a0_1 = 0
            int32_t var_9c_1 = 0
            wcs1[sx.q(rax_9.d)] = 0
            
            if (wcs1 != -2 && wcs1[1] != 0)
                int64_t rdi_1 = -1
                
                do
                    rdi_1 += 1
                while (wcs1[1 + rdi_1] != 0)
                
                if (rdi_1.d + 1 s> 0)
                    sub_1405947f0(&var_a8, rdi_1.d + 1)
                    rcx_2 = var_9c_1
                    rdx_1 = var_a0_1
                
                int32_t rax_11 = rdx_1 + rdi_1.d + 1
                int32_t var_a0_2 = rax_11
                
                if (rax_11 s> rcx_2)
                    sub_140594770(&var_a8)
                
                UnDecorator::getReferenceType(var_a8, &wcs1[1], (rdi_1.d + 1) * 2)
            
            int64_t* rax_12 = sub_140af00b0(arg1, &var_a8)
            rcx_7 = var_a8
            r15 = rax_12
            goto label_140afc0de
    
label_140afbd5b:
    
    if (r15 != 0 && rdx_5 != 0 && rdx_5 != 0x3b)
        wchar16* rax_13 = wcsstr(wcs1, &data_142e1462c)
        
        if (rax_13 == 0)
            i = i_3
        else
            *rax_13 = 0
            void* rdi_4 = &rax_13[1]
            wint_t _C = *wcs1
            
            while (_C != 0)
                if (iswspace(_C) == 0)
                    while (*wcs1 != 0)
                        int64_t rax_15 = -1
                        
                        do
                            rax_15 += 1
                        while (wcs1[rax_15] != 0)
                        
                        if (iswspace(wcs1[sx.q(rax_15.d) - 1]) == 0)
                            break
                        
                        int64_t rax_18 = -1
                        
                        do
                            rax_18 += 1
                        while (wcs1[rax_18] != 0)
                        
                        wcs1[sx.q(rax_18.d) - 1] = 0
                    
                    break
                
                _C = wcs1[1]
                wcs1 = &wcs1[1]
            
            wint_t _C_1 = *rdi_4
            
            while (_C_1 != 0)
                if (iswspace(_C_1) == 0)
                    while (*rdi_4 != 0)
                        int64_t rax_21 = -1
                        
                        do
                            rax_21 += 1
                        while (*(rdi_4 + (rax_21 << 1)) != 0)
                        
                        if (iswspace(*(rdi_4 + (sx.q(rax_21.d) << 1) - 2)) == 0)
                            break
                        
                        int64_t rax_24 = -1
                        
                        do
                            rax_24 += 1
                        while (*(rdi_4 + (rax_24 << 1)) != 0)
                        
                        *(rdi_4 + (sx.q(rax_24.d) << 1) - 2) = 0
                    
                    break
                
                _C_1 = *(rdi_4 + 2)
                rdi_4 += 2
            
            int16_t rax_26 = *rdi_4
            int32_t var_d0
            
            if (rax_26 != 0x22)
                var_e8.q = 0
                int32_t rdx_14 = 0
                var_e0.d = 0
                int32_t rcx_25 = 0
                var_e0:4.d = 0
                
                if (rax_26 != 0)
                    int64_t rsi_2 = -1
                    
                    do
                        rsi_2 += 1
                    while (*(rdi_4 + (rsi_2 << 1)) != 0)
                    
                    if (rsi_2.d + 1 s> 0)
                        sub_1405947f0(&var_e8, rsi_2.d + 1)
                        rcx_25 = var_e0:4.d
                        rdx_14 = var_e0.d
                    
                    int32_t rax_29 = rdx_14 + rsi_2.d + 1
                    var_e0.d = rax_29
                    
                    if (rax_29 s> rcx_25)
                        sub_140594770(&var_e8)
                    
                    UnDecorator::getReferenceType(var_e8.q, rdi_4, (rsi_2.d + 1) * 2)
                    rdx_14 = var_e0.d
                
                var_d8.q = 0
                int16_t* const string_1 = &data_142d40450
                var_d0.q = 0
                
                if (rdx_14 != 0)
                    string_1 = var_e8.q
                
                wchar16* j_5 = wcschr(string_1, 0x25)
                wchar16* j_3 = j_5
                
                if (j_5 != 0)
                    wchar16* j
                    
                    do
                        int64_t* rax_30 = sub_140af9950(j_3)
                        
                        if (rax_30 != 0)
                            sub_140aef750(&var_e8, &var_d8)
                            break
                        
                        j = wcschr(&j_3[1], (rax_30 + 0x25).w)
                        j_3 = j
                    while (j != 0)
                
                void arg_20
                sub_140b58260(&arg_20, wcs1, 1)
                sub_140ae49f0(r15, &arg_20, &var_e8)
                int64_t rcx_34 = var_d8.q
                
                if (rcx_34 != 0)
                    sub_140a74f90(rcx_34)
                
                rcx_7 = var_e8.q
            else
                int16_t* var_98 = nullptr
                int32_t var_90_1 = 0
                j_sub_140b08930(rdi_4, &var_98, nullptr)
                int16_t* const rsi_1 = &data_142d40450
                int32_t rdx_7 = 0
                var_e8.q = 0
                
                if (var_90_1 != 0)
                    rsi_1 = var_98
                
                int32_t rcx_14 = 0
                var_e0.d = 0
                var_e0:4.d = 0
                
                if (rsi_1 != 0 && *rsi_1 != 0)
                    int64_t rdi_5 = -1
                    
                    do
                        rdi_5 += 1
                    while (rsi_1[rdi_5] != 0)
                    
                    if (rdi_5.d + 1 s> 0)
                        sub_1405947f0(&var_e8, rdi_5.d + 1)
                        rcx_14 = var_e0:4.d
                        rdx_7 = var_e0.d
                    
                    int32_t rax_27 = rdx_7 + rdi_5.d + 1
                    var_e0.d = rax_27
                    
                    if (rax_27 s> rcx_14)
                        sub_140594770(&var_e8)
                    
                    UnDecorator::getReferenceType(var_e8.q, rsi_1, (rdi_5.d + 1) * 2)
                    rdx_7 = var_e0.d
                
                var_d8.q = 0
                int16_t* const string = &data_142d40450
                var_d0.q = 0
                
                if (rdx_7 != 0)
                    string = var_e8.q
                
                wchar16* j_4 = wcschr(string, 0x25)
                wchar16* j_2 = j_4
                
                if (j_4 != 0)
                    wchar16* j_1
                    
                    do
                        int64_t* rax_28 = sub_140af9950(j_2)
                        
                        if (rax_28 != 0)
                            sub_140aef750(&var_e8, &var_d8)
                            break
                        
                        j_1 = wcschr(&j_2[1], (rax_28 + 0x25).w)
                        j_2 = j_1
                    while (j_1 != 0)
                
                void arg_18
                sub_140b58260(&arg_18, wcs1, 1)
                sub_140ae49f0(r15, &arg_18, &var_e8)
                int64_t rcx_23 = var_d8.q
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                int64_t rcx_24 = var_e8.q
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                rcx_7 = var_98
        label_140afc0de:
            
            if (rcx_7 == 0)
                i = i_3
            else
                sub_140a74f90(rcx_7)
                i = i_3
    
    int16_t* wcs1_2 = wcs1_1
    
    if (wcs1_2 != 0)
        sub_140a74f90(wcs1_2)
        i = i_3
    
    if (r12.b != 0)
        break

sub_140b019a0(arg1)
sub_140aed200(arg1, arg1[1].d - *(arg1 + 0x34), 1)
int32_t r10 = arg1[5].d
void* r8_11 = &arg1[2]
var_e8 = 0
int32_t rcx_38 = 0
int32_t var_e4 = 1
var_e0 = r8_11
var_d8 = 0xffffffff
int32_t var_d4 = 0
int32_t var_d0_1 = 0

if (r10 != 0)
    void* rax_31 = *(r8_11 + 0x10)
    
    if (rax_31 != 0)
        r8_11 = rax_31
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_25 = *r8_11
    int32_t var_d4_2
    
    if (rdx_25 != 0)
    label_140afc19d:
        int32_t rax_38 = neg.d(rdx_25) & rdx_25
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_38)
        int32_t var_e4_1 = rax_38
        int32_t rax_39
        
        if (rax_38 == 0)
            rax_39 = 0x20
        else
            rax_39 = 0x1f - temp0_2
        
        int32_t var_d4_1 = rcx_38 - rax_39 + 0x1f
        
        if (rcx_38 - rax_39 + 0x1f s> r10)
            var_d4_2 = r10
    else
        while (true)
            int64_t rdx_26 = sx.q(r14)
            rcx_38 += 0x20
            r14 += 1
            var_d0_1 = rcx_38
            var_e8 = r14
            
            if (rdx_26.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_25 = *(r8_11 + (rdx_26 << 2) + 4)
            var_d8 = 0xffffffff
            
            if (rdx_25 != 0)
                goto label_140afc19d
        
        var_d4_2 = r10

double zmm4[0x2] = var_d8.o
int64_t* var_50 = arg1
int128_t zmm0 = var_e8.o
double var_60[0x2] = zmm4
int16_t var_b0 = 0
void* result = zmm0.q
var_d8.o = zmm0
var_e8.o = arg1.o
double rcx_40 = zmm4[0]
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
int128_t var_c8 = zmm0

if ((rcx_40 u>> 0x20).d s< *(result + 0x18))
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        void* rbx_3 = sx.q(i_1) * 0xb8 + *var_e8.q
        sub_140b018c0(rbx_3 + 0x10)
        sub_140a6d3f0(rbx_3 + 0x10, *(rbx_3 + 0x18) - *(rbx_3 + 0x44), 1)
        var_d0_1 &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        result = var_d8.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))
    
    if (var_b0.b != 0 && var_b0:1.b != 0)
        return sub_140aed200(arg1, arg1[1].d - *(arg1 + 0x34), 1)

return result
