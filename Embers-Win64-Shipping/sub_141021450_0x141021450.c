// 函数: sub_141021450
// 地址: 0x141021450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_678
int64_t rax_1 = __security_cookie ^ &var_678
int128_t* var_650 = arg2
void var_648
int64_t* rax_2 = sub_141022fc0(&var_648, arg2, arg3)
int64_t i_5 = 6
uint128_t var_348
int128_t* rdx = &var_348
int64_t i_3 = 6
int128_t zmm0_1
uint128_t zmm1_1
int64_t i

do
    rdx = &rdx[8]
    zmm0_1 = *rax_2
    zmm1_1 = *(rax_2 + 0x10)
    rax_2 = &rax_2[0x10]
    rdx[-8] = zmm0_1
    zmm0_1 = *(rax_2 - 0x60)
    rdx[-7] = zmm1_1
    zmm1_1 = *(rax_2 - 0x50)
    rdx[-6] = zmm0_1
    zmm0_1 = *(rax_2 - 0x40)
    rdx[-5] = zmm1_1
    zmm1_1 = *(rax_2 - 0x30)
    rdx[-4] = zmm0_1
    zmm0_1 = *(rax_2 - 0x20)
    rdx[-3] = zmm1_1
    zmm1_1 = *(rax_2 - 0x10)
    rdx[-2] = zmm0_1
    rdx[-1] = zmm1_1
    i = i_3
    i_3 -= 1
while (i != 1)
void* rcx_1 = arg4
int128_t* rax_3 = &var_348
int64_t i_1

do
    rcx_1 += 0x80
    zmm0_1 = *rax_3
    zmm1_1 = rax_3[1]
    rax_3 = &rax_3[8]
    *(rcx_1 - 0x80) = zmm0_1
    zmm0_1 = rax_3[-6]
    *(rcx_1 - 0x70) = zmm1_1
    zmm1_1 = rax_3[-5]
    *(rcx_1 - 0x60) = zmm0_1
    zmm0_1 = rax_3[-4]
    *(rcx_1 - 0x50) = zmm1_1
    zmm1_1 = rax_3[-3]
    *(rcx_1 - 0x40) = zmm0_1
    zmm0_1 = rax_3[-2]
    *(rcx_1 - 0x30) = zmm1_1
    zmm1_1 = rax_3[-1]
    *(rcx_1 - 0x20) = zmm0_1
    *(rcx_1 - 0x10) = zmm1_1
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
int32_t rbx = (i_5 + 1).d

if (data_143f0f1d8 == i_5.d)
    rbx = (rbx << (data_1439c7a34).b) - 1

int64_t i_4 = sx.q(*(arg4 + 0x248))
int64_t r15 = i_4 * 0x2c
*(arg4 + 0x258) = rbx
memset(&var_348, 0, r15 + 0xe0)
int32_t var_2f8 = *(arg4 + 0x2c8)
char var_2f4 = *(arg4 + 0x60)
char var_2f3 = *(arg4 + 0x64)
int32_t var_2f0 = *(arg4 + 0x1a8)
int32_t var_2c4 = *(arg4 + 0x1d4)
int32_t var_288 = *(arg4 + 0x220)
int32_t var_284 = *(arg4 + 0x224)
int32_t var_280 = *(arg4 + 0x24c)
int64_t var_27c = *(arg4 + 0x250)
int32_t var_274 = rbx
int32_t var_270 = *(arg4 + 0x270)
zmm1_1 = *(arg4 + 0x288)
var_348 = *(arg4 + 0x278)
uint128_t var_338 = zmm1_1
uint128_t var_328 = *(arg4 + 0x298)
uint128_t var_318 = *(arg4 + 0x2a8)
uint128_t var_308 = *(arg4 + 0x2b8)
uint128_t var_2dc = *(arg4 + 0x1bc)
uint128_t var_2ec = *(arg4 + 0x1ac)
uint64_t var_2cc = *(arg4 + 0x1cc)
uint128_t var_2b0 = *(arg4 + 0x1e8)
uint64_t var_290 = *(arg4 + 0x208)
uint128_t var_2c0 = *(arg4 + 0x1d8)
uint128_t var_2a0 = *(arg4 + 0x1f8)

if (i_4 s> 0)
    void var_264
    void* rcx_4 = &var_264
    void* rdx_1 = arg4 + 0x68
    void* r8_1 = arg4 + 0x228
    int64_t i_2
    
    do
        int32_t rax_14 = *r8_1
        r8_1 += 4
        *(rcx_4 - 4) = rax_14
        rcx_4 += 0x2c
        uint128_t zmm0_2 = *rdx_1
        zmm1_1 = *(rdx_1 + 0x10)
        rdx_1 += 0x28
        *(rcx_4 - 0x2c) = zmm0_2
        zmm0_2 = zx.o(*(rdx_1 - 8))
        *(rcx_4 - 0x1c) = zmm1_1
        *(rcx_4 - 0xc) = zmm0_2.q
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

*(arg4 + 0x2d0) = sub_140a6b260(&var_348, (r15 + 0xe0).d)
AcquireSRWLockShared(arg1 + 0xb0)
void*** result_1 = nullptr
void* rdi_1

if (*(arg1 + 0x18) == *(arg1 + 0x44))
label_1410217b3:
    rdi_1 = nullptr
else
    void* rcx_7 = *(arg1 + 0x50)
    void* r8_2 = arg1 + 0x48
    
    if (rcx_7 != 0)
        r8_2 = rcx_7
    
    int32_t rbx_2 = *(r8_2 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(*(arg4 + 0x2d0))) << 2))
    
    if (rbx_2 == 0xffffffff)
    label_1410217b3_1:
        rdi_1 = nullptr
    else
        int64_t r14_1 = *(arg1 + 0x10)
        
        while (true)
            rdi_1 = sx.q(rbx_2) * 0x310 + r14_1
            void var_658
            
            if (sub_141010a20(&var_658, rdi_1, arg4) != 0)
                break
            
            rbx_2 = *(rdi_1 + 0x308)
            
            if (rbx_2 == 0xffffffff)
                goto label_1410217b3_2
        
        if (rbx_2 == 0xffffffff)
        label_1410217b3_2:
            rdi_1 = nullptr

void* rbx_3 = rdi_1 + 0x300

if (rdi_1 == 0)
    rbx_3 = nullptr

void*** result

if (rbx_3 == 0)
    ReleaseSRWLockShared(arg1 + 0xb0)
    result = nullptr
else
    void* rbx_4 = *rbx_3
    ReleaseSRWLockShared(arg1 + 0xb0)
    
    if (rbx_4 == 0)
        result = nullptr
    else
        int64_t rax_21
        
        if (*(rbx_4 + 0x28) == 0)
            rax_21 = sub_141026e90(rbx_4)
        else
            rax_21 = *(rbx_4 + 0x10)
        
        if (rax_21 == 0)
            result = nullptr
        else
            void*** rax_22 = j_sub_140a82f30(0xf8)
            
            if (rax_22 != 0)
                result_1 = sub_14100aeb0(rax_22, var_650, arg3, rbx_4)
            
            result = result_1

__security_check_cookie(rax_1 ^ &var_678)
return result
