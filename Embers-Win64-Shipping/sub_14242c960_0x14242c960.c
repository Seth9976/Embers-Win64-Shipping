// 函数: sub_14242c960
// 地址: 0x14242c960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount_1 = arg2
char r15 = arg4
sub_140b33630("AddToWorld")
*(arg2 + 0x1f5) |= 0x40
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rcx_1 = *(arg1 + 0xe0)
uint128_t zmm9 = 0x4170000000000000
int128_t zmm7
zmm7.q = float.d(performanceCount)
zmm7.q = zmm7.q f* data_143d796f8
zmm7.q = zmm7.q f+ zmm9.q
uint64_t rbx

if (rcx_1 == arg2 || rcx_1 == 0)
    rbx.b = 1
else
    rbx.b = 0

char rax = *(arg1 + 0x11a)
int64_t r13
r13.b = 0
int64_t rsi

if (rax u> 6 || not(test_bit(0x6a, zx.d(rax))))
    rsi.b = 0
else
    rsi.b = 1

if (rbx.b != 0 && rcx_1 == 0 && *(arg1 + 0xe8) != arg2)
    arg2[0x17] = arg1
    *(arg1 + 0xe0) = arg2
    sub_1405a7050(arg1 + 0x148, &performanceCount_1)

if ((*(arg1 + 0x11d) & 2) == 0 || rsi.b == 0)
    r15 = 0

int128_t zmm6 = _mm_cvtps_pd(data_143a2d8c4.q)
uint128_t zmm8

if (r15 != 0)
    void* rcx_3 = *(arg1 + 0x30)
    
    if (rcx_3 != 0)
        void* rax_2 = sub_1420e4e60(rcx_3)
        
        if (rax_2 != 0)
            void* rax_3
            
            if ((*(rax_2 + 0x22e) & 0x30) == 0)
                rax_3, zmm6, zmm7, zmm8 = sub_1423ef4c0(data_143f5b298, arg1)
            
            if ((*(rax_2 + 0x22e) & 0x30) != 0 || *(rax_3 + 0x90) != 0)
                zmm6.q = zmm6.q f+ _mm_cvtps_pd(data_143a2d8c8)

int64_t* var_98

if (rbx.b != 0)
    char rax_4 = *(arg2 + 0x1f4)
    uint128_t var_68_1 = zmm8
    zmm8 = 0x408f400000000000
    
    if ((rax_4 & 0x40) != 0)
        goto label_14242cb32
    
    var_98 = arg2
    int64_t var_90_1 = arg3
    char var_88_1 = 1
    zmm6, zmm7, zmm8, zmm9 = sub_1420dcec0(&var_98)
    *(arg2 + 0x1f4) |= 0x40
    
    if (r15 != 0)
        QueryPerformanceCounter(&performanceCount_1)
    
    if (r15 != 0 && (float.d(performanceCount_1) f* data_143d796f8 f+ zmm9.q f- zmm7.q) f* zmm8.q
            f> zmm6.q)
        rbx.b = 0
    else
        rax_4 = *(arg2 + 0x1f4)
        rbx.b = 1
    label_14242cb32:
        
        if (rax_4 s< 0)
            goto label_14242cb93
        
        void* rcx_7 = *(arg1 + 0x560)
        
        if (rcx_7 != 0)
            zmm6, zmm7, zmm8, zmm9 = sub_14244e9d0(rcx_7, arg2)
            rax_4 = *(arg2 + 0x1f4)
        
        *(arg2 + 0x1f4) = rax_4 | 0x80
        
        if (r15 != 0)
            QueryPerformanceCounter(&performanceCount_1)
        
        if (r15 != 0 && (float.d(performanceCount_1) f* data_143d796f8 f+ zmm9.q f- zmm7.q)
                f* zmm8.q f> zmm6.q)
            rbx.b = 0
        else
            rbx.b = 1
        label_14242cb93:
            
            if ((*(arg2 + 0x1f5) & 1) == 0)
                *(arg2 + 0x1f4) &= 0xfd
                char rax_5
                
                if (r15 != 0)
                    rax_5 = *(arg1 + 0x11a)
                
                if (r15 == 0 || rax_5 u> 6 || not(test_bit(0x6a, zx.d(rax_5)))
                        || data_143de5426 != 0)
                    rbx = 0
                else
                    rbx = zx.q(data_143a2d8cc)
                
                uint8_t rax_7
                int128_t zmm6_1
                
                while (true)
                    zmm6_1 = sub_1420e5750(arg2, rbx.d, 0, nullptr)
                    rax_7 = *(arg2 + 0x1f4)
                    
                    if ((rax_7 & 2) != 0)
                        break
                    
                    QueryPerformanceCounter(&performanceCount_1)
                    
                    if (not((float.d(performanceCount_1) f* data_143d796f8 f+ zmm9.q f- zmm7.q)
                            f* zmm8.q f<= zmm6_1.q))
                        rax_7 = *(arg2 + 0x1f4)
                        break
                
                *(arg2 + 0x1f5) &= 0xfe
                *(arg2 + 0x1f5) |= rax_7 u>> 1 & 1
                char rax_8
                
                if ((*(arg2 + 0x1f4) & 2) != 0 && r15 != 0)
                    rax_8, zmm7 = sub_14243af30(u"updating components", zmm7, arg2, zmm6_1)
                
                if ((*(arg2 + 0x1f4) & 2) == 0 || (r15 != 0 && rax_8 != 0))
                    rbx.b = 0
                else
                    rbx.b = 1

