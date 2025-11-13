// 函数: sub_141fe3cc0
// 地址: 0x141fe3cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_58 = 0
int64_t var_50 = 0
sub_1405947f0(&var_58, 0x10)
int32_t rax = var_50.d + 0x10
var_50.d = rax

if (rax s> 0)
    sub_140594770(&var_58)

uint64_t rsi = var_58
sub_1405a7220(rsi, 0x10, "WindowsNoEditor", 0x10, 0x3f)
uint64_t var_68 = 0
int64_t var_60 = 0
sub_140af2b60()
char rax_1 = sub_140b2acc0(&data_143dbb3f0, u"DeviceProfile=", &var_68, 1)
char rax_2

if (rax_1 == 0)
    sub_140af2b60()
    rax_2 = sub_140b2acc0(&data_143dbb3f0, &data_143293138, &var_68, 1)

if (rax_1 != 0 || rax_2 != 0)
    *arg1 = var_68
    arg1[1].d = var_60.d
    *(arg1 + 0xc) = var_60:4.d
    int64_t var_60_2 = 0
    var_68 = 0
    
    if (rsi != 0)
        sub_140a74f90(rsi)
else
    int64_t* rax_3 = data_143f3d6e0
    int32_t rbx_1 = rax_3[1].d
    int64_t r14_1 = *rax_3
    uint64_t var_38 = 0
    uint64_t r14_2
    int32_t r15_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_38, rbx_1, 0)
        r14_2 = var_38
        memcpy(r14_2, r14_1, rbx_1 * 2)
        int32_t var_2c
        r15_1 = var_2c
    else
        r15_1 = 0
        r14_2 = 0
    
    uint64_t rcx_5 = var_68
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    var_68 = r14_2
    var_60.d = rbx_1
    var_60:4.d = r15_1
    
    if (rbx_1 == 0 || rbx_1 - 1 s<= 0)
        void* rcx_7 = data_143ddb400
        uint64_t var_48 = 0
        int32_t var_40_1 = 0
        
        if (sub_140af5b90(rcx_7, DeviceProfileManager", DeviceProfileSelectionModule", &var_48, 
                &data_143de5780) != 0)
            int16_t* const rdx_3 = &data_142d40450
            
            if (var_40_1 != 0)
                rdx_3 = var_48
            
            void arg_10
            int64_t rbx_2 = *sub_140b58260(&arg_10, rdx_3, 1)
            j_sub_140b3db50()
            int64_t* rax_8 = sub_140b407e0(&data_143de7d78, rbx_2)
            
            if (rax_8 != 0)
                int64_t r8_4 = *rax_8
                sub_140597df0(&var_58, (*(r8_4 + 0x40))(rax_8, &var_38, r8_4))
                uint64_t rcx_11 = var_38
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                rsi = var_58
        
        uint64_t rcx_12 = var_48
        *arg1 = rsi
        arg1[1].d = var_50.d
        *(arg1 + 0xc) = var_50:4.d
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        uint64_t rcx_6 = var_68
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    else
        *arg1 = r14_2
        arg1[1].d = rbx_1
        *(arg1 + 0xc) = r15_1
        var_68 = 0
        int64_t var_60_1 = 0
        
        if (rsi != 0)
            sub_140a74f90(rsi)

return arg1
