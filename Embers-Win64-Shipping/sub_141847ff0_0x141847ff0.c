// 函数: sub_141847ff0
// 地址: 0x141847ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143efa9b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efa9b8)
    
    if (data_143efa9b8 == 0xffffffff)
        InitializeCriticalSection(&data_143efa990)
        SetCriticalSectionSpinCount(&data_143efa990, 0xfa0)
        atexit(sub_142cec390)
        _Init_thread_footer(&data_143efa9b8)

char rax_2 = *(arg1 + 0xbd)

if (rax_2 == 0)
    EnterCriticalSection(&data_143efa990)

*(arg1 + 0x13c)
*(arg1 + 0x13c) = 1
EnterCriticalSection(arg1 + 0x850)

if (*(arg1 + 0x888) == 0)
    bool cond:0_1 = *(arg1 + 0x889) != 0
    *(arg1 + 0x888) = 1
    
    if (not(cond:0_1))
        int64_t performanceCount_13
        QueryPerformanceCounter(&performanceCount_13)
        *(arg1 + 0x878) = performanceCount_13

LeaveCriticalSection(arg1 + 0x850)
EnterCriticalSection(arg1 + 0x810)

if (*(arg1 + 0x848) == 0)
    bool cond:1_1 = *(arg1 + 0x849) != 0
    *(arg1 + 0x848) = 1
    
    if (not(cond:1_1))
        int64_t performanceCount_18
        QueryPerformanceCounter(&performanceCount_18)
        *(arg1 + 0x838) = performanceCount_18

LeaveCriticalSection(arg1 + 0x810)
int32_t var_270 = 0x3f800000
int64_t rax_6 = *(arg1 + 0x2b8)
int32_t var_26c = 0
(*(rax_6 + 0x18))(arg1 + 0x2b8, &var_26c, &var_270)
void* i = *(arg1 + 0xc0)
int64_t r12
r12.b = 0

for (void* rdi_3 = sx.q(*(arg1 + 0xc8)) * 0x138 + i; i != rdi_3; i += 0x138)
    int64_t* rcx_7 = *(i + 0x88)
    
    if (rcx_7 == 0)
        rcx_7 = *(i + 0x78)
    
    if (*((*(*rcx_7 + 0x40))(rcx_7) + 8) s> 1)
        r12.b = 1
        break

int32_t zmm0 = (zx.o(0)).d
char arg_18

if (*(arg1 + 0xbc) == 0 || r12.b == 0)
    zmm0 = 0x3f800000
    arg_18 = 0
else
    arg_18 = 1

int64_t rax_10 = *(arg1 + 0x2b8)
int32_t var_268 = zmm0
int32_t var_264 = 9
(*(rax_10 + 0x18))(arg1 + 0x2b8, &var_264, &var_268)
void* lpCriticalSection = arg1 + 0x610
EnterCriticalSection(lpCriticalSection)

