// 函数: sub_1419f74a0
// 地址: 0x1419f74a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int64_t r12 = sx.q(*(rbp + arg1[0xbd]))
int64_t* r15 = *(arg1[0xb6] + (r12 << 3))

if (r15 == 0)
    int64_t rax
    rax.b = 0
    return rax

void* rax_1 = sub_142543020()
void* rdx = r15[2]
int64_t rax_2 = sx.q(*(rax_1 + 0x38))
int64_t* rsi

if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rsi = nullptr
else
    rsi = r15

int32_t rbx = *(arg1[0x21] + 8)

if (rbx s>= 3 && rsi != 0)
    int64_t* rcx_1 = arg1[0xb4]
    
    if (sub_1423b4730(rsi, (*(*rcx_1 + 0x40))(rcx_1), rbx) != 0)
        char rdx_2 = *(r12 + arg1[0xbf])
        
        if (rdx_2 != 0xff)
            void* rbx_1 = *(arg1[0xb6] + (sx.q(rdx_2) << 3))
            void* rax_10
            int64_t rax_11
            void* rdx_3
            
            if (rbx_1 != 0)
                rax_10 = sub_142543020()
                rdx_3 = *(rbx_1 + 0x10)
                rax_11 = sx.q(*(rax_10 + 0x38))
            
            void* const rsi_1
            
            if (rbx_1 == 0 || rax_11.d s> *(rdx_3 + 0x38)
                    || *(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                rbx_1 = nullptr
                rsi_1 = nullptr
            else
                void* rax_13 = sub_142542e20()
                void* rdx_4 = *(rbx_1 + 0x10)
                int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                
                if (rax_14.d s> *(rdx_4 + 0x38)
                        || *(*(rdx_4 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                    rsi_1 = nullptr
                else
                    rsi_1 = rbx_1
            
            if (rbx_1 != 0)
                sub_141a225c0()
            
            if (rsi_1 != 0 && *(rsi_1 + 0xd0) != 0)
                sub_141a225c0()
            
            int32_t zmm0_1
            
            if (rbp.d != 0)
                zmm0_1 = *(arg1[0x8a] + (rbp << 2))
            else
                zmm0_1 = 0x7f7fffff
            
            if (zmm0_1 f< arg1[0x90].d || arg3 != 0)
                r15 = *(arg1[0xb6] + (sx.q(*(arg1[0xbf] + r12)) << 3))

int64_t* rcx_7 = arg1[0xb4]
char rax_22 = sub_1423b4730(r15, (*(*rcx_7 + 0x40))(rcx_7), *(arg1[0x21] + 8))
int64_t* rbx_3 = arg4
rbx_3[0xf] = arg1[0xb4]
int64_t rdx_7 = *r15
rbx_3[0x10] = (*(rdx_7 + 0x280))(r15, rdx_7)
rbx_3[0x11] = arg1[0xbc]
int32_t rcx_15 = (((zx.d(*(arg1 + 0x35)) ^ *(rbx_3 + 0x9c)) & 1) ^ *(rbx_3 + 0x9c)) & 0xfffffffb
int32_t rdx_12 = (zx.d(arg3) ^ 1) << 2 | rcx_15 | 0x10
*(rbx_3 + 0x9c) = rdx_12
int32_t rax_26

if ((*(arg1 + 0x3c) & 1) == 0 || *(arg1[0x21] + 8) s< 3 || *(arg1 + 0x32) - 1 u<= 1)
    rax_26 = 0
else
    rax_26 = 0x20

*(rbx_3 + 0x9a) = rbp.b
*(rbx_3 + 0x9c) = ((sbb.d(rcx_15, rcx_15, rax_22 != 0) & 0x880)
    | (((rdx_12 & 0xffffffdf) | rax_26 | 8) & 0xffffe07f)) & 0xffdf1fff
int64_t* rax_28 = rbx_3[0xd]
int64_t r15_1 = sx.q(arg5[1].d)

if (rax_28 != 0)
    rbx_3 = rax_28

int32_t rax_29 = (r15_1 + 1).d
arg5[1].d = rax_29

if (rax_29 s> *(arg5 + 0xc))
    sub_141a14580(arg5, r15_1.d)

int64_t rcx_23 = r15_1 << 5
int64_t* rcx_24 = rcx_23 + *arg5

if (rcx_23 == neg.q(*arg5))
    rcx_24 = nullptr
else
    *rcx_24 = 0

rcx_24[2] = arg1
rcx_24[1] = &arg1[0xc5]
rcx_24[3].d = rbp.d
rbx_3[4] = rcx_24
*rbx_3 = arg1[0x28]
void* rax_32 = arg1[0xb3]
int64_t rax_34

if (rax_22 == 0)
    rax_34 = *(*(rax_32 + 0x40) + (rbp << 3))
else
    rax_34 = *(*(*(rax_32 + 0x50) + 8) + (rbp << 3))

rbx_3[2] = rax_34
int32_t rax_36 = *(arg1 + 0x49c)
int32_t r8_7 = (*(arg1 + 0x4a4) s>> rbp.b) - 1
rbx_3[8].d = 0
*(rbx_3 + 0x44) = r8_7 * r8_7 * rax_36 * rax_36 * 2
int64_t r8_13 = rbp * 5
rbx_3[0xa].d = *(*(arg1[0xb3] + 0x48) + (r8_13 << 3) + 0x20)
*(rbx_3 + 0x54) = *(*(arg1[0xb3] + 0x48) + (r8_13 << 3) + 0x24)
(*(*arg1 + 0x188))(arg1, rbx_3, zx.q(rbp.d))
int64_t rax_42
rax_42.b = 1
return rax_42
