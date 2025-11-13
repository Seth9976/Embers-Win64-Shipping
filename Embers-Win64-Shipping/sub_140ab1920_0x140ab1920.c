// 函数: sub_140ab1920
// 地址: 0x140ab1920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
AcquireSRWLockShared(arg1 + 0x98)
int64_t* r14 = *(arg1 + 0xa0)
int64_t i_10 = 0
int64_t i_9 = 2
void* rbp = &r14[sx.q(*(arg1 + 0xa8))]
int32_t var_378
void var_268
void var_264
int128_t zmm0
int128_t zmm1

if (r14 == rbp)
label_140ab1b8e:
    var_378 = 7
    void* rcx_17 = &var_268
    int16_t var_374_2 = i_10.w
    int32_t* rax_11 = &var_378
    int64_t i_8 = 2
    int64_t i
    
    do
        rcx_17 += 0x80
        zmm0 = *rax_11
        zmm1 = *(rax_11 + 0x10)
        rax_11 = &rax_11[0x20]
        *(rcx_17 - 0x80) = zmm0
        zmm0 = *(rax_11 - 0x60)
        *(rcx_17 - 0x70) = zmm1
        zmm1 = *(rax_11 - 0x50)
        *(rcx_17 - 0x60) = zmm0
        zmm0 = *(rax_11 - 0x40)
        *(rcx_17 - 0x50) = zmm1
        zmm1 = *(rax_11 - 0x30)
        *(rcx_17 - 0x40) = zmm0
        zmm0 = *(rax_11 - 0x20)
        *(rcx_17 - 0x30) = zmm1
        zmm1 = *(rax_11 - 0x10)
        *(rcx_17 - 0x20) = zmm0
        *(rcx_17 - 0x10) = zmm1
        i = i_8
        i_8 -= 1
    while (i != 1)
    *rcx_17 = *rax_11
    void* rax_13 = &arg2[1]
    void* rcx_18 = &var_264
    *arg2 = 7
    int64_t i_1
    
    do
        rax_13 += 0x80
        zmm0 = *rcx_18
        zmm1 = *(rcx_18 + 0x10)
        rcx_18 += 0x80
        *(rax_13 - 0x80) = zmm0
        zmm0 = *(rcx_18 - 0x60)
        *(rax_13 - 0x70) = zmm1
        zmm1 = *(rcx_18 - 0x50)
        *(rax_13 - 0x60) = zmm0
        zmm0 = *(rcx_18 - 0x40)
        *(rax_13 - 0x50) = zmm1
        zmm1 = *(rcx_18 - 0x30)
        *(rax_13 - 0x40) = zmm0
        zmm0 = *(rcx_18 - 0x20)
        *(rax_13 - 0x30) = zmm1
        zmm1 = *(rcx_18 - 0x10)
        *(rax_13 - 0x20) = zmm0
        *(rax_13 - 0x10) = zmm1
        i_1 = i_9
        i_9 -= 1
    while (i_1 != 1)
