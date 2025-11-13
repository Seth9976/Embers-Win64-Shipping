// 函数: sub_140a222e0
// 地址: 0x140a222e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx = &data_142d40450
int16_t* var_28

if (arg2[1].d s> 0)
    var_28 = nullptr
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 7)
    int32_t rdi_1 = var_20_1 + 7
    
    if (rdi_1 s> 0)
        sub_140594770(&var_28)
    
    int16_t* rsi_1 = var_28
    UnDecorator::getReferenceType(rsi_1, u"Normal", 0xe)
    int64_t* rcx_3 = *arg2
    int16_t* const rdx_1 = &data_142d40450
    
    if (rdi_1 != 0)
        rdx_1 = rsi_1
    
    int16_t* const rcx_4
    
    if (rcx_3[1].d == 0)
        rcx_4 = &data_142d40450
    else
        rcx_4 = *rcx_3
    
    rdi_1.b = sub_140a54510(rcx_4, rdx_1) == 0
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rdi_1.b == 0)
        var_28 = nullptr
        int32_t var_20_2 = 0
        sub_1405947f0(&var_28, 5)
        int32_t rdi_2 = var_20_2 + 5
        
        if (rdi_2 s> 0)
            sub_140594770(&var_28)
        
        int16_t* rsi_2 = var_28
        UnDecorator::getReferenceType(rsi_2, u"High", 0xa)
        int64_t* rcx_9 = *arg2
        int16_t* rdx_3 = &data_142d40450
        
        if (rdi_2 != 0)
            rdx_3 = rsi_2
        
        int16_t* const rcx_10
        
        if (rcx_9[1].d == 0)
            rcx_10 = &data_142d40450
        else
            rcx_10 = *rcx_9
        
        rdi_2.b = sub_140a54510(rcx_10, rdx_3) == 0
        
        if (rsi_2 != 0)
            sub_140a74f90(rsi_2)
        
        if (rdi_2.b == 0)
            var_28 = nullptr
            int32_t var_20_3 = 0
            sub_1405947f0(&var_28, 0xb)
            int32_t rdi_3 = var_20_3 + 0xb
            
            if (rdi_3 s> 0)
                sub_140594770(&var_28)
            
            int16_t* rsi_3 = var_28
            UnDecorator::getReferenceType(rsi_3, u"Background", 0x16)
            int64_t* rcx_15 = *arg2
            int16_t* rdx_5 = &data_142d40450
            
            if (rdi_3 != 0)
                rdx_5 = rsi_3
            
            int16_t* const rcx_16
            
            if (rcx_15[1].d == 0)
                rcx_16 = &data_142d40450
            else
                rcx_16 = *rcx_15
            
            rdi_3.b = sub_140a54510(rcx_16, rdx_5) == 0
            
            if (rsi_3 != 0)
                sub_140a74f90(rsi_3)
            
            if (rdi_3.b != 0)
                *(arg1 + 0x20) = 0x800
        else
            *(arg1 + 0x20) = 0x400
    else
        *(arg1 + 0x20) = 0

if (arg2[1].d s> 1)
    var_28 = nullptr
    int32_t var_20_4 = 0
    sub_1405947f0(&var_28, 7)
    int32_t rdi_4 = var_20_4 + 7
    
    if (rdi_4 s> 0)
        sub_140594770(&var_28)
    
    int16_t* rsi_4 = var_28
    UnDecorator::getReferenceType(rsi_4, u"Normal", 0xe)
    void* rcx_21 = *arg2
    int16_t* const rdx_7 = &data_142d40450
    
    if (rdi_4 != 0)
        rdx_7 = rsi_4
    
    int16_t* const rcx_22
    
    if (*(rcx_21 + 0x18) == 0)
        rcx_22 = &data_142d40450
    else
        rcx_22 = *(rcx_21 + 0x10)
    
    rdi_4.b = sub_140a54510(rcx_22, rdx_7) == 0
    
    if (rsi_4 != 0)
        sub_140a74f90(rsi_4)
    
    if (rdi_4.b == 0)
        var_28 = nullptr
        int32_t var_20_5 = 0
        sub_1405947f0(&var_28, 5)
        int32_t rdi_5 = var_20_5 + 5
        
        if (rdi_5 s> 0)
            sub_140594770(&var_28)
        
        int16_t* rsi_5 = var_28
        UnDecorator::getReferenceType(rsi_5, u"High", 0xa)
        void* rcx_27 = *arg2
        int16_t* rdx_9 = &data_142d40450
        
        if (rdi_5 != 0)
            rdx_9 = rsi_5
        
        int16_t* const rcx_28
        
        if (*(rcx_27 + 0x18) == 0)
            rcx_28 = &data_142d40450
        else
            rcx_28 = *(rcx_27 + 0x10)
        
        rdi_5.b = sub_140a54510(rcx_28, rdx_9) == 0
        
        if (rsi_5 != 0)
            sub_140a74f90(rsi_5)
        
        if (rdi_5.b != 0)
            *(arg1 + 0x24) = 0x200
    else
        *(arg1 + 0x24) = 0

if (arg2[1].d s<= 2)
    return 

var_28 = nullptr
int32_t var_20_6 = 0
sub_1405947f0(&var_28, 7)
int32_t rdi_6 = var_20_6 + 7

if (rdi_6 s> 0)
    sub_140594770(&var_28)

int16_t* rsi_6 = var_28
UnDecorator::getReferenceType(rsi_6, u"Normal", 0xe)
void* rcx_33 = *arg2
int16_t* const rdx_11 = &data_142d40450

if (rdi_6 != 0)
    rdx_11 = rsi_6

int16_t* const rcx_34

if (*(rcx_33 + 0x28) == 0)
    rcx_34 = &data_142d40450
else
    rcx_34 = *(rcx_33 + 0x20)

rdi_6.b = sub_140a54510(rcx_34, rdx_11) == 0

if (rsi_6 != 0)
    sub_140a74f90(rsi_6)

if (rdi_6.b != 0)
    *(arg1 + 0x28) = 0
    return 

var_28 = nullptr
int32_t var_20_7 = 0
sub_1405947f0(&var_28, 5)
int32_t rsi_7 = var_20_7 + 5

if (rsi_7 s> 0)
    sub_140594770(&var_28)

int16_t* rdi_7 = var_28
UnDecorator::getReferenceType(rdi_7, u"High", 0xa)
void* rax_1 = *arg2
int16_t* rdx_13 = &data_142d40450

if (rsi_7 != 0)
    rdx_13 = rdi_7

if (*(rax_1 + 0x28) != 0)
    rbx = *(rax_1 + 0x20)

rbx.b = sub_140a54510(rbx, rdx_13) == 0

if (rdi_7 != 0)
    sub_140a74f90(rdi_7)

if (rbx.b != 0)
    *(arg1 + 0x28) = 0x200
