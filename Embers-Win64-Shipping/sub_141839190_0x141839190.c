// 函数: sub_141839190
// 地址: 0x141839190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr
int64_t var_30 = 0
int32_t result = sub_140af2c50(data_143ddb400, Portal.BuildPatch", InstalledPrereqs"
    , &var_38, &data_143de5780)

if (result != 0 && var_30.d s> 0)
    void* rcx_1 = data_143ddb400
    int64_t r15
    r15.b = 0
    int64_t* var_48 = nullptr
    int64_t var_40_1 = 0
    
    if (sub_140af2c50(rcx_1, Portal.BuildPatch", InstalledPrereqs", &var_48, arg1 + 8)
            == 0 || var_40_1.d s<= 0)
        int32_t i_3 = var_40_1.d
        int64_t* rbx_4 = var_48
        
        if (i_3 != 0)
            int32_t i
            
            do
                int64_t rcx_7 = *rbx_4
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                rbx_4 = &rbx_4[2]
                i = i_3
                i_3 -= 1
            while (i != 1)
            rbx_4 = var_48
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        var_48 = var_38
        __builtin_memset(&var_40_1, 0, 0x18)
        sub_140b002f0(data_143ddb400, u"Portal.BuildPatch", u"InstalledPrereqs", &var_48, arg1 + 8)
    else
        int64_t* rdi_1 = var_38
        void* r13_3 = &rdi_1[sx.q(var_30.d) * 2]
        
        if (rdi_1 != r13_3)
            do
                int64_t* r14_1 = var_48
                int64_t r12_1 = sx.q(var_40_1.d)
                void* rsi_3 = &r14_1[r12_1 * 2]
                int64_t rbx_3
                
                if (r14_1 != rsi_3)
                    int64_t* rbx_1 = r14_1
                    
                    while (true)
                        int16_t* rdx_1
                        
                        if (rdi_1[1].d == 0)
                            rdx_1 = &data_142d40450
                        else
                            rdx_1 = *rdi_1
                        
                        int16_t* const rcx_2
                        
                        if (rbx_1[1].d == 0)
                            rcx_2 = &data_142d40450
                        else
                            rcx_2 = *rbx_1
                        
                        if (sub_140a54510(rcx_2, rdx_1) == 0)
                            break
                        
                        rbx_1 = &rbx_1[2]
                        
                        if (rbx_1 == rsi_3)
                            goto label_1418392c4
                    
                    rbx_3 = (rbx_1 - r14_1) s>> 4
                
                if (r14_1 == rsi_3 || rbx_3.d == 0xffffffff)
                label_1418392c4:
                    rbx_3 = sx.q(var_40_1.d)
                    int32_t rax_3 = (rbx_3 + 1).d
                    var_40_1.d = rax_3
                    
                    if (rax_3 s> var_40_1:4.d)
                        sub_1405a4f90(&var_48)
                    
                    sub_140596d10(&var_48[rbx_3 * 2], rdi_1)
                
                if (r15.b != 0 || rbx_3.d s>= r12_1.d)
                    r15.b = 1
                
                rdi_1 = &rdi_1[2]
            while (rdi_1 != r13_3)
            
            if (r15.b != 0)
                sub_140b002f0(data_143ddb400, Portal.BuildPatch", InstalledPrereqs", &var_48, 
                    arg1 + 8)
    
    result = sub_140afec10(data_143ddb400, Portal.BuildPatch", InstalledPrereqs", &data_143de5780)
    int32_t i_4 = var_40_1.d
    int64_t* rbx_5 = var_48
    
    if (i_4 != 0)
        int32_t i_1
        
        do
            int64_t rcx_11 = *rbx_5
            
            if (rcx_11 != 0)
                result = sub_140a74f90(rcx_11)
            
            rbx_5 = &rbx_5[2]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        rbx_5 = var_48
    
    if (rbx_5 != 0)
        result = sub_140a74f90(rbx_5)

int32_t i_5 = var_30.d
int64_t* rbx_6 = var_38

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_13 = *rbx_6
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        rbx_6 = &rbx_6[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_6 = var_38

if (rbx_6 == 0)
    return result

return sub_140a74f90(rbx_6)
