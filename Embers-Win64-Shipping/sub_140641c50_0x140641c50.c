// 函数: sub_140641c50
// 地址: 0x140641c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1].d
int64_t* rbx = nullptr
int32_t r12 = arg3
int32_t r15 = arg2
int32_t r10 = rax - 1

if (rax == 0)
    r10 = 0

int64_t* var_88

if (r10 s< 1)
    var_88 = nullptr
    int64_t var_80 = 0
    sub_1405947f0(&var_88, 0xd)
    int32_t r14 = var_80:4.d
    int32_t rsi_1 = var_80.d + 0xd
    var_80.d = rsi_1
    
    if (rsi_1 s> r14)
        sub_140594770(&var_88)
        r14 = var_80:4.d
        rsi_1 = var_80.d
    
    int64_t* rdi = var_88
    sub_1405a7220(rdi, 0xd, "No file path", 0xd, 0x3f)
    int64_t* result
    
    if (arg7 == &var_88)
        if (rdi != 0)
            sub_140a74f90(rdi)
        
        result.b = 0
    else
        int64_t rcx_3 = *arg7
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *arg7 = rdi
        result.b = 0
        arg7[1].d = rsi_1
        *(arg7 + 0xc) = r14
    
    return result

int64_t var_68
sub_140b1a780(&var_68, arg1)
sub_140b214e0(&var_68)
int64_t r14_1 = var_68
int64_t* var_58 = nullptr
int32_t var_60
int32_t var_50_1 = var_60
int32_t var_4c

if (var_60 != 0)
    sub_1405a4c70(&var_58, var_60, 0)
    memcpy(var_58, r14_1, var_60 * 2)
else
    var_4c = 0

