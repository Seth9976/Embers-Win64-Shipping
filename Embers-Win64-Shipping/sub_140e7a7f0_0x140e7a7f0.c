// 函数: sub_140e7a7f0
// 地址: 0x140e7a7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
arg1[0xb0].d += 1
int64_t* var_258
sub_140e683e0(arg1, &var_258, *(arg2 + 0xc))
*(var_258 + 0x34) = 2
int64_t* var_250

if (var_250 != 0)
    var_250[1].d -= 1
    
    if (var_250[1].d == 1)
        (**var_250)(var_250)
        int32_t temp1_1 = *(var_250 + 0xc)
        *(var_250 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_250 + 8))(var_250, 1)

int32_t var_104
int32_t var_104_1 = var_104 & 0xffffff00
void** var_260 = &var_258
char var_1b8 = 0
int64_t var_1b0 = 0
int64_t var_1a8 = 0
int64_t (* var_268)(int64_t* arg1, int64_t* arg2) = sub_140e5a3a0
char var_198 = 0
int64_t var_190
__builtin_memset(&var_190, 0, 0x88)
int32_t var_108 = 0x20702
var_258 = arg1
char rax_5 = sub_140e79540(&arg1[0xb1], &var_268)
char var_f8
int128_t zmm0_1

if (rax_5 != 0)
    int32_t var_44
    int32_t var_44_1 = var_44 & 0xffffff00
    zmm0_1 = zx.o(0)
    var_f8 = 1
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    char var_d8_1 = 0
    int64_t var_d0
    __builtin_memset(&var_d0, 0, 0x88)
    int32_t var_48_1 = 0x20702
    sub_1405979f0(&var_1b8, &var_f8)
    sub_140597700(&var_f8)

int64_t* rbx_1

if (rax_5 != 0 && var_1b8 != 0)
label_140e7ac79:
    (*(*arg1 + 0x50))(arg1)
    sub_140e89370(arg1, zmm0_1)
    rbx_1.b = 1
    arg1[0x60] = arg1[0x5f]
else
    sub_140e683e0(arg1, &var_268, *(arg2 + 0xc))
    int64_t (* rcx_6)(int64_t* arg1, int64_t* arg2) = var_268
    
    if (*(rcx_6 + 0x78) == 0)
        char** rax_7 = sub_140dbffe0(rcx_6 + 0x58, &var_258, 0, 0, data_1439ae51c)
        int64_t* rbx_2 = rax_7[1]
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        void var_208
        
        if (rcx_6 + 0x78 == &var_208)
        label_140e7aa4c:
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp6_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        else
            *(rcx_6 + 0x78) = *rax_7
            int64_t* rdi_1 = *(rcx_6 + 0x80)
            
            if (rbx_2 == rdi_1)
                goto label_140e7aa4c
            
            *(rcx_6 + 0x80) = rbx_2
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp10_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (arg2 != 0)
            arg2[1].d -= 1
            
            if (arg2[1].d == 1)
                (**arg2)(arg2)
                int32_t temp9_1 = *(arg2 + 0xc)
                *(arg2 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*arg2 + 8))(arg2, 1)
    
    int64_t* rdi_2 = *(rcx_6 + 0x80)
    char* r13_1 = *(rcx_6 + 0x78)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    if (var_260 != 0)
        var_260[1].d -= 1
        
        if (var_260[1].d == 1)
            (**var_260)(var_260)
            int32_t temp3_1 = *(var_260 + 0xc)
            *(var_260 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_260 + 8))(var_260, 1)
    
    rbx_1 = arg2[5]
    int32_t r15_2 = *(arg2 + 0xc)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    char* var_238_1 = r13_1
    var_268.d = *(r13_1 + 0x130) - 1
    int16_t var_240_1 = arg2[1].w
    char var_23e_1 = *(arg2 + 0xa)
    int32_t var_23c_1 = r15_2
    int64_t var_230_1 = arg2[3]
    int64_t var_228_1 = arg2[4]
    int64_t* var_220_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int32_t var_210_1 = arg2[7].d.d
    var_268.o = var_268.o
    int32_t var_218_1 = arg2[6].d
    int32_t var_214_1 = *(arg2 + 0x34)
    void** var_248 = &data_142ecfd58
    char var_288
    void var_278
    var_288.q = &var_278
    void** var_1f8
    sub_140e4a500(&var_f8, arg1, &var_268, sub_140e4f890(&var_1f8, &var_248))
    sub_140647390(&var_248)
    sub_1405979f0(&var_1b8, &var_f8)
    sub_140597700(&var_f8)
    zmm0_1 = sub_140e683e0(arg1, &var_268, r15_2)
    *(var_268 + 0x34) = 2
    
    if (r13_1 != 0)
        int32_t temp8_1 = *(r13_1 + 8)
        *(r13_1 + 8) -= 1
        
        if (temp8_1 == 1)
            (**r13_1)(r13_1)
            int32_t temp12_1 = *(r13_1 + 0xc)
            *(r13_1 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*r13_1 + 8))(r13_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp14_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp15_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (var_1b8 != 0)
        goto label_140e7ac79
    
    rbx_1.b = 0

sub_140597700(&var_1b8)
arg1[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(rbx_1.b)
