// 函数: sub_140e7ce00
// 地址: 0x140e7ce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_418
int64_t rax_1 = __security_cookie ^ &var_418
arg1[0xb0].d += 1
int64_t* r13 = arg3
int64_t* var_3e0
int128_t zmm0 = sub_140e683e0(arg1, &var_3e0, *(arg3 + 0xc))
*(var_3e0 + 0x34) = 2
int64_t* var_3d8

if (var_3d8 != 0)
    var_3d8[1].d -= 1
    
    if (var_3d8[1].d == 1)
        (**var_3d8)(var_3d8)
        int32_t temp1_1 = *(var_3d8 + 0xc)
        *(var_3d8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_3d8 + 8))(var_3d8, 1)

(*(*arg1 + 0x50))(arg1)
sub_140e89370(arg1, zmm0)
arg1[0x60] = arg1[0x5f]

if (*arg2 != 0)
    int64_t* rcx_4 = data_143e20d18
    (*(*rcx_4 + 0x48))(rcx_4, arg2)

if (*(r13 + 0xc) == 0)
    void* r15_1 = r13[9]
    int64_t rbx_1 = r13[7]
    int64_t r12_1 = r13[8]
    
    if (r15_1 != 0)
        *(r15_1 + 8) += 1
    
    sub_140a696e0(&arg1[0x24], &var_3e0)
    *var_3d8 = rbx_1
    var_3d8[1] = r12_1
    var_3d8[2] = r15_1
    var_3d8[3].d = 0xffffffff
    int64_t rbx_2 = *var_3d8
    sub_140d44150(&arg1[0x24], &var_3e0, (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), var_3d8, 
        var_3e0.d, nullptr)

var_3e0 = arg1
int64_t** var_3c0 = &var_3e0
int64_t* var_3d8_1 = r13
int64_t (* var_3c8)(int64_t* arg1, int64_t* arg2) = sub_140e5a210

