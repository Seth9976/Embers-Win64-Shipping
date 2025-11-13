// 函数: sub_140f00090
// 地址: 0x140f00090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
char rax_2 = sub_140f053d0(arg1)
int64_t* rax_3 = sub_140ebd5f0()
int64_t rcx = 0x58

if (rax_2 == 0)
    rcx = 0x48

int64_t* r14 = *(rax_3 + rcx + 8)
int64_t* rsi = *(rax_3 + rcx)

if (r14 != 0)
    r14[1].d += 1

int32_t var_fc = 0x80
int64_t var_128
__builtin_memset(&var_128, 0, 0x2c)
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0
int64_t var_e8 = 0
int32_t var_e0 = 0
int64_t var_c8 = rsi[2]
int64_t* rax_5 = rsi[3]
int32_t var_d8 = 4

if (rax_5 != 0)
    rax_5[1].d += 1

int32_t var_b8 = rsi[4].d
char var_b0 = 1
int64_t var_238 = 0
int32_t var_230 = 0
sub_1405947f0(&var_238, 6)
int32_t rax_7 = var_230 + 6
var_230 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_238)

UnDecorator::getReferenceType(var_238, u"Label", 0xc)
sub_140acb5e0(&var_128, &var_238, &var_d8)
int64_t rcx_5 = var_238

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (var_b0 != 0 && rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t rax_10 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*rax_5 + 8))(rax_5, 1)

int64_t var_1f0
sub_140e66f90(rsi, &var_1f0)
int64_t* var_1e8
int32_t var_1e0