if (*(lpCriticalSection + 0x38) == 0)
    *(lpCriticalSection + 0x38) = 1
    
    if (*(lpCriticalSection + 0x39) == 0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        *(lpCriticalSection + 0x28) = performanceCount

LeaveCriticalSection(lpCriticalSection)
char i_4 = sub_141841010(arg1 - 8)
char i_1 = i_4

if (i_4 != 0)
    int64_t* var_280 = nullptr
    char i_3 = 0
    i_1 = 1
    int64_t var_278_1 = 0
    int32_t rax_12
    int128_t zmm6_1
    rax_12, zmm6_1 = sub_141845160()
    int32_t var_288_1 = rax_12
    int128_t var_58_1 = zmm6_1
    void* var_290
    
    while (i_1 != 0)
        int64_t* rcx_13 = *(arg1 + 0x550)
        (*(*rcx_13 + 0x10))(rcx_13, *(arg1 + 0x5e0))
        int64_t* rdi_4 = *(arg1 + 0x558)
        void var_b0
        (*(*rdi_4 + 0x70))(rdi_4, sub_14183e880(&var_b0, *(arg1 + 0x5e0)))
        char rax_15
        int128_t zmm0_1
        int512_t zmm6_2
        rax_15, zmm0_1, zmm6_2 = sub_14184a8f0(arg1 - 8, &var_280)
        int64_t* var_298
        
        if (rax_15 == 0)
            i_1 = 0
        else
            rax_15, zmm0_1, zmm6_2 = sub_1418499b0(arg1 - 8)
            
            if (rax_15 == 0)
                i_1 = 0
            else
                void* rdi_5 = arg1 + 0xe0
                int64_t var_218 = 0
                int64_t var_210_1 = 0
                
                if (*(arg1 + 0xb0) != 0)
                    rdi_5 = &var_218
                
                EnterCriticalSection(arg1 + 0x6d0)
                
                if (*(arg1 + 0x708) == 0)
                    *(arg1 + 0x708) = 1
                    
                    if (*(arg1 + 0x709) == 0)
                        int64_t performanceCount_1
                        QueryPerformanceCounter(&performanceCount_1)
                        *(arg1 + 0x6f8) = performanceCount_1
                
                if (arg1 != -0x6d0)
                    LeaveCriticalSection(arg1 + 0x6d0)
                
                int64_t var_168
                __builtin_memset(&var_168, 0, 0x2c)
                int32_t var_13c_1 = 0x80
                int32_t var_138_1 = 0xffffffff
                int32_t var_134_1 = 0
                int64_t var_128_1 = 0
                int32_t var_120_1 = 0
                sub_1418235f0(&var_168, arg1 + 0x418)
                var_290 = arg1 + 0x2b8
                var_298 = rdi_5
                void*** rax_17 = sub_1418a08a0(*(arg1 + 0x520), *(arg1 + 0x5e0), &var_168, 
                    arg1 + 0x60, var_298, var_290)
                int64_t var_108_1 = 0
                int64_t var_100_1 = 0
                void* var_118 = arg1 + 0x110
                void* var_110_1 = arg1 + 0x5f0
                void* var_f8_1 = arg1 + 0x360
                void* var_f0_1 = arg1 + 0x361
                sub_141845680(&var_118, rax_17)
                (*rax_17)[3](rax_17)
                EnterCriticalSection(arg1 + 0x6d0)
                
                if (*(arg1 + 0x708) != 0)
                    *(arg1 + 0x708) = 0
                    
                    if (*(arg1 + 0x709) == 0)
                        int64_t performanceCount_2
                        QueryPerformanceCounter(&performanceCount_2)
                        *(arg1 + 0x700) += performanceCount_2 - *(arg1 + 0x6f8)
                
                if (arg1 != -0x6d0)
                    LeaveCriticalSection(arg1 + 0x6d0)
                
                zmm0_1 = sub_141822da0(&var_118)
                (**rax_17)(rax_17, 1)
                int64_t rcx_30 = var_218
                
                if (rcx_30 != 0)
                    zmm0_1 = sub_140a74f90(rcx_30)
                
                i_1 = 1
        
        int32_t j_1 = var_278_1.d
        int64_t* rbx_2 = var_280
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t rcx_31 = *rbx_2
                
                if (rcx_31 != 0)
                    zmm0_1 = sub_140a74f90(rcx_31)
                
                rbx_2 = &rbx_2[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        var_278_1.d = 0
        
        if (var_278_1:4.d != 0)
            zmm0_1 = sub_14061cd70(&var_280, 0)
        
        if (i_1 != 0)
            rax_15, zmm0_1, zmm6_2 = sub_14184ce20(arg1 - 8, &var_280)
        
        if (i_1 == 0 || rax_15 == 0)
            i_3 = 0
        else
            i_3 = 1
        
        if (i_1 != 0)
            EnterCriticalSection(arg1 + 0x750)
            
            if (*(arg1 + 0x788) == 0)
                *(arg1 + 0x788) = 1
                
                if (*(arg1 + 0x789) == 0)
                    int64_t performanceCount_3
                    QueryPerformanceCounter(&performanceCount_3)
                    *(arg1 + 0x778) = performanceCount_3
            
            LeaveCriticalSection(arg1 + 0x750)
            int32_t rbx_3 = *(arg1 + 0xb0)
            int64_t r9_2
            r9_2, zmm0_1 = sub_140a464c0()
            
            if (rbx_3 != 0)
                int16_t* const rdx_12
                
                if (*(arg1 + 0x78) == 0)
                    rdx_12 = &data_142d40450
                else
                    rdx_12 = *(arg1 + 0x70)
                
                r9_2.b = 1
                (*(data_14399ea08 + 0x60))(&data_14399ea08, rdx_12, 0, r9_2, var_298, var_290, 
                    var_288_1)
                zmm0_1 = sub_14182f170(arg1 - 8, arg1 + 0x60)
            else if (*(arg1 + 0xd8) == 0)
                r9_2.b = 1
                (*(data_14399ea08 + 0x60))(&data_14399ea08, &data_142d40450, 0, r9_2, var_298, 
                    var_290, var_288_1)
            else
                r9_2.b = 1
                (*(data_14399ea08 + 0x60))(&data_14399ea08, *(arg1 + 0xd0), 0, r9_2, var_298, 
                    var_290, var_288_1)
            
            EnterCriticalSection(arg1 + 0x750)
            
            if (*(arg1 + 0x788) != 0)
                *(arg1 + 0x788) = 0
                
                if (*(arg1 + 0x789) == 0)
                    int64_t performanceCount_4
                    QueryPerformanceCounter(&performanceCount_4)
                    *(arg1 + 0x780) += performanceCount_4 - *(arg1 + 0x778)
            
            LeaveCriticalSection(arg1 + 0x750)
        
        int64_t rax_32 = *(arg1 + 0x2b8)
        int32_t var_260 = 0x3f800000
        int32_t var_25c = 8
        (*(rax_32 + 0x18))(arg1 + 0x2b8, &var_25c, &var_260)
        int32_t rax_34 = var_288_1 - 1
        var_288_1 = rax_34
        
        if (rax_34 s<= 0)
            i_1 = 0
        else
            int64_t* rcx_42 = *(arg1 + 0x530)
            
            if ((*(*rcx_42 + 0x10))(rcx_42) != 0)
                i_1 = 0
            else
                int64_t* rcx_43 = *(arg1 + 0x530)
                
                if ((*(*rcx_43 + 0x18))(rcx_43) == 0)
                    i_1 = 0
                else
                    i_1 = 1
        
        char i_6 = i_3
        char arg_10
        
        if (i_6 != 0 || i_1 == 0)
            arg_10 = 0
            
            if (i_6 != 0 || i_1 != 0)
            label_1418485fc:
                int64_t r9_3
                r9_3, zmm0_1 = sub_140a464c0()
                int16_t* const rdx_15
                
                if (*(arg1 + 0x108) == 0)
                    rdx_15 = &data_142d40450
                else
                    rdx_15 = *(arg1 + 0x100)
                
                r9_3.b = 1
                var_298.b = 0
                (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_15, 0, r9_3, 0, var_290, var_288_1)
        else
            arg_10 = 1
            
            if (i_1 != 0)
                goto label_1418485fc
        
        *(arg1 + 0x144)
        *(arg1 + 0x144) = 0
        int64_t rdx_16 = *(arg1 + 0x2b8)
        (*(rdx_16 + 0x38))(arg1 + 0x2b8, rdx_16)
        zmm6_2.o = zmm0_1
        EnterCriticalSection(arg1 + 0x110)
        int32_t rax_41
        rax_41, zmm6_1 = sub_141845160()
        *(arg1 + 0x278) = zmm6_1.d
        *(arg1 + 0x228) = rax_41 + not.d(var_288_1)
        
        if (arg_10 != 0)
            int64_t* rcx_48 = *(arg1 + 0x530)
            int32_t rax_44 = (*(*rcx_48 + 0x20))(rcx_48)
            int64_t r13 = sx.q(*(arg1 + 0x238))
            int32_t rcx_49 = (r13 + 1).d
            *(arg1 + 0x238) = rcx_49
            
            if (rcx_49 s> *(arg1 + 0x23c))
                sub_1405a4cf0(arg1 + 0x230)
            
            *(*(arg1 + 0x230) + (r13 << 2)) = rax_44
            int64_t* rcx_51 = *(arg1 + 0x530)
            int64_t var_e8
            int64_t* rax_47 = (*(*rcx_51 + 0x28))(rcx_51, &var_e8)
            int32_t rax_48 = *(arg1 + 0x258)
            *(arg1 + 0x258) = rax_48 + 1
            
            if (rax_48 + 1 s> *(arg1 + 0x25c))
                sub_1405a4f90(arg1 + 0x250)
            
            int64_t* rcx_56 = (sx.q(rax_48) << 4) + *(arg1 + 0x250)
            *rcx_56 = 0
            *rcx_56 = *rax_47
            *rax_47 = 0
            rcx_56[1].d = rax_47[1].d
            *(rcx_56 + 0xc) = *(rax_47 + 0xc)
            rax_47[1] = 0
            int64_t rcx_57 = var_e8
            
            if (rcx_57 != 0)
                sub_140a74f90(rcx_57)
            
            i_6 = i_3
            lpCriticalSection = arg1 + 0x610
            *(arg1 + 0x361) = 0
        
        if (arg1 != -0x110)
            LeaveCriticalSection(arg1 + 0x110)
        
        if (arg_10 != 0)
            EnterCriticalSection(lpCriticalSection)
            
            if (*(lpCriticalSection + 0x38) == 0)
                *(lpCriticalSection + 0x38) = 1
                
                if (*(lpCriticalSection + 0x39) == 0)
                    int64_t performanceCount_5
                    QueryPerformanceCounter(&performanceCount_5)
                    *(lpCriticalSection + 0x28) = performanceCount_5
            
            LeaveCriticalSection(lpCriticalSection)
            (*(*(arg1 + 0x2b8) + 0x70))(arg1 + 0x2b8)
            int64_t rax_54 = *(arg1 + 0x2b8)
            int32_t var_258 = 0
            int32_t var_254 = 1
            (*(rax_54 + 0x18))(arg1 + 0x2b8, &var_254, &var_258)
            int64_t rax_55 = *(arg1 + 0x2b8)
            int32_t var_250 = 0
            int32_t var_24c = 2
            (*(rax_55 + 0x18))(arg1 + 0x2b8, &var_24c, &var_250)
            int64_t rax_56 = *(arg1 + 0x2b8)
            int32_t var_248 = 0
            int32_t var_244 = 3
            (*(rax_56 + 0x18))(arg1 + 0x2b8, &var_244, &var_248)
            int64_t rax_57 = *(arg1 + 0x2b8)
            int32_t var_240 = 0
            int32_t var_23c = 4
            (*(rax_57 + 0x18))(arg1 + 0x2b8, &var_23c, &var_240)
            int64_t rax_58 = *(arg1 + 0x2b8)
            int32_t var_238 = 0
            int32_t var_234 = 5
            (*(rax_58 + 0x18))(arg1 + 0x2b8, &var_234, &var_238)
            int64_t rax_59 = *(arg1 + 0x2b8)
            int32_t var_230 = 0
            int32_t var_22c = 6
            (*(rax_59 + 0x18))(arg1 + 0x2b8, &var_22c, &var_230)
            int64_t rax_60 = *(arg1 + 0x2b8)
            int32_t var_228 = 0
            int32_t var_224 = 7
            (*(rax_60 + 0x18))(arg1 + 0x2b8, &var_224, &var_228)
            int64_t rax_61 = *(arg1 + 0x2b8)
            int32_t var_220 = 0
            int32_t var_21c = 8
            (*(rax_61 + 0x18))(arg1 + 0x2b8, &var_21c, &var_220)
        
        if (i_6 != 0)
            break
    
    int32_t i_5 = var_278_1.d
    int64_t* rbx_5 = var_280
    
    if (i_5 != 0)
        int32_t i_2
        
        do
            int64_t rcx_71 = *rbx_5
            
            if (rcx_71 != 0)
                sub_140a74f90(rcx_71)
            
            rbx_5 = &rbx_5[2]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        rbx_5 = var_280
    
    if (rbx_5 != 0)
        sub_140a74f90(rbx_5)
    
    i_1 = i_3
    
    if (i_1 != 0 && arg_18 != 0)
        EnterCriticalSection(arg1 + 0x790)
        
        if (*(arg1 + 0x7c8) == 0)
            *(arg1 + 0x7c8) = 1
            
            if (*(arg1 + 0x7c9) == 0)
                int64_t performanceCount_6
                QueryPerformanceCounter(&performanceCount_6)
                *(arg1 + 0x7b8) = performanceCount_6
        
        LeaveCriticalSection(arg1 + 0x790)
        void*** rax_63 = sub_1418a0fa0(arg1 + 0x508, 1)
        void*** rax_65 = sub_1418a1350(rax_63, *(arg1 + 0x548), *(arg1 + 0x530), *(arg1 + 0x520), 
            *(arg1 + 0x528))
        char rax_67 = (*rax_65)[1](rax_65, *(arg1 + 0x5e0), arg1 + 0x50, arg1 + 0xe0, arg1 + 0x2b8, 
            var_290, var_288_1)
        void** r8_15 = *rax_65
        (*r8_15)(rax_65, 1, r8_15)
        
        if (rax_63 != 0)
            void** r8_16 = *rax_63
            (*r8_16)(rax_63, 1, r8_16)
        
        i_1 &= rax_67
        EnterCriticalSection(arg1 + 0x790)
        
        if (*(arg1 + 0x7c8) != 0)
            *(arg1 + 0x7c8) = 0
            
            if (*(arg1 + 0x7c9) == 0)
                int64_t performanceCount_7
                QueryPerformanceCounter(&performanceCount_7)
                *(arg1 + 0x7c0) += performanceCount_7 - *(arg1 + 0x7b8)
        
        LeaveCriticalSection(arg1 + 0x790)

EnterCriticalSection(lpCriticalSection)

if (*(lpCriticalSection + 0x38) != 0)
    *(lpCriticalSection + 0x38) = 0
    
    if (*(lpCriticalSection + 0x39) == 0)
        int64_t performanceCount_8
        QueryPerformanceCounter(&performanceCount_8)
        *(lpCriticalSection + 0x30) += performanceCount_8 - *(lpCriticalSection + 0x28)

LeaveCriticalSection(lpCriticalSection)
EnterCriticalSection(arg1 + 0x650)

if (*(arg1 + 0x688) != 0)
    *(arg1 + 0x688) = 0
    
    if (*(arg1 + 0x689) == 0)
        int64_t performanceCount_9
        QueryPerformanceCounter(&performanceCount_9)
        *(arg1 + 0x680) += performanceCount_9 - *(arg1 + 0x678)

LeaveCriticalSection(arg1 + 0x650)
EnterCriticalSection(arg1 + 0x690)

if (*(arg1 + 0x6c8) != 0)
    *(arg1 + 0x6c8) = 0
    
    if (*(arg1 + 0x6c9) == 0)
        int64_t performanceCount_10
        QueryPerformanceCounter(&performanceCount_10)
        *(arg1 + 0x6c0) += performanceCount_10 - *(arg1 + 0x6b8)

LeaveCriticalSection(arg1 + 0x690)
EnterCriticalSection(arg1 + 0x6d0)

if (*(arg1 + 0x708) != 0)
    *(arg1 + 0x708) = 0
    
    if (*(arg1 + 0x709) == 0)
        int64_t performanceCount_11
        QueryPerformanceCounter(&performanceCount_11)
        *(arg1 + 0x700) += performanceCount_11 - *(arg1 + 0x6f8)

LeaveCriticalSection(arg1 + 0x6d0)
EnterCriticalSection(arg1 + 0x710)

if (*(arg1 + 0x748) != 0)
    *(arg1 + 0x748) = 0
    
    if (*(arg1 + 0x749) == 0)
        int64_t performanceCount_12
        QueryPerformanceCounter(&performanceCount_12)
        *(arg1 + 0x740) += performanceCount_12 - *(arg1 + 0x738)

LeaveCriticalSection(arg1 + 0x710)
EnterCriticalSection(arg1 + 0x750)

if (*(arg1 + 0x788) != 0)
    *(arg1 + 0x788) = 0
    
    if (*(arg1 + 0x789) == 0)
        int64_t performanceCount_19
        QueryPerformanceCounter(&performanceCount_19)
        *(arg1 + 0x780) += performanceCount_19 - *(arg1 + 0x778)

LeaveCriticalSection(arg1 + 0x750)
EnterCriticalSection(arg1 + 0x790)

if (*(arg1 + 0x7c8) != 0)
    *(arg1 + 0x7c8) = 0
    
    if (*(arg1 + 0x7c9) == 0)
        int64_t performanceCount_14
        QueryPerformanceCounter(&performanceCount_14)
        *(arg1 + 0x7c0) += performanceCount_14 - *(arg1 + 0x7b8)

LeaveCriticalSection(arg1 + 0x790)
EnterCriticalSection(arg1 + 0x7d0)

if (*(arg1 + 0x808) != 0)
    *(arg1 + 0x808) = 0
    
    if (*(arg1 + 0x809) == 0)
        int64_t performanceCount_15
        QueryPerformanceCounter(&performanceCount_15)
        *(arg1 + 0x800) += performanceCount_15 - *(arg1 + 0x7f8)

LeaveCriticalSection(arg1 + 0x7d0)
EnterCriticalSection(arg1 + 0x810)

if (*(arg1 + 0x848) != 0)
    *(arg1 + 0x848) = 0
    
    if (*(arg1 + 0x849) == 0)
        int64_t performanceCount_16
        QueryPerformanceCounter(&performanceCount_16)
        *(arg1 + 0x840) += performanceCount_16 - *(arg1 + 0x838)

LeaveCriticalSection(arg1 + 0x810)
EnterCriticalSection(arg1 + 0x850)

if (*(arg1 + 0x888) != 0)
    *(arg1 + 0x888) = 0
    
    if (*(arg1 + 0x889) == 0)
        int64_t performanceCount_17
        QueryPerformanceCounter(&performanceCount_17)
        *(arg1 + 0x880) += performanceCount_17 - *(arg1 + 0x878)

LeaveCriticalSection(arg1 + 0x850)
int32_t rax_90
rax_90.b = i_1 != 0
*(arg1 + 0x138)
*(arg1 + 0x138) = rax_90
EnterCriticalSection(arg1 + 0x110)
*(arg1 + 0x1fc) = fconvert.s(sub_1418401d0(lpCriticalSection))
*(arg1 + 0x200) = fconvert.s(sub_1418401d0(arg1 + 0x650))
*(arg1 + 0x204) = fconvert.s(sub_1418401d0(arg1 + 0x690))
*(arg1 + 0x208) = fconvert.s(sub_1418401d0(arg1 + 0x6d0))
*(arg1 + 0x20c) = fconvert.s(sub_1418401d0(arg1 + 0x710))
*(arg1 + 0x210) = fconvert.s(sub_1418401d0(arg1 + 0x750))
*(arg1 + 0x214) = fconvert.s(sub_1418401d0(arg1 + 0x790))
*(arg1 + 0x218) = fconvert.s(sub_1418401d0(arg1 + 0x7d0))
*(arg1 + 0x21c) = fconvert.s(sub_1418401d0(arg1 + 0x810))
double zmm0_11 = sub_1418401d0(arg1 + 0x850)
int64_t* rcx_125 = *(arg1 + 0x530)
*(arg1 + 0x224) = i_1
*(arg1 + 0x220) = fconvert.s(zmm0_11)
int64_t var_d8
int64_t* rax_93 = (*(*rcx_125 + 0x28))(rcx_125, &var_d8)

if (arg1 + 0x240 != rax_93)
    int64_t rcx_126 = *(arg1 + 0x240)
    
    if (rcx_126 != 0)
        sub_140a74f90(rcx_126)
    
    *(arg1 + 0x240) = *rax_93
    *rax_93 = 0
    *(arg1 + 0x248) = rax_93[1].d
    *(arg1 + 0x24c) = *(rax_93 + 0xc)
    rax_93[1] = 0

int64_t rcx_128 = var_d8

if (rcx_128 != 0)
    sub_140a74f90(rcx_128)

int64_t* rcx_129 = *(arg1 + 0x530)
void var_c8
int64_t* rax_97 = (*(*rcx_129 + 0x30))(rcx_129, &var_c8)
int64_t rdx_34 = *(arg1 + 0x260)
*(arg1 + 0x260) = *rax_97
*rax_97 = rdx_34
int64_t rdx_35 = *(arg1 + 0x268)
*(arg1 + 0x268) = rax_97[1]
rax_97[1] = rdx_35
*(arg1 + 0x270) = rax_97[2].d
int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        (**var_c0)(var_c0)
        int32_t r15_4 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (r15_4 == 1)
            (*(*var_c0 + 8))(var_c0, zx.q(r15_4))

int64_t* rcx_134 = *(arg1 + 0x530)
*(arg1 + 0x22c) = (*(*rcx_134 + 0x20))(rcx_134)

if (arg1 != -0x110)
    LeaveCriticalSection(arg1 + 0x110)

*(arg1 + 0x13c)
*(arg1 + 0x13c) = 0

if (rax_2 == 0)
    LeaveCriticalSection(&data_143efa990)

bool z

if (0 == *(arg1 + 0x138))
    *(arg1 + 0x138) = 0
    z = true
else
    *(arg1 + 0x138)
    z = false

int32_t r14
r14.b = z
return zx.q(r14)
