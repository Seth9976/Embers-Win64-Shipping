// 函数: sub_1422decd0
// 地址: 0x1422decd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* rsi = arg2
void* r15 = arg1
int32_t i
void var_11c
int32_t var_110
int64_t var_100
void var_d8
void var_d0
uint64_t var_b0

if (*(arg1 + 0x101) == 0)
    do
        int64_t* rcx_18 = *(r15 + 0xe8)
        i = (*(*rcx_18 + 0x30))(rcx_18)
    while (i s> 0)
    
    int32_t i_1 = 0
    
    if (rsi[1].d s> 0)
        int64_t rsi_2 = 0
        
        do
            int64_t r9_4 = sx.q(*(*arg2 + rsi_2))
            i = *(r15 + 0x20)
            
            if (i != *(r15 + 0x4c))
                void* rcx_19 = *(r15 + 0x58)
                void* r8_3 = r15 + 0x50
                
                if (rcx_19 != 0)
                    r8_3 = rcx_19
                
                int32_t* rcx_23
                
                for (i = *(r8_3 + (((sx.q(*(r15 + 0x60)) - 1) & r9_4) << 2)); i != 0xffffffff; 
                        i = rcx_23[0xa])
                    rcx_23 = sx.q(i) * 0x30 + *(r15 + 0x18)
                    
                    if (*rcx_23 == r9_4.d)
                        if (i != 0xffffffff && rcx_23 != 0 && rcx_23 != -8)
                            sub_1422d9ca0(&var_d8, &rcx_23[2])
                            int64_t rcx_25 = *arg2
                            int32_t var_b8_2 = 0
                            var_b0 = 0
                            int64_t var_a8_1
                            __builtin_memset(&var_a8_1, 0, 0x24)
                            var_100 = rcx_25 + (sx.q(i_1) << 2)
                            int32_t var_84_2 = 0x80
                            int32_t var_80_2 = 0xffffffff
                            int32_t var_7c_2 = 0
                            int64_t var_70_2 = 0
                            int32_t var_68_3 = 0
                            void* var_f8_1 = &var_d8
                            sub_14186d230(arg3, &var_110)
                            int32_t* var_108
                            sub_1422d4760(&var_100, var_108)
                            int32_t rax_14 = var_110
                            var_108[0x20] = 0xffffffff
                            sub_1422e20e0(arg3, &var_11c, *var_108, var_108, rax_14, nullptr)
                            int32_t var_68_4 = 0
                            
                            if (var_70_2 != 0)
                                sub_140a74f90(var_70_2)
                            
                            sub_1407547c0(&var_b0, 0)
                            int64_t var_90_1
                            
                            if (var_90_1 != 0)
                                sub_140a74f90(var_90_1)
                            
                            uint64_t rcx_33 = var_b0
                            
                            if (rcx_33 != 0)
                                sub_140a74f90(rcx_33)
                            
                            sub_140596e10(&var_d0)
                            i = sub_1422f1450(r15 + 0x18, *(*arg2 + rsi_2))
                        
                        break
            
            i_1 += 1
            rsi_2 += 4
        while (i_1 s< arg2[1].d)
