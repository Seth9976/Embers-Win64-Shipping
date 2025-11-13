// 函数: sub_1418445b0
// 地址: 0x1418445b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7d8
int64_t rax_1 = __security_cookie ^ &var_7d8
CRITICAL_SECTION criticalSection
InitializeCriticalSection(&criticalSection)
SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
int64_t var_7a8 = arg1
void*** var_488 = nullptr
CRITICAL_SECTION* var_7b0 = &criticalSection
void** const var_478 = &data_142d42ed8
int128_t var_470 = var_7b0.o
void*** var_4c8 = nullptr
int64_t* (* var_498)(int64_t* arg1, int64_t* arg2) = sub_14182a690
void*** var_508 = nullptr
var_7b0 = &criticalSection
int64_t var_6f8[0x2]
var_6f8[0] = 0
void** const var_4b8 = &data_142d42ed8
int64_t* (* var_4d8)(int64_t* arg1, int64_t* arg2) = sub_14182a690
int32_t var_7b4
int32_t* var_708 = &var_7b4
int128_t var_4b0 = var_7b0.o
void** const var_4f8 = &data_142d42ed8
int64_t* (* var_518)(int64_t* arg1, int64_t* arg2) = sub_14182a5d0
var_7b4 = 0
int128_t var_4f0 = arg7.o
int64_t var_6e8 = 0
void* var_738
int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_141817240(&var_738, 3, &var_498, &var_6f8, arg5, arg6)
int64_t var_6b8[0x2]
var_6b8[0] = 0
int64_t var_6a8 = 0
void* var_748
int128_t zmm2_1
int128_t zmm3_1
zmm2_1, zmm3_1 = sub_141817240(&var_748, 3, &var_4d8, &var_6b8, zmm2, zmm3)
int64_t var_678[0x2]
var_678[0] = 0
int64_t var_668 = 0
void* var_758
sub_141816bc0(&var_758, 3, &var_518, &var_678, zmm2_1, zmm3_1)
void* rbx_1 = var_738

while (true)
    bool z_1
    
    if (0 == *(rbx_1 + 0x78))
        *(rbx_1 + 0x78) = 0
        z_1 = true
    else
        int64_t rax_3
        rax_3.b = *(rbx_1 + 0x78)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx_5 = *(var_738 + 0x70)
    (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)

void* rcx_6 = var_738
int64_t* var_790 = *(rcx_6 + 0x80)
int64_t* rax_7 = *(rcx_6 + 0x88)

if (rax_7 != 0)
    rax_7[1].d += 1

void* rbx_2 = var_748

while (true)
    bool z_2
    
    if (0 == *(rbx_2 + 0x78))
        *(rbx_2 + 0x78) = 0
        z_2 = true
    else
        int64_t rax_8
        rax_8.b = *(rbx_2 + 0x78)
        z_2 = false
    
    if (not(z_2))
        break
    
    int64_t* rcx_7 = *(var_748 + 0x70)
    (*(*rcx_7 + 0x20))(rcx_7, 0xffffffff, 0)

void* rcx_8 = var_748
int64_t* var_7a0 = *(rcx_8 + 0x80)
int64_t* rax_12 = *(rcx_8 + 0x88)

if (rax_12 != 0)
    rax_12[1].d += 1

void* rbx_3 = var_758

while (true)
    bool z_3
    
    if (0 == *(rbx_3 + 0x78))
        *(rbx_3 + 0x78) = 0
        z_3 = true
    else
        int64_t rax_13
        rax_13.b = *(rbx_3 + 0x78)
        z_3 = false
    
    if (not(z_3))
        break
    
    int64_t* rcx_9 = *(var_758 + 0x70)
    (*(*rcx_9 + 0x20))(rcx_9, 0xffffffff, 0)

void* rbx_4 = var_758
int64_t var_638 = 0
int32_t var_630 = 0
int32_t var_60c = 0x80
int64_t var_628
__builtin_memset(&var_628, 0, 0x1c)
int32_t var_608 = 0xffffffff
int32_t var_604 = 0
int64_t var_5f8 = 0
int32_t var_5f0 = 0
sub_1418235f0(&var_638, rbx_4 + 0x80)
int64_t var_5e8 = 0
int32_t var_5e0 = 0
int32_t var_5bc = 0x80
int64_t var_5d8
__builtin_memset(&var_5d8, 0, 0x1c)
int32_t var_5b8 = 0xffffffff
int32_t var_5b4 = 0
int64_t var_5a8 = 0
int32_t var_5a0 = 0
sub_1418235f0(&var_5e8, rbx_4 + 0xd0)
sub_140b19e60()
void* rdx_2 = data_1439a8bd0
(*(rdx_2 + 0x48))(&data_1439a8bd0, rdx_2)
bool z_4

if (var_790 != 0 && var_7a0 != 0)
    if (0 == var_7b4)
        var_7b4 = 0
        z_4 = true
    else
        z_4 = false

int64_t* r12

