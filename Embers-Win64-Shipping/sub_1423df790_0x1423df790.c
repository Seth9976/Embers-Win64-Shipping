// 函数: sub_1423df790
// 地址: 0x1423df790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_88 = 0

if (sub_14243af00(arg4) != 0)
    int64_t var_80 = 0
    int32_t rdx = 0
    int32_t var_78_1 = 0
    int32_t r8 = 0
    int32_t var_74_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_80, rbx_1.d + 1)
            r8 = var_74_1
            rdx = var_78_1
        
        int32_t rax_1 = rbx_1.d + 1 + rdx
        var_78_1 = rax_1
        
        if (rax_1 s> r8)
            sub_140594770(&var_80)
        
        UnDecorator::getReferenceType(var_80, arg2, (rbx_1.d + 1) * 2)
    
    int16_t* var_70
    __builtin_memset(&var_70, 0, 0x20)
    uint64_t var_40 = 0
    int64_t var_38_1 = 0
    uint64_t var_60
    sub_1405947f0(&var_60, 2)
    int64_t var_58
    int32_t rax_2 = var_58.d + 2
    var_58.d = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_60)
    
    uint64_t rbx_3 = var_60
    UnDecorator::getReferenceType(rbx_3, &data_142e5f8f8, 4)
    int16_t* rdi
    rdi.b = sub_14060a620(&var_80, &var_60, &var_70, &var_40, 0, 0) == 0
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    int64_t var_68
    
    if (rdi.b != 0)
        int64_t rdi_1 = var_80
        int32_t r8_4 = var_68:4.d
        var_68.d = var_78_1
        
        if (var_78_1 != 0 || r8_4 != 0)
            sub_1405a4c70(&var_70, var_78_1, r8_4)
            memcpy(var_70, rdi_1, var_78_1 * 2)
        else
            var_68:4.d = 0
    
    char rax_4
    int32_t rcx_12
    rax_4, rcx_12 = sub_1423e9570(arg1, &var_70)
    
    if (rax_4 != 0)
        int32_t rsi_1 = var_38_1.d
        uint64_t r15_1 = var_40
        uint64_t var_50
        int32_t rbx_6
        int64_t* rdi_3
        uint64_t r14_1
        
        if (rsi_1 s> 1)
            int32_t rdi_4 = var_68.d
            int16_t* rbx_7 = var_70
            var_60 = 0
            var_58.d = rdi_4
            sub_1405a4c70(&var_60, sbb.d(rcx_12, rcx_12, rdi_4 != 0) + 2 + rdi_4, 0)
            memcpy(var_60, rbx_7, rdi_4 * 2)
            int32_t rbx_8 = 1
            sub_140a20ba0(&var_60, &data_142e5f8f8, 1)
            int32_t rax_7 = var_58.d
            r14_1 = var_60
            int32_t rcx_19 = var_58:4.d
            var_60 = 0
            int64_t var_58_1 = 0
            
            if (rax_7 s> 1)
                int32_t rsi_2
                
                if (rsi_1 == 0)
                    rsi_2 = 0
                else
                    rsi_2 = rsi_1 - 1
                
                if (rax_7 != 0 || rsi_2 == 0)
                    rbx_8 = 0
                
                var_40 = r14_1
                int32_t rdx_16 = rbx_8 + rax_7 + rsi_2
                var_38_1.d = rax_7
                var_38_1:4.d = rcx_19
                r14_1 = 0
                
                if (rdx_16 s> rcx_19)
                    sub_1405947f0(&var_40, rdx_16)
                
                sub_140a20ba0(&var_40, r15_1, rsi_2)
                var_50 = var_40
                int32_t var_48_2 = var_38_1.d
                int32_t var_44_2 = var_38_1:4.d
            else
                var_50 = 0
                int32_t var_48_1 = rsi_1
                
                if (rsi_1 != 0)
                    sub_1405a4c70(&var_50, rsi_1, 0)
                    memcpy(var_50, r15_1, rsi_1 * 2)
                else
                    int32_t var_44_1 = 0
            
            rdi_3 = &var_50
            rbx_6 = 6
        else
            int32_t rbx_5 = var_68.d
            int16_t* rdi_2 = var_70
            var_40 = 0
            var_38_1.d = rbx_5
            
            if (rbx_5 != 0)
                sub_1405a4c70(&var_40, rbx_5, 0)
                memcpy(var_40, rdi_2, rbx_5 * 2)
                r14_1 = var_40
                rdi_3 = &var_40
                rbx_6 = 1
            else
                r14_1 = var_40
                rdi_3 = &var_40
                var_38_1:4.d = 0
                rbx_6 = 1
        
        int64_t rcx_24 = var_80
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t rax_11 = *rdi_3
        *rdi_3 = 0
        var_80 = rax_11
        int32_t var_78_2 = rdi_3[1].d
        int32_t var_74_2 = *(rdi_3 + 0xc)
        rdi_3[1] = 0
        
        if ((rbx_6.b & 4) != 0)
            uint64_t rcx_25 = var_50
            rbx_6 &= 0xfffffffb
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
        
        if ((rbx_6.b & 2) != 0)
            rbx_6 &= 0xfffffffd
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
        
        if ((rbx_6.b & 1) != 0)
            uint64_t rcx_27 = var_40
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
        
        sub_142444880(arg4, &var_80, 0, 0)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        int16_t* rcx_30 = var_70
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int64_t rcx_31 = var_80
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        return 1
    
    int16_t* const r8_14 = &data_142d40450
    
    if (var_68.d != 0)
        r8_14 = var_70
    
    sub_140b1f700(arg3, ERROR: The map '%s' is either short package name or does not exist.", r8_14)
    uint64_t rcx_33 = var_40
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    int16_t* rcx_34 = var_70
    
    if (rcx_34 != 0)
        sub_140a74f90(rcx_34)
    
    int64_t rcx_35 = var_80
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)

return 0
