// 函数: sub_140b88720
// 地址: 0x140b88720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t* r12 = arg4
int64_t* r14 = arg3
int32_t rsi = arg2
int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
arg1[1].d
int16_t* const rdi = &data_142d40450
char result = (*(*rax_2 + 0xd8))()

if (result != 0)
    int64_t* var_360 = nullptr
    int32_t var_358_1 = 0
    int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
    
    if (arg1[1].d != 0)
        rdi = *arg1
    
    result = (*(*rax_4 + 0x168))(rax_4, &var_360, rdi, u".uplugin")
    int64_t* r15_1 = var_360
    int64_t rbx_1 = sx.q(var_358_1)
    void* rdi_3 = &r15_1[rbx_1 * 2]
    void* var_350_1 = rdi_3
    
    if (r15_1 != rdi_3)
        do
            void var_208
            sub_140b77b60(&var_208)
            int64_t var_328
            sub_140a96170(&var_328)
            int64_t* var_320
            
            if (sub_140b7e960(&var_208, r15_1, &var_328) == 0)
                int64_t var_2e8
                sub_140b11c80(&var_2e8, r15_1)
                int64_t rbx_2 = var_328
                
                if (var_320 != 0)
                    var_320[1].d += 1
                
                void var_280
                int64_t* rax_7 = sub_140aae420(&var_280, &var_2e8)
                void var_2a8
                char* var_290
                char** rax_9 =
                    sub_140a96390(&var_290, _vfprintf_p_l(&var_2a8, {0} ({1})", PluginManager"))
                int32_t var_268_1 = 4
                int64_t var_258_1 = rbx_2
                int64_t* var_250_1 = var_320
                
                if (var_320 != 0)
                    var_320[1].d += 1
                
                int64_t var_228_1 = *rax_7
                void* rax_11 = rax_7[1]
                int32_t var_318
                int32_t var_248_1 = var_318
                char var_240_1 = 1
                int32_t var_238_1 = 4
                void* var_220_1 = rax_11
                
                if (rax_11 != 0)
                    *(rax_11 + 8) += 1
                
                int32_t var_218_1 = rax_7[2].d
                char var_210_1 = 1
                void* var_338 = nullptr
                int32_t var_330_1 = 2
                sub_1405a4b40(&var_338, 2, 0)
                void var_260
                void* rdx_6 = &var_260
                int64_t* rcx_11 = var_338 + 8
                int32_t i_3 = 2
                int32_t i
                
                do
                    rcx_11[-1].d = *(rdx_6 - 8)
                    *rcx_11 = *rdx_6
                    *rcx_11 = *rdx_6
                    *rcx_11 = *rdx_6
                    *rcx_11 = *rdx_6
                    rcx_11[4].b = 0
                    
                    if (*(rdx_6 + 0x20) != 0)
                        rcx_11[1] = *(rdx_6 + 8)
                        void* rax_19 = *(rdx_6 + 0x10)
                        rcx_11[2] = rax_19
                        
                        if (rax_19 != 0)
                            *(rax_19 + 8) += 1
                        
                        rcx_11[3].d = *(rdx_6 + 0x18)
                        rcx_11[4].b = 1
                    
                    rcx_11 = &rcx_11[6]
                    rdx_6 += 0x30
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                char* var_2f8 = *rax_9
                void* rax_22 = rax_9[1]
                void* var_2f0_1 = rax_22
                
                if (rax_22 != 0)
                    *(rax_22 + 8) += 1
                
                void var_2c0
                int64_t* rax_23 = sub_140aac870(&var_2c0, &var_2f8, &var_338)
                int64_t var_310 = *rax_23
                int64_t* rcx_14 = rax_23[1]
                
                if (rcx_14 != 0)
                    rcx_14[1].d += 1
                
                int32_t var_300_1 = rax_23[2].d
                int64_t* var_2b8
                
                if (var_2b8 != 0)
                    var_2b8[1].d -= 1
                    
                    if (var_2b8[1].d == 1)
                        (**var_2b8)(var_2b8)
                        int32_t rax_27 = *(var_2b8 + 0xc)
                        *(var_2b8 + 0xc) -= 1
                        
                        if (rax_27 == 1)
                            (*(*var_2b8 + 8))(var_2b8, 1)
                
                sub_140596f50(&var_338)
                int64_t i_1 = 2
                void var_1e0
                void* rdi_5 = &var_1e0
                
                do
                    i_1 -= 1
                    rdi_5 -= 0x30
                    
                    if (*rdi_5 != 0)
                        *rdi_5 = 0
                        int64_t* rbx_4 = *(rdi_5 - 0x10)
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t rax_31 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (rax_31 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                while (i_1 != 0)
                
                int64_t* rbx_5 = rax_9[1]
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t rax_35 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (rax_35 == 1)
                            (*(*rbx_5 + 8))(rbx_5, zx.q((i_1 + 1).d))
                
                if (var_320 != 0)
                    var_320[1].d -= 1
                    
                    if (var_320[1].d == 1)
                        (**var_320)(var_320)
                        int32_t rax_39 = *(var_320 + 0xc)
                        *(var_320 + 0xc) -= 1
                        
                        if (rax_39 == 1)
                            (*(*var_320 + 8))(var_320, 1)
                
                int64_t* rbx_6 = rax_7[1]
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t rax_43 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (rax_43 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                
                int64_t* var_2a0
                
                if (var_2a0 != 0)
                    var_2a0[1].d -= 1
                    
                    if (var_2a0[1].d == 1)
                        (**var_2a0)(var_2a0)
                        int32_t rax_47 = *(var_2a0 + 0xc)
                        *(var_2a0 + 0xc) -= 1
                        
                        if (rax_47 == 1)
                            (*(*var_2a0 + 8))(var_2a0, 1)
                
                void var_2d8
                _vfprintf_p_l(&var_2d8, u"Failed to load Plugin", u"PluginManager")
                sub_140b21610(0, &var_310, &var_2d8)
                int64_t* var_2d0
                
                if (var_2d0 != 0)
                    var_2d0[1].d -= 1
                    
                    if (var_2d0[1].d == 1)
                        (**var_2d0)(var_2d0)
                        int32_t rax_51 = *(var_2d0 + 0xc)
                        *(var_2d0 + 0xc) -= 1
                        
                        if (rax_51 == 1)
                            (*(*var_2d0 + 8))(var_2d0, 1)
                
                if (rcx_14 != 0)
                    rcx_14[1].d -= 1
                    
                    if (rcx_14[1].d == 1)
                        (**rcx_14)(rcx_14)
                        int32_t rax_55 = *(rcx_14 + 0xc)
                        *(rcx_14 + 0xc) -= 1
                        
                        if (rax_55 == 1)
                            (*(*rcx_14 + 8))(rcx_14, 1)
                
                int64_t rcx_33 = var_2e8
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
                
                r12 = arg4
                r14 = arg3
                rsi = arg2
                rdi_3 = var_350_1
            else
                sub_140b7bde0(r15_1, &var_208, rsi, r14, r12)
            
            if (var_320 != 0)
                var_320[1].d -= 1
                
                if (var_320[1].d == 1)
                    (**var_320)(var_320)
                    int32_t rax_59 = *(var_320 + 0xc)
                    *(var_320 + 0xc) -= 1
                    
                    if (rax_59 == 1)
                        (*(*var_320 + 8))(var_320, 1)
            
            result = sub_140b78990(&var_208)
            r15_1 = &r15_1[2]
        while (r15_1 != rdi_3)
        
        rbx_1 = zx.q(var_358_1)
        r15_1 = var_360
    
    if (rbx_1.d != 0)
        int32_t i_2
        
        do
            int64_t rcx_37 = *r15_1
            
            if (rcx_37 != 0)
                result = sub_140a74f90(rcx_37)
            
            r15_1 = &r15_1[2]
            i_2 = rbx_1.d
            rbx_1 = zx.q(rbx_1.d - 1)
        while (i_2 != 1)
        r15_1 = var_360
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)

__security_check_cookie(rax_1 ^ &var_398)
return result
