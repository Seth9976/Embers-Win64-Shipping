// 函数: sub_140e7b2c0
// 地址: 0x140e7b2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
(*(*arg1 + 0x50))()
sub_140e89370(arg1, arg4)
int32_t rbx = *(arg3 + 0xc)
int64_t rdi = *arg1
void* var_338
int64_t* rax_3 = sub_140e67030(arg1, &var_338)
void var_268
(*(rdi + 0xf8))(arg1, &var_268, *(arg3 + 0x18), rax_3, 0, rbx)
int32_t i_2
int32_t i_1 = i_2

if (i_1 != 0)
    void* rdi_2 = var_338 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_2 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_5 = var_338

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rbx_2 = *(arg3 + 0x78)
int64_t rax_6 = *(arg3 + 0x70)

if (rbx_2 != 0)
    rbx_2[1].d += 1

int32_t var_274
int32_t var_274_1 = var_274 & 0xffffff00
char var_328 = 1
int64_t var_320 = 0
int64_t var_318 = 0
char var_308 = 0
int64_t var_300
__builtin_memset(&var_300, 0, 0x78)
int32_t var_278 = 0x20702

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t var_288 = rax_6
int64_t* rax_7 = nullptr

if (rbx_2 != 0)
    rax_7 = rbx_2

int64_t* var_280 = rax_7

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

void var_108
sub_140596b00(&var_108, &var_328)
sub_140597700(&var_328)
char var_348
var_348.q = arg3
MRECmpImpl::FPushFile(arg1, &var_268, &var_108, &var_268, var_348, 0)
sub_140e683e0(arg1, &var_338, *(arg3 + 0xc))
sub_140e8d2e0(var_338, *(arg3 + 0x50), arg3 + 0x18)
int64_t* rbx_3 = i_2.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp8_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_140597700(&var_108)
void var_118
sub_140596d80(&var_118)
int64_t* var_120

if (var_120 != 0)
    var_120[1].d -= 1
    
    if (var_120[1].d == 1)
        (**var_120)(var_120)
        int32_t temp10_1 = *(var_120 + 0xc)
        *(var_120 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_120 + 8))(var_120, 1)

void var_260
sub_140d94d20(&var_260)
int64_t* rbx_5 = *(arg2 + 8)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp11_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_368)
return result
