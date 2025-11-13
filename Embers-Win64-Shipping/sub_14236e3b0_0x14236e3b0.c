// 函数: sub_14236e3b0
// 地址: 0x14236e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t* rsi = arg5
void* rdi = arg6
int64_t rbp = 0
int32_t r12 = 0
int64_t r15 = arg2
int64_t var_2b0 = arg3
int64_t* var_2d8 = rsi
void* var_2d0 = rdi
void var_2a8
int128_t zmm0 = sub_14234f710(&var_2a8, rsi)
int32_t i_1 = 0

if (arg1[6].d s> 0)
    int64_t* rbx_1 = nullptr
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm10
    int128_t var_98_1 = zmm10
    int128_t zmm11
    int128_t var_a8_1 = zmm11
    int64_t* var_2c0_1 = nullptr
    int32_t i
    
    do
        if (*(rbx_1 + arg1[5]) != 0)
            int128_t* rax_3 = arg1[9]
            zmm11 = *(rax_3 + rbp)
            zmm7 = *(rax_3 + rbp + 4)
            zmm10 = *(rax_3 + rbp + 8)
            zmm8 = *(rax_3 + rbp + 0xc)
            void* var_2f8
            void* var_2f0
            (*(*arg1 + 0x2f0))(arg1, r15, arg4, rsi, var_2f8, var_2f0)
            zmm6 = zmm0
            
            if ((*(*arg1 + 0x2f8))(arg1, arg4) == 0)
                zmm6 = *(arg1[9] + rbp + 0x10)
            else if (not(zmm6.d f< zmm11.d) && not(zmm6.d f> zmm7.d))
                zmm0 = *(arg1[9] + rbp + 0x10)
                
                if (zmm7.d f<= 0f)
                    zmm6 = zmm0
                else
                    zmm6.d = zmm6.d f- zmm11.d
                    zmm7.d = zmm7.d f- zmm11.d
                    zmm6.d = zmm6.d f/ zmm7.d
                    zmm6.d = zmm6.d f* zmm0.d
            else if (zmm6.d f< zmm10.d || zmm6.d f> zmm8.d)
                if (zmm6.d f< zmm7.d || zmm6.d f> zmm10.d)
                    zmm6 = zx.o(0)
                else
                    zmm6 = *(arg1[9] + rbp + 0x10)
            else if (zmm8.d f<= 0f)
                zmm6 = zx.o(0)
            else
                zmm6.d = zmm6.d f- zmm10.d
                zmm8.d = zmm8.d f- zmm10.d
                zmm0.d = zmm6.d f/ zmm8.d
                zmm6.d = 1f f- zmm0.d
                zmm6.d = zmm6.d f* *(arg1[9] + rbp + 0x10)
            
            int32_t rax_11 = r12 + 1
            zmm0.d = zmm6.d f* *(rsi + 0x5c)
            char rsi_1 = *(arg4 + 0x180)
            int32_t var_24c_1 = zmm0.d
            
            if (zmm6.d f<= 0f)
                rax_11 = r12
            
            r12 = rax_11
            int32_t rax_12 = *(rdi + 8)
            int64_t* rbx_2 = *(rbx_1 + arg1[5])
            var_2f0 = var_2d0
            var_2f8 = &var_2a8
            (*(*rbx_2 + 0x298))(rbx_2, arg2, sub_142365fb0(arg3, rbx_2, i_1), arg4, var_2f8, 
                var_2f0)
            rdi = var_2d0
            
            if ((rsi_1 & 0x10) == 0 || zmm6.d f> 0f || rax_12 != *(rdi + 8))
                rsi = var_2d8
                r15 = arg2
            else
                int64_t* rcx_5 = *(arg4 + 0x18)
                (*(*rcx_5 + 0x288))(rcx_5)
                rsi = var_2d8
                r15 = arg2
                
                if (not(zmm0.d f>= 10000f))
                    *(arg4 + 0x180) |= 0x10
        
        rbp += 0x14
        var_2c0_1 = &var_2c0_1[1]
        i = i_1 + 1
        rbx_1 = var_2c0_1
        i_1 = i
    while (i s< arg1[6].d)

void* const rcx_9

if (*(arg4 + 0x668) == *(arg4 + 0x694))
label_14236e740:
    rcx_9 = nullptr
else
    void* r8_3 = *(arg4 + 0x6a0)
    void* r9_2 = arg4 + 0x698
    
    if (r8_3 != 0)
        r9_2 = r8_3
    
    int32_t rax_24 =
        *(r9_2 + ((sx.q((arg3 u>> 0x20).d * 0x17 + arg3.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
    
    if (rax_24 == 0xffffffff)
    label_14236e740_1:
        rcx_9 = nullptr
    else
        int64_t r8_4 = *(arg4 + 0x660)
        
        while (true)
            int64_t rdx_7 = sx.q(rax_24) * 3
            rcx_9 = r8_4 + (rdx_7 << 3)
            
            if (*(r8_4 + (rdx_7 << 3)) == arg3)
                break
            
            rax_24 = *(rcx_9 + 0x10)
            
            if (rax_24 == 0xffffffff)
                goto label_14236e740_2
        
        if (rax_24 == 0xffffffff)
        label_14236e740_2:
            rcx_9 = nullptr

void* rax_25 = rcx_9 + 8

if (rcx_9 == 0)
    rax_25 = nullptr

uint64_t i_2

if (rax_25 != 0)
    i_2 = zx.q(*rax_25)
else
    int64_t rsi_2 = sx.q(*(arg4 + 0x6b8))
    int32_t rax_26 = (rsi_2 + 8).d
    *(arg4 + 0x6b8) = rax_26
    
    if (rax_26 s> *(arg4 + 0x6bc))
        sub_1405daba0(arg4 + 0x6b0)
    
    i_1 = rsi_2.d
    *(rsi_2 + *(arg4 + 0x6b0)) = 0
    sub_141cf16a0(arg4 + 0x660, &var_2b0, &i_1)
    i_2 = sx.q(i_1)
    *(i_2 + *(arg4 + 0x6b0)) = 1

*(sx.q(i_2.d + 4) + *(arg4 + 0x6b0)) = r12
int64_t result = sub_142351ee0(&var_2a8)
__security_check_cookie(rax_1 ^ &var_318)
return result
