// 函数: sub_1419d3ee0
// 地址: 0x1419d3ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_18 = rdi
int32_t rsi = 0
void* rcx = data_143ddb400
uint64_t r12
r12.b = 0
int32_t arg_10 = 0
uint64_t rbx = -1
int16_t* var_48

if (rcx != 0)
    bool cond:1_1 = data_143de5848 != 0
    int32_t rdx_1 = 0
    int32_t r8_1 = 0
    int16_t* const r15_1 = &data_142d40450
    int16_t* const r14_1 = &data_142d40450
    uint64_t var_38 = 0
    
    if (cond:1_1)
        r14_1 = data_143de5840
    
    int32_t var_30_1 = 0
    var_48 = nullptr
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    
    if (r14_1 != 0 && *r14_1 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (r14_1[rdi_1] != 0)
        
        rdi = zx.q(rdi_1.d + 1)
        
        if (rdi.d s> 0)
            sub_1405947f0(&var_48, rdi.d)
            r8_1 = var_3c_1
            rdx_1 = var_40_1
        
        int32_t rax_1 = rdi.d + rdx_1
        int32_t var_40_2 = rax_1
        
        if (rax_1 s> r8_1)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, r14_1, rdi.d * 2)
        rcx = data_143ddb400
    
    char r14_2 = 1
    int16_t* var_58
    
    if (sub_140af5b90(rcx, data_1439c9720, data_1439c9728, &var_38, &var_48) == 0)
        bool cond:2_1 = data_143de5838 != 0
        int32_t rdx_5 = 0
        int32_t rcx_4 = 0
        var_58 = nullptr
        
        if (cond:2_1)
            r15_1 = data_143de5830
        
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        
        if (r15_1 != 0 && *r15_1 != 0)
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (r15_1[rdi_2] != 0)
            
            rdi = zx.q(rdi_2.d + 1)
            
            if (rdi.d s> 0)
                sub_1405947f0(&var_58, rdi.d)
                rcx_4 = var_4c_1
                rdx_5 = var_50_1
            
            int32_t rax_3 = rdi.d + rdx_5
            int32_t var_50_2 = rax_3
            
            if (rax_3 s> rcx_4)
                sub_140594770(&var_58)
            
            UnDecorator::getReferenceType(var_58, r15_1, rdi.d * 2)
        
        r14_2 = 3
        
        if (sub_140af5b90(data_143ddb400, data_1439c9720, data_1439c9728, &var_38, &var_58) == 0
                || var_30_1 == 0 || var_30_1 == 1)
            rdi.b = 0
        else
            rdi.b = 1
    else if (var_30_1 == 0 || var_30_1 == 1)
        rdi.b = 0
    else
        rdi.b = 1
    
    if ((r14_2 & 2) != 0)
        int16_t* rcx_9 = var_58
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    
    int16_t* rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    if (rdi.b != 0)
        void* rcx_11 = data_143f1da40
        
        if (rcx_11 == 0)
            r12.b = 0
        else
            r12 = zx.q(sub_1419d35b0(rcx_11, &var_38, arg1))
    
    uint64_t rcx_12 = var_38
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    if (r12.b != 0)
        return zx.q(r12.b)

int32_t rcx_13 = 0
int32_t var_3c_2 = 0
var_48 = nullptr
int32_t var_40_3 = 0

if ((*u"Embers")[0] != 0)
    do
        rbx += 1
    while ((*u"Embers")[rbx] != 0)
    
    rbx = zx.q(rbx.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_48, rbx.d)
        rcx_13 = var_3c_2
        rsi = var_40_3
    
    int32_t rax_9 = rbx.d + rsi
    int32_t var_40_4 = rax_9
    
    if (rax_9 s> rcx_13)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"Embers", rbx.d * 2)

void* rcx_17 = data_143f1da40

if (rcx_17 == 0)
    rbx.b = 0
else
    rbx = zx.q(sub_1419d35b0(rcx_17, &var_48, arg1))

int16_t* rcx_18 = var_48

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return zx.q(rbx.b)
