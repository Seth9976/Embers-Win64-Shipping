// 函数: sub_1427cd1f0
// 地址: 0x1427cd1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
class physx::PxCollection* result = nullptr
void* var_108 = arg1 + 4
void* rdx = nullptr
void* r9 = nullptr
int32_t rax = *(arg1 + 4)
void* rcx_2 = arg1 + 0x18 + (zx.q(neg.d((arg1 + 0x18).d)) & 0xf)
var_108 = rcx_2
uint64_t r14 = zx.q(*rcx_2)
void* rcx_4 = rcx_2 + 4 + (zx.q(neg.d((rcx_2 + 4).d)) & 0xf)
var_108 = rcx_4
uint64_t rax_7 = zx.q(*rcx_4)

if (rax_7.d != 0)
    rdx = rcx_4 + 4

void* rcx_6 = rcx_4 + 4 + (rax_7 << 3)
var_108 = rcx_6
int32_t rax_8 = *rcx_6
void* rcx_8 = rcx_6 + 4 + (zx.q(neg.d((rcx_6 + 4).d)) & 0xf)
var_108 = rcx_8
int32_t rdx_1 = *rcx_8

if (rdx_1 != 0)
    r9 = rcx_8 + 4

var_108 = rcx_8 + 4 + (zx.q(rdx_1) << 4)

if (sub_1427cd9f0(r9, rdx_1, arg3) == 0)
    return 0

void* rcx_12 = var_108
void* rcx_13 = rcx_12 + (zx.q(neg.d(rcx_12.d)) & 0xf)
var_108 = rcx_13
void* rsi = nullptr
void* r13 = nullptr
uint64_t i_4 = zx.q(*rcx_13)
int32_t arg_8 = i_4.d
uint64_t i_2 = i_4

if (i_4.d != 0)
    rsi = rcx_13 + 4

void* rcx_15 = rcx_13 + 4 + (i_4 << 4)
void* rcx_16 = rcx_15 + (zx.q(neg.d(rcx_15.d)) & 0xf)
var_108 = rcx_16
int32_t i_5 = *rcx_16
uint64_t i_3 = zx.q(i_5)

if (i_5 != 0)
    r13 = rcx_16 + 4

void* rcx_18 = rcx_16 + 4 + (zx.q(i_5) << 4)
void* rax_25 = nullptr
var_108 = rcx_18
uint64_t rdx_2 = zx.q(*rcx_18)
int64_t var_e0 = 0
uint64_t r12 = zx.q(rdx_2.d)
int64_t var_d0 = 0

if (rdx_2.d != 0)
    rax_25 = rcx_18 + 4

int32_t r11 = -1
int32_t var_d4 = 0xffffffff
var_108 = rcx_18 + 4 + rdx_2 * 0xc
int32_t rax_27 = (int.q(float.s(zx.q(i_5 + 1 + rdx_2.d)) f* 1.33333337f)).d
int128_t var_100
__builtin_memset(&var_100, 0, 0x20)
int32_t var_d8 = 0x3f400000

if (rax_27 != 0)
    sub_1427cdca0(&var_100, rax_27)
    r11 = var_d4

int128_t var_f0