if (var_790 == 0 || var_7a0 == 0 || z_4)
    r12.b = 0
else
    int64_t* rsi_1 = var_7a0
    int64_t rcx_33
    
    if (var_630 != var_604 || var_5e0 != var_5b4)
        int64_t var_408
        sub_141823570(&var_638, sub_141835260(&var_638, &var_408, &var_5e8))
        int32_t var_3c0_1 = 0
        int64_t var_3c8
        
        if (var_3c8 != 0)
            sub_140a74f90(var_3c8)
        
        sub_14059ad90(&var_408, 0)
        int64_t var_3e8
        
        if (var_3e8 != 0)
            sub_140a74f90(var_3e8)
        
        rcx_33 = var_408
    else
        int64_t* rcx_12 = var_790
        int64_t* var_720
        int64_t* rax_20 = (*(*rcx_12 + 0x88))(rcx_12, &var_720)
        int64_t var_598
        __builtin_memset(&var_598, 0, 0x2c)
        int32_t var_56c_1 = 0x80
        int32_t var_568_1 = 0xffffffff
        int32_t var_564_1 = 0
        int64_t var_558_1 = 0
        int32_t var_550_1 = 0
        sub_140a5bc30(&var_598, rax_20)
        int32_t i_4
        int32_t i_2 = i_4
        int64_t* rbx_5 = var_720
        
        if (i_2 != 0)
            int32_t i
            
            do
                int64_t rcx_14 = *rbx_5
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                rbx_5 = &rbx_5[2]
                i = i_2
                i_2 -= 1
            while (i != 1)
            rbx_5 = var_720
        
        if (rbx_5 != 0)
            sub_140a74f90(rbx_5)
        
        sub_140a5bc30(&var_5e8, (*(*rsi_1 + 0x88))(rsi_1, &var_7b0))
        int32_t i_3 = arg2
        CRITICAL_SECTION* rbx_6 = var_7b0
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo = rbx_6->DebugInfo
                
                if (DebugInfo != 0)
                    sub_140a74f90(DebugInfo)
                
                rbx_6 = &rbx_6->OwningThread
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rbx_6 = var_7b0
        
        if (rbx_6 != 0)
            sub_140a74f90(rbx_6)
        
        int64_t var_458
        sub_141823570(&var_638, sub_141835260(&var_598, &var_458, &var_5e8))
        int32_t var_410_1 = 0
        int64_t var_418
        
        if (var_418 != 0)
            sub_140a74f90(var_418)
        
        sub_14059ad90(&var_458, 0)
        int64_t var_438
        
        if (var_438 != 0)
            sub_140a74f90(var_438)
        
        int64_t rcx_24 = var_458
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int32_t var_550_2 = 0
        
        if (var_558_1 != 0)
            sub_140a74f90(var_558_1)
        
        sub_14059ad90(&var_598, 0)
        int64_t var_578
        
        if (var_578 != 0)
            sub_140a74f90(var_578)
        
        rcx_33 = var_598
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    void** var_3b8
    sub_14181e1b0(&var_3b8)
    uint64_t var_2e0
    uint64_t rbx_7 = var_2e0
    int32_t var_2d8
    int32_t rdi_1 = var_2d8
    var_2e0 = 0
    var_2d8.q = 0
    int32_t rax_25 = rsi_1[1].d
    char var_3ac_1 = *(rsi_1 + 0xc)
    int32_t var_3a8_1 = rsi_1[2].d
    uint64_t var_3a0[0x2]
    sub_140597df0(&var_3a0, &rsi_1[3])
    uint64_t var_390[0x2]
    sub_140597df0(&var_390, &rsi_1[5])
    uint64_t var_380[0x2]
    sub_140597df0(&var_380, &rsi_1[7])
    uint64_t var_370[0x2]
    sub_140597df0(&var_370, &rsi_1[9])
    void var_360
    sub_1418235f0(&var_360, &rsi_1[0xb])
    uint64_t var_310[0x2]
    sub_140597df0(&var_310, &rsi_1[0x15])
    uint64_t var_300[0x2]
    sub_140597df0(&var_300, &rsi_1[0x17])
    uint64_t var_2f0[0x2]
    sub_140597df0(&var_2f0, &rsi_1[0x19])
    sub_140597df0(&var_2e0, &rsi_1[0x1b])
    void var_2b0
    sub_14094d9d0(&var_2b0, &rsi_1[0x21])
    uint64_t rcx_45 = var_2e0
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    var_2e0 = rbx_7
    int32_t var_2d8_1 = rdi_1
    int32_t var_2d4
    int32_t var_2d4_1 = var_2d4
    sub_140597df0(&var_390, arg4)
    void var_2c0
    rbx_7.b = sub_141830a20(&var_638, &var_790, &var_2c0) != 0
    char rax_29
    char rdx_24
    rax_29, rdx_24 = sub_141830a20(&var_5e8, &var_7a0, &var_2c0)
    
    if (rax_29 == 0 || rbx_7.b == 0)
        rbx_7.b = 0
    else
        rbx_7.b = 1
    
    sub_141845210(&var_2c0, rdx_24)
    uint64_t var_2d0[0x2]
    
    if (sub_141845fd0(&var_2c0, &var_790, &var_7a0, &var_2d0) == 0 || rbx_7.b == 0)
        r12.b = 0
    else
        r12.b = 1
        void*** rax_31 = sub_141830ee0()
        int32_t rcx_52
        int512_t zmm1_1
        rcx_52, zmm1_1 = sub_141840c70(&var_3b8)
        uint32_t rsi_2 = arg3[1].d
        int64_t rbx_8 = *arg3
        int16_t* var_778 = nullptr
        uint32_t var_770_1 = rsi_2
        sub_1405a4c70(&var_778, sbb.d(rcx_52, rcx_52, rsi_2 != 0) + 4 + rsi_2, 0)
        memcpy(var_778, rbx_8, rsi_2 * 2)
        sub_140a20ba0(&var_778, &data_142fe4c20, 3)
        int32_t rax_35 = var_3b8[0x2c](&var_3b8)
        int16_t* r13_1 = var_778
        int16_t* const r15_2 = &data_142d40450
        rsi_2.b = rax_25 s>= rax_35
        
        if (rax_25 s>= rax_35)
            sub_140a464c0()
            int16_t* const rdx_29 = &data_142d40450
            
            if (var_770_1 != 0)
                rdx_29 = r13_1
            
            char const (* r9_4)[0x4] = data_14399ea08
            int64_t* rax_36 = (*(r9_4 + 0x20))(&data_14399ea08, rdx_29, 0, r9_4)
            rsi_2.b = rax_36 != 0
            
            if (rax_36 != 0)
                if (rax_25 s< 0xe)
                    int16_t* var_768 = nullptr
                    int32_t var_760_1 = 0
                    var_3b8[0x2b](&var_3b8, &var_768, rax_25)
                    int16_t* const rdx_32 = &data_142d40450
                    
                    if (var_760_1 != 0)
                        rdx_32 = var_768
                    
                    void var_f8
                    sub_140685ed0(&var_f8, rdx_32)
                    int64_t var_70
                    int32_t var_68
                    (*(*rax_36 + 0x150))(rax_36, var_70, sx.q(var_68))
                    int64_t var_78
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    int16_t* rcx_63 = var_768
                    
                    if (rcx_63 != 0)
                        sub_140a74f90(rcx_63)
                else
                    rsi_2 = zx.d(sub_14184e0e0(rax_36, &var_3b8, rax_25, zmm1_1))
                
                if ((*(*rax_36 + 0x1b8))(rax_36) == 0 || rsi_2.b == 0)
                    rsi_2.b = 0
                else
                    rsi_2.b = 1
            
            if (rax_36 != 0)
                (**rax_36)(rax_36, 1)
        
        char rax_45
        
        if (rsi_2.b != 0)
            int16_t* r8_12 = &data_142d40450
            
            if (var_770_1 != 0)
                r8_12 = r13_1
            
            if (arg3[1].d != 0)
                r15_2 = *arg3
            
            rax_45 = (*rax_31)[0xe](rax_31, r15_2, r8_12)
        
        if (rsi_2.b == 0 || rax_45 == 0)
            r12.b = 0
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        if (rax_31 != 0)
            (**rax_31)(rax_31, 1)
    
    sub_1418222d0(&var_3b8)

