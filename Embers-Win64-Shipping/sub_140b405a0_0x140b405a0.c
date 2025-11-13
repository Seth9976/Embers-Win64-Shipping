// 函数: sub_140b405a0
// 地址: 0x140b405a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_28 = 0
int32_t rdx = 0
int64_t var_20 = 0
int32_t rcx = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rdi_1.d + 1)
        rcx = var_20:4.d
        rdx = var_20.d
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    var_20.d = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, arg2, (rdi_1.d + 1) * 2)

int16_t* var_18
sub_140b18720(&var_18, &var_28, 1)

if (*(arg1 + 0x55) == 0 && sub_140aefc40(data_143ddb400, &data_143de5780) != 0)
    sub_140af2c50(data_143ddb400, RemoteConfiguration", IniToLoad", arg1 + 0x58, &data_143de5780)
    *(arg1 + 0x55) = 1
    sub_140af2fd0(data_143ddb400, u"RemoteConfiguration", u"Enabled", arg1 + 0x54, &data_143de5780)

if (*(arg1 + 0x54) != 0)
    if (*(arg1 + 0x60) s<= 0)
    label_140b406fe:
        rbx.b = 0
    else
        int64_t* rdi_3 = nullptr
        
        while (true)
            int64_t rax_3 = *(arg1 + 0x58)
            int16_t* rdx_4
            
            if (*(rdi_3 + rax_3 + 8) == 0)
                rdx_4 = &data_142d40450
            else
                rdx_4 = *(rdi_3 + rax_3)
            
            int16_t* const rcx_8 = &data_142d40450
            int32_t var_10
            
            if (var_10 != 0)
                rcx_8 = var_18
            
            if (sub_140a54510(rcx_8, rdx_4) == 0)
                rbx.b = 1
                break
            
            rbx += 1
            rdi_3 = &rdi_3[2]
            
            if (rbx s>= *(arg1 + 0x60))
                goto label_140b406fe

int16_t* rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = var_28

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return zx.q(rbx.b)
