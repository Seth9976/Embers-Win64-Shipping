// 函数: sub_1420be900
// 地址: 0x1420be900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int16_t* const rbx = &data_142d40450
int16_t* const rcx

if (arg4[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg4

int16_t* const rax_2

if (arg3[1].d == 0)
    rax_2 = &data_142d40450
else
    rax_2 = *arg3

int16_t* const var_2b8 = rcx
int16_t* const var_2c0 = rax_2
int16_t* var_338 = nullptr
int32_t var_330 = 0
sub_140b0f5f0(&var_338, &var_2c0, 2)
int64_t var_310
sub_140a96170(&var_310)
sub_140b29e80(&var_338, &var_310)
int64_t* rbx_4

if (arg2 == 0)
    void var_2f0
    sub_140b58170(&var_2f0, "Blueprint", 1)
    void var_248
    int64_t* rax_12 =
        _vfprintf_p_l(&var_248, ExportTexture2D: TextureRenderTarget must be non-null.", 
        KismetRenderingLibrary")
    void var_290
    void var_1b0
    sub_140ae44d0(sub_140accdf0(&var_1b0, &var_2f0), &var_290, rax_12)
    int64_t* var_288
    
    if (var_288 != 0)
        var_288[1].d -= 1
        
        if (var_288[1].d == 1)
            (**var_288)(var_288)
            int32_t temp2_1 = *(var_288 + 0xc)
            *(var_288 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_288 + 8))(var_288, 1)
    
    sub_140acd9c0(&var_1b0)
    int64_t* var_240
    rbx_4 = var_240
label_1420beb92:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rax_18 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_18 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
else if (arg4[1].d s> 1 && sub_140ab3dc0(&var_310) != 0)
    sub_140a464c0()
    
    if (var_330 != 0)
        rbx = var_338
    
    char const (* r9)[0x4] = data_14399ea08
    int64_t* rax_4 = (*(r9 + 0x20))(&data_14399ea08, rbx, 0, r9)
    
    if (rax_4 == 0)
        void var_2f8
        sub_140b58170(&var_2f8, "Blueprint", 1)
        void var_260
        int64_t* rax_8 = _vfprintf_p_l(&var_260, ExportTexture2D: FileWrite failed to create.", 
            KismetRenderingLibrary")
        void var_2a0
        void var_1d8
        sub_140ae44d0(sub_140accdf0(&var_1d8, &var_2f8), &var_2a0, rax_8)
        int64_t* var_298
        
        if (var_298 != 0)
            var_298[1].d -= 1
            
            if (var_298[1].d == 1)
                (**var_298)(var_298)
                int32_t temp6_1 = *(var_298 + 0xc)
                *(var_298 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_298 + 8))(var_298, 1)
        
        sub_140acd9c0(&var_1d8)
        int64_t* var_258
        rbx_4 = var_258
        goto label_1420beb92
    
    int64_t var_328_1 = 0
    void var_138
    sub_1420af7e0(&var_138, 0, 0)
    int64_t var_90
    int32_t var_88
    
    if (sub_14208a9d0(arg2, &var_138) != 0)
        (*(*rax_4 + 0x150))(rax_4, var_90, sx.q(var_88))
    (**rax_4)(rax_4, 1)
    
    if (var_90 != 0)
        sub_140a74f90(var_90)
    
    sub_140b4cb40(&var_138)
int32_t result = sub_140ab3dc0(&var_310)
int64_t* var_308

if (result.b == 0)
    void var_2e8
    sub_140b58170(&var_2e8, "Blueprint", 1)
    int64_t rsi_1 = var_310
    
    if (var_308 != 0)
        var_308[1].d += 1
    
    void var_218
    char* var_1e8
    char** rax_21 = sub_140a96390(&var_1e8, 
        _vfprintf_p_l(&var_218, ExportTexture2D: Invalid file path provided: '{0}'", 
        KismetRenderingLibrary"))
    int32_t var_78_1 = 4
    
    if (var_308 != 0)
        var_308[1].d += 1
    
    char var_50_1 = 1
    int32_t* var_320 = nullptr
    int32_t var_318_1 = 1
    sub_1405a4b40(&var_320, 1, 0)
    int32_t* rcx_32 = var_320
    *rcx_32 = var_78_1
    int64_t var_70
    *(rcx_32 + 8) = var_70
    *(rcx_32 + 8) = var_70
    rcx_32[2] = var_70.d
    *(rcx_32 + 8) = var_70
    rcx_32[0xa].b = 0
    
    if (var_50_1 != 0)
        *(rcx_32 + 0x10) = rsi_1
        *(rcx_32 + 0x18) = var_308
        
        if (var_308 != 0)
            var_308[1].d += 1
        
        int32_t var_300
        rcx_32[8] = var_300
        rcx_32[0xa].b = 1
    
    char* var_2b0 = *rax_21
    void* rax_29 = rax_21[1]
    void* var_2a8_1 = rax_29
    
    if (rax_29 != 0)
        *(rax_29 + 8) += 1
    
    void var_230
    int64_t* rax_30 = sub_140aac870(&var_230, &var_2b0, &var_320)
    int64_t var_2d8 = *rax_30
    int64_t* rcx_35 = rax_30[1]
    
    if (rcx_35 != 0)
        rcx_35[1].d += 1
    
    int32_t var_2c8_1 = rax_30[2].d
    int64_t* var_228
    
    if (var_228 != 0)
        var_228[1].d -= 1
        
        if (var_228[1].d == 1)
            (**var_228)(var_228)
            int32_t rax_34 = *(var_228 + 0xc)
            *(var_228 + 0xc) -= 1
            
            if (rax_34 == 1)
                (*(*var_228 + 8))(var_228, 1)
    
    sub_140596f50(&var_320)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (var_308 != 0)
            var_308[1].d -= 1
            
            if (var_308[1].d == 1)
                (**var_308)(var_308)
                int32_t rax_38 = *(var_308 + 0xc)
                *(var_308 + 0xc) -= 1
                
                if (rax_38 == 1)
                    (*(*var_308 + 8))(var_308, 1)
    
    int64_t* rsi_4 = rax_21[1]
    
    if (rsi_4 != 0)
        rsi_4[1].d -= 1
        
        if (rsi_4[1].d == 1)
            (**rsi_4)(rsi_4)
            int32_t rax_42 = *(rsi_4 + 0xc)
            *(rsi_4 + 0xc) -= 1
            
            if (rax_42 == 1)
                (*(*rsi_4 + 8))(rsi_4, 1)
    
    if (var_308 != 0)
        var_308[1].d -= 1
        
        if (var_308[1].d == 1)
            (**var_308)(var_308)
            int32_t rax_46 = *(var_308 + 0xc)
            *(var_308 + 0xc) -= 1
            
            if (rax_46 == 1)
                (*(*var_308 + 8))(var_308, 1)
    
    void var_280
    void var_188
    sub_140ae44d0(sub_140accdf0(&var_188, &var_2e8), &var_280, &var_2d8)
    int64_t* var_278
    
    if (var_278 != 0)
        var_278[1].d -= 1
        
        if (var_278[1].d == 1)
            (**var_278)(var_278)
            int32_t temp8_1 = *(var_278 + 0xc)
            *(var_278 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_278 + 8))(var_278, 1)
    
    result = sub_140acd9c0(&var_188)
    
    if (rcx_35 != 0)
        result = rcx_35[1].d
        rcx_35[1].d -= 1
        
        if (result == 1)
            (**rcx_35)(rcx_35)
            result = *(rcx_35 + 0xc)
            *(rcx_35 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rcx_35 + 8))(rcx_35, 1)
    
    int64_t* var_210
    
    if (var_210 != 0)
        result = var_210[1].d
        var_210[1].d -= 1
        
        if (result == 1)
            (**var_210)(var_210)
            result = *(var_210 + 0xc)
            *(var_210 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*var_210 + 8))(var_210, 1)

if (arg4[1].d s<= 1)
    void var_2e0
    sub_140b58170(&var_2e0, "Blueprint", 1)
    void var_200
    int64_t* rax_55 = _vfprintf_p_l(&var_200, ExportTexture2D: FileName must be non-empty.", 
        KismetRenderingLibrary")
    void var_270
    void var_160
    sub_140ae44d0(sub_140accdf0(&var_160, &var_2e0), &var_270, rax_55)
    int64_t* var_268
    
    if (var_268 != 0)
        var_268[1].d -= 1
        
        if (var_268[1].d == 1)
            (**var_268)(var_268)
            int32_t temp4_1 = *(var_268 + 0xc)
            *(var_268 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_268 + 8))(var_268, 1)
    
    result = sub_140acd9c0(&var_160)
    int64_t* var_1f8
    
    if (var_1f8 != 0)
        result = var_1f8[1].d
        var_1f8[1].d -= 1
        
        if (result == 1)
            (**var_1f8)(var_1f8)
            result = *(var_1f8 + 0xc)
            *(var_1f8 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*var_1f8 + 8))(var_1f8, 1)

if (var_308 != 0)
    result = var_308[1].d
    var_308[1].d -= 1
    
    if (result == 1)
        result = (**var_308)(var_308)
        int32_t rdi_1 = *(var_308 + 0xc)
        *(var_308 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*var_308 + 8))(var_308, zx.q(rdi_1))

int16_t* rcx_65 = var_338

if (rcx_65 != 0)
    result = sub_140a74f90(rcx_65)

__security_check_cookie(rax_1 ^ &var_358)
return result
