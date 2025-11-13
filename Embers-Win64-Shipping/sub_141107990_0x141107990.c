// 函数: sub_141107990
// 地址: 0x141107990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void** r14 = arg1
void* rcx = *arg1
uint64_t r13 = zx.q(arg3.b)
char var_1f8 = arg3.b

if (*(rcx + 0x1c4) != 0)
    sub_141096650(rcx)
    rcx = *r14

int64_t* rax_2 = sub_14139bef0(rcx)
int32_t rdi = 0
int32_t rsi = 1

if (r14[0xc].b == 0 && arg2 u<= 5 && test_bit(0x25, arg2))
    void* r13_1 = *r14
    int64_t rcx_1 = *(rax_2[0xe] + 8)
    int64_t* rbx_3 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rbx_3[1]
    
    if (rax_4 u> *(r13_1 + 0x38))
        sub_140b0e3d0(r13_1 + 0x30, 0x10)
        rbx_3 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rbx_3[1]
    
    *(r13_1 + 0x30) = rax_4
    *rbx_3 = rcx_1
    void*** rcx_5 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_5[5]
    
    if (rax_5 u> *(r13_1 + 0x38))
        sub_140b0e3d0(r13_1 + 0x30, 0x30)
        rcx_5 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_5[5]
    
    *(r13_1 + 0x30) = rax_5
    void**** rax_6 = *(r13_1 + 8)
    *(r13_1 + 0x14) += 1
    *rax_6 = rcx_5
    *(r13_1 + 8) = &rcx_5[1]
    r13 = zx.q(var_1f8)
    rcx_5[1] = 0
    *rcx_5 = &data_142d549c8
    rcx_5[2].d = 1
    rcx_5[3] = rbx_3
    rcx_5[4].d = 1

void* r12 = &r14[3]
arg3.b = 5
int32_t rbx_6 = 0x21
int64_t rax_9 = sx.q(arg2)
int64_t var_1d8 = *(rax_2[8] + 8)
void* const var_1e8

if (rax_9.d u> 7)
    r13.b = 4
else
    switch (rax_9)
        case 0, 1
            *r12 = *(*sub_14139d440(rax_2) + 8)
            void* const var_1e0
            int64_t var_1c8
            void* const rax_13
            int32_t rcx_13
            
            if (r13.b == 0)
                rax_13 = nullptr
                rsi = 0
                var_1c8 = 0
                rcx_13 = 2
            else
                rax_13 = *(rax_2[0xe] + 8)
                var_1e0 = rax_13
                
                if (rax_13 != 0)
                    *(rax_13 + 8) += 1
                    rax_13 = var_1e0
                
                rcx_13 = 0
            
            r14[4] = rax_13
            
            if (rcx_13 != 0)
                sub_1405d1550(&var_1c8)
            
            if (rsi != 0)
                sub_1405d1550(&var_1e0)
            
            rsi = zx.d(r13.b) + 3
            r14[5] = *(rax_2[0xf] + 8)
            r14[6] = *(rax_2[0x10] + 8)
            r13.b = 4
        case 2, 3
            *r12 = *(*sub_14139d440(rax_2) + 8)
            int64_t var_1c0
            void* const rax_19
            int32_t rcx_20
            int32_t rsi_2
            
            if (r13.b == 0)
                rax_19 = nullptr
                rsi_2 = 0
                var_1c0 = 0
                rcx_20 = 8
            else
                rax_19 = *(rax_2[0xe] + 8)
                var_1e8 = rax_19
                
                if (rax_19 != 0)
                    *(rax_19 + 8) += 1
                    rax_19 = var_1e8
                
                rsi_2 = 4
                rcx_20 = 0
            
            r14[4] = rax_19
            
            if (rcx_20 != 0)
                sub_1405d1550(&var_1c0)
            
            if (rsi_2 != 0)
                sub_1405d1550(&var_1e8)
            
            rbx_6 = 0x22
            uint32_t rsi_3 = zx.d(r13.b)
            r13.b = 5
            rsi = rsi_3 + 4
            r14[5] = *(rax_2[0xf] + 8)
            r14[6] = *(rax_2[0x10] + 8)
            r14[7] = *(rax_2[0x12] + 8)
        case 4
            r12 = &r14[8]
            rsi = 3
            *r12 = *(rax_2[0x14] + 8)
            r14[9] = *(rax_2[0x15] + 8)
            r14[0xa] = *(rax_2[0x16] + 8)
            
            if (arg4 != 0)
                rsi = 4
                r14[0xb] = *(rax_2[0x17] + 8)
            
            var_1d8 = *sub_1410f83c0(rax_2)
            r13.b = 4
        case 5
            r12 = &r14[4]
            *r12 = *(rax_2[0xe] + 8)
            r13.b = 4
        case 6
            *r12 = *(*sub_14139d440(rax_2) + 8)
            r13.b = 4
        case 7
            int64_t rcx_34 = *(rax_2[0x18] + 8)
            *r12 = rcx_34
            void* const r8 = *r14
            void* rax_33 = r8 + 0x30
            int64_t r13_3 = *(r8 + 0x30) + 7
            var_1e8 = r8
            r13 = r13_3 & 0xfffffffffffffff8
            int64_t rdx_1 = r13 + 8
            
            if (rdx_1 u> *(rax_33 + 8))
                sub_140b0e3d0(rax_33, 0x10)
                r8 = var_1e8
                rax_33 = r8 + 0x30
                r13 = (*(r8 + 0x30) + 7) & 0xfffffffffffffff8
                rdx_1 = r13 + 8
            
            *rax_33 = rdx_1
            *r13 = rcx_34
            void*** rcx_38 = (*rax_33 + 7) & 0xfffffffffffffff8
            void* rdx_2 = &rcx_38[5]
            
            if (rdx_2 u> *(rax_33 + 8))
                sub_140b0e3d0(rax_33, 0x30)
                r8 = var_1e8
                rax_33 = r8 + 0x30
                rcx_38 = (*(r8 + 0x30) + 7) & 0xfffffffffffffff8
                rdx_2 = &rcx_38[5]
            
            *rax_33 = rdx_2
            int64_t* rax_34 = *(r8 + 8)
            *(r8 + 0x14) += 1
            *rax_34 = rcx_38
            *(r8 + 8) = &rcx_38[1]
            arg3 = 9
            rcx_38[1] = 0
            *rcx_38 = &data_142d549c8
            rcx_38[2].d = 1
            rcx_38[3] = r13
            rcx_38[4].d = 1
            rax_2[0x3b].b = 1
            
            if (rax_2[0x3b].b != 0)
                arg3 = 5
            
            r13.b = 4
