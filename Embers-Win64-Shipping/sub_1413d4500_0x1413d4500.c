// 函数: sub_1413d4500
// 地址: 0x1413d4500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int64_t* r12 = &data_143ec4d80
sub_141392f60(&data_143ec4c60, arg1, arg2)
char var_348 = 0
char* var_330 = &var_348
void*** (* var_338)() = j_sub_140597fc0
int64_t* rax_3 = sub_140a756e0(&var_338, &data_143958018) + 0x10
int64_t* var_320 = rax_3
int64_t rcx_1 = *rax_3
int64_t rcx_2 = rax_3[2]
char var_308 = 0
int64_t result_1 = rax_3[3]
rax_3[3] = &var_320
int64_t* rax_4 = var_320
rax_4[4].d += 1
void var_2c0
sub_1419928d0(&var_2c0, arg1)
int64_t i_1 = 2
int64_t i_2 = 2
int64_t i

do
    int64_t* rbx_1 = *r12
    int32_t var_328
    int64_t var_200
    sub_140865c40(&var_200, &var_328, rbx_1)
    int64_t rax_5 = sx.q(var_328)
    void* const rcx_5
    
    if (rax_5.d == 0xffffffff)
        rcx_5 = nullptr
    else
        rcx_5 = var_200 + rax_5 * 0x18
    
    void*** (** r14_1)() = rcx_5 + 8
    
    if (rcx_5 == 0)
        r14_1 = nullptr
    
    int64_t* var_2b8
    void*** (* r14_2)()
    
    if (r14_1 == 0)
        int128_t* rax_8 = (*(*rbx_1 + 0x10))(rbx_1)
        void*** (* rax_9)() = sub_14081d830(0x88, var_2b8, 1, 0)
        void*** (* rcx_7)() = rax_9
        
        if (rax_9 == 0)
            rcx_7 = nullptr
        else
            *(rax_9 + 8) = u"OutputCubemap"
            *(rax_9 + 0x10) = 0
            *(rax_9 + 0x18) = 0
            *(rax_9 + 0x1c) = 0
            *(rax_9 + 0x20) = 0
            *(rax_9 + 0x28) = 0x200
            *rax_9 = &data_142f11960
            *(rax_9 + 0x30) = *rax_8
            *(rax_9 + 0x40) = rax_8[1]
            *(rax_9 + 0x50) = rax_8[2]
            *(rax_9 + 0x60) = rax_8[3]
            int128_t zmm0_1 = rax_8[4]
            *(rax_9 + 0x80) = 0
            *(rax_9 + 0x70) = zmm0_1
        
        int64_t rax_10 = *r12
        void*** (* var_340)() = rcx_7
        *(rcx_7 + 0x80) = rax_10
        int64_t* var_2d8_1 = r12
        *(var_340 + 0x10) = *(*r12 + 0x10)
        void*** (** var_2e0)() = &var_340
        void var_2f0
        void var_2a0
        sub_14107bc20(&var_2a0, &var_2f0, &var_2e0, nullptr)
        int64_t var_2e8 = *r12
        int64_t* var_2d0 = &var_2e8
        void*** (** var_2c8_1)() = &var_340
        void var_2ec
        sub_14107baa0(&var_200, &var_2ec, &var_2d0, nullptr)
        r14_2 = var_340
    else
        r14_2 = *r14_1
    
    uint32_t r15_1 = zx.d(*(r14_2 + 0x56))
    int32_t rsi_1 = 0
    
    if (r15_1 != 0)
        do
            for (int32_t j = 0; j s< 6; j += 1)
                int64_t* rax_14 = sub_14081d830(0x90, var_2b8, 1, 0)
                int64_t* rbx_3 = rax_14
                
                if (rax_14 == 0)
                    rbx_3 = nullptr
                else
                    sub_14117af20(rax_14)
                
                memset(&rbx_3[2], 0, 0x80)
                var_338 = r14_2
                var_330.w = 2
                var_330:2.b = rsi_1.b
                var_330:4.d = j
                *rbx_3 = var_338.o
                char* var_358_1 = &var_348
                void var_347
                sub_1413b7870(&var_2c0, &var_347, rbx_3, 1)
            
            rsi_1 += 1
        while (rsi_1 s< r15_1)
        
        i_1 = i_2
    
    r12 = &r12[1]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
sub_14199ef00(&var_2c0)
int64_t result = sub_1410eb9e0(&var_2c0)

if (var_308 == 0)
    int64_t* rax_15 = var_320
    char var_308_1 = 1
    rax_15[4].d -= 1
    int64_t* rcx_16 = var_320
    
    if (rcx_2 != rcx_16[2])
        sub_140b16b40(rcx_16, rcx_2)
        rcx_16 = var_320
    
    *rcx_16 = rcx_1
    result = result_1
    var_320[3] = result

__security_check_cookie(rax_1 ^ &var_378)
return result
