// 函数: sub_1427ee760
// 地址: 0x1427ee760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_378[0xd0]
int32_t (* var_30)[0xd0] = &var_378
int64_t* rdi = arg2
uint64_t i_2 = zx.q(arg3)
int32_t var_28 = 0
char var_38 = 1
int32_t var_24 = 0x10

if (arg3 u> 0x10)
    sub_1427f3ce0(&var_378, i_2.d)

int32_t var_388 = 0
int32_t var_558[0x1c]
int32_t (* var_390)[0x1c] = &var_558
char var_398 = 1
int32_t var_384 = 0x10

if (i_2.d u> 0x10)
    sub_1427f3db0(&var_558, i_2.d)

if (i_2.d != 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t* rbx_1 = *rdi
        int128_t var_5c8
        void var_590
        sub_1427f1820(&var_5c8, (*(*rbx_1 + 0x40))(rbx_1, &var_590))
        uint64_t rcx_4 = zx.q(var_28)
        
        if ((var_24 & 0x7fffffff) u> rcx_4.d)
            void* rdx_5 = rcx_4 * 0x34
            void* rdx_6 = rdx_5 + var_30
            
            if (rdx_5 != neg.q(var_30))
                *rdx_6 = var_5c8
                int128_t var_5b8
                *(rdx_6 + 0x10) = var_5b8
                int128_t var_5a8
                *(rdx_6 + 0x20) = var_5a8
                int32_t var_598
                *(rdx_6 + 0x30) = var_598.d
                rcx_4 = zx.q(var_28)
            
            var_28 = rcx_4.d + 1
        else
            sub_1427f3950(&var_378, &var_5c8)
        
        int32_t* rax_6 = (*(*rbx_1 + 0x90))(rbx_1, &var_590)
        uint64_t rdx_8 = zx.q(var_388)
        
        if ((var_384 & 0x7fffffff) u> rdx_8.d)
            void* rcx_11 = rdx_8 * 0x1c
            void* rcx_12 = rcx_11 + var_390
            
            if (rcx_11 != neg.q(var_390))
                *rcx_12 = *rax_6
                *(rcx_12 + 4) = rax_6[1]
                *(rcx_12 + 8) = rax_6[2]
                *(rcx_12 + 0xc) = rax_6[3]
                *(rcx_12 + 0x10) = rax_6[4]
                *(rcx_12 + 0x14) = rax_6[5]
                *(rcx_12 + 0x18) = rax_6[6]
                rdx_8 = zx.q(var_388)
            
            var_388 = rdx_8.d + 1
        else
            sub_1427f3ac0(&var_558, rax_6)
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_1422288b0(arg1, var_30, var_390, i_2.d)

if ((var_384 & 0x7fffffff) != 0 && var_384 s>= 0)
    if (var_390 == &var_558)
        char var_398_1 = 0
    else if (var_390 != 0)
        class physx::PxAllocatorCallback* rax_15 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_15
        (*(r8_2 + 0x10))(rax_15, var_390, r8_2)

if ((var_24 & 0x7fffffff) != 0 && var_24 s>= 0 && var_30 != &var_378 && var_30 != 0)
    class physx::PxAllocatorCallback* rax_17 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_17
    (*(r8_3 + 0x10))(rax_17, var_30, r8_3)

return arg1