sub_141822010(&var_638)

if (rax_12 != 0)
    rax_12[1].d -= 1
    
    if (rax_12[1].d == 1)
        (**rax_12)(rax_12)
        int32_t rax_49 = *(rax_12 + 0xc)
        *(rax_12 + 0xc) -= 1
        
        if (rax_49 == 1)
            (*(*rax_12 + 8))(rax_12, 1)

if (rax_7 != 0)
    rax_7[1].d -= 1
    
    if (rax_7[1].d == 1)
        (**rax_7)(rax_7)
        int32_t r14_1 = *(rax_7 + 0xc)
        *(rax_7 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*(*rax_7 + 8))(rax_7, zx.q(r14_1))

sub_1405970a0(&var_758)
sub_1405970a0(&var_748)
sub_1405970a0(&var_738)

if (var_518 != 0)
    void** const* rcx_80 = &var_4f8
    
    if (var_508 != 0)
        rcx_80 = var_508
    
    (*rcx_80)[2](rcx_80)

if (var_4d8 != 0)
    void** const* rcx_81 = &var_4b8
    
    if (var_4c8 != 0)
        rcx_81 = var_4c8
    
    (*rcx_81)[2](rcx_81)

if (var_498 != 0)
    void** const* rcx_82 = &var_478
    
    if (var_488 != 0)
        rcx_82 = var_488
    
    void** const rdx_37 = *rcx_82
    rdx_37[2](rcx_82, rdx_37)

DeleteCriticalSection(&criticalSection)
__security_check_cookie(rax_1 ^ &var_7d8)
return zx.q(r12.b)
