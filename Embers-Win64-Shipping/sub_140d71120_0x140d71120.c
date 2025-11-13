// 函数: sub_140d71120
// 地址: 0x140d71120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rbx = 0
int64_t arg_10 = 0
*arg1 = &data_142ec05c0

do
    arg1[rbx + 0x11] = 0
    void* rdi_2 = &arg1[2 + rbx]
    HCURSOR rbx_1 = nullptr
    *rdi_2 = 0
    int64_t rcx_18
    int64_t rcx_36
    
    switch (i)
        case 0
            if (sub_140b6e870() != 0)
                int64_t var_78
                int64_t* rax_3 = sub_140b139e0(&var_78)
                int16_t* const r8_1
                
                if (rax_3[1].d == 0)
                    r8_1 = &data_142d40450
                else
                    r8_1 = *rax_3
                
                int16_t* var_b8
                sub_140a2e390(&var_b8, u"%sEditor/Slate/Cursor/invisible.cur", r8_1)
                sub_140b65060()
                PWSTR lpFileName_12 = nullptr
                int32_t rsi_1 = 0
                int32_t r14_1 = 0
                PWSTR lpFileName_16 = nullptr
                int64_t var_130_1 = 0
                
                if (data_143e189c0 != 0)
                    int64_t rbx_2 = -1
                    
                    do
                        rbx_2 += 1
                    while ((&data_143e189c0)[rbx_2] != 0)
                    
                    if (rbx_2.d + 1 s> 0)
                        sub_1405947f0(&lpFileName_16, rbx_2.d + 1)
                        r14_1 = var_130_1:4.d
                        rsi_1 = var_130_1.d
                        lpFileName_12 = lpFileName_16
                    
                    rsi_1 += rbx_2.d + 1
                    var_130_1.d = rsi_1
                    
                    if (rsi_1 s> r14_1)
                        sub_140594770(&lpFileName_16)
                        r14_1 = var_130_1:4.d
                        rsi_1 = var_130_1.d
                        lpFileName_12 = lpFileName_16
                    
                    UnDecorator::getReferenceType(lpFileName_12, &data_143e189c0, (rbx_2.d + 1) * 2)
                
                int32_t var_b0
                int32_t rbx_4 = var_b0 - 1
                
                if (var_b0 == 0)
                    rbx_4 = 0
                
                int32_t rax_6
                
                if (rsi_1 == 0)
                    rax_6 = rsi_1 + 2
                
                if (rsi_1 != 0 || rbx_4 == 0xffffffff)
                    rax_6 = 1
                
                lpFileName_16 = nullptr
                int32_t rdx_4 = rsi_1 + rax_6 + rbx_4
                PWSTR lpFileName_4 = lpFileName_12
                int32_t var_ec_1 = r14_1
                int64_t var_130_2 = 0
                
                if (rdx_4 s> r14_1)
                    sub_1405947f0(&lpFileName_4, rdx_4)
                
                sub_140a2cf70(&lpFileName_4, var_b8, rbx_4)
                PWSTR lpFileName = &data_142d40450
                
                if (rsi_1 != 0)
                    lpFileName = lpFileName_4
                
                HCURSOR rax_7 = LoadCursorFromFileW(lpFileName)
                PWSTR lpFileName_8 = lpFileName_4
                rbx_1 = rax_7
                
                if (lpFileName_8 != 0)
                    sub_140a74f90(lpFileName_8)
                
                int16_t* rcx_9 = var_b8
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                rcx_36 = var_78
            label_140d717e7:
                
                if (rcx_36 != 0)
                    sub_140a74f90(rcx_36)
        case 1
            rbx_1 = LoadCursorW(nullptr, 0x7f00)
        case 2
            rbx_1 = LoadCursorW(nullptr, 0x7f01)
        case 3
            rbx_1 = LoadCursorW(nullptr, 0x7f84)
        case 4
            rbx_1 = LoadCursorW(nullptr, 0x7f85)
        case 5
            rbx_1 = LoadCursorW(nullptr, 0x7f82)
        case 6
            rbx_1 = LoadCursorW(nullptr, 0x7f83)
        case 7
            rbx_1 = LoadCursorW(nullptr, 0x7f86)
        case 8
            rbx_1 = LoadCursorW(nullptr, 0x7f03)
        case 9
            rbx_1 = LoadCursorW(nullptr, 0x7f89)
        case 0xa
            int64_t var_68
            int64_t* rax_17 = sub_140b139e0(&var_68)
            int16_t* const r8_5
            
            if (rax_17[1].d == 0)
                r8_5 = &data_142d40450
            else
                r8_5 = *rax_17
            
            int16_t* var_a8
            sub_140a2e390(&var_a8, u"%sEditor/Slate/Cursor/grabhand.cur", r8_5)
            sub_140b65060()
            PWSTR lpFileName_13 = nullptr
            int32_t rsi_2 = 0
            int32_t r14_2 = 0
            PWSTR lpFileName_17 = nullptr
            int64_t var_120_1 = 0
            
            if (data_143e189c0 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while ((&data_143e189c0)[rbx_5] != 0)
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(&lpFileName_17, rbx_5.d + 1)
                    r14_2 = var_120_1:4.d
                    rsi_2 = var_120_1.d
                    lpFileName_13 = lpFileName_17
                
                rsi_2 += rbx_5.d + 1
                var_120_1.d = rsi_2
                
                if (rsi_2 s> r14_2)
                    sub_140594770(&lpFileName_17)
                    r14_2 = var_120_1:4.d
                    rsi_2 = var_120_1.d
                    lpFileName_13 = lpFileName_17
                
                UnDecorator::getReferenceType(lpFileName_13, &data_143e189c0, (rbx_5.d + 1) * 2)
            
            int32_t var_a0
            int32_t rbx_7 = var_a0 - 1
            
            if (var_a0 == 0)
                rbx_7 = 0
            
            int32_t rax_20
            
            if (rsi_2 == 0)
                rax_20 = rsi_2 + 2
            
            if (rsi_2 != 0 || rbx_7 == 0xffffffff)
                rax_20 = 1
            
            lpFileName_17 = nullptr
            int32_t rdx_9 = rax_20 + rsi_2 + rbx_7
            PWSTR lpFileName_5 = lpFileName_13
            int32_t var_dc_1 = r14_2
            int64_t var_120_2 = 0
            
            if (rdx_9 s> r14_2)
                sub_1405947f0(&lpFileName_5, rdx_9)
            
            sub_140a2cf70(&lpFileName_5, var_a8, rbx_7)
            PWSTR lpFileName_1 = &data_142d40450
            
            if (rsi_2 != 0)
                lpFileName_1 = lpFileName_5
            
            HCURSOR rax_21 = LoadCursorFromFileW(lpFileName_1)
            PWSTR lpFileName_9 = lpFileName_5
            rbx_1 = rax_21
            
            if (lpFileName_9 != 0)
                sub_140a74f90(lpFileName_9)
            
            int16_t* rcx_17 = var_a8
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            rcx_18 = var_68
        label_140d71517:
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            if (rbx_1 == 0)
                rbx_1 = LoadCursorW(nullptr, 0x7f89)
        case 0xb
            int64_t var_58
            int64_t* rax_23 = sub_140b139e0(&var_58)
            int16_t* const r8_9
            
            if (rax_23[1].d == 0)
                r8_9 = &data_142d40450
            else
                r8_9 = *rax_23
            
            int16_t* var_98
            sub_140a2e390(&var_98, u"%sEditor/Slate/Cursor/grabhand_closed.cur", r8_9)
            sub_140b65060()
            PWSTR lpFileName_14 = nullptr
            int32_t rsi_3 = 0
            int32_t r14_3 = 0
            PWSTR lpFileName_18 = nullptr
            int64_t var_110_1 = 0
            
            if (data_143e189c0 != 0)
                int64_t rbx_8 = -1
                
                do
                    rbx_8 += 1
                while ((&data_143e189c0)[rbx_8] != 0)
                
                if (rbx_8.d + 1 s> 0)
                    sub_1405947f0(&lpFileName_18, rbx_8.d + 1)
                    r14_3 = var_110_1:4.d
                    rsi_3 = var_110_1.d
                    lpFileName_14 = lpFileName_18
                
                rsi_3 += rbx_8.d + 1
                var_110_1.d = rsi_3
                
                if (rsi_3 s> r14_3)
                    sub_140594770(&lpFileName_18)
                    r14_3 = var_110_1:4.d
                    rsi_3 = var_110_1.d
                    lpFileName_14 = lpFileName_18
                
                UnDecorator::getReferenceType(lpFileName_14, &data_143e189c0, (rbx_8.d + 1) * 2)
            
            int32_t var_90
            int32_t rbx_10 = var_90 - 1
            
            if (var_90 == 0)
                rbx_10 = 0
            
            int32_t rax_26
            
            if (rsi_3 == 0)
                rax_26 = rsi_3 + 2
            
            if (rsi_3 != 0 || rbx_10 == 0xffffffff)
                rax_26 = 1
            
            lpFileName_18 = nullptr
            int32_t rdx_14 = rax_26 + rbx_10 + rsi_3
            PWSTR lpFileName_6 = lpFileName_14
            int32_t var_cc_1 = r14_3
            int64_t var_110_2 = 0
            
            if (rdx_14 s> r14_3)
                sub_1405947f0(&lpFileName_6, rdx_14)
            
            sub_140a2cf70(&lpFileName_6, var_98, rbx_10)
            PWSTR lpFileName_2 = &data_142d40450
            
            if (rsi_3 != 0)
                lpFileName_2 = lpFileName_6
            
            HCURSOR rax_27 = LoadCursorFromFileW(lpFileName_2)
            PWSTR lpFileName_10 = lpFileName_6
            rbx_1 = rax_27
            
            if (lpFileName_10 != 0)
                sub_140a74f90(lpFileName_10)
            
            int16_t* rcx_26 = var_98
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            rcx_18 = var_58
            goto label_140d71517
        case 0xc
            rbx_1 = LoadCursorW(nullptr, 0x7f88)
        case 0xd
            int64_t var_48
            int64_t* rax_29 = sub_140b139e0(&var_48)
            int16_t* const r8_13
            
            if (rax_29[1].d == 0)
                r8_13 = &data_142d40450
            else
                r8_13 = *rax_29
            
            int16_t* var_88
            sub_140a2e390(&var_88, u"%sEditor/Slate/Icons/eyedropper.cur", r8_13)
            sub_140b65060()
            int16_t* lpFileName_15 = nullptr
            int32_t rsi_4 = 0
            int32_t r14_4 = 0
            int16_t* lpFileName_19 = nullptr
            int64_t var_100_1 = 0
            
            if (data_143e189c0 != 0)
                int64_t rbx_11 = -1
                
                do
                    rbx_11 += 1
                while ((&data_143e189c0)[rbx_11] != 0)
                
                if (rbx_11.d + 1 s> 0)
                    sub_1405947f0(&lpFileName_19, rbx_11.d + 1)
                    r14_4 = var_100_1:4.d
                    rsi_4 = var_100_1.d
                    lpFileName_15 = lpFileName_19
                
                rsi_4 += rbx_11.d + 1
                var_100_1.d = rsi_4
                
                if (rsi_4 s> r14_4)
                    sub_140594770(&lpFileName_19)
                    r14_4 = var_100_1:4.d
                    rsi_4 = var_100_1.d
                    lpFileName_15 = lpFileName_19
                
                UnDecorator::getReferenceType(lpFileName_15, &data_143e189c0, (rbx_11.d + 1) * 2)
            
            int32_t var_80
            int32_t rbx_13 = var_80 - 1
            
            if (var_80 == 0)
                rbx_13 = 0
            
            int32_t rax_31
            
            if (rsi_4 == 0)
                rax_31 = rsi_4 + 1
            
            if (rsi_4 != 0 || rbx_13 == 0xffffffff)
                rax_31 = 0
            
            lpFileName_19 = nullptr
            int32_t rdx_19 = rsi_4 + rbx_13 + 1 + rax_31
            int16_t* lpFileName_7 = lpFileName_15
            int32_t var_bc_1 = r14_4
            int64_t var_100_2 = 0
            
            if (rdx_19 s> r14_4)
                sub_1405947f0(&lpFileName_7, rdx_19)
            
            sub_140a2cf70(&lpFileName_7, var_88, rbx_13)
            int16_t* const lpFileName_3 = &data_142d40450
            
            if (rsi_4 != 0)
                lpFileName_3 = lpFileName_7
            
            HCURSOR rax_32 = LoadCursorFromFileW(lpFileName_3)
            int16_t* lpFileName_11 = lpFileName_7
            rbx_1 = rax_32
            
            if (lpFileName_11 != 0)
                sub_140a74f90(lpFileName_11)
            
            int16_t* rcx_35 = var_88
            
            if (rcx_35 != 0)
                sub_140a74f90(rcx_35)
            
            rcx_36 = var_48
            goto label_140d717e7
    
    *rdi_2 = rbx_1
    i += 1
    rbx = arg_10 + 1
    arg_10 = rbx
while (i s< 0xf)

arg1[1].d = 1
HCURSOR hCursor = arg1[0x12]

if (hCursor == 0)
    hCursor = arg1[3]

SetCursor(hCursor)
return arg1
