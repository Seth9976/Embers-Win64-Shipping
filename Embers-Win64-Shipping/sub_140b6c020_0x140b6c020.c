// 函数: sub_140b6c020
// 地址: 0x140b6c020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
int64_t* var_38 = nullptr
int32_t i_4 = 0
sub_140af2c50(data_143ddb400, data_1439a9628, u"RemoteStorage", &var_38, &data_143de57d0)
int32_t i_2 = i_4
int64_t* rdi_1

if (i_2 s<= 0)
    rdi_1 = var_38
    *result = 0
    result[1] = 0
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_10 = *rdi_1
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rdi_1 = &rdi_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rdi_1 = var_38
else
    int32_t rcx_1 = 0
    int32_t rdx_1 = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int64_t r12_1 = 0
    int64_t var_48 = 0
    int32_t r15_1 = 0
    int64_t rdi = 0
    int32_t i_3
    
    do
        if (rdi s> 0)
            int32_t rbx = rcx_1 - 1
            
            if (rcx_1 s<= 0)
                rbx = 0
            
            int32_t rax_1
            rax_1.b = rcx_1 s<= 0
            int32_t rax_3 = rax_1 + 1 + rcx_1
            var_40_1 = rax_3
            
            if (rax_3 s> rdx_1)
                sub_140594770(&var_48)
            
            int64_t rcx_3 = sx.q(rbx)
            *(var_48 + (rcx_3 << 1)) = 0x3b
            *(var_48 + (rcx_3 << 1) + 2) = 0
        
        sub_140a20ba0(&var_48, u"SRV*", 4)
        int32_t rax_6 = arg2[1].d
        int32_t r8_1 = rax_6 - 1
        
        if (rax_6 == 0)
            r8_1 = 0
        
        sub_140a20ba0(&var_48, *arg2, r8_1)
        int32_t rbx_1 = var_40_1 - 1
        
        if (var_40_1 s<= 0)
            rbx_1 = 0
        
        int32_t rax_7
        rax_7.b = var_40_1 s<= 0
        int32_t rax_9 = rax_7 + 1 + var_40_1
        var_40_1 = rax_9
        
        if (rax_9 s> var_3c_1)
            sub_140594770(&var_48)
        
        int64_t rcx_7 = sx.q(rbx_1)
        *(var_48 + (rcx_7 << 1)) = 0x2a
        *(var_48 + (rcx_7 << 1) + 2) = 0
        int64_t* rdx_5 = var_38
        int32_t rax_12 = *(rdx_5 + r12_1 + 8)
        int32_t r8_2 = rax_12 - 1
        
        if (rax_12 == 0)
            r8_2 = 0
        
        sub_140a20ba0(&var_48, *(rdx_5 + r12_1), r8_2)
        i_3 = i_4
        r15_1 += 1
        rdx_1 = var_3c_1
        rdi += 1
        rcx_1 = var_40_1
        r12_1 += 0x10
    while (r15_1 s< i_3)
    
    result = arg1
    rdi_1 = var_38
    *result = var_48
    result[1].d = rcx_1
    *(result + 0xc) = rdx_1
    var_48 = 0
    var_40_1.q = 0
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_9 = *rdi_1
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rdi_1 = &rdi_1[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rdi_1 = var_38

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

return result
