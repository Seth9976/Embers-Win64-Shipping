// 函数: sub_140783b40
// 地址: 0x140783b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
char result = sub_1405948d0()

if (result != 0)
    int128_t* rax_2 =
        sub_1419ced70(/Plugin/FX/Niagara/Private/NiagaraDataInterfaceSkeletalMesh.ush", 0)
    int32_t rdi_1 = 0
    int32_t i_1 = 0x14
    int16_t* var_68 = nullptr
    int128_t var_58
    int128_t* r15_1 = &var_58
    int64_t var_60_1 = 0
    int32_t var_48_1 = rax_2[1].d
    var_58 = *rax_2
    sub_1405947f0(&var_68, 0x28)
    int32_t rdx = var_60_1.d
    int16_t* rbx_1 = var_68
    int32_t i
    
    do
        uint8_t r14_1 = *r15_1
        int16_t rsi_1 = 0x37
        uint16_t rcx_1 = zx.w(r14_1 u>> 4)
        
        if (rcx_1.b u<= 9)
            rsi_1 = 0x30
        
        if (rsi_1 != neg.w(rcx_1))
            int32_t rbp_1 = rdx - 1
            
            if (rdx s<= 0)
                rbp_1 = 0
            
            int32_t rdx_1
            rdx_1.b = rdx s<= 0
            rdx += rdx_1 + 1
            var_60_1.d = rdx
            
            if (rdx s> var_60_1:4.d)
                sub_140594770(&var_68)
                rdx = var_60_1.d
                rbx_1 = var_68
            
            int64_t rax_6 = sx.q(rbp_1)
            rbx_1[rax_6] = rsi_1 + rcx_1
            rbx_1[rax_6 + 1] = 0
        
        int16_t rbp_2 = 0x37
        uint16_t rax_7 = zx.w(r14_1) & 0xf
        
        if (rax_7.b u<= 9)
            rbp_2 = 0x30
        
        if (rbp_2 != neg.w(rax_7))
            int32_t rsi_2 = rdx - 1
            
            if (rdx s<= 0)
                rsi_2 = 0
            
            int32_t rdx_4
            rdx_4.b = rdx s<= 0
            rdx += rdx_4 + 1
            var_60_1.d = rdx
            
            if (rdx s> var_60_1:4.d)
                sub_140594770(&var_68)
                rdx = var_60_1.d
                rbx_1 = var_68
            
            int64_t rax_9 = sx.q(rsi_2)
            rbx_1[rax_9] = rbp_2 + rax_7
            rbx_1[rax_9 + 1] = 0
        
        r15_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
    int16_t* const rdx_7
    
    if (rdx == 0)
        rdx_7 = &data_142d40450
    else
        rdi_1 = rdx - 1
        rdx_7 = rbx_1
    
    sub_140b4ad80(*arg2, rdx_7, sx.q(rdi_1) * 2)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    result = 1

__security_check_cookie(rax_1 ^ &var_88)
return result
