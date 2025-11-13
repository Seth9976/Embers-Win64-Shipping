// 函数: sub_1418e6970
// 地址: 0x1418e6970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_818
int64_t rax_1 = __security_cookie ^ &var_818
void*** result = nullptr
CRITICAL_SECTION* lpCriticalSection = nullptr

if (data_143efb328 != 0)
    lpCriticalSection = &arg1[0x37]

if (lpCriticalSection != 0)
    EnterCriticalSection(lpCriticalSection)

int64_t var_6a8
__builtin_memset(&var_6a8, 0, 0x40)
int64_t var_600
__builtin_memset(&var_600, 0, 0x30)
int64_t var_5b0 = 0
int64_t var_5a8 = 0
int64_t* var_548 = nullptr
int32_t i_5 = 0
int32_t var_538 = 0
int32_t var_534 = 0xffffffff
void var_530
sub_1418cdfd0(&var_530)
int64_t var_578
__builtin_memset(&var_578, 0, 0x2c)
void var_6b8
sub_1418dbf20(arg1, arg2, &var_578, &var_6b8)
int32_t var_7a8 = 0
void* var_778 = &var_6b8
int128_t var_7a0
__builtin_memset(&var_7a0, 0, 0x14)
int512_t zmm1 = sub_1418e08f0(&var_7a8)
int32_t var_788 = 0
int64_t var_7d0 = 0
void** const var_768
memset(&var_768, 0, 0x90)
sub_140b4c2a0(&var_768)
int64_t* r12 = var_7a0.q
var_768 = &data_142d6ad48
int64_t var_6d8 = 0
int64_t var_6c8 = 0
int64_t* var_6d0 = r12
sub_140b552b0(&var_768, 1)
var_768[0x1b](&var_768, 0)
r12[1].d = 0

if (*(r12 + 0xc) s<= 0xffffffff)
    sub_1405c5510(r12, 0)

sub_1418d4780(&var_768, &var_6b8, zmm1)
int32_t rax_3 = sub_140b21160(*r12, r12[1].d, 0)
var_7a8 = rax_3
sub_140b4cb40(&var_768)
int64_t* rax_4 = var_7a0:8.q
int32_t var_7c0 = rax_3
int64_t* var_7b8 = r12
var_7a0:8.q = 0
void*** result_1 = nullptr
EnterCriticalSection(&arg1[0x37])
int64_t performanceCount
int64_t r13_1

if (arg1[0x3d].d == *(arg1 + 0x214))
label_1418e6c3d:
    r13_1 = 0