if (i_5 != 0)
    int32_t* rbx = r13 + 8
    uint64_t i
    
    do
        int32_t rcx_24 = *rbx
        int64_t r13_1 = *(rbx - 8)
        int32_t rax_28 = rbx[1]
        uint64_t r10_1 = zx.q(r11)
        int32_t rdx_7 = not.d(rcx_24 << 0xf) + rcx_24
        int64_t rdx_11 = not.q(r13_1 << 0x20) + r13_1
        uint32_t r9_1 = ((zx.q(rdx_7 u>> 0xa) ^ zx.q(rdx_7)) * 9).d
        uint32_t r9_2 = r9_1 ^ r9_1 u>> 6
        int64_t rdx_12 = rdx_11 ^ rdx_11 u>> 0x16
        int64_t rdx_13 = rdx_12 + not.q(rdx_12 << 0xd)
        uint64_t rdx_14 = zx.q(r9_2 + not.d(r9_2 << 0xb))
        int64_t r8 = (rdx_13 u>> 8 ^ rdx_13) * 9
        int64_t r8_1 = r8 ^ r8 u>> 0xf
        int64_t r8_2 = r8_1 + not.q(r8_1 << 0x1b)
        uint64_t r9_7 = (zx.q(((r8_2 u>> 0x1f).d ^ r8_2.d ^ 0xfc955b95) * 0xf4247)
            ^ zx.q(rdx_14.d) u>> 0x10 ^ rdx_14) & zx.q(var_e0:4.d - 1)
        *(var_f0.q + (r10_1 << 2)) = *(var_f0:8.q + (r9_7 << 2))
        *(var_f0:8.q + (r9_7 << 2)) = r10_1.d
        var_d0:4.d += 1
        var_d0.d += 1
        int64_t* r8_3 = var_100:8.q + r10_1 * 0x18
        
        if (r8_3 != 0)
            r8_3[1].d = rcx_24
            *r8_3 = r13_1
            r8_3[2].d = rax_28
        
        r11 += 1
        rbx = &rbx[4]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r12.d u> 0)
    void* rbx_2 = rax_25 + 4
    
    while (true)
        int32_t r13_2 = *rbx_2
        uint64_t rdi = zx.q(*(rbx_2 - 4))
        int32_t rax_29 = *(rbx_2 + 4)
        uint64_t r10_2 = zx.q(r11)
        int32_t rdx_22 = not.d(r13_2 << 0xf) + r13_2
        uint64_t rdx_26 = not.q(zx.q(rdi.d) << 0x20) + rdi
        uint32_t r9_8 = ((zx.q(rdx_22 u>> 0xa) ^ zx.q(rdx_22)) * 9).d
        uint32_t r9_9 = r9_8 ^ r9_8 u>> 6
        uint64_t rdx_27 = rdx_26 ^ rdx_26 u>> 0x16
        uint64_t rdx_28 = rdx_27 + not.q(rdx_27 << 0xd)
        uint64_t rdx_29 = zx.q(r9_9 + not.d(r9_9 << 0xb))
        uint64_t r8_4 = (rdx_28 u>> 8 ^ rdx_28) * 9
        uint64_t r8_5 = r8_4 ^ r8_4 u>> 0xf
        uint64_t r8_6 = r8_5 + not.q(r8_5 << 0x1b)
        uint64_t r9_14 = (zx.q(((r8_6 u>> 0x1f).d ^ r8_6.d ^ 0xfc955b95) * 0xf4247)
            ^ zx.q(rdx_29.d) u>> 0x10 ^ rdx_29) & zx.q(var_e0:4.d - 1)
        *(var_f0.q + (r10_2 << 2)) = *(var_f0:8.q + (r9_14 << 2))
        *(var_f0:8.q + (r9_14 << 2)) = r10_2.d
        var_d0:4.d += 1
        var_d0.d += 1
        uint64_t* r8_7 = var_100:8.q + r10_2 * 0x18
        
        if (r8_7 != 0)
            *r8_7 = rdi
            r8_7[1].d = r13_2
            r8_7[2].d = rax_29
        
        rbx_2 += 0xc
        uint64_t temp1_1 = r12
        r12 -= 1
        
        if (temp1_1 == 1)
            break
        
        r11 += 1

class physx::PxCollection* result_1 = PxCreateCollection()

if ((int.q(float.s(r14) f* 1.33333337f)).d + 1 u> *(result_1 + 0x64))
    sub_1427cdef0(result_1 + 0x40, (int.q(float.s(r14) f* 1.33333337f)).d + 1)

uint64_t rax_32 = zx.q(arg_8)

if (rax_32.d != 0 && (int.q(float.s(rax_32) f* 1.33333337f)).d + 1 u> *(result_1 + 0x2c))
    sub_1427cdef0(result_1 + 8, (int.q(float.s(rax_32) f* 1.33333337f)).d + 1)

void* rcx_90 = var_108
void* r8_8 = rdx
void** const var_88 = &data_1434cd600
void* r13_6 = (zx.q(neg.d(rcx_90.d)) & 0xf) + rcx_90
void* var_70 = r9
void* rax_36 = zx.q(rax_8) + r13_6
void* var_78 = r8_8
int128_t* var_60 = &var_100
int64_t* var_58 = arg_18
int32_t var_50 = rax
void* var_68 = r13_6
void* rdx_42 = (zx.q(neg.d(rax_36.d)) & 0xf) + rax_36
void* var_80 = rdx_42

