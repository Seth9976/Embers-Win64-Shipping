// 函数: sub_140d1dfb0
// 地址: 0x140d1dfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t rdx = 0
int32_t var_50 = 0
int32_t rcx = 0
int32_t var_4c = 0
int16_t* var_58 = nullptr

if (arg2 != 0)
    int32_t rbx_2
    
    if (*arg2 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    if (rbx_2 != 0)
        sub_1405947f0(&var_58, rbx_2)
        rcx = var_4c
        rdx = var_50
    
    int32_t rax_1 = rbx_2 + rdx
    var_50 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_58)
    
    if (rbx_2 != 0)
        memcpy(var_58, arg2, rbx_2 * 2)

if (sub_140a23cf0(&var_58, &data_142e76608, 0, 0, 0xffffffff) != 0xffffffff)
    sub_140af98a0("Unknown", 0x24a, 
        Attempted to create a package with name containing double slashes. PackageName: %s", arg2)
    sub_140afbb40()

char rax_3
int32_t r8_3
rax_3, r8_3 = sub_140a237d0(&var_58, &data_142d404c4, 0)
int16_t* const r15 = &data_142d40450
void*** (* var_48)()
int32_t var_40

if (rax_3 != 0)
    int32_t rax_4 = var_50 - 1
    
    if (var_50 == 0)
        rax_4 = 0
    
    int32_t rdi_2
    int16_t* r14_1
    
    if (var_50 == 0)
        r14_1 = &data_142d40450
        rdi_2 = 0
    else
        r14_1 = var_58
        rdi_2 = var_50 - 1
    
    if (rax_4 - 1 s< 0)
        rdi_2 = 0
    else if (rax_4 s<= rdi_2)
        rdi_2 = rax_4 - 1
    
    var_48 = nullptr
    int32_t rbx_3 = 0
    var_40 = 0
    int32_t rax_5 = 0
    int32_t var_3c_1 = 0
    void*** (* rsi_1)() = nullptr
    
    if (r14_1 != 0 && *r14_1 != 0 && rdi_2 s> 0)
        if (rdi_2 + 1 s> 0)
            sub_1405947f0(&var_48, rdi_2 + 1)
            rax_5 = var_3c_1
            rbx_3 = var_40
            rsi_1 = var_48
        
        rbx_3 = rbx_3 + 1 + rdi_2
        
        if (rbx_3 s> rax_5)
            sub_140594770(&var_48)
            rsi_1 = var_48
        
        UnDecorator::getReferenceType(rsi_1, r14_1, rdi_2 * 2)
        *(rsi_1 + (sx.q(rbx_3) << 1) - 2) = 0
    
    var_50 = rbx_3
    
    if (rbx_3 != 0 || var_4c != 0)
        sub_1405a4c70(&var_58, rbx_3, var_4c)
        memcpy(var_58, rsi_1, rbx_3 * 2)
    else
        int32_t var_4c_1 = 0
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

uint64_t arg_10
uint64_t arg_18

if (var_50 == 0 || var_50 == 1)
    arg_10 = 0
    void* rax_8 = sub_140cddea0()
    int64_t* rax_10
    rax_10, r8_3 = sub_140b63b70(sub_140d25240(&arg_18, arg_8, rax_8, 0), &var_48)
    
    if (&var_58 != rax_10)
        int16_t* rcx_15 = var_58
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        var_58 = *rax_10
        *rax_10 = 0
        var_50 = rax_10[1].d
        int32_t var_4c_2 = *(rax_10 + 0xc)
        rax_10[1] = 0
    
    void*** (* rcx_17)() = var_48
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

int64_t var_80 = 0
r8_3.b = 1
sub_140d2b810(&arg_8, &var_58, r8_3.b, 0, 0)
int32_t rdx_11 = var_50
void* result = nullptr

if (rdx_11 == 0 || rdx_11 == 1)
    sub_140af98a0("Unknown", 0x25f, %s", Attempted to create a package with an empty package name.")
    sub_140afbb40()
    rdx_11 = var_50

int16_t* rcx_19 = &data_142d40450

if (rdx_11 != 0)
    rcx_19 = var_58

if (sub_140a54510(rcx_19, u"None") == 0)
    sub_140af98a0("Unknown", 0x274, u"%s", u"Attempted to create a package named 'None'")
    sub_140afbb40()
else
    int16_t* rdi_3 = &data_142d40450
    
    if (var_50 != 0)
        rdi_3 = var_58
    
    void* result_1 = sub_140d2ee50(sub_140cddea0(), arg_8, rdi_3, 0)
    result = result_1
    
    if (result_1 == 0)
        if (var_50 != 0)
            r15 = var_58
        
        sub_140b58260(&arg_18, r15, (result_1 + 1).d)
        
        if (sub_140bacea0(arg_18) == 0)
            uint64_t rbx_7 = arg_18
            void* rdi_4 = arg_8
            arg_10 = rbx_7
            char rax_17 = sub_140b5b8a0(rbx_7.d, 0)
            int32_t rcx_23
            rcx_23.b = arg_10:4.d == 0
            
            if ((rcx_23.b & rax_17) != 0)
                arg_10.b = 0
                var_40.q = &arg_10
                var_48 = sub_140884c50
                void* rax_18 = sub_140a756e0(&var_48, &data_14397f5f0)
                
                if (*(rax_18 + 0x34) != 0 && rdi_4 == *(rax_18 + 0x38))
                    sub_140af98a0("Unknown", 0xc74, %s", NewObject with empty name can't be used to "
                    "create default subobjects (inside of UObject derived class constructor) as it "
                    "produces incon")
                    sub_140afbb40()
            
            result = sub_140d2dfc0(sub_140cddea0(), rdi_4, rbx_7, 1, 0, 0, 0, 0, 0)

int16_t* rcx_26 = var_58

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

return result
