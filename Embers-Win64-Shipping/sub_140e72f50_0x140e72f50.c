// 函数: sub_140e72f50
// 地址: 0x140e72f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x7c)
int32_t rdi = 0
int32_t rax = *(arg1 + 0x60)
int64_t arg_8 = rbx
int64_t* rdx_5

if (rax == *(arg1 + 0x8c))
label_140e72fee:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8 = arg1 + 0x90
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140e72fee_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 7) + *(arg1 + 0x58)
            
            if (*rdx_5 == rbx)
                break
            
            rax_4 = rdx_5[0xf].d
            
            if (rax_4 == 0xffffffff)
                goto label_140e72fee_2
        
        if (rax_4 == 0xffffffff)
        label_140e72fee_2:
            rdx_5 = nullptr

uint64_t r12 = zx.q(arg3)
int32_t rcx_2 = 0
int32_t var_98 = 0
int32_t var_94 = 1
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int64_t* r15_3 = r12 * 0x50 + rdx_5[0xb]
int32_t r10 = r15_3[5].d
void* r8_2 = &r15_3[2]
void* var_90 = r8_2
int32_t var_80 = 0

if (r10 != 0)
    void* rax_5 = *(r8_2 + 0x10)
    
    if (rax_5 != 0)
        r8_2 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *r8_2
    int32_t var_84_2
    
    if (rdx_8 != 0)
    label_140e73076:
        int32_t rax_12 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_94_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx_2 - rax_13 + 0x1f
        
        if (rcx_2 - rax_13 + 0x1f s> r10)
            var_84_2 = r10
    else
        while (true)
            int64_t rdx_9 = sx.q(rdi)
            rcx_2 += 0x20
            rdi += 1
            var_80 = rcx_2
            var_98 = rdi
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r8_2 + (rdx_9 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140e73076
        
        var_84_2 = r10

double zmm4[0x2] = var_88.o
int64_t* var_30 = r15_3
char var_60 = 0
double zmm3[0x2] = var_98.o
double rax_15 = zmm3[0]
var_88.o = zmm3
var_98.o = r15_3.o
double rcx_4 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q

if ((rcx_4 u>> 0x20).d s< *(rax_15 i+ 0x18))
    int32_t var_7c
    int32_t r8_3 = var_7c
    
    while (true)
        if (*(*var_98.q + sx.q(r8_3) * 0x30 + 0x20) == *(arg2 + 0x74))
            sub_140e85bc0(zmm4[1], r8_3)
        else
            var_80 &= not.d(var_90:4.d)
            sub_14059bdd0(&var_90)
            r8_3 = var_7c
            
            if (r8_3 s< *(var_88.q + 0x18))
                continue
            else if (var_60 == 0)
                break
        
        char var_5f
        
        if (var_5f == 0)
            break
        
        r8_3.b = 1
        sub_140e5b6a0(r15_3, r15_3[1].d - *(r15_3 + 0x34), r8_3.b)
        break

int64_t rax_22 = *arg2
uint64_t r12_1 = r12 * 2
int64_t* rbx_1 = *(rax_22 + (r12_1 << 3) + 8)
int64_t* rdi_1 = *(rax_22 + (r12_1 << 3))

if (rbx_1 != 0)
    rbx_1[1].d += 1

bool rax_23
int32_t r8_4
rax_23, r8_4 = sub_140d6df00(rdi_1)
char rax_24

if (rax_23 != 0)
    rax_24, r8_4 = sub_140d6dea0(rdi_1)

if (rax_23 == 0 || rax_24 != 0)
    rdi_1.b = 0
else
    rdi_1.b = 1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        r8_4 = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            r8_4 = (*(*rbx_1 + 8))(rbx_1, 1)

if (rdi_1.b != 0)
    arg_8 = *(arg2 + 0x74)
    int64_t rax_28 = *arg2
    int64_t* rbx_2 = *(rax_28 + (r12_1 << 3) + 8)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    var_98.q = *(rax_28 + (r12_1 << 3))
    var_90 = &arg_8
    void arg_18
    r8_4 = sub_140e47960(r15_3, &arg_18, &var_98, nullptr)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            r8_4 = (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                r8_4 = (*(*rbx_2 + 8))(rbx_2, 1)

sub_140e89b20(*(arg1 + 0xf8), arg2, r8_4)
r15_3.b = 0
*(arg1 + 0x11c) += 1
int32_t rax_31 = *(arg1 + 0x110)
int32_t rcx_19 = *(arg1 + 0x11c)
int64_t rdi_2 = sx.q(rax_31 - 1)

if (rax_31 - 1 s>= 0)
    int64_t rbx_4 = rdi_2 << 4
    int64_t temp7_1
    
    do
        int64_t rax_33 = *(arg1 + 0x108)
        
        if (*(rbx_4 + rax_33 + 8) == 0)
            r15_3.b = 1
        else
            int64_t* rcx_20 = *(rbx_4 + rax_33)
            
            if (rcx_20 == 0)
                r15_3.b = 1
            else if ((*(*rcx_20 + 0x50))(rcx_20, arg2) == 0)
                r15_3.b = 1
        
        rbx_4 -= 0x10
        temp7_1 = rdi_2
        rdi_2 -= 1
    while (temp7_1 - 1 s>= 0)
    rcx_19 = *(arg1 + 0x11c)

int32_t result = rcx_19 - 1
*(arg1 + 0x11c) = result

if (r15_3.b == 0)
    return result

return sub_140599630(arg1 + 0x108, 0)
