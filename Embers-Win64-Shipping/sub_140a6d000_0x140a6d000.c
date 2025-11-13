// 函数: sub_140a6d000
// 地址: 0x140a6d000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd8) != 0)
    return 

void* rax = data_143ddb400

if (rax == 0 || *(rax + 0x59) == 0)
    return 

*(arg1 + 0xd8) = 1
int64_t* i_1
sub_140a818c0(&i_1, u"CultureMappings")
int32_t var_50
int32_t rbx_1 = var_50

if (rbx_1 s> *(arg1 + 0xe8) - *(arg1 + 0x114))
    sub_1406a4c70(arg1 + 0xe0, rbx_1)
    int32_t rax_5
    
    if (rbx_1 u< 4)
        rax_5 = 1
    else
        uint32_t rbx_2 = rbx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
        int32_t rcx_2
        
        if (rbx_2 == 0xfffffff8)
            rcx_2 = 0x20
        else
            rcx_2 = 0x1f - temp0_2
        
        int32_t rcx_4 = rcx_2 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        
        if (rcx_4 == 0)
            rax_5 = 1
        else
            rax_5 = 1 << ((not.d(rcx_4)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_7 = *(arg1 + 0x128)
    
    if (rcx_7 == 0 || rcx_7 s< rax_5)
        *(arg1 + 0x128) = rax_5
        sub_1405d3260(arg1 + 0xe0)
    
    rbx_1 = var_50

for (int64_t* i = i_1; i != &i[sx.q(rbx_1) * 2]; i = &i[2])
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int64_t var_68
    sub_1405947f0(&var_68, 2)
    int32_t var_60_1
    int32_t rax_6 = var_60_1 + 2
    var_60_1 = rax_6
    int32_t var_5c
    
    if (rax_6 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t rbx_4 = var_68
    UnDecorator::getReferenceType(rbx_4, &data_142e5e360, 4)
    int64_t var_78
    char rax_7 = sub_14060a620(i, &var_68, &var_78, &var_88, 0, 0)
    
    if (rbx_4 != 0)
        int64_t* rcx_13 = data_143ddb3f0
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x30))(rcx_13, rbx_4)
        else
            sub_140a750a0()
            int64_t* rcx_14 = data_143ddb3f0
            int64_t r8_4 = *rcx_14
            (*(r8_4 + 0x30))(rcx_14, rbx_4, r8_4)
    
    int32_t* rax_9
    void arg_8
    
    if (rax_7 != 0)
        rax_9 = sub_14062d5f0(arg1 + 0x38, &arg_8, &var_88)
    
    if (rax_7 == 0 || *rax_9 == 0xffffffff)
        int64_t rbx_6 = var_88
        
        if (rbx_6 != 0)
            int64_t* rcx_20 = data_143ddb3f0
            
            if (rcx_20 == 0)
                sub_140a750a0()
                rcx_20 = data_143ddb3f0
            
            (*(*rcx_20 + 0x30))(rcx_20, rbx_6)
        
        int64_t rbx_7 = var_78
        
        if (rbx_7 != 0)
            int64_t* rcx_21 = data_143ddb3f0
            
            if (rcx_21 == 0)
                sub_140a750a0()
                rcx_21 = data_143ddb3f0
            
            (*(*rcx_21 + 0x30))(rcx_21, rbx_7)
    else
        int32_t var_48
        sub_1405d1820(arg1 + 0xe0, &var_48)
        int64_t* var_40
        *var_40 = var_78
        int64_t var_70
        var_40[1].d = var_70.d
        *(var_40 + 0xc) = var_70:4.d
        var_40[2] = var_88
        int64_t var_80
        var_40[3].d = var_80.d
        *(var_40 + 0x1c) = var_80:4.d
        var_40[4].d = 0xffffffff
        int32_t rax_16 = var_40[1].d
        __builtin_memset(&var_88, 0, 0x20)
        int16_t* rdx_9
        
        if (rax_16 == 0)
            rdx_9 = &data_142d40450
        else
            rdx_9 = *var_40
        
        int32_t rcx_17 = rax_16 - 1
        
        if (rax_16 == 0)
            rcx_17 = 0
        
        void arg_10
        sub_1405d2a60(arg1 + 0xe0, &arg_10, sub_1405969c0(rcx_17, rdx_9), var_40, var_48, nullptr)

if (sub_140a6c030(arg1 + 0xe0) != 0)
    sub_1405d3260(arg1 + 0xe0)

sub_140597000(&i_1)
