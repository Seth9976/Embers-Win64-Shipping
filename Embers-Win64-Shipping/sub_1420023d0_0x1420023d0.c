// 函数: sub_1420023d0
// 地址: 0x1420023d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t r9 = 0
int32_t var_40 = 0
int64_t var_48 = 0
int32_t var_3c = 0

if (*(arg1 + 0x88) s> 0)
    int64_t* rbx_1 = *(arg1 + 0x80)
    void* rdi_3 = &rbx_1[sx.q(*(arg1 + 0x88)) * 0xc]
    int32_t r11_1
    
    if (rbx_1 == rdi_3)
        r11_1 = 0
    else
        do
            int32_t rax_2 = rbx_1[1].d
            int32_t r8_1 = rax_2 - 1
            
            if (rax_2 == 0)
                r8_1 = 0
            
            sub_140a20ba0(&var_48, *rbx_1, r8_1)
            sub_140a20ba0(&var_48, &data_142d7fa60, 1)
            rbx_1 = &rbx_1[0xc]
        while (rbx_1 != rdi_3)
        
        rdx = var_40
        r9 = var_48
        r11_1 = rdx - 1
        
        if (rdx == 0)
            r11_1 = 0
    
    int32_t r10_1 = rdx - 1
    
    if (rdx == 0)
        r10_1 = 0
    
    int32_t rcx_3 = r10_1 - (r11_1 - 1)
    int32_t rbx_2 = rcx_3
    
    if (rcx_3 s> 1)
        rbx_2 = 1
    
    if (rbx_2 != 0)
        int32_t rax_4 = rdx - rbx_2
        
        if (rax_4 != r11_1 - 1)
            if (rcx_3 s> 1)
                r10_1 = r11_1
            
            memmove(r9 + (sx.q(r11_1 - 1) << 1), r9 + (sx.q(r10_1) << 1), (rax_4 - (r11_1 - 1)) * 2)
            rdx = var_40
        
        int32_t var_40_1 = rdx - rbx_2
        sub_1405a50a0(&var_48)

int32_t rbx_3 = (data_143f3f0a8.q).d
int64_t rdi_5 = data_143f3f0a0
uint64_t var_38 = 0
int32_t var_30 = rbx_3
int32_t var_2c

if (rbx_3 != 0)
    sub_1405a4c70(&var_38, rbx_3, 0)
    memcpy(var_38, rdi_5, rbx_3 * 2)
else
    var_2c = 0

int64_t var_28
sub_142006bd0(arg1, &var_28, &var_38)
var_38 = 0
var_30.q = 0
sub_1405947f0(&var_38, 0xc)
int32_t var_30_1 = var_30 + 0xc

if (var_30 + 0xc s> var_2c)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"SessionList", 0x18)
sub_140b729b0(&data_143f3f020, &var_28, &var_38, &var_48)
uint64_t rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t result = sub_142002340(arg1 + 0x80, 0)
int64_t rcx_14 = var_28

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_48

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
