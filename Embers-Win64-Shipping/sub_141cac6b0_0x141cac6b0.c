// 函数: sub_141cac6b0
// 地址: 0x141cac6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
int32_t rax = sub_140a23cf0(rsi, &data_142d404c4, 0, 0, 0xffffffff)
int16_t* const r15 = &data_142d40450
int64_t var_38 = 0
int64_t r12 = 0
int64_t var_30 = 0
int64_t* rbx = rsi

if (rax != 0xffffffff)
    int32_t rcx_1 = rsi[1].d
    int16_t* rbp_1
    
    if (rcx_1 == 0)
        rbp_1 = &data_142d40450
    else
        rbp_1 = *rsi
    
    int32_t rbx_1 = rcx_1 - 1
    
    if (rcx_1 == 0)
        rbx_1 = 0
    
    if (rax s< 0)
        rbx_1 = 0
    else if (rax s< rbx_1)
        rbx_1 = rax
    
    int64_t var_48 = 0
    int32_t rdi_1 = 0
    int64_t var_40_1 = 0
    int32_t rsi_1 = 0
    
    if (rbp_1 != 0 && *rbp_1 != 0 && rbx_1 s> 0)
        if (rbx_1 + 1 s> 0)
            sub_1405947f0(&var_48, rbx_1 + 1)
            rsi_1 = var_40_1:4.d
            rdi_1 = var_40_1.d
            r12 = var_48
        
        rdi_1 += rbx_1 + 1
        var_40_1.d = rdi_1
        
        if (rdi_1 s> rsi_1)
            sub_140594770(&var_48)
            rsi_1 = var_40_1:4.d
            rdi_1 = var_40_1.d
            r12 = var_48
        
        UnDecorator::getReferenceType(r12, rbp_1, rbx_1 * 2)
        *(r12 + (sx.q(rdi_1) << 1) - 2) = 0
    
    var_30:4.d = rsi_1
    rbx = &var_38
    rsi = arg2
    var_38 = r12
    var_30.d = rdi_1

int16_t** r8_2 = *(arg1 + 0x768)
void* r11_2 = &r8_2[sx.q(*(arg1 + 0x770)) * 4]

if (r8_2 == r11_2)
label_141cac843:
    rbx.b = 0
else
    while (true)
        int32_t r10_1 = r8_2[1].d
        int16_t* r9_1
        
        if (r10_1 == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *r8_2
        
        void* rax_2
        
        if (rbx[1].d == 0)
            rax_2 = &data_142d40450
        else
            rax_2 = *rbx
        
        void* r9_2 = r9_1 - rax_2
        uint32_t i
        uint32_t rdx_3
        
        do
            rdx_3 = zx.d(*rax_2)
            i = zx.d(*(rax_2 + r9_2))
            
            if (rdx_3 != i)
                break
            
            rax_2 += 2
        while (i != 0)
        
        if (rdx_3 - i == 0)
            int16_t* const r9_3
            
            if (r8_2[3].d == 0)
                r9_3 = &data_142d40450
            else
                r9_3 = r8_2[2]
            
            if (r10_1 != 0)
                r15 = *r8_2
            
            int64_t* rax_4 = sub_140a300d0(rsi, &var_38, r15, r9_3, 1)
            
            if (arg3 != rax_4)
                int64_t rcx_7 = *arg3
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                *arg3 = *rax_4
                *rax_4 = 0
                arg3[1].d = rax_4[1].d
                *(arg3 + 0xc) = *(rax_4 + 0xc)
                rax_4[1] = 0
            
            int64_t rcx_9 = var_38
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rbx.b = 1
            break
        
        r8_2 = &r8_2[4]
        
        if (r8_2 == r11_2)
            goto label_141cac843

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rbx.b)
