// 函数: sub_140e87e80
// 地址: 0x140e87e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t rax_1 = __security_cookie ^ &var_4c8
arg1[0xb0].d += 1
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
void* var_468
sub_140e683e0(arg1, &var_468, *(arg4 + 0xc))
int64_t* rcx = *(var_468 + 0x1d0)
void* rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 8))(rcx, arg4)

if (rcx == 0 || rax_2.b == 0)
    rax_2.b = 0
else
    rax_2.b = 1

char var_498 = rax_2.b
float var_448[0x4] = zx.o(0)
void var_268
float zmm0[0x4] = sub_140e52c00(&var_268, arg3)
void* rdi = var_468
int32_t rbx_1 = arg4[0xa].d
float var_458[0x4]
char var_488
void** var_438
void var_3c8
void var_3c0
int64_t* var_280
void var_278
void var_108

if (sub_140e6a060(rdi, rbx_1) == 0)
    if (sub_140db3500(&var_268) == 0)
        int64_t rdi_1 = *arg1
        int32_t rbx_3 = *(var_468 + 0x18)
        int64_t* rax_11 = sub_140e67030(arg1, &var_458)
        int64_t var_4a8
        var_4a8.b = 0
        sub_140d963a0(&var_268, (*(rdi_1 + 0xf8))(arg1, &var_3c8, arg4[3], rax_11, var_4a8, rbx_3))
        sub_140596d80(&var_278)
        
        if (var_280 != 0)
            var_280[1].d -= 1
            
            if (var_280[1].d == 1)
                (**var_280)(var_280)
                int32_t temp2_1 = *(var_280 + 0xc)
                *(var_280 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_280 + 8))(var_280, 1)
        
        sub_140d94d20(&var_3c0)
        sub_140596d80(&var_458)
    
    if (var_498 != 0)
        void* rax_15 = var_468
        int64_t* rbx_5 = *(rax_15 + 0x1d8)
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        int64_t* rdi_2 = var_448[2].q
        var_448[0].q = *(rax_15 + 0x1d0)
        
        if (rbx_5 != rdi_2)
            var_448[2].q = rbx_5
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp10_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        else if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp9_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        sub_140e86930(var_468)
    
    int64_t* var_478_1 = arg1
    int32_t var_138
    var_488.d = var_138 - 1
    void* var_480_2 = &var_268
    var_488.q = &var_498
    float (* var_480_3)[0x4] = &var_448
    var_458 = var_488.o
    sub_1405979f0(arg2, 
        sub_140e4c1a0(&var_108, arg1, &var_458, sub_140e51390(&var_438, arg4), &var_488))
    sub_140597700(&var_108)
else
    sub_140e65360(rdi, &var_3c8, rbx_1, 0, zmm0, arg4)
    int32_t var_298
    
    if (var_298 s> 0)
        var_488 = 0
        void* var_480_1 = &var_3c8
        var_458 = var_488.o
        var_488.q = arg1
        sub_1405979f0(arg2, 
            sub_140e4df20(&var_108, arg1, &var_458, sub_140e51390(&var_438, arg4), &var_488))
        sub_140597700(&var_108)
    
    sub_140596d80(&var_278)
    
    if (var_280 != 0)
        var_280[1].d -= 1
        
        if (var_280[1].d == 1)
            (**var_280)(var_280)
            int32_t temp3_1 = *(var_280 + 0xc)
            *(var_280 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_280 + 8))(var_280, 1)
    
    sub_140d94d20(&var_3c0)
float zmm0_2[0x4] = var_448
char rcx_30 = *arg2
var_458 = zmm0_2
void* rax_23 = _mm_bsrli_si128(zmm0_2, 8)[0].q

if (rax_23 != 0)
    *(rax_23 + 8) += 1

int64_t* var_4a8_1
var_4a8_1.b = rcx_30
sub_140e73780(var_468, arg4, &var_268, &var_458, var_4a8_1.b)
void var_118
sub_140596d80(&var_118)
int64_t* var_120

if (var_120 != 0)
    var_120[1].d -= 1
    
    if (var_120[1].d == 1)
        (**var_120)(var_120)
        int32_t temp8_1 = *(var_120 + 0xc)
        *(var_120 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_120 + 8))(var_120, 1)

void var_260
sub_140d94d20(&var_260)
int64_t* rbx_7 = var_448[2].q

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp12_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

int64_t* var_460

if (var_460 != 0)
    var_460[1].d -= 1
    
    if (var_460[1].d == 1)
        (**var_460)(var_460)
        int32_t temp13_1 = *(var_460 + 0xc)
        *(var_460 + 0xc) -= 1
        
        if (temp13_1 == 1)
            int64_t r8_7 = *var_460
            (*(r8_7 + 8))(var_460, 1, r8_7)

arg1[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_4c8)
return arg2
