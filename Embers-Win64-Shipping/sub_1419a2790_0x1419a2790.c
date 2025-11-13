// 函数: sub_1419a2790
// 地址: 0x1419a2790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* r9 = *arg1
int64_t rax_2 = 0
char rbp = arg3

if (0 == *(r9 + 8))
    *(r9 + 8) = 0
else
    rax_2 = *(r9 + 8)

uint8_t result = (rax_2 u>> 0x1a).b

if ((result & 1) == 0)
    int32_t rax_4 = data_143f1afa4 + 1
    data_143f1afa4 = rax_4
    char rax_6
    
    if (rax_4 s<= 1)
        int64_t* rax_5 = sub_140a242a0()
        int64_t r8 = *rax_5
        rax_6 = (*(r8 + 0x20))(rax_5, 2, r8, r9)
    
    if (rax_4 s> 1 || rax_6 != 0)
        rbp = 0
    
    int64_t* rax_7 = sub_140a491d0(0)
    int64_t* rax_8 = sub_140a242a0()
    void* rcx_1 = *arg1
    void** var_68_1 = nullptr
    int32_t var_5c_1 = 4
    int32_t i_2 = 1
    void* var_88 = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 0x48) += 1
    
    (*(*rax_8 + 0x50))(rax_8, rax_7, &var_88, 2, arg2 | 0x200)
    void** rcx_3 = var_68_1
    void** rbx_2 = &var_88
    int32_t i_1 = i_2
    
    if (rcx_3 != 0)
        rbx_2 = rcx_3
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_4 = *rbx_2
            
            if (rcx_4 != 0)
                rcx_4[9].d -= 1
                
                if (rcx_4[9].d == 1)
                    sub_140a2f6e0(rcx_4)
            
            rbx_2 = &rbx_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_3 = var_68_1
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    uint64_t r15_1 = 0x21
    
    if (data_1439c85d4 u< 0x21)
        r15_1 = zx.q(data_1439c85d4)
    
    int128_t zmm1_1
    zmm1_1.q = float.d(zx.q((r15_1 << 2).d))
    zmm1_1.q = zmm1_1.q f* 0.001
    void var_a0
    sub_140a61970(&var_a0, zmm1_1)
    int128_t zmm0_1 = sub_140a8a910(&var_a0)
    uint128_t zmm7
    zmm7.q = _mm_cvtepi32_pd(zx.q(data_1439c85d8)).q f* 0.001
    zmm7.q = zmm7.q f+ zmm0_1.q
    char rdi_1 = sub_140af87a0()
    TEB* gsbase
    
    if (data_143f1afac
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f1afac)
        
        if (data_143f1afac == 0xffffffff)
            sub_140af2b60()
            data_143f1afa8 = sub_140b21a10(&data_143dbb3f0, u"nothreadtimeout")
            _Init_thread_footer(&data_143f1afac)
    
    while (true)
        int64_t zmm7_1
        double zmm8_1
        zmm7_1, zmm8_1 = sub_1419987f0()
        
        if (rbp != 0)
            int64_t* rax_11 = sub_140a242a0()
            int64_t r8_2 = *rax_11
            (*(r8_2 + 0x30))(rax_11, 2, r8_2)
        
        char rax_13 = (*(*rax_7 + 0x20))(rax_7, zx.q(r15_1.d), 0)
        sub_140a8e3c0(&var_a0)
        double zmm0_2 = sub_140a8a910(&var_a0)
        char rax_15
        
        if (not(zmm0_2 f< zmm7_1))
            void* rax_14
            rax_14, zmm8_1 = sub_140a753a0()
            rax_15 = sub_140a80d20(rax_14)
        
        if (zmm0_2 f< zmm7_1 || rax_15 == 0)
            rbx_2.b = 0
        else
            int64_t* rcx_15 = data_143f0f180
            rbx_2.b = 1
            
            if (rcx_15 != 0)
                char rax_17
                int64_t r9_1
                rax_17, r9_1 = (*(*rcx_15 + 0x690))(rcx_15)
                
                if (rax_17 == 0)
                    sub_140af98a0("Unknown", 0x478, u"GPU has hung or crashed!", r9_1)
                    sub_140afbb40()
        
        rdi_1 |= sub_140af87a0()
        
        if (rax_13 != 0)
            break
        
        if (rdi_1 == 0 && rbx_2.b != 0 && data_143f1afa8 == rdi_1)
            sub_140af98a0("Unknown", 0x485, 
                GameThread timed out waiting for RenderThread after %.02f secs", 
                sub_140a8a910(&var_a0) - zmm8_1)
            sub_140afbb40()
    
    result = sub_140a4fc50(rax_7)
    data_143f1afa4 -= 1

__security_check_cookie(rax_1 ^ &var_d8)
return result
