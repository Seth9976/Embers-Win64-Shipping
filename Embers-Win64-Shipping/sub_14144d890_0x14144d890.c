// 函数: sub_14144d890
// 地址: 0x14144d890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t* rdi = arg8
void* r15 = arg6
int64_t* rsi = arg3
int128_t var_268
__builtin_memset(&var_268, 0, 0x20)
sub_1414618c0(arg3, &var_268)
int64_t i_2 = sx.q(arg7)
void* rax_3 = data_143ed5e78
int64_t rbx = 0
uint128_t var_88 = zx.o(0)
int32_t rdx_1 = 1
int128_t var_78 = zx.o(0)
uint128_t var_148_1
__builtin_memset(&var_148_1, 0, 0x14)
int64_t i_3 = i_2
void* rax_4 = data_143ed5f88
int32_t var_11c = *(rax_3 + 4)
int32_t var_130
__builtin_memcpy(&var_130, "\x00\x00\x80\x3f\x01\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 
    0x11)
int32_t rcx_2 = *(rax_4 + 4)
bool var_114 = *(data_143ed5fa0 + 4) != 0
int32_t var_10c = 0x3f800000
int32_t var_110 = *(data_143ed5fb8 + 4)
int32_t var_134 = i_2.d
uint128_t var_108
__builtin_memset(&var_108, 0, 0x40)

if (i_2.d s> 0)
    int32_t* rcx_4 = r15 + 8
    int64_t i_1 = i_2
    int32_t rax_7
    int64_t i
    
    do
        rax_7 = *rcx_4
        rcx_4 = &rcx_4[8]
        
        if (rdx_1 s>= rax_7)
            rax_7 = rdx_1
        
        rdx_1 = rax_7
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t var_12c_1 = rax_7

int32_t r13 = 0
uint128_t var_168
int128_t var_c8
uint128_t var_a8
uint128_t var_68