if (r14.d != 0)
    while (true)
        r14 = zx.q(r14.d - 1)
        void* rcx_91 = rcx_90 + (zx.q(neg.d(rcx_90.d)) & 0xf)
        var_108 = rcx_91
        int16_t r12_1 = *(rcx_91 + 8)
        int64_t* rax_43 = (*(*arg2 + 0x18))(arg2, zx.q(r12_1))
        int64_t r9_15 = *rax_43
        int64_t rax_44 = (*(r9_15 + 0x38))(rax_43, &var_108, &var_88, r9_15)
        
        if (rax_44 == 0)
            uint32_t var_110_1 = zx.d(r12_1)
            physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
                "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
            "hysXExtensions\src\serialization\Binary\SnBinaryDeserialization.cpp", 
                0x115, "Cannot create class instance for concrete type %d.")
            (*(*result_1 + 0x70))(result_1)
            goto label_1427cd8cb
        
        uint64_t r8_10 = zx.q(*(result_1 + 0x6c))
        uint64_t r9_17 = zx.q(r8_10.d) << 4
        int64_t rdx_48 = not.q(rax_44 << 0x20) + rax_44
        int64_t rdx_49 = rdx_48 ^ rdx_48 u>> 0x16
        int64_t rdx_50 = rdx_49 + not.q(rdx_49 << 0xd)
        int64_t rcx_96 = (rdx_50 u>> 8 ^ rdx_50) * 9
        int64_t rcx_97 = rcx_96 ^ rcx_96 u>> 0xf
        int64_t rcx_98 = rcx_97 + not.q(rcx_97 << 0x1b)
        *(result_1 + 0x6c) = (r8_10 + 1).d
        uint64_t rdx_55 =
            (zx.q((rcx_98 u>> 0x1f).d) ^ zx.q(rcx_98.d)) & zx.q(*(result_1 + 0x64) - 1)
        *(*(result_1 + 0x50) + (r8_10 << 2)) = *(*(result_1 + 0x58) + (rdx_55 << 2))
        *(*(result_1 + 0x58) + (rdx_55 << 2)) = r8_10.d
        *(result_1 + 0x74) += 1
        *(result_1 + 0x70) += 1
        int64_t* r9_18 = r9_17 + *(result_1 + 0x48)
        
        if (r9_17 != neg.q(*(result_1 + 0x48)))
            *r9_18 = rax_44
            r9_18[1] = 0
        
        if (r14.d == 0)
            r8_8 = rdx
            break
        
        rcx_90 = var_108
        rdx_42 = (rdx_42 + 0xf) & 0xfffffffffffffff0

if (arg_8 u> 0)
    uint64_t i_1
    
    do
        int64_t rcx_102 = *rsi
        uint64_t r8_11 = zx.q(*(result_1 + 0x34))
        void* r14_2 = zx.q(*(r8_8 + ((zx.q(*(rsi + 8)) & 0x7fffffff) << 3))) + r13_6
        uint64_t r9_20 = zx.q(r8_11.d) << 4
        int64_t rcx_103 = rcx_102 + not.q(rcx_102 << 0x20)
        arg_8.q = r14_2
        int64_t rcx_104 = rcx_103 ^ rcx_103 u>> 0x16
        int64_t rcx_105 = rcx_104 + not.q(rcx_104 << 0xd)
        int64_t rcx_106 = (rcx_105 u>> 8 ^ rcx_105) * 9
        int64_t rcx_107 = rcx_106 ^ rcx_106 u>> 0xf
        int64_t rcx_108 = rcx_107 + not.q(rcx_107 << 0x1b)
        *(result_1 + 0x34) = (r8_11 + 1).d
        uint64_t rdx_60 =
            (zx.q((rcx_108 u>> 0x1f).d) ^ zx.q(rcx_108.d)) & zx.q(*(result_1 + 0x2c) - 1)
        *(*(result_1 + 0x18) + (r8_11 << 2)) = *(*(result_1 + 0x20) + (rdx_60 << 2))
        *(*(result_1 + 0x20) + (rdx_60 << 2)) = r8_11.d
        *(result_1 + 0x3c) += 1
        *(result_1 + 0x38) += 1
        int64_t* r9_21 = r9_20 + *(result_1 + 0x10)
        
        if (r9_20 != neg.q(*(result_1 + 0x10)))
            *r9_21 = *rsi
            r9_21[1] = r14_2
        
        void** rax_85 = sub_1427cdb10(result_1 + 0x40, &arg_8, &arg_18)
        
        if (arg_18.b == 0 && rax_85 != 0)
            *rax_85 = r14_2
            rax_85[1] = 0
        
        int64_t rcx_113 = *rsi
        rsi += 0x10
        i_1 = i_2
        i_2 -= 1
        r8_8 = rdx
        rax_85[1] = rcx_113
    while (i_1 != 1)

PxAddCollectionToPhysics(result_1)
result = result_1
label_1427cd8cb:
int64_t rbx_3 = var_100.q
var_88 = &data_1434cd5e8

if (rbx_3 != 0)
    class physx::PxAllocatorCallback* rax_86 = physx::shdfnd::getAllocator()
    int64_t r8_13 = *rax_86
    (*(r8_13 + 0x10))(rax_86, rbx_3, r8_13)

return result
