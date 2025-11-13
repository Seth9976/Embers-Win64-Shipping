// 函数: sub_140a42ee0
// 地址: 0x140a42ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = 0
int32_t arg_8 = 0
void* rax = sub_140a46220()
int32_t rax_1 = *(rax + 0x30)
int32_t rcx = rax_1 - 1

if (rax_1 == 0)
    rcx = 0

if (rcx == 0)
    int16_t* var_78 = nullptr
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 0x11)
    int32_t r14_1 = var_70_1 + 0x11
    
    if (r14_1 s> 0)
        sub_140594770(&var_78)
    
    __builtin_wcscpy(var_78, u"../../../Engine/")
    sub_140b72800()
    int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
    sub_140b65060()
    
    if (r14_1 == 0)
        arg_8 = 0
    else
        arg_8 = r14_1 - 1
    
    int16_t* var_58 = nullptr
    int32_t rax_3 = 0
    int32_t var_50_1 = 0
    int16_t* rsi_1 = nullptr
    int32_t var_4c_1 = 0
    int32_t r15_1 = 0
    int64_t rdi_1 = -1
    
    if (data_143e189c0 != 0)
        int64_t rsi_2 = -1
        
        do
            rsi_2 += 1
        while ((&data_143e189c0)[rsi_2] != 0)
        
        if (rsi_2.d + 1 s> 0)
            sub_1405947f0(&var_58, rsi_2.d + 1)
            rax_3 = var_4c_1
            r15_1 = var_50_1
        
        r15_1 += rsi_2.d + 1
        
        if (r15_1 s> rax_3)
            sub_140594770(&var_58)
        
        rsi_1 = var_58
        memcpy(rsi_1, &data_143e189c0, (rsi_2.d + 1) * 2)
    
    int32_t rcx_8
    int32_t r8_3
    
    if (data_143e189c0 != 0 && r15_1 != 0)
        r8_3 = arg_8
        rcx_8 = 1
    else
        r8_3 = arg_8
        
        rcx_8 = r8_3 == 0xffffffff ? 1 : 2
    
    int32_t rdx_5 = rcx_8 + r15_1 + r8_3
    int16_t* var_68 = rsi_1
    
    if (rdx_5 s> var_4c_1)
        sub_1405947f0(&var_68, rdx_5)
    
    int32_t r8_4 = r14_1 - 1
    
    if (r14_1 == 0)
        r8_4 = 0
    
    int16_t* r15_2 = var_78
    int32_t rcx_11 = sub_140a2cf70(&var_68, r15_2, r8_4)
    int16_t* var_48 = var_68
    int32_t rdx_8 = r15_1 + sbb.d(rcx_11, rcx_11, r15_1 != 0) + 0xa
    var_68 = nullptr
    int32_t var_3c_1 = var_4c_1
    int32_t var_60_1
    var_60_1.q = 0
    
    if (rdx_8 s> var_4c_1)
        sub_1405947f0(&var_48, rdx_8)
    
    sub_140a2cf70(&var_48, u"Binaries", 8)
    int16_t* const rdx_9 = &data_142d40450
    
    if (r15_1 != 0)
        rdx_9 = var_48
    
    char rax_10 = (*(*rax_2 + 0xd8))(rax_2, rdx_9)
    int16_t* rcx_17 = var_48
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int16_t* rcx_18 = var_68
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    if (rax_10 == 0)
        int16_t* rsi_8
        
        if (data_14399e180 == 0)
            rsi_8 = var_68
            r15_2.b = 0
        else
            int64_t rax_11 = __crt_deferred_errno_cache::get(&data_143db7b00)
            wchar16 const (* r12_1)[0x38] = data_14399e180
            int16_t* rsi_5 = nullptr
            r15_2 = nullptr
            arg_8.q = rax_11
            var_68 = nullptr
            var_60_1.q = 0
            int32_t rax_12
            
            if (r12_1 != 0 && *r12_1 != 0)
                int64_t rsi_6 = -1
                
                do
                    rsi_6 += 1
                while ((*r12_1)[rsi_6] != 0)
                
                if (rsi_6.d + 1 s> 0)
                    sub_1405947f0(&var_68, rsi_6.d + 1)
                    r13 = var_4c_1
                    r15_2 = zx.q(var_60_1)
                
                r15_2 = zx.q(r15_2.d + rsi_6.d + 1)
                int32_t var_60_2 = r15_2.d
                
                if (r15_2.d s> r13)
                    sub_140594770(&var_68)
                    r13 = var_4c_1
                    r15_2 = zx.q(var_60_2)
                
                rsi_5 = var_68
                memcpy(rsi_5, r12_1, (rsi_6.d + 1) * 2)
                rax_12 = 9
            
            if (r12_1 == 0 || *r12_1 == 0 || r15_2.d == 0)
                rax_12 = 0xa
            
            var_48 = rsi_5
            int32_t rdx_15 = rax_12 + r15_2.d
            int32_t var_40_2 = r15_2.d
            int32_t var_3c_2 = r13
            rsi_8 = nullptr
            
            if (rdx_15 s> r13)
                sub_1405947f0(&var_48, rdx_15)
            
            sub_140a2cf70(&var_48, u"Binaries", 8)
            int64_t* rcx_26 = arg_8.q
            int16_t* rdx_16 = &data_142d40450
            r13 = 3
            
            if (var_40_2 != 0)
                rdx_16 = var_48
            
            if ((*(*rcx_26 + 0xd8))(rcx_26, rdx_16) == 0)
                r15_2.b = 0
            else
                r15_2.b = 1
        
        if ((r13.b & 2) != 0)
            int16_t* rcx_27 = var_48
            r13 &= 0xfffffffd
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
        
        if ((r13.b & 1) != 0 && rsi_8 != 0)
            sub_140a74f90(rsi_8)
        
        if (r15_2.b != 0)
            wchar16 const (* rsi_9)[0x38] = data_14399e180
            
            if (*(rax + 0x28) != rsi_9)
                int32_t rdi_2
                
                if (rsi_9 == 0 || *rsi_9 == 0)
                    rdi_2 = 0
                else
                    do
                        rdi_1 += 1
                    while ((*rsi_9)[rdi_1] != 0)
                    
                    rdi_2 = rdi_1.d + 1
                
                int32_t rdx_17 = 0
                *(rax + 0x30) = 0
                
                if (*(rax + 0x34) != rdi_2)
                    sub_1405947f0(rax + 0x28, rdi_2)
                    rdx_17 = *(rax + 0x30)
                
                int32_t rax_15 = rdx_17 + rdi_2
                *(rax + 0x30) = rax_15
                
                if (rax_15 s> *(rax + 0x34))
                    sub_140594770(rax + 0x28)
                
                if (rdi_2 != 0)
                    memcpy(*(rax + 0x28), rsi_9, rdi_2 * 2)
        
        r15_2 = var_78
    else if (rax + 0x28 != &var_78)
        int32_t r8_5 = *(rax + 0x34)
        *(rax + 0x30) = r14_1
        
        if (r14_1 != 0 || r8_5 != 0)
            sub_1405a4c70(rax + 0x28, r14_1, r8_5)
            memcpy(*(rax + 0x28), r15_2, r14_1 * 2)
        else
            *(rax + 0x34) = 0
    
    int32_t rax_16 = *(rax + 0x30)
    int32_t rcx_32 = rax_16 - 1
    
    if (rax_16 == 0)
        rcx_32 = 0
    
    if (rcx_32 == 0 && rax + 0x28 != &var_78)
        int32_t r8_12 = *(rax + 0x34)
        *(rax + 0x30) = r14_1
        
        if (r14_1 != 0 || r8_12 != 0)
            sub_1405a4c70(rax + 0x28, r14_1, r8_12)
            memcpy(*(rax + 0x28), r15_2, r14_1 * 2)
        else
            *(rax + 0x34) = 0
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)

if (*(rax + 0x30) == 0)
    return &data_142d40450

return *(rax + 0x28)
