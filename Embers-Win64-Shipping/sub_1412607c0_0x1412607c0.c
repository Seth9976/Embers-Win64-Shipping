// 函数: sub_1412607c0
// 地址: 0x1412607c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t* r12 = arg6
int32_t* var_b0 = r12
void* var_a0
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x3b0))]), &var_a0, 
    &data_143e8ffb0, 0)
void* r13 = var_a0
void* r14 = nullptr

if (r13 != 0)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    void* var_98
    int64_t* rbx_1 = *(var_98 + 0x10)
    int64_t r14_1 = rbx_1[3]
    
    if (*(r14_1 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        r14_1 = rbx_1[3]
    
    r14 = *(r14_1 + (rdx_1 << 3))

*(arg2 + 0x1b0) = r14
sub_14198aa60(r14)
void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_6[3]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_6[3]

*(arg2 + 0x30) = rax_6
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_6
*(arg2 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = r14
int32_t r9_1 = *(arg3 + 0x15a0) - *(arg3 + 0x1598)
int32_t rax_9 = *(arg3 + 0x15a4)
int32_t rax_10 = rax_9 - *(arg3 + 0x159c)
bool cond:0 = rax_9 == *(arg3 + 0x159c)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rax_10)
int32_t var_100 = r9_1
int32_t var_e0 = temp0
int32_t var_fc = rax_10
int32_t rdx_2

rdx_2 = cond:0 ? 0x20 : 0x1f - temp0

bool cond:2 = rax_10 == 1
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rax_10 - 1)
int32_t var_dc = temp0_1
int32_t r11

if (rax_10 == 1)
    r11 = 0x20
else
    r11 = 0x1f - temp0_1
    cond:2 = 0x1f == temp0_1

uint64_t rflags_2
int32_t temp0_2
temp0_2, rflags_2 = _bit_scan_reverse(r9_1)
int32_t var_d8 = temp0_2
int32_t rcx_12

rcx_12 = cond:2 ? 0x20 : 0x1f - temp0_2

int32_t rcx_14 = rcx_12 << 0x1a s>> 0x1f
uint64_t rflags_3
int32_t temp0_3
temp0_3, rflags_3 = _bit_scan_reverse(r9_1 - 1)
int32_t var_d4 = temp0_3
int32_t r8

if (rcx_14 == 0)
    r8 = 0x20
else
    r8 = 0x1f - temp0_3

r12[2] = 1
int32_t r15_2 = (0x20 - r11) & not.d(rdx_2 << 0x1a s>> 0x1f)
int32_t rdi_3 = (0x20 - r8) & not.d(rcx_14)
int32_t r9_3 = 0
int32_t r10 = 0
int32_t i = 1

if (rdi_3 u<= r15_2)
    r15_2 = rdi_3

int32_t r8_1 = 1 << r15_2.b
*r12 = r8_1
uint64_t r11_2 = zx.q(r8_1 * r8_1)
r12[1] = r8_1

if (r15_2 u>= 1)
    if (r15_2 u>= 2)
        do
            int32_t rax_15 = r8_1 s>> i.b
            char rcx_18 = i.b + 1
            i += 2
            r9_3 += rax_15 * rax_15
            int32_t rax_18 = r8_1 s>> rcx_18
            r10 += rax_18 * rax_18
        while (i u<= r15_2 - 1)
    
    if (i u<= r15_2)
        int32_t r8_2 = r8_1 s>> i.b
        r11_2 = zx.q(r11_2.d + r8_2 * r8_2)
    
    r11_2 = zx.q(r11_2.d + r9_3 + r10)

int64_t* rdi_5 = arg5
int32_t var_78 = 1
int64_t var_88 = 0
char var_60 = 0
rdi_5[3].d = (r11_2 << 2).d
int64_t* rcx_21 = data_143f0f180
int32_t var_50 = 0
int64_t var_80 = 0
int64_t var_58 = 0
int64_t* var_140 = &var_88
int128_t var_74 = data_143dbb1e0
int32_t var_64 = (1 << (data_1439c7a34).b) - 1
int32_t var_148 = 0x208
void var_118
(*(*rcx_21 + 0x498))(rcx_21, &var_118, &data_143f02b98)
sub_1405d1600(rdi_5, &var_118)
sub_1405d1550(&var_118)
int64_t* rcx_24 = data_143f0f180
var_148.b = 0xd
void var_110
(*(*rcx_24 + 0x590))(rcx_24, &var_110, &data_143f02b98, *rdi_5, var_148, var_140)
sub_1405d1600(&rdi_5[1], &var_110)
sub_1405d1550(&var_110)
int64_t* rcx_27 = data_143f0f180
var_140.b = 0xd
void var_108
(*(*rcx_27 + 0x4b8))(rcx_27, &var_108, &data_143f02b98, *rdi_5, 4, var_140)
sub_1405d1600(&rdi_5[2], &var_108)
sub_1405ec8a0(&var_108)
int32_t r14_2 = 0
int32_t var_148_1

do
    void var_d0
    sub_140b58260(&var_d0, u"VarianceMipTree Build", 1)
    int64_t* rcx_31 = data_143f0f180
    int64_t* var_f8
    (*(*rcx_31 + 0x98))(rcx_31, &var_f8, &var_d0)
    void* rax_27 = *arg4
    void* var_c8 = rax_27
    
    if (rax_27 != 0)
        *(rax_27 + 8) += 1
    
    int64_t* var_138_1 = rdi_5
    var_140.d = r14_2
    var_148_1.q = r12
    sub_141297110(r13, arg2, &var_c8, &var_100, var_148_1, var_140)
    char rcx_34 = r14_2.b
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q((*r12 s>> rcx_34) + 7)
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q((r12[1] s>> rcx_34) + 7)
    sub_1419cd1c0(arg2, r13, ((temp5_1 & 7) + temp6_1) s>> 3, ((temp7_1 & 7) + temp8_1) s>> 3, 1)
    int64_t* rax_34 = var_f8
    int64_t r12_1 = *(arg2 + 0x1b0)
    int64_t var_c0 = 0
    
    if (*(r13 + 0x138) u> 0)
        uint32_t rdi_6 = zx.d(*(r13 + 0x136))
        void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_35 = &rcx_38[5]
        
        if (rax_35 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_35 = &rcx_38[5]
        
        *(arg2 + 0x30) = rax_35
        void**** rax_36 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_36 = rcx_38
        *(arg2 + 8) = &rcx_38[1]
        rcx_38[1] = 0
        rcx_38[3].d = rdi_6
        rdi_5 = arg5
        *rcx_38 = &data_142da77d8
        rcx_38[2] = r12_1
        rcx_38[4] = 0
    
    sub_1405d1550(&var_c0, 0)
    int64_t rax_38 = rdi_5[1]
    int64_t* rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_43 = &rdi_9[1]
    
    if (rcx_43 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_43 = &rdi_9[1]
    
    *(arg2 + 0x30) = rcx_43
    *rdi_9 = rax_38
    void*** rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_39 = &rcx_47[6]
    
    if (rax_39 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_39 = &rcx_47[6]
    
    *(arg2 + 0x30) = rax_39
    void**** rax_40 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_40 = rcx_47
    *(arg2 + 8) = &rcx_47[1]
    rcx_47[1] = 0
    *rcx_47 = &data_142da7798
    rcx_47[5] = rax_34
    rcx_47[2].d = 1
    rcx_47[3] = rdi_9
    rcx_47[4].d = 2
    *(rcx_47 + 0x24) = 3
    int64_t* rdi_12 = var_f8
    
    if (rdi_12 != 0)
        rdi_12[1].d -= 1
        
        if (rdi_12[1].d == 1)
            char rax_44
            
            if (rdi_12[2].b == 0 && data_143f0f1d0 == 0)
                rax_44 = sub_1405949a0()
            
            if (rdi_12[2].b != 0 || (data_143f0f1d0 == 0 && rax_44 != 0))
                (**rdi_12)(rdi_12, 1)
            else
                bool z_1
                
                if (0 == *(rdi_12 + 0xc))
                    *(rdi_12 + 0xc) = 1
                    z_1 = true
                else
                    *(rdi_12 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_46 = sub_140a20af0()
                    uint64_t rdx_19 = zx.q(rax_46)
                    void* const rax_47
                    
                    if (rax_46 != 0)
                        rax_47 = *((rdx_19 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_19.d) & 0x3fff) * 0x18
                    else
                        rax_47 = nullptr
                    
                    *(rax_47 + 8) = rdi_12
                    sub_1405a42f0(&data_143f02390, rdx_19.d)
    
    r12 = var_b0
    r14_2 += 1
    rdi_5 = arg5
while (r14_2 u<= r15_2)

void var_a8
sub_140b58260(&var_a8, u"VarianceMipTree Transition", 1)
int64_t* rcx_56 = data_143f0f180
int64_t var_f0
(*(*rcx_56 + 0x98))(rcx_56, &var_f0, &var_a8)
var_148_1.q = rdi_5
sub_1412e4db0(r13, arg2, 2, 3, var_148_1, var_f0)
sub_1405d1550(&var_f0)
int64_t result = sub_1405d1550(arg4)
__security_check_cookie(rax_1 ^ &var_168)
return result
