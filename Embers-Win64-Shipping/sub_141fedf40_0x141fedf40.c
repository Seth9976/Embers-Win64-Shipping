// 函数: sub_141fedf40
// 地址: 0x141fedf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = 1
int64_t* var_68 = nullptr
sub_1405a4f90(&var_68)
int64_t* r15 = var_68
int64_t* result = sub_140596d10(r15, arg1)
int32_t i = arg2[1].d
int64_t rbx_1 = *arg2
uint64_t var_78 = 0
int32_t i_2 = i
int32_t var_6c

if (i != 0)
    sub_1405a4c70(&var_78, i, 0)
    result = memcpy(var_78, rbx_1, i * 2)
    i = i_2
else
    var_6c = 0

int32_t i_4 = var_60.d

for (; i s> 1; i = i_2)
    int16_t* rbx_2 = nullptr
    uint64_t rdi_1 = var_78
    int32_t i_3 = i
    uint64_t var_58 = 0
    
    if (i != 0)
        sub_1405a4c70(&var_58, i, 0)
        rbx_2 = var_58
        memcpy(rbx_2, rdi_1, i * 2)
        i_3 = i
        i = i_2
    else
        int32_t var_4c_1 = 0
    
    int64_t* r9_1 = r15
    void* r10_3 = &r15[sx.q(i_4) * 2]
    
    if (r15 != r10_3)
        do
            int16_t* const r8_4 = &data_142d40450
            
            if (i_3 != 0)
                r8_4 = rbx_2
            
            void* rax
            
            if (r9_1[1].d == 0)
                rax = &data_142d40450
            else
                rax = *r9_1
            
            void* r8_5 = r8_4 - rax
            uint32_t j
            uint32_t rdx_6
            
            do
                rdx_6 = zx.d(*rax)
                j = zx.d(*(rax + r8_5))
                
                if (rdx_6 != j)
                    break
                
                rax += 2
            while (j != 0)
            
            if (rdx_6 - j == 0)
                if (rbx_2 != 0)
                    sub_140a74f90(rbx_2)
                    i = i_2
                
                int16_t* const rax_1 = &data_142d40450
                
                if (i != 0)
                    rax_1 = var_78
                
                int16_t* const r9_2
                
                if (arg1[1].d == 0)
                    r9_2 = &data_142d40450
                else
                    r9_2 = *arg1
                
                int16_t* const var_88_1 = rax_1
                sub_140af98a0("Unknown", 0x176, Device Profile %s has a circular dependency on %s", 
                    r9_2)
                result = sub_140afbb40()
                goto label_141fee1fc
            
            r9_1 = &r9_1[2]
        while (r9_1 != r10_3)
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    int64_t i_5 = sx.q(i_4)
    i_4 = (i_5 + 1).d
    var_60.d = i_4
    
    if (i_4 s> var_60:4.d)
        sub_1405a4f90(&var_68)
        i_4 = var_60.d
        r15 = var_68
    
    void* rbx_4 = &r15[i_5 * 2]
    *rbx_4 = 0
    uint64_t rsi = var_78
    *(rbx_4 + 8) = i_2
    
    if (i_2 != 0)
        sub_1405a4c70(rbx_4, i_2, 0)
        memcpy(*rbx_4, rsi, i_2 * 2)
    else
        *(rbx_4 + 0xc) = 0
    
    int64_t arg_10 = *(sub_14249a9d0() + 0x18)
    int64_t var_48
    sub_140b63b70(&arg_10, &var_48)
    int16_t* const r8_8 = &data_142d40450
    
    if (i_2 != 0)
        r8_8 = var_78
    
    int16_t* var_38
    sub_140a2e390(&var_38, u"%s %s", r8_8)
    int64_t rcx_14 = var_48
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    i_2 = 0
    
    if (var_6c s< 0 && var_6c != 0)
        sub_1405947f0(&var_78, 0)
    
    uint64_t rax_4 = var_78
    
    if (rax_4 != 0)
        *rax_4 = 0
    
    int16_t* rdx_12 = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        rdx_12 = var_38
    
    result = sub_140af5d90(arg3, rdx_12, u"BaseProfileName", &var_78)
    int16_t* rcx_17 = var_38
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)
    
label_141fee1fc:

uint64_t rcx_18 = var_78

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t* rbx_5 = r15

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_19 = *rbx_5
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        rbx_5 = &rbx_5[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
