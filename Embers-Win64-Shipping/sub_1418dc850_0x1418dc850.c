// 函数: sub_1418dc850
// 地址: 0x1418dc850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5d8
int64_t rax_1 = __security_cookie ^ &var_5d8
int64_t* rsi = nullptr
int64_t performanceCount_1 = arg4
int64_t* performanceCount_4 = arg3
int64_t* performanceCount = arg3
int64_t* var_590 = arg1
int32_t var_5b8
int32_t var_5a8
int64_t var_588

if (*(arg2 + 0x1a) == 0)
    EnterCriticalSection(&data_143efb358)
    int64_t* performanceCount_8 = performanceCount_4
    rsi = 5
    int64_t* i
    
    do
        void* r10_1 = *performanceCount_8
        
        if (r10_1 != 0)
            void* r11_1 = *(arg2 + 0x300)
            int64_t r9 = sx.q(*(r11_1 + 0x50))
            void* const rcx_2
            
            if (*(r10_1 + 0xf8) == *(r10_1 + 0x124))
            label_1418dc930:
                rcx_2 = nullptr
            else
                void* rcx = *(r10_1 + 0x130)
                void* r8 = r10_1 + 0x128
                
                if (rcx != 0)
                    r8 = rcx
                
                int32_t rax_3 = *(r8 + (((sx.q(*(r10_1 + 0x138)) - 1) & r9) << 2))
                
                if (rax_3 == 0xffffffff)
                label_1418dc930_1:
                    rcx_2 = nullptr
                else
                    int64_t r8_1 = *(r10_1 + 0xf0)
                    
                    while (true)
                        int64_t rdx_3 = sx.q(rax_3) * 3
                        rcx_2 = r8_1 + (rdx_3 << 3)
                        
                        if (*(r8_1 + (rdx_3 << 3)) == r9.d)
                            break
                        
                        rax_3 = *(rcx_2 + 0x10)
                        
                        if (rax_3 == 0xffffffff)
                            goto label_1418dc930_2
                    
                    if (rax_3 == 0xffffffff)
                    label_1418dc930_2:
                        rcx_2 = nullptr
            
            void* rax_4 = rcx_2 + 8
            
            if (rcx_2 == 0)
                rax_4 = nullptr
            
            int64_t rcx_3
            
            if (rax_4 == 0)
                int32_t rax_5 = *(r10_1 + 0x140)
                char r8_2 = *(r10_1 + 0x144)
                var_5a8 = r9.d
                var_5b8 = rax_5
                var_588 = sub_1418ddce0(r11_1, r10_1 + 0x158, r8_2, r10_1 + 0x20)
                sub_141000b00(r10_1 + 0xf0, &var_5a8, &var_588)
                rcx_3 = var_588
            else
                rcx_3 = *rax_4
            
            *(arg2 - performanceCount_4 + performanceCount_8 + 0x470) = rcx_3
        
        performanceCount_8 = &performanceCount_8[1]
        i = rsi
        rsi -= 1
    while (i != 1)
    LeaveCriticalSection(&data_143efb358)
    performanceCount_4 = performanceCount

int32_t var_438 = 0x1c
void var_434
memset(&var_434, 0, 0x8c)
int64_t i_4 = sx.q(*(arg2 + 0x328))
int64_t var_3d0 = *(*(arg2 + 0x300) + 0x1e0)
int64_t var_38c
var_38c.d = i_4.d
int32_t var_3a8 = 0x1a
int64_t var_3a4
__builtin_memset(&var_3a4, 0, 0x34)
void var_1d8
memset(&var_1d8, 0, 0x100)
void* rax_8 = performanceCount_4[1]
uint32_t r8_4 = -1

if (rax_8 != 0)
    r8_4 = *(rax_8 + 0xa0)

int64_t i_3 = i_4

