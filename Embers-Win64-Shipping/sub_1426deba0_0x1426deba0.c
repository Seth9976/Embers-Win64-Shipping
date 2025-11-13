// 函数: sub_1426deba0
// 地址: 0x1426deba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* const rbx = *(arg1 + 0x50)

if (rbx == 0)
    rbx = nullptr
else
    void* rax_2 = sub_142736ba0()
    
    if (rax_2 == 0)
        rbx = nullptr
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rbx = nullptr

int64_t var_b8
sub_1426dff30(&var_b8, rbx)
void var_78
void var_60
char** rax_6 =
    sub_140a96390(&var_60, _vfprintf_p_l(&var_78, Current Location of {0}", EnvQueryGenerator"))
int32_t var_50 = 4
int64_t rax_7 = var_b8
int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d += 1

char var_28 = 1
int32_t* var_c8 = nullptr
int32_t var_c0 = 1
sub_1405a4b40(&var_c8, 1, 0)
int32_t* rcx_5 = var_c8
*rcx_5 = var_50
int64_t var_48
*(rcx_5 + 8) = var_48
*(rcx_5 + 8) = var_48
rcx_5[2] = var_48.d
*(rcx_5 + 8) = var_48
rcx_5[0xa].b = 0

if (var_28 != 0)
    *(rcx_5 + 0x10) = rax_7
    *(rcx_5 + 0x18) = var_b0
    
    if (var_b0 != 0)
        var_b0[1].d += 1
    
    int32_t var_a8
    rcx_5[8] = var_a8
    rcx_5[0xa].b = 1

char* var_a0 = *rax_6
void* rax_17 = rax_6[1]
void* var_98 = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1

void var_90
int64_t* rax_18 = sub_140aac870(&var_90, &var_a0, &var_c8)
*arg2 = *rax_18
void* rax_20 = rax_18[1]
arg2[1] = rax_20

if (rax_20 != 0)
    *(rax_20 + 8) += 1

arg2[2].d = rax_18[2].d
int64_t* var_88

if (var_88 != 0)
    var_88[1].d -= 1
    
    if (var_88[1].d == 1)
        (**var_88)(var_88)
        int32_t rax_24 = *(var_88 + 0xc)
        *(var_88 + 0xc) -= 1
        
        if (rax_24 == 1)
            (*(*var_88 + 8))(var_88, 1)

sub_140596f50(&var_c8)

if (var_28 != 0)
    char var_28_1 = 0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t rax_28 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rax_28 == 1)
                (*(*var_b0 + 8))(var_b0, 1)

int64_t* rdi_2 = rax_6[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_32 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_32 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rax_36 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rax_36 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t rbx_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rbx_1 == 1)
            int64_t r8_2 = *var_70
            (*(r8_2 + 8))(var_70, zx.q(rbx_1), r8_2)

__security_check_cookie(rax_1 ^ &var_e8)
return arg2