char rax_9 = *(arg1 + 0x11a)

if (rax_9 u> 6 || not(test_bit(0x6a, zx.d(rax_9))) || *(arg1 + 0x11c) s>= 0)
    r13.b = 1
else
    void* rax_11 = *(arg1 + 0x30)
    
    if (rax_11 == 0 || *(rax_11 + 0xa0) == 0)
        r13.b = 1
    else if (rbx.b != 0)
        char rcx_11 = *(arg2 + 0x1f5)
        char rax_12 = rcx_11 & 4
        
        if (rax_12 == 0 || (rcx_11 & 8) == 0)
            if (rax_12 != 0)
                sub_1420deb40(arg2)
            else
                zmm7 = sub_1420e5cb0(arg2)
            
            if (r15 == 0)
                goto label_14242cd23
            
            if (sub_14243af30(u"initializing network actors", zmm7, arg2, zx.o(0)) == 0)
                goto label_14242cd23
        else
        label_14242cd23:
            
            if ((*(arg2 + 0x1f5) & 0x10) != 0)
            label_14242cd69:
                
                if ((*(arg2 + 0x1f5) & 0x20) == 0)
                    int128_t zmm6_3
                    int128_t zmm7_2
                    zmm6_3, zmm7_2 = sub_1420ee880(arg2)
                    *(arg2 + 0x1f5) |= 0x20
                    
                    if (r15 != 0)
                        sub_14243af30(u"sorting actor list", zmm7_2, arg2, zmm6_3)
                    
                    r13.b = 1
            else
                *(arg1 + 0x11d) |= 0x10
                int128_t zmm6_2
                int128_t zmm7_1
                zmm6_2, zmm7_1 = sub_1420ec570(arg2)
                *(arg2 + 0x1f5) |= 0x10
                *(arg1 + 0x11d) &= 0xef
                
                if (r15 == 0)
                    goto label_14242cd69
                
                if (sub_14243af30(u"routing Initialize on actors", zmm7_1, arg2, zmm6_2) == 0)
                    goto label_14242cd69

*(arg2 + 0x1f5) &= 0xbf

if (r13.b != 0)
    *(arg2 + 0x1f4) &= 0x7f
    *(arg2 + 0x1f5) &= 0xc6
    *(arg1 + 0xe0) = 0
    
    if ((*(arg2 + 0x1f6) & 2) == 0)
        sub_14225aa60(&var_98, arg2, 1)
        int64_t* rbx_1 = var_98
        int64_t* var_a8
        sub_1423ddac0(data_143f5b298, &var_a8, arg1)
        int64_t* r8_6 = var_a8
        int32_t i_1
        int32_t i = i_1
        
        while (i s>= 0)
            if (i s< r8_6[1].d && *(*r8_6 + (sx.q(i) << 3)) == 0)
                i += 1
                i_1 = i
                continue
            
            while (i s>= 0)
                if (i s>= r8_6[1].d)
                    break
                
                int64_t* rax_17 = sub_14226e280(*(*r8_6 + (sx.q(i) << 3)), arg1)
                
                if (rax_17 != 0)
                    var_98 = *sub_142272470(rax_17, &performanceCount_1, rbx_1, 0)
                    sub_14256a8c0(rax_17, &var_98)
                
                i = i_1
                r8_6 = var_a8
                
                do
                    i += 1
                    i_1 = i
                    
                    if (i s< 0)
                        goto label_14242ceb0
                    
                    if (i s>= r8_6[1].d)
                        break
                while (*(*r8_6 + (sx.q(i) << 3)) == 0)
            
            break
    
label_14242ceb0:
    *(arg2 + 0x1f4) |= 0x20
    sub_1420e5fa0(arg2)
    void*** rax_20 = sub_141f88540()
    void** r8_8 = *rax_20
    r8_8[9](rax_20, arg2, r8_8)
    sub_140aeb3d0(&data_143a30710, arg2, arg1)
    sub_140599090(arg1 + 0x3d0)
    sub_1420de620(arg1, *(sub_140d21d80(arg2) + 0x18), 1)

return sub_140b37f60("AddToWorld") __tailcall