if (sub_140e79540(&arg1[0xb1], &var_3c8) == 0)
    void* var_3b0
    sub_140e683e0(arg1, &var_3b0, *(r13 + 0xc))
    void* rbx_4 = var_3b0
    
    if (*(rbx_4 + 0x1d0) == 0)
        int32_t rdi_2 = r13[0xa].d
        int32_t var_274
        int32_t var_274_1 = var_274 & 0xffffff00
        char var_328 = 0
        int64_t var_320_1 = 0
        int64_t var_318_1 = 0
        char var_308_1 = 0
        int64_t var_300
        __builtin_memset(&var_300, 0, 0x88)
        int32_t var_278_1 = 0x20702
        void var_260
        int32_t var_3f8
        void var_268
        void var_108
        
        if (sub_140e6a060(rbx_4, rdi_2) == 0)
            int32_t rbx_5 = *(rbx_4 + 0x18)
            int64_t rdi_3 = *arg1
            int64_t* rax_17 = sub_140e67030(arg1, &var_3c8)
            char* var_3f0
            var_3f0.d = rbx_5
            var_3f8.b = 0
            (*(rdi_3 + 0xf8))(arg1, &var_268, r13[3], rax_17, var_3f8, var_3f0)
            sub_140596d80(&var_3c8)
            int32_t i = 0
            
            if (arg1[0x66].d s> 0)
                int64_t** rdi_4 = nullptr
                
                do
                    int64_t rsi_1 = arg1[0x65]
                    
                    if (*(rdi_4 + rsi_1) != 0)
                        int64_t* rbx_6 = *(rdi_4 + rsi_1 + 8)
                        
                        if (rbx_6 != 0)
                            int32_t rax_18 = rbx_6[1].d
                            
                            if (rax_18 s> 0)
                                int64_t* r8_7 = nullptr
                                
                                if (rbx_6 != 0)
                                    if (rax_18 == 0)
                                        rbx_6 = nullptr
                                    else
                                        rbx_6[1].d = rax_18 + 1
                                        r8_7 = *(rdi_4 + rsi_1)
                                
                                var_3e0 = r8_7
                                int64_t* var_3d8_2 = rbx_6
                                
                                if (rbx_6 != 0)
                                    rbx_6[1].d -= 1
                                    
                                    if (rbx_6[1].d == 1)
                                        (**rbx_6)(rbx_6)
                                        int32_t temp7_1 = *(rbx_6 + 0xc)
                                        *(rbx_6 + 0xc) -= 1
                                        
                                        if (temp7_1 == 1)
                                            (*(*rbx_6 + 8))(rbx_6, 1)
                                    
                                    r8_7 = var_3e0
                                
                                void* r9_5 = &var_260
                                void* var_140
                                
                                if (var_140 != 0)
                                    r9_5 = var_140
                                
                                void* rdx_15 = r9_5
                                int32_t var_138
                                void* rax_24 = r9_5 + sx.q(var_138) * 0x48
                                
                                if (r9_5 != rax_24)
                                    do
                                        if (r8_7 == *(rdx_15 + 0x38))
                                            if (((rdx_15 - r9_5) s/ 0x48).d != 0xffffffff)
                                                goto label_140e7d270
                                            
                                            goto label_140e7d234
                                        
                                        rdx_15 += 0x48
                                    while (rdx_15 != rax_24)
                                
                            label_140e7d234:
                                
                                if (*(rdi_4 + rsi_1 + 0x18) == 0)
                                    rax_24.b = 0
                                else
                                    int64_t* rcx_24 = *(rdi_4 + rsi_1 + 0x10)
                                    
                                    if (rcx_24 == 0)
                                        rax_24.b = 0
                                    else if ((*(*rcx_24 + 0x28))(rcx_24).b == 0)
                                        rax_24.b = 0
                                    else
                                        rax_24.b = 1
                                
                                if (rax_24.b != 0)
                                    int64_t* rcx_25
                                    
                                    if (*(rdi_4 + rsi_1 + 0x18) == 0)
                                        rcx_25 = nullptr
                                    else
                                        rcx_25 = *(rdi_4 + rsi_1 + 0x10)
                                    
                                    (*(*rcx_25 + 0x50))(rcx_25)
                    
                label_140e7d270:
                    i += 1
                    rdi_4 = &rdi_4[4]
                while (i s< arg1[0x66].d)
                
                r13 = arg3
            
            sub_1405979f0(&var_328, sub_140e86d00(arg1, &var_108, &var_268, r13))
            sub_140597700(&var_108)
        else
            var_3f8.q = r13
            sub_140e65360(rbx_4, &var_268, rdi_2, 0, zx.o(0), var_3f8)
            var_3c8.b = 0
            void* var_3c0_1 = &var_268
            var_3c8.o = var_3c8.o
            void var_3e8
            var_3f8.q = &var_3e8
            void** var_3a0
            sub_1405979f0(&var_328, 
                sub_140e4db00(&var_108, arg1, &var_3c8, sub_140e51390(&var_3a0, r13)))
            sub_140597700(&var_108)
            
            if (var_328 == 0)
                var_3c8.b = 0
                void* var_3c0_2 = &var_268
                var_3c8.o = var_3c8.o
                var_3e0 = arg1
                var_3f8.q = &var_3e0
                sub_1405979f0(&var_328, 
                    sub_140e4e450(&var_108, arg1, &var_3c8, sub_140e51390(&var_3a0, r13), var_3f8))
                sub_140597700(&var_108)
        void var_118
        sub_140596d80(&var_118)
        int64_t* var_120
        
        if (var_120 != 0)
            var_120[1].d -= 1
            
            if (var_120[1].d == 1)
                (**var_120)(var_120)
                int32_t temp5_1 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_120 + 8))(var_120, 1)
        
        sub_140d94d20(&var_260)
        sub_140597700(&var_328)
    
    int64_t* var_3a8
    
    if (var_3a8 != 0)
        var_3a8[1].d -= 1
        
        if (var_3a8[1].d == 1)
            (**var_3a8)(var_3a8)
            int32_t temp3_1 = *(var_3a8 + 0xc)
            *(var_3a8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_3a8 + 8))(var_3a8, 1)

arg1[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_418)
return 1
