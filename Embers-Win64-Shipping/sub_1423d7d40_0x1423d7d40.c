// 函数: sub_1423d7d40
// 地址: 0x1423d7d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143de5434 == 0
int16_t* rcx = nullptr
int32_t r15 = 2
int32_t arg_8 = 0
int16_t* var_58 = nullptr
int32_t var_4c = 0
int32_t var_50_1
int16_t* var_48
int64_t var_40

if (not(cond:0))
    int32_t var_50 = 0
    sub_1405947f0(&var_58, 0xb)
    var_50_1 = var_50 + 0xb
    
    if (var_50 + 0xb s> var_4c)
        sub_140594770(&var_58)
    
    __builtin_wcscpy(var_58, u"MovieFrame")
    int32_t rax_2 = data_143de5434
    
    if (rax_2 s> 0)
        data_143de5434 = rax_2 - 1
else
    uint64_t var_38
    
    if (data_143de5438 == 0)
        int32_t rdi_3 = arg1[1].d
        int16_t** rsi_4
        int32_t rdi_4
        
        if (rdi_3 s> 1)
            int64_t rsi_5 = *arg1
            var_38 = 0
            int32_t var_30_3 = rdi_3
            
            if (rdi_3 != 0)
                sub_1405a4c70(&var_38, rdi_3, 0)
                memcpy(var_38, rsi_5, rdi_3 * 2)
                rcx = var_58
            else
                int32_t var_2c_2 = 0
            
            rsi_4 = &var_38
            rdi_4 = 8
        else
            var_48 = nullptr
            var_40 = 0
            sub_1405947f0(&var_48, 0xb)
            int32_t rax_8 = var_40.d + 0xb
            var_40.d = rax_8
            
            if (rax_8 s> 0)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, u"ScreenShot", 0x16)
            rcx = var_58
            rsi_4 = &var_48
            rdi_4 = 4
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int16_t* rax_9 = *rsi_4
        *rsi_4 = nullptr
        var_58 = rax_9
        var_50_1 = rsi_4[1].d
        int32_t var_4c_2 = *(rsi_4 + 0xc)
        rsi_4[1] = 0
        
        if ((rdi_4.b & 8) != 0)
            uint64_t rcx_20 = var_38
            rdi_4 &= 0xfffffff7
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
        
        if ((rdi_4.b & 4) != 0)
            int16_t* rcx_14 = var_48
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
    else
        sub_142090dd0()
        int16_t* r14_1 = nullptr
        var_38 = 0
        int32_t rdi_1 = data_143a2e380
        int64_t rsi_1 = data_143a2e378
        int16_t* rsi_2
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_38, rdi_1, 0)
            r14_1 = var_38
            memcpy(r14_1, rsi_1, rdi_1 * 2)
            rsi_2 = r14_1
        else
            rsi_2 = nullptr
        
        int16_t** rsi_3
        int32_t rdi_2
        
        if (rdi_1 s> 1)
            var_38 = 0
            int32_t var_30_2 = rdi_1
            
            if (rdi_1 != 0)
                sub_1405a4c70(&var_38, rdi_1, 0)
                memcpy(var_38, rsi_2, rdi_1 * 2)
            else
                int32_t var_2c_1 = 0
            
            rsi_3 = &var_38
            rdi_2 = 2
        else
            var_48 = nullptr
            var_40 = 0
            sub_1405947f0(&var_48, 0x12)
            int32_t rax_4 = var_40.d + 0x12
            var_40.d = rax_4
            
            if (rax_4 s> 0)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, u"HighresScreenshot", 0x24)
            rsi_3 = &var_48
            rdi_2 = 1
        
        int16_t* rcx_11 = var_58
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int16_t* rax_5 = *rsi_3
        *rsi_3 = nullptr
        var_58 = rax_5
        var_50_1 = rsi_3[1].d
        int32_t var_4c_1 = *(rsi_3 + 0xc)
        rsi_3[1] = 0
        
        if ((2 & rdi_2.b) != 0)
            uint64_t rcx_12 = var_38
            rdi_2 &= 0xfffffffd
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        
        if ((rdi_2.b & 1) != 0)
            int16_t* rcx_13 = var_48
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)

if (arg1 != &var_58)
    int16_t* rsi_6 = var_58
    int32_t r8_7 = *(arg1 + 0xc)
    arg1[1].d = var_50_1
    
    if (var_50_1 != 0 || r8_7 != 0)
        sub_1405a4c70(arg1, var_50_1, r8_7)
        memcpy(*arg1, rsi_6, var_50_1 * 2)
    else
        *(arg1 + 0xc) = 0

int32_t result = sub_140a23cf0(&var_58, &data_142d5a024, 1, 0, 0xffffffff)

if (result == 0xffffffff)
    int64_t* rax_12 = sub_1424a3bf0()
    void* rcx_24 = rax_12[0x23]
    
    if (rcx_24 == 0)
        int64_t rdx_12 = *rax_12
        (*(rdx_12 + 0x390))(rax_12, rdx_12)
        rcx_24 = rax_12[0x23]
    
    int32_t rdi_8
    
    if (var_50_1 == 0)
        rdi_8 = 0
    else
        rdi_8 = var_50_1 - 1
    
    if (*(rcx_24 + 0x8b0) != 0 || rdi_8 == 0xffffffff)
        r15 = 1
    
    var_48 = nullptr
    int32_t rax_14 = r15 + rdi_8
    int32_t rsi_7 = *(rcx_24 + 0x8b0)
    int64_t r14_2 = *(rcx_24 + 0x8a8)
    var_40.d = rsi_7
    
    if (rsi_7 != 0 || rax_14 != 0)
        sub_1405a4c70(&var_48, rsi_7 + rax_14, 0)
        memcpy(var_48, r14_2, rsi_7 * 2)
    else
        var_40:4.d = 0
    
    sub_140a2cf70(&var_48, var_58, rdi_8)
    result = &var_48
    
    if (arg1 == &var_48)
        int16_t* rcx_30 = var_48
        
        if (rcx_30 != 0)
            result = sub_140a74f90(rcx_30)
    else
        int64_t rcx_29 = *arg1
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        *arg1 = var_48
        arg1[1].d = var_40.d
        result = var_40:4.d
        *(arg1 + 0xc) = result

int16_t* rcx_31 = var_58

if (rcx_31 == 0)
    return result

return sub_140a74f90(rcx_31)
