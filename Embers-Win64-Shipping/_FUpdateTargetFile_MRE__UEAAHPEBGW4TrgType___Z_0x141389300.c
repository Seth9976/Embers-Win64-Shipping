// 函数: ?FUpdateTargetFile@MRE@@UEAAHPEBGW4TrgType@@@Z
// 地址: 0x141389300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void var_2a8
sub_1419928d0(&var_2a8, arg3[8])
void*** r14 = nullptr
char var_2c0 = *arg1
int32_t var_2b0 = *(arg1 + 4)
int64_t rax_4 = *arg2
int32_t var_2b4 = 0x3f800000
void*** var_2f8
__builtin_memset(&var_2f8, 0, 0x19)
int64_t var_2bc = 0
int64_t* rax_5 = (*(rax_4 + 0x10))(arg2, 0)
int64_t* var_318

if (rax_5 != 0)
    int64_t* rcx_2 = *rax_5
    
    if (rcx_2 != 0)
        int64_t r8 = *rcx_2
        void* rax_6 = (*(r8 + 0x38))(rcx_2, zx.q(rax_5[1].d), r8)
        
        if (rax_6 != 0)
            int64_t* rcx_3 = *(rax_6 + 0x50)
            var_318 = rcx_3
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x30))()
            
            void*** rax_8 = sub_1410fccd0(&var_2a8, &var_318, u"SceneColor", 0)
            int64_t* rcx_5 = var_318
            r14 = rax_8
            
            if (rcx_5 != 0)
                int64_t rdx_3 = *rcx_5
                (*(rdx_3 + 0x38))(rcx_5, rdx_3)

int32_t var_2d0 = arg3[1].d
int32_t var_2cc = *(arg3 + 0xc)
int32_t var_2c8 = arg3[2].d
int32_t var_2c4 = *(arg3 + 0x14)
void*** var_2d8 = r14
void* rax_14 = (*(*arg2 + 0x38))(arg2, 0)
void*** rax_15

if (rax_14 != 0 && *(rax_14 + 0x50) != 0)
    rax_15 = sub_1410fccd0(&var_2a8, rax_14 + 0x50, u"FrameBuffer", 0)

int32_t var_310
int64_t* r8_1

if (rax_14 == 0 || *(rax_14 + 0x50) == 0 || rax_15 == 0)
    r8_1 = *arg3
else
    var_2f8 = rax_15
    void* rax_17 = (*(*arg2 + 0x38))(arg2, 0)
    int128_t zmm0_1
    
    if (rax_17 == 0)
        zmm0_1 = *(arg3 + 8)
    else
        void* rbx_1 = *(rax_17 + 0x50)
        
        if (rbx_1 == 0)
            zmm0_1 = *(arg3 + 8)
        else
            int64_t* rcx_10 = *(**arg3 + 0x18)
            
            if (*(rbx_1 + 0x10) != *(*(*rcx_10 + 8))(rcx_10))
                zmm0_1 = *(arg3 + 8)
            else
                void* rax_21 = *arg3
                
                if (*(rax_21 + 0x1524) != 2)
                    zmm0_1 = *(rax_21 + 0x258)
                else
                    zmm0_1 = *(rax_21 + 0x1598)
    
    r8_1 = *arg3
    var_318.o = zmm0_1
    int64_t* rax_22 = var_318
    int64_t var_2f0
    var_2f0.d = rax_22.d
    var_2f0:4.d = (rax_22 u>> 0x20).d
    int64_t rax_24 = var_310.q
    int64_t var_2e8
    var_2e8.d = rax_24.d
    var_2e8:4.d = (rax_24 u>> 0x20).d
    int64_t** rax_26
    rax_26.b = ***r8_1 == r8_1
    rax_26.b += 1
    char var_2e0_1 = rax_26.b

sub_14138dbd0(&var_318, &var_2a8, r8_1, &var_2f8)
int64_t* rbx_3 = var_318
sub_14139b300(arg2, &var_2a8, 0, rbx_3)
arg3[1].d = var_310
int32_t var_30c
*(arg3 + 0xc) = var_30c
int32_t var_308
arg3[2].d = var_308
int32_t var_304
*(arg3 + 0x14) = var_304
arg3[3].d = *(rbx_3 + 0x44)
*(arg3 + 0x1c) = rbx_3[9].d
sub_14199ef00(&var_2a8)
int64_t result = sub_1410eb9e0(&var_2a8)
__security_check_cookie(rax_1 ^ &var_338)
return result