if (i_4.d s> 0)
    void* rdx_6 = *(arg2 + 0x320)
    void var_1d4
    void* rcx_9 = &var_1d4
    int64_t i_1
    
    do
        bool cond:1_1 = *rdx_6 != 0
        rdx_6 += 8
        rcx_9 += 0x20
        int32_t rax_9
        rax_9.b = cond:1_1
        *(rcx_9 - 0x24) = rax_9
        *(rcx_9 - 0x18) = zx.d(*(rdx_6 - 7))
        *(rcx_9 - 0x20) = zx.d(*(rdx_6 - 6))
        *(rcx_9 - 0x1c) = zx.d(*(rdx_6 - 5))
        *(rcx_9 - 0xc) = zx.d(*(rdx_6 - 4))
        *(rcx_9 - 0x14) = zx.d(*(rdx_6 - 3))
        *(rcx_9 - 0x10) = zx.d(*(rdx_6 - 2))
        uint32_t rax_16 = zx.d(*(rdx_6 - 1))
        
        if ((r8_4.b & 1) == 0)
            rax_16 = rsi.d
        
        r8_4 u>>= 1
        *(rcx_9 - 8) = rax_16
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int128_t zmm0 = data_142d3f670
var_38c = &var_1d8
int32_t var_4a0 = 0x16
int64_t var_49c
__builtin_memset(&var_49c, 0, 0x2c)
int64_t var_46c
__builtin_memset(&var_46c, 0, 0x2c)
int16_t rax_17 = *(arg2 + 0x314)
int64_t var_48c
var_48c.d = 1
int64_t var_384
var_384:4.o = zmm0

if (1 u>= rax_17)
    rax_17 = 1

int64_t var_484
var_484:4.d = 1
int64_t var_45c
var_45c.d = zx.d(rax_17)
int32_t var_470 = 0x18
void var_2c8
memset(&var_2c8, 0, 0xf0)
int32_t var_424 = rsi.d
int64_t r13
r13.b = 0
void* var_420 = &var_2c8
int32_t r8_5 = rsi.d
int32_t i_2 = rsi.d
void* rdi_2 = arg2 - performanceCount_4

do
    int64_t r9_2 = *(performanceCount_4 + rdi_2 + 0x470)
    
    if (r9_2 != 0)
        uint64_t r10_2 = zx.q(r8_5)
        uint64_t rdx_8 = r10_2 * 6
        *(&var_2c8 + (rdx_8 << 3)) = 0x12
        
        if (i_2 == 0)
            jump(&__dos_header.e_magic[zx.q(*((sx.q(rsi.d) << 2) + 0x1418dd338))])
        
        if (i_2 == 1)
            jump(&__dos_header.e_magic[zx.q(*((sx.q(3) << 2) + 0x1418dd338))])
        
        if (i_2 == 2)
            jump(&__dos_header.e_magic[zx.q(*((sx.q(4) << 2) + 0x1418dd338))])
        
        if (i_2 == 3)
            jump(&__dos_header.e_magic[zx.q(*((sx.q(1) << 2) + 0x1418dd338))])
        
        if (i_2 == 4)
            jump(&__dos_header.e_magic[zx.q(*((sx.q(2) << 2) + 0x1418dd338))])
        
        void var_2b4
        *(&var_2b4 + (rdx_8 << 3)) = 0x7fffffff
        r13 = 1
        void var_2b0
        *(&var_2b0 + (rdx_8 << 3)) = r9_2
        void* rdx_9 = *performanceCount_4
        var_5b8 = *(rdx_9 + 0xbc)
        void var_d8
        sub_140a54040(&var_d8 + r10_2 * 0x18, 0x18, "main_%0.8x_%0.8x", sx.q(*(rdx_9 + 0x160)) << 2)
        uint64_t r8_6 = zx.q(var_424)
        r8_5 = r8_6.d + 1
        var_424 = r8_5
        void var_2a8
        *(&var_2a8 + r8_6 * 0x30) = &var_d8 + r8_6 * 0x18
    
    i_2 += 1
    performanceCount_4 = &performanceCount_4[1]
while (i_2 s< 5)

int32_t* rbx_2 = *(arg2 + 0x340)
int64_t var_4ec
__builtin_memset(&var_4ec, 0, 0x2c)
int64_t* performanceCount_2 = rsi
int32_t rdx_11 = rsi.d
int32_t r8_7 = rsi.d
int64_t rax_26 = sx.q(*(arg2 + 0x348))
int32_t var_4f0 = 0x13
performanceCount = rsi
int32_t var_594 = rsi.d
void* r14 = &rbx_2[rax_26 * 2]

if (rbx_2 != r14)
    do
        int64_t rsi_1 = sx.q(rdx_11)
        rdx_11 = (rsi_1 + 1).d
        
        if (rdx_11 s> r8_7)
            sub_14083a7e0(&performanceCount)
            r8_7 = var_594
            performanceCount_2 = performanceCount
        
        int64_t rcx_19 = rsi_1 * 3
        *(performanceCount_2 + (rcx_19 << 2)) = zx.d(rbx_2[1].w)
        *(performanceCount_2 + (rcx_19 << 2) + 8) = zx.d(*(rbx_2 + 6))
        int32_t rax_29 = *rbx_2
        rbx_2 = &rbx_2[2]
        *(performanceCount_2 + (rcx_19 << 2) + 4) = rax_29
    while (rbx_2 != r14)
    
    rsi = nullptr

