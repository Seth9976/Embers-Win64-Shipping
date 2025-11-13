// 函数: sub_1409716f0
// 地址: 0x1409716f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0)
    int64_t rax
    rax.b = 4
    return rax

int16_t* var_28 = nullptr
int32_t var_20 = 0
sub_1405947f0(&var_28, 0x1f)
int32_t rdi = var_20 + 0x1f

if (rdi s> 0)
    sub_140594770(&var_28)

int16_t* rsi = var_28
UnDecorator::getReferenceType(rsi, u"com.epicgames.purchase.failure", 0x3e)
int16_t* const rbx = &data_142d40450
int16_t* const rcx_3 = &data_142d40450

if (rdi != 0)
    rcx_3 = rsi

int16_t* rax_1

if (*(arg2 + 0x20) == 0)
    rax_1 = &data_142d40450
else
    rax_1 = *(arg2 + 0x18)

void* rcx_4 = rcx_3 - rax_1
uint32_t i
uint32_t rdi_1

do
    rdi_1 = zx.d(*rax_1)
    i = zx.d(*(rax_1 + rcx_4))
    
    if (rdi_1 != i)
        break
    
    rax_1 = &rax_1[1]
while (i != 0)

if (rsi != 0)
    sub_140a74f90(rsi)

if (rdi_1 - i == 0)
    rax_1.b = 1
else
    var_28 = nullptr
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 0x2c)
    int32_t rdi_3 = var_20_1 + 0x2c
    
    if (rdi_3 s> 0)
        sub_140594770(&var_28)
    
    int16_t* rsi_1 = var_28
    UnDecorator::getReferenceType(rsi_1, u"com.epicgames.catalog_helper.user_cancelled", 0x58)
    int16_t* const rcx_9 = &data_142d40450
    
    if (rdi_3 != 0)
        rcx_9 = rsi_1
    
    if (*(arg2 + 0x20) == 0)
        rax_1 = &data_142d40450
    else
        rax_1 = *(arg2 + 0x18)
    
    int64_t rcx_10 = rcx_9 - rax_1
    uint32_t i_1
    uint32_t rdi_4
    
    do
        rdi_4 = zx.d(*rax_1)
        i_1 = zx.d(*(rax_1 + rcx_10))
        
        if (rdi_4 != i_1)
            break
        
        rax_1 = &rax_1[1]
    while (i_1 != 0)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rdi_4 - i_1 != 0)
        var_28 = nullptr
        int32_t var_20_2 = 0
        sub_1405947f0(&var_28, 0x20)
        int32_t rdi_6 = var_20_2 + 0x20
        
        if (rdi_6 s> 0)
            sub_140594770(&var_28)
        
        int16_t* rsi_2 = var_28
        UnDecorator::getReferenceType(rsi_2, u"com.epicgames.purchase.deferred", 0x40)
        int16_t* rcx_15 = &data_142d40450
        
        if (rdi_6 != 0)
            rcx_15 = rsi_2
        
        if (*(arg2 + 0x20) == 0)
            rax_1 = &data_142d40450
        else
            rax_1 = *(arg2 + 0x18)
        
        void* rcx_16 = rcx_15 - rax_1
        uint32_t i_2
        uint32_t rdi_7
        
        do
            rdi_7 = zx.d(*rax_1)
            i_2 = zx.d(*(rax_1 + rcx_16))
            
            if (rdi_7 != i_2)
                break
            
            rax_1 = &rax_1[1]
        while (i_2 != 0)
        
        if (rsi_2 != 0)
            sub_140a74f90(rsi_2)
        
        if (rdi_7 - i_2 != 0)
            var_28 = nullptr
            int32_t var_20_3 = 0
            sub_1405947f0(&var_28, 0x1f)
            int32_t rdi_9 = var_20_3 + 0x1f
            
            if (rdi_9 s> 0)
                sub_140594770(&var_28)
            
            int16_t* rsi_3 = var_28
            UnDecorator::getReferenceType(rsi_3, u"com.epicgames.purchase.invalid", 0x3e)
            int16_t* rcx_21 = &data_142d40450
            
            if (rdi_9 != 0)
                rcx_21 = rsi_3
            
            if (*(arg2 + 0x20) != 0)
                rbx = *(arg2 + 0x18)
            
            int64_t rcx_22 = rcx_21 - rbx
            uint32_t rdi_10
            
            do
                rdi_10 = zx.d(*rbx)
                rax_1 = zx.q(*(rbx + rcx_22))
                
                if (rdi_10 != rax_1.d)
                    break
                
                rbx = &rbx[1]
            while (rax_1.d != 0)
            
            if (rsi_3 != 0)
                sub_140a74f90(rsi_3)
            
            if (rdi_10 - rax_1.d != 0)
                rax_1.b = 1
            else
                rax_1.b = 0
        else
            rax_1.b = 2
    else
        rax_1.b = 3

return rax_1
