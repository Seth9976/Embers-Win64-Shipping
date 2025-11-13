// 函数: sub_140d35cd0
// 地址: 0x140d35cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rax_2 = *(arg2 + 0x20)
int64_t** var_a8 = arg3
int64_t* r15 = *rax_2
*(arg2 + 0x20) = &rax_2[1]
int64_t* r14 = rax_2[1]
*(arg2 + 0x20) = &rax_2[2]
int32_t rcx = rax_2[2].d
*(arg2 + 0x20) = rax_2 + 0x14
int32_t rsi_1 = *(r14 + 0x3c) * r14[7].d
int32_t rbx_1 = *(r15 + 0x3c) * r15[7].d
int32_t rax_7 = (*(*r14 + 0x108))(r14)
int64_t rdx = *r15
int32_t rdi = rax_7
int32_t rax_8 = (*(rdx + 0x108))(r15, rdx)
int32_t rdx_1 = rax_8

if (rax_8 s<= 0)
    rdx_1 = 0

int32_t r9_2 = (rbx_1 - 1 + ((rax_8 - 1) & neg.d(rax_8)) + rdi) & neg.d(rdi)

if (rdx_1 s>= rdi)
    rdi = rdx_1

int32_t r8 = rdi
int32_t rdx_3 = neg.d(rdi)
int32_t r9_3 = 4

if (rdi s<= 0)
    r8 = 0

int32_t rax_14 = 4
int32_t rdx_6 = ((rdx_3 & (rdi - 1)) + ((rsi_1 - 1 + rdi + r9_2) & rdx_3) + 3) & 0xfffffffc

if (r8 s>= 4)
    rax_14 = r8

int32_t rdx_8 = (rdx_6 + 7) & 0xfffffffc
int32_t r8_1 = 4
int32_t var_94 = rdx_8

if (rax_14 s>= 4)
    r8_1 = rax_14

int32_t rcx_12 = not.d(r8_1 - 1) & (rdx_8 + 3 + r8_1)
int32_t rax_17 = 8
int32_t var_90 = rcx_12

if (r8_1 s>= 4)
    r9_3 = r8_1

if (rcx_12 s>= 8)
    rax_17 = rcx_12

int32_t var_ac = rax_17
int64_t** rcx_13 = var_a8
int128_t var_7c = rdx_6.o
int64_t* var_68 = r15
int64_t* var_60 = r14
char var_38 = 0
int32_t var_50 = r9_2.o.d
int64_t** var_58 = rcx_13
int32_t var_6c = r9_3.q:4.d
int64_t var_40 = var_7c:0xc.q
int32_t r8_2 = rcx_13[1].d
int32_t rax_20

if (r8_2 == *(rcx_13 + 0x34))
    rax_20 = rcx
    
    if (rax_20 != 0)
        goto label_140d35e5c
else
    sub_140cfaf40(&var_68, 0, r8_2 - *(rcx_13 + 0x34))
    rax_20 = rcx
label_140d35e5c:
    int32_t var_a0_1 = rax_20
    var_a8 = &var_68
    sub_140ceec60(&var_68, &var_a8)
    rcx_13 = var_58

if (**(arg2 + 0x20) != 0x40)
    while (true)
        int64_t* rdx_10 = &var_40
        int32_t rax_23
        
        if ((not.b(var_38) & 1) != 0)
            rax_23 = sub_140cf1c20(rcx_13, rdx_10)
        else
            rax_23 = sub_140cf1af0(rcx_13, rdx_10)
        
        sub_140cf59a0(&var_68, rax_23)
        void* r8_4
        
        if ((not.b(var_38) & 1) != 0)
            if (var_58[1].d != *(var_58 + 0x34))
                r8_4 = sx.q(var_40:4.d * rax_23) + *var_58
            else
                r8_4 = nullptr
        else if (var_58[1].d != *(var_58 + 0x24))
            void* rcx_17 = *var_58
            
            if ((rcx_17.b & 1) != 0)
                rcx_17 = (rcx_17 s>> 1) + var_58
            
            r8_4 = sx.q(var_40:4.d * rax_23) + rcx_17
        else
            r8_4 = nullptr
        
        char* rax_31 = *(arg2 + 0x20)
        uint32_t rcx_20 = zx.d(*rax_31)
        *(arg2 + 0x20) = &rax_31[1]
        (&data_143e1cd60)[zx.q(rcx_20)](*(arg2 + 0x18), arg2, r8_4)
        int32_t rax_35 = var_58[1].d
        void* r8_7
        
        if ((not.b(var_38) & 1) != 0)
            if (rax_35 != *(var_58 + 0x34))
                r8_7 = sx.q(var_40:4.d * rax_23) + sx.q(var_50) + *var_58
            else
                r8_7 = nullptr
        else if (rax_35 != *(var_58 + 0x24))
            void* rdx_14 = *var_58
            
            if ((rdx_14.b & 1) != 0)
                rdx_14 = (rdx_14 s>> 1) + var_58
            
            r8_7 = sx.q(var_50) + sx.q(var_40:4.d * rax_23) + rdx_14
        else
            r8_7 = nullptr
        
        char* rax_43 = *(arg2 + 0x20)
        uint32_t rcx_23 = zx.d(*rax_43)
        *(arg2 + 0x20) = &rax_43[1]
        (&data_143e1cd60)[zx.q(rcx_23)](*(arg2 + 0x18), arg2, r8_7)
        
        if (**(arg2 + 0x20) == 0x40)
            break
        
        rcx_13 = var_58

sub_140d0c840(&var_68)
int64_t result = *(arg2 + 0x20)
int64_t r12
r12.b = result != 0
*(arg2 + 0x20) = r12 + result
__security_check_cookie(rax_1 ^ &var_d8)
return result