CRITICAL_SECTION* rbx_3 = *(arg2 + 0x350)
int64_t* performanceCount_5 = rsi
int32_t r8_8 = rsi.d
void* r12_5 = (sx.q(*(arg2 + 0x358)) << 4) + rbx_3
int64_t var_4dc
var_4dc.d = rdx_11
int64_t* performanceCount_6 = performanceCount_2
int32_t rdx_13 = rsi.d
performanceCount = rsi
int32_t var_594_1 = rsi.d

if (rbx_3 != r12_5)
    do
        int64_t rsi_2 = sx.q(rdx_13)
        rdx_13 = (rsi_2 + 1).d
        
        if (rdx_13 s> r8_8)
            sub_1405a4f90(&performanceCount)
            r8_8 = var_594_1
            performanceCount_5 = performanceCount
        
        void* rcx_23 = &performanceCount_5[rsi_2 * 2]
        *(rcx_23 + 4) = rbx_3->DebugInfo:4.d
        *(rcx_23 + 8) = rbx_3->LockCount
        *rcx_23 = rbx_3->DebugInfo.d
        int32_t RecursionCount = rbx_3->RecursionCount
        rbx_3 = &rbx_3->OwningThread
        *(rcx_23 + 0xc) = RecursionCount
    while (rbx_3 != r12_5)
    
    rsi = nullptr

float zmm1 = *(arg2 + 0x368)
int32_t* var_418 = &var_4f0
int32_t* var_3e0 = &var_3a8
int32_t* var_3f0 = &var_470
int32_t* var_400 = &var_4a0
int64_t var_4d4
var_4d4:4.d = rdx_13
int64_t performanceCount_7 = performanceCount_5
int64_t rcx_24 = *(*(arg2 + 0x498) + 0x388)
uint32_t var_3c0 = zx.d(*(arg2 + 0x440))
int64_t var_4bc
__builtin_memset(&var_4bc, 0, 0x1c)
int64_t var_4ac
var_4ac.d = *(arg2 + 0x318)
int32_t var_4c0
int32_t* var_410 = &var_4c0
int64_t var_564
__builtin_memset(&var_564, 0, 0x3c)
int64_t var_534
var_534:4.d = 0x3f800000
int64_t var_54c
var_54c.d = zx.d(*(arg2 + 0x360))
var_54c:4.d = zx.d(*(arg2 + 0x361))
int64_t var_3c8 = rcx_24
var_4c0 = 0x14
int32_t var_568 = 0x17
int64_t var_544
var_544.d = 1
int64_t var_554
var_554.d = rsi.d
var_544:4.d = 1

if (not(zmm1 != 0f))
    var_544:4.d = rsi.d

var_534.d = *(arg2 + 0x364)
int64_t var_53c
var_53c.d = zmm1
var_554:4.d = rsi.d
int32_t var_368 = 0x19
void var_364
memset(&var_364, 0, 0x64)
uint32_t var_34c = zx.d(*(arg2 + 0x36c))
uint32_t var_354 = zx.d(*(arg2 + 0x36d))
uint32_t var_350 = zx.d(*(arg2 + 0x36e))
uint32_t var_348 = zx.d(*(arg2 + 0x370))
uint32_t var_344 = zx.d(*(arg2 + 0x36f))
uint32_t var_340 = zx.d(*(arg2 + 0x371))
uint32_t var_33c = zx.d(*(arg2 + 0x372))
uint32_t var_338 = zx.d(*(arg2 + 0x373))
uint32_t var_334 = zx.d(*(arg2 + 0x374))
int32_t var_330 = *(arg2 + 0x378)
int32_t var_32c = *(arg2 + 0x37c)
int32_t var_328 = *(arg2 + 0x380)
uint32_t var_324 = zx.d(*(arg2 + 0x384))
uint32_t var_320 = zx.d(*(arg2 + 0x385))
uint32_t var_31c = zx.d(*(arg2 + 0x386))
uint32_t var_318 = zx.d(*(arg2 + 0x387))
int32_t var_310 = *(arg2 + 0x38c)
int32_t var_314 = *(arg2 + 0x388)
int32_t var_30c = *(arg2 + 0x390)
int32_t* var_3f8 = &var_568
int32_t* var_3e8 = &var_368
int64_t var_524
__builtin_memset(&var_524, 0, 0x18)
int64_t var_2f8
int64_t var_514 = &var_2f8
__builtin_memset(&var_2f8, 0, 0x24)
var_2f8.d = rsi.d
int32_t var_528 = 0x1b
*(&var_2f8 + 4) = 1
(&var_2f8)[1].d = 8
*(&var_2f8 + 0xc) = 5
var_514.d = 4
int32_t* var_3d8 = &var_528

