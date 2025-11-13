// 函数: sub_141cce5b0
// 地址: 0x141cce5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = arg2
*(arg1 + 0x218) = arg3
*(arg1 + 0x10) = arg6
*(arg1 + 9) = arg4
int64_t* var_68
int16_t* var_48
int64_t var_38
int64_t* var_30

if (arg4 == 0)
    var_68 = nullptr
    int32_t i_2 = 0
    void arg_38
    int64_t* rax_1 = sub_140b5e690(&arg_38, &var_38)
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const r8
    
    if (rax_1[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *rax_1
    
    sub_140a2e390(&var_48, u"%s PacketHandlerProfileConfig", r8)
    int64_t rcx_2 = var_38
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int32_t var_40
    
    if (var_40 != 0)
        rbx_1 = var_48
    
    sub_140af2c50(data_143ddb400, rbx_1, u"Components", &var_68, &data_143de5780)
    
    if (i_2 == 0)
        sub_140af2c50(data_143ddb400, PacketHandlerComponents", Components", &var_68, 
            &data_143de5780)
    
    int64_t* rbx_2 = var_68
    void* rsi_3 = &rbx_2[sx.q(i_2) * 2]
    
    if (rbx_2 != rsi_3)
        do
            sub_141ccd290(arg1, &var_38, rbx_2, 1)
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    (**var_30)(var_30)
                    int32_t temp10_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*var_30 + 8))(var_30, 1)
            
            rbx_2 = &rbx_2[2]
        while (rbx_2 != rsi_3)
        
        rbx_2 = var_68
    
    int16_t* rcx_8 = var_48
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
        rbx_2 = var_68
    
    int32_t i_1 = i_2
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_9 = *rbx_2
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rbx_2 = &rbx_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_2 = var_68
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)

void* rcx_11 = data_143ddb400
int64_t var_58 = 0

if (sub_140af5b90(rcx_11, PacketHandlerComponents", EncryptionComponent", &var_58, &data_143de5780)
        != 0 && 0 s> 1)
    TEB* gsbase
    
    if (data_143f35c90
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f35c90)
        
        if (data_143f35c90 == 0xffffffff)
            int64_t* rcx_33 = data_143db18d0
            
            if (rcx_33 == 0)
                sub_140a53c40()
                rcx_33 = data_143db18d0
            
            int64_t r8_4
            r8_4.b = 1
            data_143f35c88 = (*(*rcx_33 + 0xb0))(rcx_33, u"net.AllowEncryption", r8_4)
            _Init_thread_footer(&data_143f35c90)
    
    int64_t* rcx_14 = data_143f35c88
    int32_t rax_8
    
    if (rcx_14 != 0)
        rax_8 = (*(*rcx_14 + 0x90))(rcx_14)
    
    if (rcx_14 == 0 || rax_8 != 0)
        int64_t* rax_9 = sub_141ccd290(arg1, &var_38, &var_58, 1)
        int64_t* rcx_16 = rax_9[1]
        
        if (rcx_16 != 0)
            rcx_16[1].d += 1
        
        if (arg1 + 0x208 == &var_48)
        label_141cce821:
            
            if (rcx_16 != 0)
                rcx_16[1].d -= 1
                
                if (rcx_16[1].d == 1)
                    (**rcx_16)(rcx_16)
                    int32_t temp4_1 = *(rcx_16 + 0xc)
                    *(rcx_16 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rcx_16 + 8))(rcx_16, 1)
        else
            *(arg1 + 0x208) = *rax_9
            int64_t* rbx_3 = *(arg1 + 0x210)
            
            if (rcx_16 == rbx_3)
                goto label_141cce821
            
            *(arg1 + 0x210) = rcx_16
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp8_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp7_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)

void* rcx_22 = data_143ddb400
char arg_10 = 0
sub_140af2fd0(rcx_22, u"PacketHandlerComponents", u"bEnableReliability", &arg_10, &data_143de5780)

if (arg_10 != 0 && *(arg1 + 0x280) == 0)
    void*** rax_16 = j_sub_140a82f30(0x58)
    int64_t* rbx_5
    
    if (rax_16 == 0)
        rbx_5 = nullptr
    else
        rbx_5 = sub_141ccc2e0(rax_16)
    
    int64_t* rax_18
    int64_t r9_6
    rax_18, r9_6 = j_sub_140a82f30(0x18)
    
    if (rax_18 == 0)
        rax_18 = nullptr
    else
        rax_18[1].d = 1
        *rax_18 = &data_142d42ea8
        *(rax_18 + 0xc) = 1
        rax_18[2] = rbx_5
    
    var_68 = rbx_5
    
    if (rax_18 != 0)
        rax_18[1].d += 1
    
    if (arg1 + 0x280 == &var_38)
    label_141cce96c:
        
        if (rax_18 != 0)
            rax_18[1].d -= 1
            
            if (rax_18[1].d == 1)
                r9_6 = (**rax_18)(rax_18)
                int32_t temp13_1 = *(rax_18 + 0xc)
                *(rax_18 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    r9_6 = (*(*rax_18 + 8))(rax_18, 1)
    else
        *(arg1 + 0x280) = var_68
        int64_t* rdi_3 = *(arg1 + 0x288)
        
        if (rax_18 == rdi_3)
            goto label_141cce96c
        
        *(arg1 + 0x288) = rax_18
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                r9_6 = (**rdi_3)(rdi_3)
                int32_t temp16_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    r9_6 = (*(*rdi_3 + 8))(rdi_3, 1)
    
    sub_141ccd810(arg1, &var_68, 1, r9_6)
    
    if (rax_18 != 0)
        rax_18[1].d -= 1
        
        if (rax_18[1].d == 1)
            (**rax_18)(rax_18)
            int32_t temp15_1 = *(rax_18 + 0xc)
            *(rax_18 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*rax_18 + 8))(rax_18, 1)

int64_t rcx_30 = var_58

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

void* result = arg5
int64_t* rbx_8 = *(result + 8)

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        result = (**rbx_8)(rbx_8)
        int32_t temp1_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_8 + 8))(rbx_8, 1)

return result
