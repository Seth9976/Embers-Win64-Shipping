// 函数: sub_14062fa40
// 地址: 0x14062fa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int64_t rbx = *sub_140b58170(&arg_18, "ImageWrapper", 1)
j_sub_140b3db50()
int64_t* rax_1 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 5)
int32_t rcx_2 = var_40 + 5
var_40 = rcx_2

if (rcx_2 s> 0)
    sub_140594770(&var_48)

sub_1405a7220(var_48, 5, ".png", 5, 0x3f)
char rax_2 = sub_140a236f0(arg2, &var_48, 1)
int64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (rax_2 == 0)
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 5)
    int32_t rax_4 = var_30_1 + 5
    var_30_1 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_38)
    
    sub_1405a7220(var_38, 5, ".jpg", 5, 0x3f)
    char r15_1 = 1
    char rax_5
    int64_t r8_1
    rax_5, r8_1 = sub_140a236f0(arg2, &var_38, 1)
    char rax_7
    
    if (rax_5 == 0)
        var_48 = 0
        int32_t var_40_1 = 0
        sub_1405947f0(&var_48, 6)
        int32_t rax_6 = var_40_1 + 6
        var_40_1 = rax_6
        
        if (rax_6 s> 0)
            sub_140594770(&var_48)
        
        sub_1405a7220(var_48, 6, ".jpeg", 6, 0x3f)
        r15_1 = 3
        rax_7, r8_1 = sub_140a236f0(arg2, &var_48, 1)
    
    char r14
    
    if (rax_5 != 0 || rax_7 != 0)
        r14 = 1
        
        if ((r15_1 & 2) != 0)
            goto label_14062fbfe
    else
        r14 = 0
    label_14062fbfe:
        int64_t rcx_16 = var_48
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = var_38
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    if (r14 == 0)
        var_38 = 0
        int32_t var_30_2 = 0
        sub_1405947f0(&var_38, 5)
        int32_t rax_9 = var_30_2 + 5
        var_30_2 = rax_9
        
        if (rax_9 s> 0)
            sub_140594770(&var_38)
        
        sub_1405a7220(var_38, 5, ".bmp", 5, 0x3f)
        char rax_10
        int64_t r8_2
        rax_10, r8_2 = sub_140a236f0(arg2, &var_38, 1)
        int64_t rcx_23 = var_38
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        if (rax_10 == 0)
            var_38 = 0
            int32_t var_30_3 = 0
            sub_1405947f0(&var_38, 5)
            int32_t rax_12 = var_30_3 + 5
            var_30_3 = rax_12
            
            if (rax_12 s> 0)
                sub_140594770(&var_38)
            
            sub_1405a7220(var_38, 5, ".ico", 5, 0x3f)
            char rax_13
            int64_t r8_3
            rax_13, r8_3 = sub_140a236f0(arg2, &var_38, 1)
            int64_t rcx_29 = var_38
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            if (rax_13 == 0)
                var_38 = 0
                int32_t var_30_4 = 0
                sub_1405947f0(&var_38, 5)
                int32_t rax_15 = var_30_4 + 5
                var_30_4 = rax_15
                
                if (rax_15 s> 0)
                    sub_140594770(&var_38)
                
                sub_1405a7220(var_38, 5, ".exr", 5, 0x3f)
                char rax_16
                int64_t r8_4
                rax_16, r8_4 = sub_140a236f0(arg2, &var_38, 1)
                int64_t rcx_35 = var_38
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                if (rax_16 == 0)
                    var_38 = 0
                    int32_t var_30_5 = 0
                    sub_1405947f0(&var_38, 6)
                    int32_t rax_18 = var_30_5 + 6
                    var_30_5 = rax_18
                    
                    if (rax_18 s> 0)
                        sub_140594770(&var_38)
                    
                    sub_1405a7220(var_38, 6, ".icns", 6, 0x3f)
                    char rax_19
                    int64_t r8_5
                    rax_19, r8_5 = sub_140a236f0(arg2, &var_38, 1)
                    int64_t rcx_41 = var_38
                    
                    if (rcx_41 != 0)
                        sub_140a74f90(rcx_41)
                    
                    if (rax_19 == 0)
                        *arg1 = 0
                        arg1[1] = 0
                    else
                        r8_5.b = 6
                        (*(*rax_1 + 0x40))(rax_1, arg1, r8_5)
                else
                    r8_4.b = 5
                    (*(*rax_1 + 0x40))(rax_1, arg1, r8_4)
            else
                r8_3.b = 4
                (*(*rax_1 + 0x40))(rax_1, arg1, r8_3)
        else
            r8_2.b = 3
            (*(*rax_1 + 0x40))(rax_1, arg1, r8_2)
    else
        r8_1.b = 1
        (*(*rax_1 + 0x40))(rax_1, arg1, r8_1)
else
    (*(*rax_1 + 0x40))(rax_1, arg1, 0)

int64_t rcx_43 = *arg2

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

return arg1
