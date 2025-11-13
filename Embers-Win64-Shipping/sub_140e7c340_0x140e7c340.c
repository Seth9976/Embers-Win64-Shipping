// 函数: sub_140e7c340
// 地址: 0x140e7c340
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

var_258 = arg1
int64_t** var_260 = &var_258
int64_t (* var_268)(int64_t* arg1, int64_t* arg2) = sub_140e5a320
char result

if (sub_140e79540(&arg1[0xb1], &var_268) == 0)
    int64_t rax_5 = *arg1
    int32_t var_114
    int32_t var_114_1 = var_114 & 0xffffff00
    int64_t* r15_1 = nullptr
    int64_t var_1c0_1 = 0
    int64_t var_1b8_1 = 0
    char var_1a8_1 = 0
    int64_t var_1a0
    __builtin_memset(&var_1a0, 0, 0x88)
    char result_2 = 0
    int32_t var_118_1 = 0x20702
    (*(rax_5 + 0x50))(arg1, zx.o(0))
    sub_140e89370(arg1, zx.o(0))
    arg1[0x60] = arg1[0x5f]
    sub_140e683e0(arg1, &var_268, *(arg2 + 0xc))
    int64_t (* rcx_6)(int64_t* arg1, int64_t* arg2) = var_268
    
    if (*(rcx_6 + 0x78) == 0)
        char** rax_8 = sub_140dbffe0(rcx_6 + 0x58, &var_258, 0, 0, data_1439ae51c)
        int64_t* rdi_1 = rax_8[1]
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        void var_210
        
        if (rcx_6 + 0x78 == &var_210)
        label_140e7c521:
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else
            *(rcx_6 + 0x78) = *rax_8
            int64_t* rsi_1 = *(rcx_6 + 0x80)
            
            if (rdi_1 == rsi_1)
                goto label_140e7c521
            
            *(rcx_6 + 0x80) = rdi_1
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp10_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (arg2 != 0)
            arg2[1].d -= 1
            
            if (arg2[1].d == 1)
                (**arg2)(arg2)
                int32_t temp9_1 = *(arg2 + 0xc)
                *(arg2 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*arg2 + 8))(arg2, 1)
    
    int64_t* rdi_3 = *(rcx_6 + 0x80)
    char* r12_1 = *(rcx_6 + 0x78)
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    
    if (var_260 != 0)
        var_260[1].d -= 1
        
        if (var_260[1].d == 1)
            (**var_260)(var_260)
            int32_t temp3_1 = *(var_260 + 0xc)
            *(var_260 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*var_260)[1](var_260, 1)
    
    char* var_260_1 = r12_1
    var_268.d = *(r12_1 + 0x130) - 1
    void** var_200
    void*** rax_18 = sub_140e50dd0(&var_200, arg2)
    var_268.o = var_268.o
    int16_t var_240_1 = rax_18[1].w
    char var_23e_1 = *(rax_18 + 0xa)
    int32_t var_23c_1 = *(rax_18 + 0xc)
    int64_t rcx_20 = rax_18[2]
    void** var_248 = &data_142d7f6a8
    int64_t var_228_1 = rax_18[4]
    void* rax_20 = rax_18[5]
    int64_t var_238_1 = rcx_20
    int64_t var_230_1 = rax_18[3]
    void* var_220_1 = rax_20
    
    if (rax_20 != 0)
        *(rax_20 + 8) += 1
    
    int32_t var_218_1 = rax_18[6].d
    int32_t var_214_1 = *(rax_18 + 0x34)
    char var_288
    void var_278
    var_288.q = &var_278
    void var_108
    sub_140e4ae90(&var_108, arg1, &var_268, &var_248)
    sub_140647390(rax_18)
    sub_1405979f0(&result_2, &var_108)
    sub_140597700(&var_108)
    char result_1 = result_2
    
    if (result_1 == 0 && arg1[0x8b].d != 0)
        int64_t* rcx_26 = arg1[0x8a]
        
        if (rcx_26 != 0 && (*(*rcx_26 + 0x28))(rcx_26) != 0)
            if (arg1[0x8b].d != 0)
                r15_1 = arg1[0x8a]
            
            (*(*r15_1 + 0x48))(r15_1, &var_108, arg2)
            sub_1405979f0(&result_2, &var_108)
            sub_140597700(&var_108)
            result_1 = result_2
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp11_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_5 = *rdi_3
                (*(r8_5 + 8))(rdi_3, 1, r8_5)
    
    sub_140597700(&result_2)
    result = result_1
else
    result = 1

arg1[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_2a8)
return result
