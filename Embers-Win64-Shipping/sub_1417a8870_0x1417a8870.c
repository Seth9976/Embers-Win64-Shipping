// 函数: sub_1417a8870
// 地址: 0x1417a8870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
*arg2 = 0
arg2[1] = 0
arg2[4] = 0
void* rdx = &arg2[2]
int64_t* r10 = arg3
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_2 = *(rdx + 0x10)

if (rax_2 != 0)
    rdx = rax_2

*rdx = 0
*(rdx + 8) = 0
uint64_t rdx_1 = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
void* rax_3 = *arg1
uint64_t var_e0 = 0
void* rcx = *(rax_3 + 0x260)
int64_t rbx = sx.q(*(rcx + 0x1a8))
int64_t rsi = *(rcx + 0x1a0)
int32_t var_d8 = rbx.d

if (rbx.d != 0)
    sub_1405c4a00(&var_e0, rbx.d, 0)
    memcpy(var_e0, rsi, (rbx << 3).d)
    rdx_1 = var_e0
    r10 = arg3
    rbx = zx.q(var_d8)

int64_t rsi_1 = 0
uint64_t r15 = rdx_1
int64_t rcx_3 = rdx_1 + (sx.q(rbx.d) << 3)
uint64_t r12_3 = (rcx_3 - rdx_1 + 7) u>> 3

if (rdx_1 u> rcx_3)
    r12_3 = 0

if (r12_3 != 0)
    do
        int64_t* rdx_4 = *r15
        int64_t* var_e8 = rdx_4
        void* r9_1 = *rdx_4
        int64_t r8_2 = sx.q(rdx_4[1].d)
        int128_t var_88
        int64_t var_78
        
        if (*(*(r9_1 + 0x428) + r8_2 * 0x10 + 8) != 0)
            char var_f8_1 = 0
            int64_t* var_a8 = &var_e8
            int64_t var_98
            int64_t* var_a0_1 = sub_1417b2ff0(arg1, &var_98, rdx_4, r10, var_f8_1)
            void var_b0
            sub_14178d640(arg2, &var_b0, &var_a8, nullptr)
            int32_t var_50_1 = 0
            int64_t var_58
            
            if (var_58 != 0)
                sub_140a74f90(var_58)
            
            int32_t var_90_1 = 0
            int32_t var_8c
            
            if (var_8c != 0)
                sub_1405a5410(&var_98, 0)
            
            int32_t var_68_1 = 0xffffffff
            int32_t var_64_1 = 0
            sub_14059a8e0(&var_88, 0)
            
            if (var_78 != 0)
                sub_140a74f90(var_78)
            
            int64_t rcx_12 = var_98
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        else if (*(r8_2 + *(r9_1 + 0x380)) != 0
                && not((*(*(r9_1 + 0x4e8) + (r8_2 << 2))).d f> *(*(r9_1 + 0x4d0) + (r8_2 << 2))))
            sub_1417aba00(arg1, rdx_4)
            
            if (*(arg1 + 0x211) != 0)
                int64_t r14_1 = sx.q(arg1[0x44].d)
                __builtin_memset(&var_88, 0, 0x24)
                int32_t rax_9 = (r14_1 + 1).d
                int64_t var_d0
                __builtin_memset(&var_d0, 0, 0x18)
                arg1[0x44].d = rax_9
                
                if (rax_9 s> *(arg1 + 0x224))
                    sub_1405c5060(&arg1[0x43])
                
                int64_t rcx_16 = arg1[0x43]
                int32_t rax_10 = var_88:8.d
                int64_t r10_2 = r14_1 * 0xa
                *(rcx_16 + (r10_2 << 3) + 0x10) = var_88.q
                *(rcx_16 + (r10_2 << 3) + 0x18) = rax_10
                *(rcx_16 + (r10_2 << 3)) = 0
                *(rcx_16 + (r10_2 << 3) + 8) = 0
                *(rcx_16 + (r10_2 << 3) + 0x34) = 0
                *(rcx_16 + (r10_2 << 3) + 0x1c) = var_88:0xc.q
                *(rcx_16 + (r10_2 << 3) + 0x24) = var_78:4.d
                int64_t var_70
                *(rcx_16 + (r10_2 << 3) + 0x28) = var_70
                int32_t var_68_2
                *(rcx_16 + (r10_2 << 3) + 0x30) = var_68_2
                *(rcx_16 + (r10_2 << 3) + 0x38) = var_d0
                int32_t var_c8
                *(rcx_16 + (r10_2 << 3) + 0x40) = var_c8
                int64_t var_c4
                *(rcx_16 + (r10_2 << 3) + 0x44) = var_c4
                int32_t var_bc
                *(rcx_16 + (r10_2 << 3) + 0x4c) = var_bc
                int64_t r9_3 = arg1[0x43]
                *(r9_3 + (r10_2 << 3)) = var_e8
                *(r9_3 + (r10_2 << 3) + 8) = 0
                int64_t* rcx_17 = var_e8
                int64_t rdx_8 = sx.q(rcx_17[1].d) * 3
                int64_t rcx_18 = *(*rcx_17 + 0x28)
                *(r9_3 + (r10_2 << 3) + 0x10) = *(rcx_18 + (rdx_8 << 2))
                *(r9_3 + (r10_2 << 3) + 0x18) = *(rcx_18 + (rdx_8 << 2) + 8)
                int64_t* rcx_19 = var_e8
                int64_t rdx_9 = sx.q(rcx_19[1].d) * 3
                int64_t rcx_20 = *(*rcx_19 + 0x1b8)
                *(r9_3 + (r10_2 << 3) + 0x1c) = *(rcx_20 + (rdx_9 << 2))
                *(r9_3 + (r10_2 << 3) + 0x24) = *(rcx_20 + (rdx_9 << 2) + 8)
                int64_t* rcx_21 = var_e8
                int64_t rdx_10 = sx.q(rcx_21[1].d) * 3
                int64_t rcx_22 = *(*rcx_21 + 0x1d0)
                *(r9_3 + (r10_2 << 3) + 0x28) = *(rcx_22 + (rdx_10 << 2))
                *(r9_3 + (r10_2 << 3) + 0x30) = *(rcx_22 + (rdx_10 << 2) + 8)
                int64_t* rax_25 = var_e8
                *(r9_3 + (r10_2 << 3) + 0x34) = *(*(*rax_25 + 0x2c0) + (sx.q(rax_25[1].d) << 2))
        r10 = arg3
        r15 += 8
        rsi_1 += 1
    while (rsi_1 != r12_3)
    
    rdx_1 = var_e0

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