if (i_2.d s> 0)
    int64_t* rdx_2 = rsi
    void* r14_1 = &var_108:4
    int64_t rdi_1 = 0
    void* r12 = &rdx_2[0x2b3]
    
    do
        void* rax_8 = *r15
        var_168 = zx.o(0)
        int64_t* rcx_5 = *(rax_8 + 0x20)
        int32_t rdx_4
        int32_t r8_1
        int32_t r9_1
        int32_t r10_1
        
        if ((*(*rcx_5 + 0xd0))(rcx_5, &var_168, rdx_2, r12) != 0)
            r10_1 = var_168:0xc.d
            r9_1 = var_168:8.d
            r8_1 = var_168:4.d
            rdx_4 = var_168.d
        else
            rdx_4 = *r12
            r8_1 = *(r12 + 4)
            r9_1 = *(r12 + 8)
            r10_1 = *(r12 + 0xc)
        
        if (r13 != 0)
            int32_t rcx_6 = rdx_4
            
            if (var_148_1.d s<= rdx_4)
                rcx_6 = var_148_1.d
            
            var_148_1.d = rcx_6
            int32_t rcx_7 = r8_1
            
            if (var_148_1:4.d s<= r8_1)
                rcx_7 = var_148_1:4.d
            
            var_148_1:4.d = rcx_7
            int32_t rcx_8 = r9_1
            
            if (var_148_1:8.d s>= r9_1)
                rcx_8 = var_148_1:8.d
            
            var_148_1:8.d = rcx_8
            int32_t rcx_9 = r10_1
            
            if (var_148_1:0xc.d s>= r10_1)
                rcx_9 = var_148_1:0xc.d
            
            var_148_1:0xc.d = rcx_9
        else
            var_148_1.d = rdx_4
            var_148_1:4.d = r8_1
            var_148_1:8.d = r9_1
            var_148_1:0xc.d = r10_1
        
        void* rcx_10 = *r15
        int64_t rax_11 = *(r15 + 0x10)
        *(r14_1 - 4) = rdx_4
        *r14_1 = r8_1
        *(&var_88 + rdi_1) = rax_11
        void* rax_12 = *(rcx_10 + 0x20)
        *(r14_1 + 4) = r9_1
        *(r14_1 + 8) = r10_1
        *(&var_c8 + rdi_1) = rcx_10
        int64_t rsi_1 = *(rax_12 + 0x10)
        int32_t var_2a0
        sub_1408297c0(arg4 + 0x5c0, &var_2a0, rsi_1)
        int64_t rax_13 = sx.q(var_2a0)
        int64_t rcx_15
        
        if (rax_13.d == 0xffffffff)
            rcx_15 = 0
        else
            rcx_15 = (rax_13 << 6) + *(arg4 + 0x5c0)
        
        rdx_2 = arg3
        int64_t rax_14 = rcx_15 + 8
        *(&var_a8 + rdi_1) = 0
        
        if (rcx_15 == 0)
            rax_14 = 0
        
        bool cond:6_1 = (*(rdx_2 + 0x497c) & 1) != 0
        *(&var_68 + rdi_1) = rax_14
        
        if (not(cond:6_1))
            uint32_t rcx_17 = (rsi_1 u>> 4).d
            var_168.q = rsi_1
            int64_t* r9_3 = rdx_2[0x2b5] + 0xa90
            int32_t rdx_8 = (0x9e3779b9 - rcx_17) ^ rcx_17 << 8
            int32_t r10_4 = neg.d(rcx_17 + rdx_8) ^ rdx_8 u>> 0xd
            int32_t rcx_20 = (rcx_17 - rdx_8 - r10_4) ^ r10_4 u>> 0xc
            int32_t rdx_11 = (rdx_8 - rcx_20 - r10_4) ^ rcx_20 << 0x10
            int32_t r10_7 = (r10_4 - rdx_11 - rcx_20) ^ rdx_11 u>> 5
            int32_t rcx_23 = (rcx_20 - rdx_11 - r10_7) ^ r10_7 u>> 3
            int32_t rdx_14 = (rdx_11 - rcx_23 - r10_7) ^ rcx_23 << 0xa
            int32_t r10_10 = (r10_7 - rdx_14 - rcx_23) ^ rdx_14 u>> 0xf
            void* rax_32
            
            if (r9_3[1].d == *(r9_3 + 0x34))
            label_14144dc88:
                rax_32 = sub_141435cd0(r9_3, r10_10, &var_168)
            else
                void* rcx_24 = r9_3[8]
                void* r8_3 = &r9_3[7]
                
                if (rcx_24 != 0)
                    r8_3 = rcx_24
                
                int32_t rax_31 = *(r8_3 + (((sx.q(r9_3[9].d) - 1) & sx.q(r10_10)) << 2))
                
                if (rax_31 == 0xffffffff)
                label_14144dc88_1:
                    rax_32 = sub_141435cd0(r9_3, r10_10, &var_168)
                else
                    int64_t* rdx_21
                    
                    while (true)
                        rdx_21 = (sx.q(rax_31) << 6) + *r9_3
                        
                        if (*rdx_21 == rsi_1)
                            break
                        
                        rax_31 = rdx_21[7].d
                        
                        if (rax_31 == 0xffffffff)
                            goto label_14144dc88_2
                    
                    if (rax_31 == 0xffffffff || rdx_21 == 0)
                    label_14144dc88_2:
                        rax_32 = sub_141435cd0(r9_3, r10_10, &var_168)
                    else
                        rax_32 = &rdx_21[1]
            
            rdx_2 = arg3
            *(&var_a8 + rdi_1) = rax_32
        
        r13 += 1
        r15 += 0x20
        r14_1 += 0x10
        rdi_1 += 8
    while (r13 s< arg7)
    
    rsi = arg3
    i_3 = i_2

var_148_1.d &= 0xfffffffe
var_148_1:4.d &= 0xfffffffe
var_168 = zx.o(0)
int128_t var_158 = zx.o(0)
uint128_t var_228 = var_a8
int128_t var_98
int128_t var_218 = var_98
var_a8 = var_68
int128_t var_58
int128_t var_98_1 = var_58
uint128_t var_208 = var_148_1
int32_t var_138
int128_t var_1f8 = var_138.o
int32_t var_128
uint128_t var_1e8 = var_128.o
int128_t var_1d8 = rcx_2.o
uint128_t var_1c8 = var_108
int128_t var_1b8
__builtin_memset(&var_1b8, 0, 0x30)
int128_t var_188 = var_c8
uint128_t var_b8
uint128_t var_178 = var_b8
int64_t result =
    sub_14144de80(arg2, rsi, arg5, &var_268, &var_88, &var_208, &var_a8, &var_228, &var_168)

if (i_3 s> 0)
    do
        result = *(&var_168 + (rbx << 3))
        rbx += 1
        *rdi = result
        rdi = &rdi[2]
    while (rbx s< i_3)

int128_t var_258
int64_t* rcx_27 = var_258:8.q

if (rcx_27 != 0)
    result = (*(*rcx_27 + 0x38))(rcx_27)

int64_t* rcx_28 = var_258.q

if (rcx_28 != 0)
    result = (*(*rcx_28 + 0x38))(rcx_28)

int64_t* rcx_29 = var_268:8.q

if (rcx_29 != 0)
    result = (*(*rcx_29 + 0x38))(rcx_29)

int64_t* rcx_30 = var_268.q

if (rcx_30 != 0)
    result = (*(*rcx_30 + 0x38))(rcx_30)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
