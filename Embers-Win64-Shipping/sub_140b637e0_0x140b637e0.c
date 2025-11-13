// 函数: sub_140b637e0
// 地址: 0x140b637e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint128_t zmm0 = *arg3
uint128_t var_98 = zmm0
int64_t rdx = var_98.q
uint128_t temp0 = _mm_bsrli_si128(zmm0, 8)
int32_t r8 = temp0.d
uint128_t var_78
int32_t* rax_4

if ((temp0.q u>> 0x20).b != 0)
    rax_4 = sub_140b57580(&var_98, rdx, r8)
else
    rax_4 = sub_140b57490(&var_78, rdx, r8)

uint128_t zmm0_1 = *rax_4
char var_44 = 0
int112_t var_58 = zmm0_1.14
SRWLOCK* SRWLock = ((zx.q(zmm0_1.d) + 0x401) << 6) + arg1
AcquireSRWLockExclusive(SRWLock)
struct _RTL_SRWLOCK SRWLock_2 = SRWLock
int32_t rdi = SRWLock->__offset(0xc).d
uint64_t rbx_2 = zx.q(var_58:4.d) & zx.q(rdi)
int32_t* r12 = SRWLock_2 + (rbx_2 << 2)
int32_t i = *(SRWLock_2 + (rbx_2 << 2))

if (i == 0)
label_140b6397f:
    struct _RTL_SRWLOCK SRWLock_1 = SRWLock
    int104_t var_a8_1 = zmm0.13
    int32_t rbx_4
    rbx_4.b = (_mm_bsrli_si128(zmm0, 8).q u>> 0x20).b != 0
    int32_t rbx_8 = ((rbx_4 + 1) * _mm_bsrli_si128(zmm0, 8).d + 3) & 0xfffffffe
    AcquireSRWLockExclusive(SRWLock_1)
    int32_t r15_1 = *(SRWLock_1 + 0xc)
    
    if (0x20000 - r15_1 u< rbx_8)
        sub_140b5c580(SRWLock_1)
        r15_1 = *(SRWLock_1 + 0xc)
    
    uint64_t rbx_9 = zx.q(*(SRWLock_1 + 8))
    *(SRWLock_1 + 0xc) = r15_1 + rbx_8
    uint32_t r15_2 = r15_1 u>> 1
    ReleaseSRWLockExclusive(SRWLock_1)
    uint64_t r8_4 = zx.q(var_a8_1:8.d)
    int16_t* rdx_6 = zx.q(r15_2 * 2) + *(SRWLock_1 + (rbx_9 << 3) + 0x10)
    *rdx_6 = var_58:0xc.w
    
    if (var_a8_1:0xc.b != 0)
        r8_4 *= 2
    
    memcpy(&rdx_6[1], var_a8_1.q, r8_4.d)
    int32_t rbx_11 = rbx_9.d << 0x10 | r15_2
    *r12 = var_58:8.d | rbx_11
    SRWLock->__offset(0x8).d += 1
    uint64_t r8_5 = zx.q(SRWLock->__offset(0xc).d)
    
    if (SRWLock->__offset(0x8).d * 0xa u>= (r8_5 + 1).d * 9)
        sub_140b5eb40(SRWLock, ((r8_5 << 1) + 2).d)
    
    SRWLock->__offset(0x20).d += 1
    char var_5c
    SRWLock->__offset(0x24).d += zx.d(var_5c)
    *arg2 = rbx_11
else
    do
        if ((i & 0xe0000000) == var_58:8.d)
            int32_t rax_5 = i & 0x1fffffff
            uint64_t rdx_2 = zx.q(rax_5 u>> 0x10)
            int64_t var_a8
            var_a8.d = rdx_2.d
            var_a8:4.d = zx.d(rax_5.w)
            int16_t* r8_2 = zx.q((var_a8 u>> 0x20).d * 2) + *(SRWLock + (rdx_2 << 3) + 0x10)
            int16_t rdx_3 = *r8_2
            
            if (rdx_3 == var_58:0xc.w)
                uint32_t rax_9 = zx.d(rdx_3) u>> 6
                void** rax_10
                
                if ((rdx_3.b & 1) == 0)
                    var_98:8.d = rax_9
                    rax_10 = &var_98
                    var_98.q = &r8_2[1]
                    var_98:0xc.b = 0
                else
                    uint32_t var_80_1 = rax_9
                    void* var_88
                    rax_10 = &var_88
                    var_88 = &r8_2[1]
                    char var_7c_1 = 1
                
                zmm0_1 = *rax_10
                char* rdx_4 = zmm0.q
                var_78 = zmm0_1
                int64_t rcx_8 = var_78.q
                int64_t r8_3 = sx.q(_mm_bsrli_si128(zmm0_1, 8).d)
                int32_t rax_14
                
                if ((zmm0:8.q u>> 0x20).b != 0)
                    rax_14 = sub_140a546e0(rcx_8, rdx_4, r8_3)
                else
                    rax_14 = sub_140a545e0(rcx_8, rdx_4, r8_3)
                
                rax_14.b = rax_14 == 0
                
                if (rax_14.b != 0)
                    i = *r12
                    break
        
        struct _RTL_SRWLOCK SRWLock_3 = SRWLock
        rbx_2 = zx.q(rbx_2.d + 1) & zx.q(rdi)
        r12 = SRWLock_3 + (rbx_2 << 2)
        i = *(SRWLock_3 + (rbx_2 << 2))
    while (i != 0)
    
    if (i == 0)
        goto label_140b6397f
    
    *arg2 = i & 0x1fffffff

ReleaseSRWLockExclusive(SRWLock)
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