if (sub_14063cdd0(&var_58) != 0)
    int128_t* rdi_5 = *arg4
    int32_t rcx_20 = 0
    void* r14_5 = &rdi_5[sx.q(arg4[1].d)]
    int64_t var_78 = 0
    int64_t var_70_1 = 0
    
    if (rdi_5 != r14_5)
        do
            void arg_8
            char* rax_5 = sub_140ae16d0(rdi_5, &arg_8, arg6)
            int64_t rsi_4 = sx.q(var_70_1.d)
            int32_t rcx_22 = (rsi_4 + 1).d
            var_70_1.d = rcx_22
            
            if (rcx_22 s> var_70_1:4.d)
                sub_1406105e0(&var_78)
            
            rdi_5 = &rdi_5[1]
            *(var_78 + (rsi_4 << 2)) = *rax_5
        while (rdi_5 != r14_5)
        
        rcx_20 = var_70_1.d
        r12 = arg3
        r15 = arg2
    
    if (rcx_20 == r15 * r12)
        int16_t* var_48
        sub_140b18720(&var_48, arg1, 0)
        char const* const rdx_14 = ".png"
        int64_t r8_6 = -1
        
        if (arg5 != 0)
            rdx_14 = ".bmp"
        
        do
            r8_6 += 1
        while (rdx_14[r8_6] != 0)
        
        sub_140a20b00(&var_48, rdx_14, r8_6.d)
        
        if (arg5 == 0)
            var_58 = nullptr
            var_50_1.q = 0
            sub_142083b00(r15, r12, &var_78, &var_58)
            var_88 = nullptr
            int64_t var_80_5 = 0
            sub_1405947f0(&var_88, 0x5f)
            int32_t r14_8 = var_80_5:4.d
            int32_t rsi_7 = var_80_5.d + 0x5f
            var_80_5.d = rsi_7
            
            if (rsi_7 s> r14_8)
                sub_140594770(&var_88)
                r14_8 = var_80_5:4.d
                rsi_7 = var_80_5.d
            
            int64_t* rdi_10 = var_88
            sub_1405a7220(rdi_10, 0x5f, 
                "Success! or if returning false, the saving of file to disk did not succeed for File IO "
            "reasons", 
                0x5f, 0x3f)
            
            if (arg7 != &var_88)
                int64_t rcx_42 = *arg7
                
                if (rcx_42 != 0)
                    sub_140a74f90(rcx_42)
                
                *arg7 = rdi_10
                arg7[1].d = rsi_7
                *(arg7 + 0xc) = r14_8
            else if (rdi_10 != 0)
                sub_140a74f90(rdi_10)
            
            int16_t* rdi_11 = &data_142d40450
            var_88 = var_58
            int32_t var_40
            
            if (var_40 != 0)
                rdi_11 = var_48
            
            var_80_5.d = var_50_1
            var_88.o = var_88.o
            sub_140a464c0()
            char rax_12 = sub_140b27070(&var_88, rdi_11, &data_14399ea08, 0)
            int64_t* rcx_45 = var_58
            rbx = zx.q(rax_12)
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
        else
            var_88 = nullptr
            int64_t var_80_4 = 0
            sub_1405947f0(&var_88, 0x5f)
            int32_t r15_4 = var_80_4:4.d
            int32_t rsi_6 = var_80_4.d + 0x5f
            var_80_4.d = rsi_6
            
            if (rsi_6 s> r15_4)
                sub_140594770(&var_88)
                r15_4 = var_80_4:4.d
                rsi_6 = var_80_4.d
            
            int64_t* r14_7 = var_88
            sub_1405a7220(r14_7, 0x5f, 
                "Success! or if returning false, the saving of file to disk did not succeed for File IO "
            "reasons", 
                0x5f, 0x3f)
            
            if (arg7 != &var_88)
                int64_t rcx_35 = *arg7
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                *arg7 = r14_7
                arg7[1].d = rsi_6
                *(arg7 + 0xc) = r15_4
            else if (r14_7 != 0)
                sub_140a74f90(r14_7)
            
            sub_140a464c0()
            int32_t var_98_1 = 3
            char var_a0_1 = 1
            int64_t var_a8_1 = 0
            char const (** var_b0_1)[0x4] = &data_14399ea08
            rbx = zx.q(sub_1405948d0())
        
        int16_t* rcx_46 = var_48
        
        if (rcx_46 != 0)
            sub_140a74f90(rcx_46)
    else
        var_88 = nullptr
        int64_t var_80_3 = 0
        sub_1405947f0(&var_88, 0x45)
        int32_t r14_6 = var_80_3:4.d
        int32_t rsi_5 = var_80_3.d + 0x45
        var_80_3.d = rsi_5
        
        if (rsi_5 s> r14_6)
            sub_140594770(&var_88)
            r14_6 = var_80_3:4.d
            rsi_5 = var_80_3.d
        
        int64_t* rdi_6 = var_88
        sub_1405a7220(rdi_6, 0x45, 
            "Error ~ height x width is not equal to the total pixel array length!", 0x45, 0x3f)
        
        if (arg7 == &var_88)
            if (rdi_6 != 0)
                sub_140a74f90(rdi_6)
            
            rbx.b = 0
        else
            int64_t rcx_28 = *arg7
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            *arg7 = rdi_6
            arg7[1].d = rsi_5
            *(arg7 + 0xc) = r14_6
            rbx.b = 0
    
    int64_t rcx_47 = var_78
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
else
    var_88 = nullptr
    int64_t var_80_1 = 0
    sub_1405947f0(&var_88, 0x3c)
    int32_t r15_1 = var_80_1:4.d
    int32_t rdi_2 = var_80_1.d + 0x3c
    var_80_1.d = rdi_2
    
    if (rdi_2 s> r15_1)
        sub_140594770(&var_88)
        r15_1 = var_80_1:4.d
        rdi_2 = var_80_1.d
    
    int64_t* r14_2 = var_88
    sub_1405a7220(r14_2, 0x3c, "Folder could not be created, check read/write permissions~ ", 0x3c, 
        0x3f)
    int32_t rsi_2
    int32_t r15_2
    
    if (rdi_2 s> 1)
        int32_t rsi_3 = var_60 - 1
        
        if (var_60 == 0)
            rsi_3 = 0
        
        int32_t rax_3
        
        if (rdi_2 == 0)
            rax_3 = rdi_2 + 1
        
        if (rdi_2 != 0 || rsi_3 == 0)
            rax_3 = 0
        
        var_88 = r14_2
        int32_t rdx_8 = rdi_2 + rax_3 + rsi_3
        var_80_1.d = rdi_2
        var_80_1:4.d = r15_1
        r14_2 = nullptr
        
        if (rdx_8 s> r15_1)
            sub_1405947f0(&var_88, rdx_8)
        
        sub_140a20ba0(&var_88, var_68, rsi_3)
        int64_t* rax_4 = var_88
        rsi_2 = var_80_1.d
        r15_2 = var_80_1:4.d
        var_88 = nullptr
        int64_t var_80_2 = 0
        rbx = rax_4
    else
        rsi_2 = var_60
        int64_t rdi_3 = var_68
        var_58 = nullptr
        
        if (rsi_2 != 0)
            sub_1405a4c70(&var_58, rsi_2, 0)
            rbx = var_58
            memcpy(rbx, rdi_3, rsi_2 * 2)
            r15_2 = var_4c
        else
            r15_2 = 0
    
    if (arg7 != &var_58)
        int64_t rcx_17 = *arg7
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        *arg7 = rbx
        arg7[1].d = rsi_2
        *(arg7 + 0xc) = r15_2
    else if (rbx != 0)
        sub_140a74f90(rbx)
    
    if (r14_2 != 0)
        sub_140a74f90(r14_2)
    
    rbx.b = 0

int64_t rcx_48 = var_68

if (rcx_48 != 0)
    sub_140a74f90(rcx_48)

return zx.q(rbx.b)
