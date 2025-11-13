// 函数: sub_140eb6ed0
// 地址: 0x140eb6ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t* rdi = *(arg3 + 0x78)
void* r13 = *(arg3 + 0x70)

if (rdi != 0)
    rdi[1].d += 1
    
    if (rdi != 0)
        rdi[1].d += 1
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp2_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi + 8))(rdi, 1)

int32_t rax_4 = sub_140f47e50(*(arg1 + 0x3a8))
uint128_t var_248
int64_t* var_238
int64_t* var_228
void* var_218
uint128_t var_1f8
int64_t* var_1f0
void var_1e8

if (((arg2 & 0xfffffffd) != 0 || rax_4 != 0) && (((arg2 - 1) & 0xfffffffd) != 0 || rax_4 != 1)
        && *(arg1 + 0x3c0) s> 1)
    void* rbx_1 = *(arg1 + 0x3a8)
    void*** r14_1 = *sub_140ec5720(&var_1f8)
    r14_1[4].d = sub_140f47e50(rbx_1)
    int64_t* rbx_2 = r14_1[2]
    int64_t* rcx_6 = nullptr
    
    if (rbx_2 != 0)
        int32_t rax_7 = rbx_2[1].d
        
        if (rax_7 != 0)
            rbx_2[1].d = rax_7 + 1
            rax_7.b = 1
        
        if (rax_7.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rcx_6 = r14_1[1]
    
    var_228 = rcx_6
    
    if (rbx_2 != 0)
        int32_t rax_8 = rbx_2[1].d
        rbx_2[1].d = rax_8
        
        if (rax_8 == 0)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    var_238 = &var_228
    void*** rax_11 = sub_140e91b00()
    var_218 = &rax_11[2]
    sub_140918950(&var_218, &rax_11[2])
    int64_t var_258_1 = 0x3c8
    int64_t** var_208_1 = &var_238
    sub_140e23ed0(&rax_11[2], "SDockingSplitter")
    int64_t* rax_12
    int128_t zmm1_1
    rax_12, zmm1_1 = sub_140e93f70(&var_1e8)
    sub_140e9c380(&var_218, &var_248, rax_12, zmm1_1)
    
    if (rax_11 != 0)
        rax_11[1].d -= 1
        
        if (rax_11[1].d == 1)
            (**rax_11)(rax_11)
            int32_t temp9_1 = *(rax_11 + 0xc)
            *(rax_11 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*rax_11)[1](rax_11, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp11_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (var_1f0 != 0)
        var_1f0[1].d -= 1
        
        if (var_1f0[1].d == 1)
            (**var_1f0)(var_1f0)
            int32_t temp13_1 = *(var_1f0 + 0xc)
            *(var_1f0 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_1f0 + 8))(var_1f0, 1)
    
    sub_140ddea30(&var_1e8)
    int32_t rbx_7 = 0
    
    if (*(arg1 + 0x3c0) s> 0)
        void* r14_2 = var_248.q
        int32_t rax_20
        
        do
            sub_140ea15b0(r14_2, (sx.q(rbx_7) << 4) + *(arg1 + 0x3b8), 0xffffffff)
            rax_20 = *(arg1 + 0x3c0)
            rbx_7 += 1
        while (rbx_7 s< rax_20)
        
        if (rax_20 s> 0)
            do
                int32_t rbx_8 = *(arg1 + 0x3c0)
                sub_140dbae50(arg1 + 0x3b8, rbx_8 - 1, 1, 1)
                sub_140f5b590(*(arg1 + 0x3a8), rbx_8 - 1)
            while (*(arg1 + 0x3c0) s> 0)
    
    uint128_t zmm0_1 = var_248
    var_1f8 = zmm0_1
    int64_t* rbx_9 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    sub_140ea15b0(arg1, &var_1f8, 0xffffffff)
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp20_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
        
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp23_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
    
    int32_t r12_1
    r12_1.b = sub_140f47e50(*(arg1 + 0x3a8)) == 0
    sub_140f5e590(*(arg1 + 0x3a8), r12_1)

var_238 = sub_140ec5860(&var_1f8)
int64_t* rax_27 = sub_140e91bb0()
var_218 = &rax_27[2]
sub_140918950(&var_218, &rax_27[2])
int64_t var_258_2 = 0x4d0
int64_t** var_208_2 = &var_238
sub_140e23ed0(&rax_27[2], "SDockingTabStack")
int64_t* rax_28
int128_t zmm1_2
rax_28, zmm1_2 = sub_140e94090(&var_1e8)
sub_140e9c640(&var_218, &var_228, rax_28, zmm1_2)

if (rax_27 != 0)
    rax_27[1].d -= 1
    
    if (rax_27[1].d == 1)
        (**rax_27)(rax_27)
        int32_t temp4_1 = *(rax_27 + 0xc)
        *(rax_27 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rax_27 + 8))(rax_27, 1)

if (var_1f0 != 0)
    var_1f0[1].d -= 1
    
    if (var_1f0[1].d == 1)
        (**var_1f0)(var_1f0)
        int32_t temp5_1 = *(var_1f0 + 0xc)
        *(var_1f0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_1f0 + 8))(var_1f0, 1)

sub_140ddea30(&var_1e8)
uint128_t zmm0_2 = var_228.o
var_248 = zmm0_2
int64_t* rbx_13 = _mm_bsrli_si128(zmm0_2, 8).q
int64_t* r9_6

if (arg2 u<= 1)
    if (rbx_13 != 0)
        rbx_13[1].d += 1
    
    r9_6 = *(arg1 + 0x3b8)
else
    if (rbx_13 != 0)
        rbx_13[1].d += 1
    
    r9_6 = (sx.q(*(arg1 + 0x3c0) - 1) << 4) + *(arg1 + 0x3b8)

sub_140ed1f50(arg1, &var_248, arg2, r9_6)
int64_t* r14_3 = var_248:8.q

if (r14_3 != 0)
    r14_3[1].d -= 1
    
    if (r14_3[1].d == 1)
        (**r14_3)(r14_3)
        int32_t temp14_1 = *(r14_3 + 0xc)
        *(r14_3 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*r14_3 + 8))(r14_3, 1)

int64_t* rax_37 = *(r13 + 0x48)

if (rax_37 != 0)
    rax_37[1].d += 1

var_238 = *(r13 + 0x40)
int64_t result = sub_140ed1540(var_228, &var_238, 0xffffffff)

if (rax_37 != 0)
    rax_37[1].d -= 1
    
    if (rax_37[1].d == 1)
        result = (**rax_37)(rax_37)
        int32_t temp18_1 = *(rax_37 + 0xc)
        *(rax_37 + 0xc) -= 1
        
        if (temp18_1 == 1)
            result = (*(*rax_37 + 8))(rax_37, 1)

if (rbx_13 != 0)
    rbx_13[1].d -= 1
    
    if (rbx_13[1].d == 1)
        result = (**rbx_13)(rbx_13)
        int32_t temp22_1 = *(rbx_13 + 0xc)
        *(rbx_13 + 0xc) -= 1
        
        if (temp22_1 == 1)
            result = (*(*rbx_13 + 8))(rbx_13, 1)

*(arg1 + 0x3f8) = 0

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp24_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp24_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

__security_check_cookie(rax_1 ^ &var_278)
return result
