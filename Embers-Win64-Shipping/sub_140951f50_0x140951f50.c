// 函数: sub_140951f50
// 地址: 0x140951f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x88)
int64_t var_f8 = 0
int64_t var_c0 = 0
int64_t rcx = data_143f5b298
int128_t var_88 = zx.o(0)
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&var_c0)
wchar16 const* const var_70 = u"FindSessions"

if (rax == 0)
    int64_t var_f0_1 = 0
    int16_t* var_b8
    sub_140a2e390(&var_b8, u"%s - Invalid or uninitialized OnlineSubsystem", u"FindSessions")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_b0
    
    if (var_b0 != 0)
        rcx_3 = var_b8
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_b8
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_88, sub_140d3c6e0(arg1 + 0x50))
int32_t result

if (var_88.q == 0 || rax == 0)
label_1409523d2:
    int64_t var_98 = 0
    int64_t var_90_1 = 0
    result = sub_140954dc0(arg1 + 0x40, &var_98)
else
    int64_t* var_d0
    (*(*rax + 0x20))(rax, &var_d0)
    int64_t* rcx_8 = var_d0
    int64_t* var_c8
    
    if (rcx_8 == 0)
        int64_t var_e8_1 = 0
        sub_140d23f50(u"Sessions not supported by Online Subsystem", 3)
        
        if (var_c8 != 0)
            var_c8[1].d -= 1
            
            if (var_c8[1].d == 1)
                (**var_c8)(var_c8)
                int32_t rdi_2 = *(var_c8 + 0xc)
                *(var_c8 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*var_c8 + 8))(var_c8, zx.q(rdi_2))
        
        goto label_1409523d2
    
    void var_68
    *(arg1 + 0x68) = *(*(*rcx_8 + 0x180))(rcx_8, &var_68, arg1 + 0x58)
    void*** rax_5 = j_sub_140a82f30(0x88)
    void*** rsi_1 = rax_5
    
    if (rax_5 == 0)
        rsi_1 = nullptr
    else
        int64_t* rcx_10 = &rsi_1[7]
        int64_t var_e0 = 0
        int64_t var_d8_1 = 0
        *rsi_1 = &data_142e266d8
        __builtin_memset(&rsi_1[1], 0, 0x14)
        rsi_1[2] = 0
        rsi_1[3].d = 0
        *(rsi_1 + 0x1c) = 1
        rsi_1[4] = &data_142e266d0
        rsi_1[5] = 0
        rsi_1[6] = 0
        *(rcx_10 + 0x1c) = 0x80
        int64_t* rax_6 = rcx_10[2]
        
        if (rax_6 != 0)
            rcx_10 = rax_6
        
        *rcx_10 = 0
        rcx_10[1] = 0
        rsi_1[0xb].d = 0xffffffff
        *(rsi_1 + 0x5c) = 0
        rsi_1[0xd] = 0
        rsi_1[0xe].d = 0
        rsi_1[0xf].b = 0
        *(rsi_1 + 0x7c) = 0
        *(rsi_1 + 0x84) = 0
        void var_60
        sub_14093bef0(&rsi_1[4], *sub_140b58260(&var_60, u"MAPNAME", 1), &var_e0, 0)
        int64_t rcx_13 = var_e0
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        char arg_8 = 0
        void var_58
        sub_14093c020(&rsi_1[4], *sub_140b58260(&var_58, u"DEDICATEDONLY", 1), &arg_8, 0)
        char arg_10 = 0
        void var_50
        sub_14093c020(&rsi_1[4], *sub_140b58260(&var_50, u"EMPTYONLY", 1), &arg_10, 0)
        char arg_18 = 0
        void var_48
        sub_14093c020(&rsi_1[4], *sub_140b58260(&var_48, u"SECUREONLY", 1), &arg_18, 0)
    
    int64_t* rax_11 = j_sub_140a82f30(0x18)
    int64_t* rbx_1 = rax_11
    
    if (rax_11 == 0)
        rbx_1 = nullptr
    else
        rax_11[1].d = 1
        *(rax_11 + 0xc) = 1
        *rbx_1 = &data_142d42ea8
        rbx_1[2] = rsi_1
    
    void*** var_108 = rsi_1
    int64_t* var_100_1 = rbx_1
    
    if (arg1 + 0x70 == &var_108)
    label_140952269:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        *(arg1 + 0x70) = rsi_1
        int64_t* rsi_2 = *(arg1 + 0x78)
        var_108 = nullptr
        
        if (rbx_1 == rsi_2)
            goto label_140952269
        
        int64_t* var_100_2 = nullptr
        *(arg1 + 0x78) = rbx_1
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp7_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
            
            rbx_1 = var_100_2
            goto label_140952269
    
    void* rcx_24 = *(arg1 + 0x70)
    int32_t rax_16 = *(arg1 + 0x84)
    char arg_20 = 1
    *(rcx_24 + 0x1c) = rax_16
    *(*(arg1 + 0x70) + 0x78) = *(arg1 + 0x80)
    void var_40
    sub_14093c020(*(arg1 + 0x70) + 0x20, *sub_140b58260(&var_40, u"PRESENCESEARCH", 1), &arg_20, 0)
    int64_t* rcx_28 = var_d0
    int64_t var_a8 = *(arg1 + 0x70)
    int64_t* rax_20 = *(arg1 + 0x78)
    
    if (rax_20 != 0)
        rax_20[1].d += 1
    
    result = (*(*rcx_28 + 0x170))(rcx_28, var_88.q, &var_a8)
    
    if (rax_20 != 0)
        rax_20[1].d -= 1
        
        if (rax_20[1].d == 1)
            result = (**rax_20)(rax_20)
            int32_t temp8_1 = *(rax_20 + 0xc)
            *(rax_20 + 0xc) -= 1
            
            if (temp8_1 == 1)
                result = (*(*rax_20 + 8))(rax_20, 1)
    
    if (var_c8 != 0)
        result = var_c8[1].d
        var_c8[1].d -= 1
        
        if (result == 1)
            result = (**var_c8)(var_c8)
            int32_t rdi_1 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_c8 + 8))(var_c8, zx.q(rdi_1))

int64_t* rbx_6 = var_88:8.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp2_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_6 + 8))(rbx_6, 1)

return result
