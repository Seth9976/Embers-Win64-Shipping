// 函数: sub_1413d2b10
// 地址: 0x1413d2b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
__builtin_memset(arg1, 0, 0x1c)
__builtin_memset(arg1 + 0x2c, 0, 0x11)
void* rax

if (arg3 == 0)
    rax = data_143f10dc8
else
    rax = *(arg3 + 0x78)

int64_t* rax_2 = *(rax + 0x10)
int64_t* var_b8 = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1

void* var_58
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[3]), &var_58, &data_143ec8a70, 0)
void* rcx_2 = var_58
void* r15 = nullptr

if (rcx_2 != 0)
    int64_t rdx_1 = sx.q(*(rcx_2 + 0x10c))
    void* var_50
    int64_t* rbx_1 = *(var_50 + 0x10)
    int64_t rdi_1 = rdx_1 << 3
    int64_t r15_1 = rbx_1[3]
    
    if (*(rdi_1 + r15_1) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        r15_1 = rbx_1[3]
    
    r15 = *(rdi_1 + r15_1)

*(arg2 + 0x1b0) = r15
sub_14198aa60(r15)
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_7[3]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_7[3]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
int32_t temp1 = *(arg2 + 0x14)
*(arg2 + 0x14) += 1
*rax_6 = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
int64_t* rax_8 = var_b8
rcx_7[2] = r15
int64_t r8 = *rax_8
int32_t var_68
(*(r8 + 0x30))(rax_8, &var_68, r8)
int32_t var_64
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(var_64)
int32_t arg_8 = temp0
int32_t rcx_12

if (temp1 == 0xffffffff)
    rcx_12 = 0x20
else
    rcx_12 = 0x1f - temp0

int32_t rcx_14 = rcx_12 << 0x1a s>> 0x1f
bool cond:2 = rcx_14 == 0
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(var_64 - 1)
int32_t arg_10 = temp0_1
int32_t r9

if (rcx_14 == 0)
    r9 = 0x20
else
    r9 = 0x1f - temp0_1
    cond:2 = 0x1f == temp0_1

int32_t r10 = var_68
uint64_t rflags_2
int32_t temp0_2
temp0_2, rflags_2 = _bit_scan_reverse(r10)
int32_t arg_18 = temp0_2
int32_t rdx_5

rdx_5 = cond:2 ? 0x20 : 0x1f - temp0_2

int32_t rdx_7 = rdx_5 << 0x1a s>> 0x1f
uint64_t rflags_3
int32_t temp0_3
temp0_3, rflags_3 = _bit_scan_reverse(r10 - 1)
int32_t arg_20 = temp0_3
int32_t r8_1

if (rdx_7 == 0)
    r8_1 = 0x20
else
    r8_1 = 0x1f - temp0_3

arg1[5].d = 1
void* rax_13 = &arg1[4]
int32_t r13_1 = (0x20 - r9) & not.d(rcx_14)
int32_t rbx_3 = (0x20 - r8_1) & not.d(rdx_7)
int32_t i = 1
int32_t r11 = 0
int32_t r15_2 = 0

if (rbx_3 u<= r13_1)
    r13_1 = rbx_3

int32_t r10_2 = 1 << r13_1.b
*rax_13 = r10_2
*(rax_13 + 4) = r10_2
int32_t r9_1 = *(arg1 + 0x24)
int32_t rbx_5 = r9_1 * r10_2

if (r13_1 u>= 1)
    if (r13_1 u>= 2)
        do
            char rcx_17 = i.b
            char rcx_18 = i.b + 1
            i += 2
            r11 += (r9_1 s>> rcx_17) * (r10_2 s>> rcx_17)
            r15_2 += (r9_1 s>> rcx_18) * (r10_2 s>> rcx_18)
        while (i u<= r13_1 - 1)
        
        rax_13 = &arg1[4]
        r12 = 0
    
    if (i u<= r13_1)
        char rcx_19 = i.b
        rbx_5 += (r9_1 s>> rcx_19) * (*rax_13 s>> rcx_19)
    
    rbx_5 += r11 + r15_2

sub_1407b4d10(arg1, 4, rbx_5, 0xd, 0x208, 0, 0)
int32_t var_d8_2

do
    void var_90
    sub_140b58260(&var_90, u"RectLightMipTree Build", 1)
    int64_t* rcx_22 = data_143f0f180
    int64_t* var_a8
    (*(*rcx_22 + 0x98))(rcx_22, &var_a8, &var_90)
    int64_t* rax_22 = var_b8
    int64_t* var_88 = rax_22
    
    if (rax_22 != 0)
        rax_22[1].d += 1
    
    int64_t* var_d0_1 = arg1
    sub_1413f7130(rcx_2, arg2, &var_88, &arg1[4], r12)
    char rcx_24 = r12.b
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q((arg1[4].d s>> rcx_24) + 0xf)
    var_d8_2 = 1
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q((*(arg1 + 0x24) s>> rcx_24) + 0xf)
    sub_1419cd1c0(arg2, rcx_2, ((temp3_1 & 0xf) + temp4_1) s>> 4, 
        ((temp5_1 & 0xf) + temp6_1) s>> 4, 1)
    bool cond:5_1 = *(rcx_2 + 0x132) u<= 0
    int64_t* rax_29 = var_a8
    int64_t r15_3 = *(arg2 + 0x1b0)
    int64_t var_80 = 0
    
    if (not(cond:5_1))
        uint32_t rbx_7 = zx.d(*(rcx_2 + 0x130))
        void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_30 = &rcx_28[5]
        
        if (rax_30 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_30 = &rcx_28[5]
        
        *(arg2 + 0x30) = rax_30
        void**** rax_31 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_31 = rcx_28
        *(arg2 + 8) = &rcx_28[1]
        rcx_28[1] = 0
        *rcx_28 = &data_142da77d8
        rcx_28[2] = r15_3
        rcx_28[3].d = rbx_7
        rcx_28[4] = 0
    
    sub_1405d1550(&var_80)
    int64_t rax_33 = arg1[1]
    int64_t* rbx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_33 = &rbx_10[1]
    
    if (rcx_33 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_33 = &rbx_10[1]
    
    *(arg2 + 0x30) = rcx_33
    *rbx_10 = rax_33
    void*** rax_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_35 = &rax_36[6]
    
    if (rcx_35 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rax_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_35 = &rax_36[6]
    
    *(arg2 + 0x30) = rcx_35
    void**** rcx_37 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rcx_37 = rax_36
    *(arg2 + 8) = &rax_36[1]
    rax_36[1] = 0
    *rax_36 = &data_142da7798
    rax_36[5] = rax_29
    rax_36[2].d = 1
    rax_36[3] = rbx_10
    rax_36[4].d = 2
    *(rax_36 + 0x24) = 3
    int64_t* rbx_13 = var_a8
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            char rax_40
            
            if (rbx_13[2].b == 0 && data_143f0f1d0 == 0)
                rax_40 = sub_1405949a0()
            
            if (rbx_13[2].b != 0 || (data_143f0f1d0 == 0 && rax_40 != 0))
                (**rbx_13)(rbx_13, 1)
            else
                bool z_1
                
                if (0 == *(rbx_13 + 0xc))
                    *(rbx_13 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_13 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_42 = sub_140a20af0()
                    uint64_t rdx_22 = zx.q(rax_42)
                    void* const rax_43
                    
                    if (rax_42 != 0)
                        rax_43 = *(&data_143cf0bf8 + (rdx_22 u>> 0xe << 3))
                            + (zx.q(rdx_22.d) & 0x3fff) * 0x18
                    else
                        rax_43 = nullptr
                    
                    *(rax_43 + 8) = rbx_13
                    sub_1405a42f0(&data_143f02390, rdx_22.d)
    
    r12 += 1
while (r12 u<= r13_1)

void var_70
sub_140b58260(&var_70, u"RectLightMipTree Transition", 1)
int64_t* rcx_45 = data_143f0f180
int64_t var_98
(*(*rcx_45 + 0x98))(rcx_45, &var_98, &var_70)
var_d8_2.q = arg1
sub_1413ffcf0(rcx_2, arg2, 2, 3, var_d8_2, var_98)
sub_1405d1550(&var_98)
sub_1405d1550(&var_b8)
return arg1