int32_t rcx_42 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x40)

if (rsi != 0)
    do
        int64_t rdx_3 = *(r12 + (zx.q(rcx_42) << 3))
        
        if (rdx_3 != 0)
            uint64_t rax_38 = zx.q(rdi)
            rdi += 1
            (&var_88)[rax_38] = rdx_3
        
        rcx_42 += 1
    while (rdi u< rsi)

void var_1a8
sub_14108c030(&var_1a8, rsi, &var_88, arg3.b)
r13.b <<= 4
r13.b |= 5
int64_t var_e8 = var_1d8
char var_d8 = r13.b
int32_t var_d4 = rbx_6
sub_1419ba670(*(r14 + 0x64))
int64_t r15_1 = sx.q(arg2)

if (*(r15_1 + r14 + 8) != 0)
    sub_1410e0180(*r14, &var_1a8)

void* rsi_4 = *r14
int64_t rbx_9 = (*(rsi_4 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_41 = rbx_9 + 0x14

if (rax_41 u> *(rsi_4 + 0x38))
    sub_140b0e3d0(rsi_4 + 0x30, 0x16)
    rbx_9 = (*(rsi_4 + 0x30) + 1) & 0xfffffffffffffffe
    rax_41 = rbx_9 + 0x14

wchar16 const* const rcx_48 = u"DecalPass"
*(rsi_4 + 0x30) = rax_41
wchar16 const i

do
    i = *rcx_48
    *(rcx_48 + rbx_9 - u"DecalPass") = i
    rcx_48 = &rcx_48[1]
while (i != 0)
void*** rcx_51 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_42 = &rcx_51[0x27]

if (rax_42 u> *(rsi_4 + 0x38))
    sub_140b0e3d0(rsi_4 + 0x30, 0x140)
    rcx_51 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
    rax_42 = &rcx_51[0x27]

*(rsi_4 + 0x30) = rax_42
void**** rax_43 = *(rsi_4 + 8)
*(rsi_4 + 0x14) += 1
*rax_43 = rcx_51
*(rsi_4 + 8) = &rcx_51[1]
sub_1405d11b0(rcx_51, &var_1a8, rbx_9)
*(rsi_4 + 0x1c4) = 1
sub_1405d19b0(rsi_4, &var_1a8)
char var_91
*(rsi_4 + 0x178) = var_91
*(rsi_4 + 0x179) = 0
*(rsi_4 + 0x1c4) = 1
*(r15_1 + r14 + 8) = 0
void var_a0
int64_t result = sub_1405d1550(&var_a0)
__security_check_cookie(rax_1 ^ &var_218)
return result