else
    int32_t r12_1 = data_143db9bc0
    
    while (true)
        void* rdi_1 = *r14
        int32_t var_388
        sub_140aaae20(rdi_1 + 8, &var_388, arg3)
        int64_t rax_3 = sx.q(var_388)
        void* const rcx_4
        
        if (rax_3.d == 0xffffffff)
            i_10 = 0
            rcx_4 = nullptr
        else
            rcx_4 = (rax_3 << 5) + *(rdi_1 + 8)
            i_10 = 0
        
        void* rdx_1 = rcx_4 + 0xc
        
        if (rcx_4 == 0)
            rdx_1 = nullptr
        
        int32_t var_158_1
        void var_154
        uint64_t var_50
        
        if (rdx_1 == 0)
            var_378 = 7
            void* rdx_2 = &var_268
            int16_t var_374_1 = 0
            int32_t* rax_9 = &var_378
            int64_t i_6 = 2
            int64_t i_2
            
            do
                rdx_2 += 0x80
                zmm0 = *rax_9
                zmm1 = *(rax_9 + 0x10)
                rax_9 = &rax_9[0x20]
                *(rdx_2 - 0x80) = zmm0
                zmm0 = *(rax_9 - 0x60)
                *(rdx_2 - 0x70) = zmm1
                zmm1 = *(rax_9 - 0x50)
                *(rdx_2 - 0x60) = zmm0
                zmm0 = *(rax_9 - 0x40)
                *(rdx_2 - 0x50) = zmm1
                zmm1 = *(rax_9 - 0x30)
                *(rdx_2 - 0x40) = zmm0
                zmm0 = *(rax_9 - 0x20)
                *(rdx_2 - 0x30) = zmm1
                zmm1 = *(rax_9 - 0x10)
                *(rdx_2 - 0x20) = zmm0
                *(rdx_2 - 0x10) = zmm1
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            void* rax_10 = &var_154
            *rdx_2 = *rax_9
            void* rcx_16 = &var_264
            int64_t i_7 = 2
            var_158_1 = 7
            int64_t i_3
            
            do
                rax_10 += 0x80
                zmm0 = *rcx_16
                zmm1 = *(rcx_16 + 0x10)
                rcx_16 += 0x80
                *(rax_10 - 0x80) = zmm0
                zmm0 = *(rcx_16 - 0x60)
                *(rax_10 - 0x70) = zmm1
                zmm1 = *(rcx_16 - 0x50)
                *(rax_10 - 0x60) = zmm0
                zmm0 = *(rcx_16 - 0x40)
                *(rax_10 - 0x50) = zmm1
                zmm1 = *(rcx_16 - 0x30)
                *(rax_10 - 0x40) = zmm0
                zmm0 = *(rcx_16 - 0x20)
                *(rax_10 - 0x30) = zmm1
                zmm1 = *(rcx_16 - 0x10)
                *(rax_10 - 0x20) = zmm0
                *(rax_10 - 0x10) = zmm1
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        else
            var_158_1 = r12_1
            void* rax_4 = &var_154
            void* rcx_5 = &data_143db9bc4
            i_10 = 2
            int64_t i_4
            
            do
                rax_4 += 0x80
                zmm0 = *rcx_5
                zmm1 = *(rcx_5 + 0x10)
                rcx_5 += 0x80
                *(rax_4 - 0x80) = zmm0
                zmm0 = *(rcx_5 - 0x60)
                *(rax_4 - 0x70) = zmm1
                zmm1 = *(rcx_5 - 0x50)
                *(rax_4 - 0x60) = zmm0
                zmm0 = *(rcx_5 - 0x40)
                *(rax_4 - 0x50) = zmm1
                zmm1 = *(rcx_5 - 0x30)
                *(rax_4 - 0x40) = zmm0
                zmm0 = *(rcx_5 - 0x20)
                *(rax_4 - 0x30) = zmm1
                zmm1 = *(rcx_5 - 0x10)
                *(rax_4 - 0x20) = zmm0
                *(rax_4 - 0x10) = zmm1
                i_4 = i_10
                i_10 -= 1
            while (i_4 != 1)
            var_50 = (
                ((zx.q(*(rdx_1 + 5)) << 8 | zx.q(*(rdx_1 + 6))) << 8 | zx.q(*(rdx_1 + 7))) << 8
                | zx.q(*(rdx_1 + 8))) << 8 | zx.q(*(rdx_1 + 9))
        
        if (var_158_1 == 0)
            *arg2 = i_10.d
            void* rcx_22 = &arg2[1]
            void* rdx_3 = &var_154
            int64_t i_5
            
            do
                rcx_22 += 0x80
                zmm0 = *rdx_3
                zmm1 = *(rdx_3 + 0x10)
                rdx_3 += 0x80
                *(rcx_22 - 0x80) = zmm0
                zmm0 = *(rdx_3 - 0x60)
                *(rcx_22 - 0x70) = zmm1
                zmm1 = *(rdx_3 - 0x50)
                *(rcx_22 - 0x60) = zmm0
                zmm0 = *(rdx_3 - 0x40)
                *(rcx_22 - 0x50) = zmm1
                zmm1 = *(rdx_3 - 0x30)
                *(rcx_22 - 0x40) = zmm0
                zmm0 = *(rdx_3 - 0x20)
                *(rcx_22 - 0x30) = zmm1
                zmm1 = *(rdx_3 - 0x10)
                *(rcx_22 - 0x20) = zmm0
                *(rcx_22 - 0x10) = zmm1
                i_5 = i_9
                i_9 -= 1
            while (i_5 != 1)
            
            if (*arg2 == i_9.d)
                *(arg2 + 0x108) = var_50
            
            break
        
        r14 = &r14[1]
        
        if (r14 == rbp)
            goto label_140ab1b8e
ReleaseSRWLockShared(arg1 + 0x98)
__security_check_cookie(rax_1 ^ &var_3a8)
return arg2
