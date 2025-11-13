// 函数: sub_140952430
// 地址: 0x140952430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rdx = *(arg1 + 0x58)
int64_t var_90 = 0
int64_t rcx = data_143f5b298
int64_t var_b8 = 0
int64_t var_68 = 0
int64_t* var_60 = nullptr
sub_1423de540(rcx, rdx, 0)
int64_t* rax_2 = sub_14093f850(&var_90)
wchar16 const* const var_50 = u"FindTurnBasedMatch"

if (rax_2 == 0)
    int64_t var_b0_1 = 0
    int16_t* var_88
    sub_140a2e390(&var_88, u"%s - Invalid or uninitialized OnlineSubsystem", u"FindTurnBasedMatch")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_80
    
    if (var_80 != 0)
        rcx_3 = var_88
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_88
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_68, sub_140d3c6e0(arg1 + 0x50))
int32_t result

if (var_68 == 0 || rax_2 == 0)
label_1409526ca:
    int64_t var_78 = 0
    int64_t var_70_1 = 0
    result = sub_140954fe0(arg1 + 0x40, &var_78)
else
    int64_t* var_c8
    (*(*rax_2 + 0xf8))(rax_2, &var_c8)
    int64_t* var_c0
    
    if (var_c8 == 0)
        int64_t var_a8_1 = 0
        sub_140d23f50(u"Turn based games not supported by online subsystem", 3)
        
        if (var_c0 != 0)
            var_c0[1].d -= 1
            
            if (var_c0[1].d == 1)
                (**var_c0)(var_c0)
                int32_t rsi_2 = *(var_c0 + 0xc)
                *(var_c0 + 0xc) -= 1
                
                if (rsi_2 == 1)
                    (*(*var_c0 + 8))(var_c0, zx.q(rsi_2))
        
        goto label_1409526ca
    
    *(*(arg1 + 0x78) + 0x18) = arg1
    
    if (var_c0 != 0)
        var_c0[1].d += 1
    
    int128_t* rax_7 = *(arg1 + 0x78) + 0x20
    int64_t* var_d8 = var_c8
    int64_t* rcx_9 = var_c0
    int64_t* var_d0_1 = rcx_9
    
    if (var_c0 != 0)
        var_c0[1].d += 1
        rcx_9 = var_d0_1
    
    if (&var_d8 != rax_7)
        int128_t zmm1_1 = var_d8.o
        int128_t var_38_1 = zmm1_1
        var_d8.o = *rax_7
        rcx_9 = var_d0_1
        *rax_7 = zmm1_1
    
    if (rcx_9 != 0)
        rcx_9[1].d -= 1
        
        if (rcx_9[1].d == 1)
            (**var_d0_1)(var_d0_1)
            int32_t rax_10 = *(var_d0_1 + 0xc)
            *(var_d0_1 + 0xc) -= 1
            
            if (rax_10 == 1)
                (*(*var_d0_1 + 8))(var_d0_1, 1)
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t rax_14 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rax_14 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
    
    int64_t* rcx_14 = var_c8
    int64_t var_48 = *(arg1 + 0x78)
    void* rax_17 = *(arg1 + 0x80)
    void* var_40_1 = rax_17
    
    if (rax_17 != 0)
        *(rax_17 + 8) += 1
    
    (*(*rcx_14 + 8))(rcx_14, &var_48)
    int64_t* rcx_15 = var_c8
    int32_t var_a0 = *(arg1 + 0x68)
    int32_t var_9c_1 = *(arg1 + 0x6c)
    int32_t var_98_1 = *(arg1 + 0x70)
    char var_94_1 = *(arg1 + 0x74)
    result = (*(*rcx_15 + 0x10))(rcx_15, &var_a0)
    
    if (var_c0 != 0)
        result = var_c0[1].d
        var_c0[1].d -= 1
        
        if (result == 1)
            result = (**var_c0)(var_c0)
            int32_t rsi_1 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rsi_1 == 1)
                result = (*(*var_c0 + 8))(var_c0, zx.q(rsi_1))

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        result = (**var_60)(var_60)
        int32_t temp2_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_60 + 8))(var_60, 1)

__security_check_cookie(rax_1 ^ &var_f8)
return result