else
    void* rcx_13 = arg1[0x44]
    void* r8_1 = &arg1[0x43]
    int64_t r9_1 = sx.q(rax_3)
    
    if (rcx_13 != 0)
        r8_1 = rcx_13
    
    int32_t rbx_1 = *(r8_1 + (((sx.q(arg1[0x45].d) - 1) & r9_1) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_1418e6c3d_1:
        r13_1 = 0
    else
        int64_t performanceCount_2 = arg1[0x3c]
        performanceCount = performanceCount_2
        
        while (true)
            int64_t rcx_14 = sx.q(rbx_1) * 5
            r13_1 = performanceCount_2 + (rcx_14 << 3)
            
            if (*(performanceCount_2 + (rcx_14 << 3)) == r9_1.d)
                int64_t* rcx_15 = *(r13_1 + 8)
                int64_t count = sx.q(rcx_15[1].d)
                
                if (count.d == r12[1].d)
                    if (memcmp(*rcx_15, *r12, count) == 0)
                        break
                    
                    performanceCount_2 = performanceCount
                    r9_1 = zx.q(rax_3)
            
            rbx_1 = *(r13_1 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_1418e6c3d_2
        
        if (rbx_1 == 0xffffffff)
        label_1418e6c3d_2:
            r13_1 = 0

int64_t* rbx_2 = r13_1 + 0x18

if (r13_1 == 0)
    rbx_2 = nullptr

int64_t* r15_1

if (rbx_2 == 0)
    if (arg1 != -0x1b8)
        LeaveCriticalSection(&arg1[0x37])
    
    void*** result_3 = j_sub_140a82f30(0x4c8)
    void*** result_2 = result_3
    
    if (result_3 == 0)
        result_2 = nullptr
    else
        int64_t rbx_3 = *arg1
        *result_2 = &data_142d3ff08
        result_2[1].d = 0
        *result_2 = &data_142fef688
        *(result_2 + 0xc) = 0
        result_2[2].w = 0x100
        result_2[3].w = 0
        *(result_2 + 0x1a) = 0
        result_2[9].b = arg2[0xb].b
        result_2[0xa] = 0
        sub_1418f45d0(&result_2[0xb])
        result_2[0x61] = rbx_3
        sub_1418ce0d0(&result_2[0x62], &var_6b8)
        result_2[0x94] = 0
        result_2[0x97] = 0
        result_2[0x98] = 0
        result_2[0x96].d = rax_3
        sub_1418dacd0(&var_7c0, &result_2[0x96])
        void* rbx_4 = &result_2[0x89]
        __builtin_memset(rbx_4, 0, 0x28)
        int64_t i_4 = 5
        int64_t rax_11 = arg2[1]
        int64_t rcx_23 = rax_11 + 0x30
        
        if (rax_11 == 0)
            rcx_23 = 0
        
        *rbx_4 = rcx_23
        int64_t rax_12 = arg2[2]
        int64_t rcx_24 = rax_12 + 0x30
        
        if (rax_12 == 0)
            rcx_24 = 0
        
        result_2[0x8c] = rcx_24
        int64_t rax_13 = arg2[3]
        int64_t rcx_25 = rax_13 + 0x30
        
        if (rax_13 == 0)
            rcx_25 = 0
        
        result_2[0x8d] = rcx_25
        int64_t rax_14 = arg2[5]
        int64_t rcx_26 = rax_14 + 0x30
        
        if (rax_14 == 0)
            rcx_26 = 0
        
        result_2[0x8b] = rcx_26
        int64_t rax_15 = arg2[4]
        int64_t rcx_27 = rax_15 + 0x30
        
        if (rax_15 == 0)
            rcx_27 = 0
        
        result_2[0x8a] = rcx_27
        int64_t i
        
        do
            int64_t* rcx_28 = *rbx_4
            
            if (rcx_28 != 0)
                (*(*rcx_28 + 8))(rcx_28)
            
            rbx_4 += 8
            i = i_4
            i_4 -= 1
        while (i != 1)
        __builtin_memset(&result_2[0x8e], 0, 0x28)
    
    result_1 = result_2
    void*** rax_17 = sub_1418e0db0(arg1, &var_578, 1)
    result_2[0x60] = rax_17
    rax_17.b = rax_17[7].d u> 0
    result_2[3].b = rax_17.b
    void* rbx_5 = *(*arg1 + 0x1a50)
    void var_3f8
    sub_1418d0cd0(&var_3f8, arg2)
    result_2[0x93] = sub_1418e2530(rbx_5 + 0x248, *(rbx_5 + 0x140), &var_3f8)
    void* r8_5 = &result_2[4]
    
    for (int32_t i_1 = 0; i_1 s< 5; )
        int64_t rax_21
        void* rax_20
        
        if (i_1 == 0)
            rax_20 = arg2[1]
        label_1418e6eba:
            void* rcx_36 = rax_20 + 0x30
            
            if (rax_20 == 0)
                rcx_36 = nullptr
            
            if (rcx_36 == 0)
                rax_21 = 0
            else
                rax_21 = *(rcx_36 + 0x18)
        else
            if (i_1 == 1)
                rax_20 = arg2[4]
                goto label_1418e6eba
            
            if (i_1 == 2)
                rax_20 = arg2[5]
                goto label_1418e6eba
            
            if (i_1 == 3)
                rax_20 = arg2[2]
                goto label_1418e6eba
            
            if (i_1 == 4)
                rax_20 = arg2[3]
                goto label_1418e6eba
            
            rax_21 = 0
        *r8_5 = rax_21
        i_1 += 1
        r8_5 += 8
    
    sub_1418fa940(&result_2[0xb], *arg2, *(arg2[1] + 0xd0))
    int64_t rcx_38
    int64_t rbx_6
    
    if (arg2[0x14].w s< 0 && arg1[1].b != 0)
        rbx_6 = data_143efb3c0
        
        if (data_143de5480 == 0)
            rcx_38 = 0
        else
            rcx_38.b = GetCurrentThreadId() != data_143de5470
    
    if (arg2[0x14].w s< 0 && arg1[1].b != 0 && *(rbx_6 + (rcx_38 << 2)) != 0)
        goto label_1418e7000
    
    QueryPerformanceCounter(&performanceCount)
    int64_t rax_24 = arg2[1]
    int128_t var_60_1 = zx.o(0)
    int64_t rcx_40 = rax_24 + 0x30
    int64_t rax_25 = arg2[4]
    
    if (rax_24 == 0)
        rcx_40 = 0
    
    int64_t var_68 = rcx_40
    int128_t var_50_1 = zx.o(0)
    
    if (rax_25 != 0)
        var_60_1.q = rax_25 + 0x30
    
    int64_t rax_27 = arg2[5]
    
    if (rax_27 != 0)
        var_60_1:8.q = rax_27 + 0x30
    
    int64_t rax_29 = arg2[2]
    
    if (rax_29 != 0)
        var_50_1.q = rax_29 + 0x30
        int64_t rax_31 = arg2[3]
        int64_t rcx_41 = rax_31 + 0x30
        
        if (rax_31 == 0)
            rcx_41 = 0
        
        var_50_1:8.q = rcx_41
    
    if (sub_1418dc850(arg1, result_2, &var_68, &result_2[0xa], rax_3, rax_4, arg1) != 0)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
    label_1418e7000:
        EnterCriticalSection(&arg1[0x37])
        int64_t r15_2
        
        if (arg1[0x3d].d == *(arg1 + 0x214))
        label_1418e709c:
            r15_2 = nullptr
        else
            void* rcx_46 = arg1[0x44]
            void* r8_8 = &arg1[0x43]
            int64_t r9_3 = sx.q(rax_3)
            
            if (rcx_46 != 0)
                r8_8 = rcx_46
            
            int32_t rbx_7 = *(r8_8 + (((sx.q(arg1[0x45].d) - 1) & r9_3) << 2))
            
            if (rbx_7 == 0xffffffff)
            label_1418e709c_1:
                r15_2 = nullptr
            else
                int64_t performanceCount_3 = arg1[0x3c]
                performanceCount = performanceCount_3
                
                while (true)
                    int64_t rcx_47 = sx.q(rbx_7) * 5
                    r15_2 = performanceCount_3 + (rcx_47 << 3)
                    
                    if (*(performanceCount_3 + (rcx_47 << 3)) == r9_3.d)
                        int64_t* rcx_48 = *(r15_2 + 8)
                        int64_t count_1 = sx.q(rcx_48[1].d)
                        
                        if (count_1.d == r12[1].d)
                            if (memcmp(*rcx_48, *r12, count_1) == 0)
                                break
                            
                            performanceCount_3 = performanceCount
                            r9_3 = zx.q(rax_3)
                    
                    rbx_7 = *(r15_2 + 0x20)
                    
                    if (rbx_7 == 0xffffffff)
                        goto label_1418e709c_2
                
                if (rbx_7 == 0xffffffff)
                label_1418e709c_2:
                    r15_2 = nullptr
        
        void** rbx_8 = r15_2 + 0x18
        
        if (r15_2 == 0)
            rbx_8 = nullptr
        
        if (rbx_8 == 0)
            sub_1418cac90(&arg1[0x3c], &var_7c0, &result_1)
            
            if (arg1[0x5b].b == 0)
                result = result_1
                r15_1 = rax_4
                *(result + 0x19) = 1
            else
                EnterCriticalSection(&arg1[0x46])
                result = result_1
                *(result + 0x19) = 1
                sub_1418e3d70(arg1, *(result + 0x4ac))
                sub_1418e37c0(arg1, result)
                
                if (arg1 != -0x230)
                    LeaveCriticalSection(&arg1[0x46])
                
                int64_t* var_7f0_1 = rax_4
                r15_1 = rax_4
        else
            (**result_2)(result_2, 1)
            result = *rbx_8
            r15_1 = rax_4
        
        if (arg1 != -0x1b8)
            LeaveCriticalSection(&arg1[0x37])
    else
        (**result_2)(result_2, 1)
        r15_1 = rax_4
else
    sub_1418e3ae0(arg1, *rbx_2)
    result = *rbx_2
    
    if (arg1 == -0x1b8)
        r15_1 = rax_4
    else
        LeaveCriticalSection(&arg1[0x37])
        r15_1 = rax_4

sub_1418d2510(&var_530)
int32_t i_3 = i_5
int64_t* rbx_10 = var_548

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t rcx_58 = *rbx_10
        
        if (rcx_58 != 0)
            sub_140a74f90(rcx_58)
        
        rbx_10 = &rbx_10[3]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    rbx_10 = var_548

if (rbx_10 != 0)
    sub_140a74f90(rbx_10)

sub_1418d2600(&var_6b8)

if (r15_1 != 0)
    int64_t rcx_61 = *r15_1
    
    if (rcx_61 != 0)
        sub_140a74f90(rcx_61)
    
    j_sub_140a74f90(r15_1)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_818)
return result