if (r13.b != 0)
    int32_t var_508 = 0x15
    int64_t var_504_1 = 0
    int64_t var_4fc_1 = 0
    int32_t* var_408_1 = &var_508
    uint32_t var_4f4_1 = zx.d(*(arg2 + 0x316))
    var_544.d = rsi.d

QueryPerformanceCounter(&performanceCount)
int64_t* rsi_3 = var_590
bool cond:6_1
int32_t rax_63

if (rsi_3[0x5b].b == 0)
    var_5b8.q = 0
    rax_63 = data_143efb878(*(*rsi_3 + 8), rsi_3[0x13], 1, &var_438, var_5b8, performanceCount_1)
    var_5a8 = rax_63
label_1418dd2df:
    cond:6_1 = rax_63 == 0
    
    if (rax_63 == 0)
        QueryPerformanceCounter(&performanceCount_1)
        cond:6_1 = var_5a8 == 0
else
    int64_t performanceCount_3 = *(arg2 + 0x3c0)
    EnterCriticalSection(&rsi_3[0x46])
    int32_t* rdx_20
    int32_t rsi_4
    
    if (rsi_3[0x52].d == *(rsi_3 + 0x2bc))
    label_1418dd187:
        rsi_4 = 0
        rdx_20 = nullptr
    else
        void* r8_9 = &rsi_3[0x58]
        void* rcx_28 = *(r8_9 + 8)
        
        if (rcx_28 != 0)
            r8_9 = rcx_28
        
        int32_t rax_60 = *(r8_9 + (((sx.q(rsi_3[0x5a].d) - 1) & sx.q(performanceCount_3.d)) << 2))
        
        if (rax_60 == 0xffffffff)
            goto label_1418dd187
        
        while (true)
            rdx_20 = (sx.q(rax_60) << 5) + rsi_3[0x51]
            
            if (*rdx_20 == performanceCount_3.d)
                break
            
            rax_60 = rdx_20[6]
            
            if (rax_60 == 0xffffffff)
                goto label_1418dd187
        
        if (rax_60 == 0xffffffff)
            goto label_1418dd187
        
        rsi_4 = 0
    
    void* r13_1 = &rdx_20[2]
    
    if (rdx_20 == 0)
        r13_1 = nullptr
    
    if (rsi_3 != -0x230)
        LeaveCriticalSection(&rsi_3[0x46])
    
    performanceCount = nullptr
    var_588 = 0
    
    if (r13_1 == 0)
        int64_t* rax_61 = var_590
        data_143efb868(*(*rax_61 + 8), rax_61[0x13], &performanceCount, 0, var_5b8)
    else
        rsi_4 = *(r13_1 + 8)
    
    int64_t* rcx_32 = var_590
    var_5b8.q = 0
    rax_63 = data_143efb878(*(*rcx_32 + 8), rcx_32[0x13], 1, &var_438, var_5b8, performanceCount_1)
    var_5a8 = rax_63
    cond:6_1 = rax_63 == 0
    
    if (rax_63 == 0)
        if (r13_1 == 0)
            int64_t* r13_2 = var_590
            data_143efb868(*(*r13_2 + 8), r13_2[0x13], &var_588, 0)
            int32_t rsi_5 = var_588.d
            rsi_4 = rsi_5 - performanceCount.d
            bool cond:7_1 = rsi_5 == performanceCount.d
            performanceCount_1 = performanceCount_3
            
            if (cond:7_1)
                rsi_4 = 0x5000
            
            int32_t var_578_1 = rsi_4
            EnterCriticalSection(&rsi_3[0x46])
            var_590.d = performanceCount_3.d
            sub_1418ca110(&r13_2[0x51], &var_590, &performanceCount_1)
            
            if (rsi_3 != -0x230)
                LeaveCriticalSection(&rsi_3[0x46])
            
            rax_63 = var_5a8
        
        *(arg2 + 0x4ac) = rsi_4
        goto label_1418dd2df
rbx_3.b = cond:6_1

if (performanceCount_5 != 0)
    sub_140a74f90(performanceCount_5)

if (performanceCount_2 != 0)
    sub_140a74f90(performanceCount_2)

__security_check_cookie(rax_1 ^ &var_5d8)
return zx.q(rbx_3.b)