if (sub_140ab3de0(&var_1f0) == 0)
    int64_t rsi_1 = var_1f0
    
    if (var_1e8 != 0)
        var_1e8[1].d += 1
    
    void var_1a8
    char* var_178
    char** rax_22 = sub_140a96390(&var_178, _vfprintf_p_l(&var_1a8, u" ({0})", u"DockTab"))
    int32_t var_158_1 = 4
    
    if (var_1e8 != 0)
        var_1e8[1].d += 1
    
    char var_130_1 = 1
    int32_t* var_200 = nullptr
    int32_t var_1f8_1 = 1
    sub_1405a4b40(&var_200, 1, 0)
    int32_t* rcx_22 = var_200
    *rcx_22 = var_158_1
    int64_t var_150
    *(rcx_22 + 8) = var_150
    *(rcx_22 + 8) = var_150
    rcx_22[2] = var_150.d
    *(rcx_22 + 8) = var_150
    rcx_22[0xa].b = 0
    
    if (var_130_1 != 0)
        *(rcx_22 + 0x10) = rsi_1
        *(rcx_22 + 0x18) = var_1e8
        
        if (var_1e8 != 0)
            var_1e8[1].d += 1
        
        rcx_22[8] = var_1e0
        rcx_22[0xa].b = 1
    
    char* var_1d0 = *rax_22
    void* rax_30 = rax_22[1]
    void* var_1c8_1 = rax_30
    
    if (rax_30 != 0)
        *(rax_30 + 8) += 1
    
    void var_1c0
    int64_t* rax_31 = sub_140aac870(&var_1c0, &var_1d0, &var_200)
    int64_t* rsi_2 = rax_31[1]
    int64_t rcx_24 = *rax_31
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    int32_t rax_32 = rax_31[2].d
    int64_t* var_1b8
    
    if (var_1b8 != 0)
        var_1b8[1].d -= 1
        
        if (var_1b8[1].d == 1)
            (**var_1b8)(var_1b8)
            int32_t rax_35 = *(var_1b8 + 0xc)
            *(var_1b8 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*var_1b8 + 8))(var_1b8, 1)
    
    sub_140596f50(&var_200)
    
    if (var_130_1 != 0)
        char var_130_2 = 0
        
        if (var_1e8 != 0)
            var_1e8[1].d -= 1
            
            if (var_1e8[1].d == 1)
                (**var_1e8)(var_1e8)
                int32_t rax_39 = *(var_1e8 + 0xc)
                *(var_1e8 + 0xc) -= 1
                
                if (rax_39 == 1)
                    (*(*var_1e8 + 8))(var_1e8, 1)
    
    int64_t* r15_4 = rax_22[1]
    
    if (r15_4 != 0)
        r15_4[1].d -= 1
        
        if (r15_4[1].d == 1)
            (**r15_4)(r15_4)
            int32_t rax_43 = *(r15_4 + 0xc)
            *(r15_4 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*r15_4 + 8))(r15_4, 1)
    
    if (var_1e8 != 0)
        var_1e8[1].d -= 1
        
        if (var_1e8[1].d == 1)
            (**var_1e8)(var_1e8)
            int32_t rax_47 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (rax_47 == 1)
                (*(*var_1e8 + 8))(var_1e8, 1)
    
    int64_t var_68_1 = rcx_24
    int32_t var_78 = 4
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    int32_t var_58_1 = rax_32
    char var_50_1 = 1
    int64_t var_218 = 0
    int32_t var_210_1 = 0
    sub_1405947f0(&var_218, 0xa)
    int32_t rax_51 = var_210_1 + 0xa
    var_210_1 = rax_51
    
    if (rax_51 s> 0)
        sub_140594770(&var_218)
    
    UnDecorator::getReferenceType(var_218, u"InputText", 0x14)
    sub_140acb5e0(&var_128, &var_218, &var_78)
    int64_t rcx_38 = var_218
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    if (var_50_1 != 0 && rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t rax_54 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (rax_54 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t rax_58 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (rax_58 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)
    
    int64_t* var_1a0
    
    if (var_1a0 != 0)
        var_1a0[1].d -= 1
        
        if (var_1a0[1].d == 1)
            (**var_1a0)(var_1a0)
            int32_t rax_62 = *(var_1a0 + 0xc)
            *(var_1a0 + 0xc) -= 1
            
            if (rax_62 == 1)
                (*(*var_1a0 + 8))(var_1a0, 1)
else
    int64_t var_98_1 = var_1f0
    int32_t var_a8 = 4
    
    if (var_1e8 != 0)
        var_1e8[1].d += 1
    
    int32_t var_88_1 = var_1e0
    char var_80_1 = 1
    int64_t var_228 = 0
    int32_t var_220_1 = 0
    sub_1405947f0(&var_228, 0xa)
    int32_t rax_16 = var_220_1 + 0xa
    var_220_1 = rax_16
    
    if (rax_16 s> 0)
        sub_140594770(&var_228)
    
    UnDecorator::getReferenceType(var_228, u"InputText", 0x14)
    sub_140acb5e0(&var_128, &var_228, &var_a8)
    int64_t rcx_15 = var_228
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (var_80_1 != 0 && var_1e8 != 0)
        var_1e8[1].d -= 1
        
        if (var_1e8[1].d == 1)
            (**var_1e8)(var_1e8)
            int32_t rax_19 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_1e8 + 8))(var_1e8, 1)
void var_190
char* var_168
sub_140aaca20(arg2, 
    sub_140a96390(&var_168, _vfprintf_p_l(&var_190, {Label}{InputText}", DockTab")), &var_128)
int64_t* var_188

if (var_188 != 0)
    var_188[1].d -= 1
    
    if (var_188[1].d == 1)
        (**var_188)(var_188)
        int32_t rax_67 = *(var_188 + 0xc)
        *(var_188 + 0xc) -= 1
        
        if (rax_67 == 1)
            (*(*var_188 + 8))(var_188, 1)

if (var_1e8 != 0)
    var_1e8[1].d -= 1
    
    if (var_1e8[1].d == 1)
        (**var_1e8)(var_1e8)
        int32_t rdi_1 = *(var_1e8 + 0xc)
        *(var_1e8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_1e8 + 8))(var_1e8, zx.q(rdi_1))

int32_t var_e0_1 = 0

if (var_e8 != 0)
    sub_140a74f90(var_e8)

sub_140acd610(&var_128)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp2_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_6 = *r14
            (*(r8_6 + 8))(r14, 1, r8_6)

__security_check_cookie(rax_1 ^ &var_258)
return arg2
