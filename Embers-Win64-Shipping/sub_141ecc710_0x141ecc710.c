// 函数: sub_141ecc710
// 地址: 0x141ecc710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
void* rbx = nullptr
void* r12 = -ffffffffffffffff
int64_t r13
r13.b = 1
void* var_f8 = nullptr
int64_t var_f0 = 0
int32_t var_108 = 0xffffffff
int32_t rsi = 0
int32_t rax
int64_t r8
rax, r8 = sub_140a23cf0(arg2, &data_142d404d4, 1, 0, 0xffffffff)
int64_t* result

if (rax == 0xffffffff)
    int32_t var_100
    
    if (sub_140bace50(arg2) != 0)
    label_141ecc909:
        char rax_7 = sub_140bace50(arg2)
        int32_t rcx_18 = arg2[1].d
        int16_t* r14_3
        
        if (rax_7 == 0)
            if (rcx_18 == 0)
                r14_3 = &data_142d40450
            else
                r14_3 = *arg2
            
            r12 = nullptr
        else if (rcx_18 == 0)
            r14_3 = &data_142d40450
        else
            r14_3 = *arg2
        
        int64_t* rax_10 = sub_140d2ee50(sub_140bdf2e0(), r12, r14_3, 0)
        
        if (rax_10 == 0)
            result = u"Failed to find class."
            
            if (rbx != u"Failed to find class.")
                var_f0.d = 0
                
                if (rsi != 0x16)
                    sub_1405947f0(&var_f8, 0x16)
                    rsi = var_f0:4.d
                    rdi = var_f0.d
                    rbx = var_f8
                
                var_f0.d = rdi + 0x16
                
                if (rdi + 0x16 s> rsi)
                    sub_140594770(&var_f8)
                    rbx = var_f8
                
                __builtin_memcpy(rbx, u"Failed to find c", 0x20)
                *(rbx + 0x20) = 0x7300730061006c
                result = 0x2e
                *(rbx + 0x28) = 0x2e
        else
            void* rax_11 = sub_142452380()
            int64_t rax_12
            
            if (rax_11 != 0)
                rax_12 = sx.q(*(rax_11 + 0x38))
            
            if (rax_11 == 0 || rax_12.d s> rax_10[7].d
                    || *(rax_10[6] + (rax_12 << 3)) != rax_11 + 0x30)
                result = u"Class is not derived from Actor."
                
                if (rbx != u"Class is not derived from Actor.")
                    var_f0.d = 0
                    
                    if (rsi != 0x21)
                        sub_1405947f0(&var_f8, 0x21)
                        rsi = var_f0:4.d
                        rdi = var_f0.d
                        rbx = var_f8
                    
                    var_f0.d = rdi + 0x21
                    
                    if (rdi + 0x21 s> rsi)
                        sub_140594770(&var_f8)
                        rbx = var_f8
                    
                    __builtin_wcscpy(rbx, u"Class is not derived from Actor.")
                    result = nullptr
            else
                int64_t* r15_1 = nullptr
                result = zx.q(arg1[1].d u>> 4)
                
                if ((result.b & 1) == 0)
                    r15_1 = arg1[4]
                
                if (r15_1 != 0)
                    void var_a8
                    (*(*r15_1 + 0x660))(r15_1, &var_a8)
                    float var_e8
                    (*(*r15_1 + 0xd38))(r15_1, &var_e8)
                    void var_70
                    int32_t* rax_17
                    int512_t zmm3_1
                    rax_17, zmm3_1 = sub_140ae4210(&var_a8, &var_70)
                    zmm3_1.o = 0x42900000
                    float zmm1_1 = *rax_17 * 72f
                    float zmm2_1 = rax_17[1] f* 72f
                    float zmm4_1 = rax_17[2] f* 72f + 15f
                    var_e8 = var_e8 + zmm1_1
                    float var_e4
                    float var_e4_1 = var_e4 + zmm2_1
                    float var_e0
                    float var_e0_1 = var_e0 + zmm4_1
                    void var_60
                    sub_142427eb0(&var_60)
                    int64_t var_48_1 =
                        Concurrency::details::UMSSchedulerProxy::GetCompletionList(r15_1)
                    void* rax_20 =
                        (*(*arg1 + 0x150))(arg1, zmm1_1, zmm2_1, zmm3_1, var_108, var_100)
                    var_108.q = &var_60
                    result = sub_1420efae0(rax_20, rax_10, &var_e8, &var_a8, var_108)
                    
                    if (result == 0)
                        result = u"SpawnActor failed."
                        
                        if (rbx != u"SpawnActor failed.")
                            var_f0.d = 0
                            
                            if (rsi != 0x13)
                                sub_1405947f0(&var_f8, 0x13)
                                rsi = var_f0:4.d
                                rdi = var_f0.d
                                rbx = var_f8
                            
                            var_f0.d = rdi + 0x13
                            
                            if (rdi + 0x13 s> rsi)
                                sub_140594770(&var_f8)
                                rbx = var_f8
                            
                            __builtin_wcscpy(rbx, u"SpawnActor failed.")
                            result = nullptr
    else if (sub_140a23cf0(arg2, &data_142d404c4, 1, 0, 0xffffffff) == 0xffffffff)
        sub_1405947f0(&var_f8, 0x51)
        int32_t rax_8 = var_f0.d + 0x51
        var_f0.d = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_f8)
        
        rbx = var_f8
        __builtin_wcscpy(rbx, 
            Class names with a path must contain a dot. (i.e /Script/Engine.StaticMeshActor)")
        result = nullptr
    else
        int64_t var_c8
        __builtin_memset(&var_c8, 0, 0x20)
        int64_t var_d8 = 0
        int32_t var_d0_1 = 0
        sub_1405947f0(&var_d8, 2)
        int32_t rax_3 = var_d0_1 + 2
        var_d0_1 = rax_3
        
        if (rax_3 s> 0)
            sub_140594770(&var_d8)
        
        int64_t r14_1 = var_d8
        UnDecorator::getReferenceType(r14_1, &data_142d404c4, 4)
        var_100 = 0
        var_108 = 1
        int64_t var_b8
        sub_14060a620(arg2, &var_d8, &var_c8, &var_b8, 1, 0)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        void var_98
        sub_140a96170(&var_98)
        result = sub_140bacf70(&var_c8, 1, &var_98)
        
        if (result.b == 0)
            result = sub_140597df0(&var_f8, sub_140ac6680(&var_98))
            rsi = var_f0:4.d
            r13.b = 0
            rbx = var_f8
        
        int64_t* var_90
        
        if (var_90 != 0)
            result = zx.q(var_90[1].d)
            var_90[1].d -= 1
            
            if (result.d == 1)
                (**var_90)(var_90)
                result = zx.q(*(var_90 + 0xc))
                *(var_90 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*var_90 + 8))(var_90, 1)
            
            rbx = var_f8
            rsi = var_f0:4.d
        
        int64_t rcx_15 = var_b8
        
        if (rcx_15 != 0)
            result = sub_140a74f90(rcx_15)
        
        int64_t rcx_16 = var_c8
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        if (r13.b != 0)
            goto label_141ecc909
else
    void* var_80
    result = sub_140a2e390(&var_80, u"ClassName contains a space.", r8)
    rbx = var_80

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
