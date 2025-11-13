// 函数: sub_140e7bd40
// 地址: 0x140e7bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* r14 = nullptr
int32_t var_258 = 0
char rsi = 0
arg1[0xb0].d += 1
sub_140e683e0(arg1, &var_258, *(arg2 + 0xc))
int64_t* var_248
sub_140e683e0(arg1, &var_248, *(arg2 + 0xc))
*(var_248 + 0x34) = 2
int64_t* var_240

if (var_240 != 0)
    var_240[1].d -= 1
    
    if (var_240[1].d == 1)
        (**var_240)(var_240)
        int32_t temp1_1 = *(var_240 + 0xc)
        *(var_240 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_240 + 8))(var_240, 1)

var_248 = arg1
int64_t** var_260 = &var_248
void* var_240_1 = arg2
int64_t (* var_268)(int64_t* arg1, int64_t* arg2) = sub_140e5a360

if (sub_140e79540(&arg1[0xb1], &var_268) == 0)
    int64_t rax_6 = *arg1
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
    char var_108 = 0
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0
    char var_e8_1 = 0
    int64_t var_e0
    __builtin_memset(&var_e0, 0, 0x88)
    int32_t var_58_1 = 0x20702
    (*(rax_6 + 0x50))(arg1, zx.o(0))
    sub_140e89370(arg1, zx.o(0))
    void* rcx_6 = var_258.q
    int64_t* rdi_1
    int64_t r15
    
    if (*(rcx_6 + 0x1d0) == 0)
        rdi_1 = var_258.q
        r15.b = 0
    else
        rdi_1 = *(arg2 + 0x28)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rcx_6 = var_258.q
        
        rsi = 1
        
        if (*(arg2 + 0x18) != data_143e1e0f8)
            r15.b = 0
        else
            r15 = 1
    
    if ((rsi & 1) != 0 && rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rcx_6 = var_258.q
    
    char var_1c8
    
    if (r15.b == 0)
        arg1[0x60] = arg1[0x5f]
        
        if (*(rcx_6 + 0x78) == 0)
            char** rax_12 = sub_140dbffe0(rcx_6 + 0x58, &var_268, 0, 0, data_1439ae51c)
            int64_t* rdi_2 = rax_12[1]
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            if (rcx_6 + 0x78 == &var_248)
            label_140e7c038:
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp9_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
            else
                *(rcx_6 + 0x78) = *rax_12
                int64_t* rsi_1 = *(rcx_6 + 0x80)
                
                if (rdi_2 == rsi_1)
                    goto label_140e7c038
                
                *(rcx_6 + 0x80) = rdi_2
                
                if (rsi_1 != 0)
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t temp13_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*rsi_1 + 8))(rsi_1, 1)
            
            if (var_260 != 0)
                var_260[1].d -= 1
                
                if (var_260[1].d == 1)
                    (**var_260)(var_260)
                    int32_t temp12_1 = *(var_260 + 0xc)
                    *(var_260 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*var_260)[1](var_260, 1)
        
        int64_t* rdi_4 = *(rcx_6 + 0x80)
        char* r12_1 = *(rcx_6 + 0x78)
        
        if (rdi_4 != 0)
            rdi_4[1].d += 1
        
        var_268.d = 0
        char* var_260_1 = r12_1
        void** var_200
        void*** rax_18 = sub_140e50dd0(&var_200, arg2)
        var_268.o = var_268.o
        void** var_238 = &data_142d7f6a8
        int16_t var_230_1 = rax_18[1].w
        char var_22e_1 = *(rax_18 + 0xa)
        int32_t var_22c_1 = *(rax_18 + 0xc)
        int64_t var_228_1 = rax_18[2]
        int64_t var_218_1 = rax_18[4]
        void* rax_20 = rax_18[5]
        int64_t var_220_1 = rax_18[3]
        void* var_210_1 = rax_20
        
        if (rax_20 != 0)
            *(rax_20 + 8) += 1
        
        int32_t var_208_1 = rax_18[6].d
        int32_t var_204_1 = *(rax_18 + 0x34)
        char var_288
        void var_278
        var_288.q = &var_278
        sub_140e4eeb0(&var_1c8, arg1, &var_268, &var_238)
        sub_140647390(rax_18)
        sub_1405979f0(&var_108, &var_1c8)
        sub_140597700(&var_1c8)
        
        if (var_108 == 0)
            char* var_260_2 = r12_1
            var_268.d = *(r12_1 + 0x130) - 1
            void*** rax_25 = sub_140e50dd0(&var_200, arg2)
            var_268.o = var_268.o
            var_238 = &data_142d7f6a8
            int16_t var_230_2 = rax_25[1].w
            char var_22e_2 = *(rax_25 + 0xa)
            int32_t var_22c_2 = *(rax_25 + 0xc)
            int64_t var_228_2 = rax_25[2]
            int64_t var_218_2 = rax_25[4]
            void* rax_27 = rax_25[5]
            int64_t var_220_2 = rax_25[3]
            void* var_210_2 = rax_27
            
            if (rax_27 != 0)
                *(rax_27 + 8) += 1
            
            int32_t var_208_2 = rax_25[6].d
            int32_t var_204_2 = *(rax_25 + 0x34)
            var_288.q = &var_278
            sub_140e4b380(&var_1c8, arg1, &var_268, &var_238)
            sub_140647390(rax_25)
            sub_1405979f0(&var_108, &var_1c8)
            sub_140597700(&var_1c8)
            
            if (var_108 == 0 && arg1[0x89].d != 0)
                int64_t* rcx_38 = arg1[0x88]
                
                if (rcx_38 != 0 && (*(*rcx_38 + 0x28))(rcx_38) != 0)
                    if (arg1[0x89].d != 0)
                        r14 = arg1[0x88]
                    
                    (*(*r14 + 0x48))(r14, &var_1c8, arg2)
                    sub_1405979f0(&var_108, &var_1c8)
                    sub_140597700(&var_1c8)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp11_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
    else
        sub_140e5a710(rcx_6)
        int32_t var_114
        int32_t var_114_1 = var_114 & 0xffffff00
        var_1c8 = 1
        int64_t var_1c0_1 = 0
        int64_t var_1b8_1 = 0
        char var_1a8_1 = 0
        int64_t var_1a0
        __builtin_memset(&var_1a0, 0, 0x88)
        int32_t var_118_1 = 0x20702
        sub_1405979f0(&var_108, &var_1c8)
        sub_140597700(&var_1c8)
    rsi = var_108
    sub_140597700(&var_108)
else
    rsi = 1

int64_t* var_250

if (var_250 != 0)
    var_250[1].d -= 1
    
    if (var_250[1].d == 1)
        (**var_250)(var_250)
        int32_t temp3_1 = *(var_250 + 0xc)
        *(var_250 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_6 = *var_250
            (*(r8_6 + 8))(var_250, 1, r8_6)

arg1[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(rsi)