else
    zmm6 = 0x3c23d70a
    CRITICAL_SECTION* lpCriticalSection = arg1 + 0x70
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    int32_t r14 = 0
    int32_t var_120_1 = 0
    
    while (true)
        void* rax_2 = *(r15 + 0xe8)
        
        if (*(rax_2 + 0x28) != 0)
            data_143de542b = 0
            int16_t* const r9_1
            
            if (*(rax_2 + 0x20) == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *(rax_2 + 0x18)
            
            sub_140af98a0("Unknown", 0x478, u"Shader Compiling thread exception:\r\n%s", r9_1)
            sub_140afbb40()
        
        int32_t var_128_1 = 0
        int32_t rdi_1 = 0
        i = EnterCriticalSection(lpCriticalSection)
        int32_t i_2 = 0
        int32_t i_3 = 0
        
        if (rsi[1].d s> 0)
            void* rbx_1 = nullptr
            
            do
                int64_t r9_2 = sx.q(*(rbx_1 + *rsi))
                i = *(r15 + 0x20)
                
                if (i != *(r15 + 0x4c))
                    void* rcx_1 = *(r15 + 0x58)
                    void* r8 = r15 + 0x50
                    
                    if (rcx_1 != 0)
                        r8 = rcx_1
                    
                    i = *(r8 + (((sx.q(*(r15 + 0x60)) - 1) & r9_2) << 2))
                    
                    if (i != 0xffffffff)
                        int64_t r8_1 = *(r15 + 0x18)
                        
                        do
                            int64_t i_4 = sx.q(i)
                            int64_t rcx_3 = i_4 * 6
                            
                            if (*(r8_1 + (rcx_3 << 3)) == r9_2.d)
                                if (i != 0xffffffff)
                                    int64_t rdi_3 = i_4 * 0x30
                                    void* rdi_4 = rdi_3 + r8_1
                                    
                                    if (rdi_3 == neg.q(r8_1) || rdi_4 == -8)
                                        rdi_1 = var_128_1
                                    else
                                        int32_t r15_1 = 0
                                        int32_t k = 0
                                        
                                        if (*(rdi_4 + 0x18) s> 0)
                                            int64_t* rsi_1 = nullptr
                                            
                                            do
                                                int64_t* rcx_4 = *(rsi_1 + *(rdi_4 + 0x10))
                                                void* rax_6 = (*(*rcx_4 + 0x20))(rcx_4)
                                                int32_t rax_7
                                                
                                                if (rax_6 == 0)
                                                    rax_7 = 1
                                                else
                                                    rax_7 = *(rax_6 + 0x18)
                                                
                                                r15_1 += rax_7
                                                k += 1
                                                rsi_1 = &rsi_1[2]
                                            while (k s< *(rdi_4 + 0x18))
                                            
                                            rsi = arg2
                                            i_2 = i_3
                                        
                                        i = *(rdi_4 + 8)
                                        
                                        if (r15_1 != i)
                                            rdi_1 = var_128_1 + i
                                            var_128_1 = rdi_1
                                        else
                                            sub_1422d9ca0(&var_d8, rdi_4 + 8)
                                            int64_t rcx_6 = *rsi
                                            int32_t var_b8_1 = 0
                                            var_b0 = 0
                                            int64_t var_a8
                                            __builtin_memset(&var_a8, 0, 0x24)
                                            var_110.q = rcx_6 + (sx.q(i_3) << 2)
                                            int32_t var_84_1 = 0x80
                                            int32_t var_80_1 = 0xffffffff
                                            int32_t var_7c_1 = 0
                                            int64_t var_70_1 = 0
                                            int32_t var_68_1 = 0
                                            void* var_108_1 = &var_d8
                                            sub_14186d230(arg3, &var_100)
                                            int32_t* var_f8
                                            sub_1422d4760(&var_110, var_f8)
                                            int32_t rax_9 = var_100.d
                                            var_f8[0x20] = 0xffffffff
                                            sub_1422e20e0(arg3, &var_11c, *var_f8, var_f8, rax_9, 
                                                nullptr)
                                            int32_t var_68_2 = 0
                                            
                                            if (var_70_1 != 0)
                                                sub_140a74f90(var_70_1)
                                            
                                            sub_1407547c0(&var_b0, 0)
                                            int64_t var_90
                                            
                                            if (var_90 != 0)
                                                sub_140a74f90(var_90)
                                            
                                            uint64_t rcx_14 = var_b0
                                            
                                            if (rcx_14 != 0)
                                                sub_140a74f90(rcx_14)
                                            
                                            sub_140596e10(&var_d0)
                                            i = sub_1422f1450(r15 + 0x18, *(*rsi + rbx_1))
                                            i_2 = i_3
                                            rdi_1 = var_128_1
                                
                                break
                            
                            i = *(r8_1 + (rcx_3 << 3) + 0x28)
                        while (i != 0xffffffff)
                
                i_2 += 1
                rbx_1 += 4
                i_3 = i_2
            while (i_2 s< rsi[1].d)
            
            lpCriticalSection = lpCriticalSection_1
            r15 = arg1
            r14 = var_120_1
        
        if (lpCriticalSection != 0)
            i = LeaveCriticalSection(lpCriticalSection)
        
        if (rdi_1 s<= 0)
            break
        
        zmm6 = sub_140b73230(zmm6)
        r14 += 1
        var_120_1 = r14
        
        if (r14 s> 0x32)
            r14 = 0
            var_120_1 = 0
            sub_140b19e60()
            void* rdx_8 = data_1439a8bd0
            (*(rdx_8 + 0x48))(&data_1439a8bd0, rdx_8)
__security_check_cookie(rax_1 ^ &var_158)
return i
