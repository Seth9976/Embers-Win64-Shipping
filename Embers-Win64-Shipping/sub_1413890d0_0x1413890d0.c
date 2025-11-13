// 函数: sub_1413890d0
// 地址: 0x1413890d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
void var_2b8
sub_1419928d0(&var_2b8, arg3[8])
int64_t* rax_3 = (*(*arg2 + 0x10))(arg2, 0)
int32_t rbx = 0
int64_t* var_348
void*** r15

if (rax_3 == 0)
    r15 = nullptr
else
    int64_t* rcx_2 = *rax_3
    
    if (rcx_2 == 0)
        r15 = nullptr
    else
        int64_t r8 = *rcx_2
        void* rax_4 = (*(r8 + 0x38))(rcx_2, zx.q(rax_3[1].d), r8)
        
        if (rax_4 == 0)
            r15 = nullptr
        else
            int64_t* rcx_3 = *(rax_4 + 0x50)
            var_348 = rcx_3
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x30))()
            
            void*** rax_6 = sub_1410fccd0(&var_2b8, &var_348, u"GaussianBlurInput", 0)
            int64_t* rcx_5 = var_348
            r15 = rax_6
            
            if (rcx_5 != 0)
                int64_t rdx_3 = *rcx_5
                (*(rdx_3 + 0x38))(rcx_5, rdx_3)

int32_t var_338
sub_14139c620(arg3, &var_338, *(r15 + 0x44))
int64_t* rax_8 = (*(*arg2 + 0x10))(arg2, 1)
void*** rdi

if (rax_8 == 0)
    rdi = nullptr
else
    int64_t* rcx_8 = *rax_8
    
    if (rcx_8 == 0)
        rdi = nullptr
    else
        int64_t r8_2 = *rcx_8
        void* rax_9 = (*(r8_2 + 0x38))(rcx_8, zx.q(rax_8[1].d), r8_2)
        
        if (rax_9 == 0)
            rdi = nullptr
        else
            int64_t* rcx_9 = *(rax_9 + 0x50)
            var_348 = rcx_9
            
            if (rcx_9 != 0)
                (*(*rcx_9 + 0x30))()
            
            void*** rax_11 = sub_1410fccd0(&var_2b8, &var_348, u"AdditiveTexture", 0)
            int64_t* rcx_11 = var_348
            rdi = rax_11
            
            if (rcx_11 != 0)
                int64_t rdx_7 = *rcx_11
                (*(rdx_7 + 0x38))(rcx_11, rdx_7)

int32_t rcx_13 = 0
int32_t rdx_8 = 0
int32_t r8_3 = 0

if (rdi != 0)
    int64_t* rax_12 = sub_14139c620(arg3, &var_348, *(rdi + 0x44))
    rbx = *rax_12
    rcx_13 = *(rax_12 + 4)
    rdx_8 = rax_12[1].d
    r8_3 = *(rax_12 + 0xc)

int128_t zmm0 = *(arg1 + 0x10)
int64_t var_318 = *arg1
int64_t var_310 = arg1[1]
int32_t var_300 = var_338
int32_t var_334
int32_t var_2fc = var_334
int32_t var_2c8 = *(arg1 + 0x24)
int128_t var_2d8 = zmm0
int32_t var_330
int32_t var_2f8 = var_330
int32_t var_2e4 = rcx_13
int32_t var_2e0 = rdx_8
int32_t var_2dc = r8_3
int32_t var_32c
int32_t var_2f4 = var_32c
int32_t var_2c4 = arg1[5].d.d
int32_t var_2c0 = arg1[4].d
void*** var_308 = r15
void*** var_2f0 = rdi
int32_t var_2e8 = rbx
sub_14139b300(arg2, &var_2b8, 0, *sub_14138b5f0(&var_338, &var_2b8, *arg3, &var_318))
sub_14199ef00(&var_2b8)
int64_t result = sub_1410eb9e0(&var_2b8)
__security_check_cookie(rax_1 ^ &var_368)
return result
